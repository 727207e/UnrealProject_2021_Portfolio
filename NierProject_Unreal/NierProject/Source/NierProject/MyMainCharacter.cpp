//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, "Enemy : Im hit!");

// Fill out your copyright notice in the Description page of Project Settings.

#include "MyMainCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Weapon.h"
#include "Enemy.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Math/Vector.h"
#include "Components/MeshComponent.h"
#include "AvoidAfterImage.h"
#include "Drone.h"
#include "MainCharAnimInstance.h"
#include "MainPlayerController.h"
#include "NPCParentScripts.h"
#include "Components/ChildActorComponent.h"
#include "Components/WidgetComponent.h"

#include "MainCharacterWeaponMovement.h"

//////////////////////////////////////////////////////////////////////////
// ANierProjectCharacter

AMyMainCharacter::AMyMainCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// CameraBoom point ??????
	FollowCameraEndPoint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FollowCameraEndPoint"));
	FollowCameraEndPoint->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation


	MovementStatus = EMovementStatus::EMS_Normal;

	RunningSpeed = 300.f;
	SprintingSpeed = 950.f;

	GetCharacterMovement()->MaxWalkSpeed = RunningSpeed;

	/********************  Class LifeEntity ??????  */
	LifeEntityinitialize();

	Health = 75.f;
	MaxHealth = 100.f;
	Damage = 0.f; // ???????????? ????????? ??????.

	//theTarget_Position = FVector.ZeroVector;

	//////////////////////?????? ????????? ????????? ??????
	MaterialOrigin = CreateDefaultSubobject<UMaterial>(TEXT("M_Origin"));
	MaterialHit = CreateDefaultSubobject<UMaterial>(TEXT("M_Hit"));

	//????????? ??????(Construct)
	//AttackMotion = NewObject<AMainCharacterWeaponMovement>();

	MovementClass = CreateDefaultSubobject<UChildActorComponent>(TEXT("MainCharacterWeaponMovement"));
	MovementClass->SetupAttachment(GetMesh());
	MovementClass->CreateChildActor();

	LockOnTargetCheckComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("LockOnTargetCheck"));
	LockOnTargetCheckComponent->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void AMyMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	EquipWeapon();
	EquipDrone();

	//Controller ????????????
	MainPlayerController = Cast<AMainPlayerController>(GetController());
	
	//?????? ????????? ?????? ?????????
	AttackMotion = Cast<AMainCharacterWeaponMovement>(MovementClass->GetChildActor());
}

// Called every frame
void AMyMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//LockOn??? ??? ??????
	if (theTarget != nullptr)
	{
		LookattheLockOnTarget(DeltaTime);

		//????????? ???????????? ???????????? ??????(?????? ????????? x)
		if(MovementStatus == EMovementStatus::EMS_Attacking && 
			!AttackMotion->GetNowNextComboOnOffTrigger() &&
			AttackMotion->GetNowAttackCount() == 0)
		{
			SetActorRotation(AttackMotion->LookAtTargetWhenAttacking(DeltaTime, 
														theTarget->GetActorLocation(),
														GetActorLocation(),
														GetActorRotation()));
		}//
	}
	
}

void AMyMainCharacter::InterfaceTakeDamage(float _Damage, FVector EnemyVec, FVector HitReactVec)
{
	TaketheDamage(_Damage);	//????????? ??????
	HitReact(HitReactVec);	//??? ?????????
	HitReact_Sound();		//?????? ??????
	HitReact_goBack(EnemyVec);	//?????? ???????????? ????????????
	HitReact_ChangeColor();	//?????????
}

int AMyMainCharacter::InterfaceGetMyID()
{
	return DDPlayer;
}

void AMyMainCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Avoid", IE_Pressed, this, &AMyMainCharacter::AvoidDown);
	PlayerInputComponent->BindAction("Avoid", IE_Released, this, &AMyMainCharacter::AvoidUp);

	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &AMyMainCharacter::RunDown);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &AMyMainCharacter::RunUp);

	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &AMyMainCharacter::AttackDown);
	PlayerInputComponent->BindAction("Attack", IE_Released, this, &AMyMainCharacter::AttackUp);

	PlayerInputComponent->BindAction("StrongAttack", IE_Pressed, this, &AMyMainCharacter::AttackStrongDonw);
	PlayerInputComponent->BindAction("StrongAttack", IE_Released, this, &AMyMainCharacter::AttackStrongUp);

	PlayerInputComponent->BindAction("GunShot", IE_Pressed, this, &AMyMainCharacter::GunShotDonw);
	PlayerInputComponent->BindAction("GunShot", IE_Released, this, &AMyMainCharacter::GunShotUp);

	PlayerInputComponent->BindAction("UsePosion", IE_Pressed, this, &AMyMainCharacter::UsePosionDown);
	PlayerInputComponent->BindAction("UsePosion", IE_Released, this, &AMyMainCharacter::UsePosionUp);
	
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AMyMainCharacter::InteractDown);
	PlayerInputComponent->BindAction("Interact", IE_Released, this, &AMyMainCharacter::InteractUp);

	PlayerInputComponent->BindAction("UseItem", IE_Pressed, this, &AMyMainCharacter::UseItemDown);
	PlayerInputComponent->BindAction("UseItem", IE_Released, this, &AMyMainCharacter::UseItemUp);

	PlayerInputComponent->BindAction("LockOn", IE_Pressed, this, &AMyMainCharacter::LockDown); //?????? ?????? LockUp -> LockDown
	PlayerInputComponent->BindAction("LockOn", IE_Released, this, &AMyMainCharacter::LockUp); //?????? ?????? LockDown -> LockUp

	PlayerInputComponent->BindAction("Map", IE_Pressed, this, &AMyMainCharacter::MapDown); //?????? ?????? MapUp -> MapDown
	PlayerInputComponent->BindAction("Map", IE_Released, this, &AMyMainCharacter::MapUp);  //?????? ?????? MapDown -> MapUp


	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyMainCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AMyMainCharacter::Turn);
	//PlayerInputComponent->BindAxis("Turn", this, &Pawn::AddControllerYawInput); ??????
	PlayerInputComponent->BindAxis("TurnRate", this, &AMyMainCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &AMyMainCharacter::LookUp);
	//PlayerInputComponent->BindAxis("LookUp", this, &Pawn::AddControllerPitchInput); ??????
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMyMainCharacter::LookUpAtRate);

}


void AMyMainCharacter::AvoidDown()
{
	//GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	//Avoid ?????????????????? RootMotion??? ????????????????????? ???????????? ??????
	//UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		MovementStatus = EMovementStatus::EMS_Avoid;

		AttackMotion->ResetNowAttack();	//?????????

		AnimInstance->Montage_Play(MoveUtilityMontage, 1.5f);
		AnimInstance->Montage_JumpToSection(FName("Avoid"), MoveUtilityMontage);

		GetCharacterMovement()->MaxWalkSpeed = RunningSpeed;


	}
}

void AMyMainCharacter::TaketheDamage(float _Damage)
{
	if (!bItsDead)
	{
		//?????? ??????????????????
		if (MovementStatus == EMovementStatus::EMS_Avoid)
		{
			//????????? ????????? ????????????
			SlowMotion();
		}

		else if (NoHitStance)
		{
			//?????? ?????????????????? ????????? ??????
		}

		else
		{
			//UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
			if (AnimInstance)
			{
				//????????? ??????
				Super::TaketheDamage(_Damage);

				//?????? ????????? ????????? ?????? ??????
				if (MovementStatus != EMovementStatus::EMS_Dead)
				{
					//?????? ???????????????
					AnimInstance->Montage_Play(MoveUtilityMontage, 1.5f);
					AnimInstance->Montage_JumpToSection(FName("Hit"), MoveUtilityMontage);
				}
			}
		}
	}
}

void AMyMainCharacter::HitReact_goBack(FVector EnemyVec)	//?????? ????????? ?????? ?????? ??????
{
	if (!bItsDead)	//?????? ????????????
	{
		//???????????? ??????
		NoHitStance = true;

		goBackTimeCheck = GetWorld()->GetDeltaSeconds(); //???????????? ?????????

		EnemyVecToNormal = (GetActorLocation() - EnemyVec);	//???-???????????? ???????????? ?????????
		EnemyVecToNormal.Normalize();

		GetWorld()->GetTimerManager().SetTimer(goBackReact, FTimerDelegate::CreateLambda([&]()
		{
			goBackTimeCheck = GetWorld()->GetDeltaSeconds(); //???????????? ?????????
			goBackTotalTimeCheck += goBackTimeCheck; //????????????

			FVector lot = GetActorLocation();
			lot += EnemyVecToNormal * HitReactSpeed * goBackTimeCheck;

			SetActorLocation(lot);

			//?????????
			if (goBackTotalTimeCheck > NoHitStanceTime)
			{
				NoHitStance = false;
				goBackTotalTimeCheck = 0;
				GetWorld()->GetTimerManager().ClearTimer(goBackReact);
			}
		}), goBackTimeCheck, true, 0.f);
	}
}

void AMyMainCharacter::HitReact_ChangeColor()
{
	//?????? ???????????? ??????
	GetMesh()->SetMaterial(0, MaterialHit);

	//???????????? ?????? ?????????????????? ??????
	if (GetWorldTimerManager().IsTimerActive(changeColorTimerHandle))
	{
		GetWorld()->GetTimerManager().ClearTimer(changeColorTimerHandle);
	}

	//????????? ?????? -> 2????????? ?????????(???)
	GetWorld()->GetTimerManager().SetTimer(changeColorTimerHandle, FTimerDelegate::CreateLambda([&]()
	{
		GetWorld()->GetTimerManager().ClearTimer(changeColorTimerHandle);
		GetMesh()->SetMaterial(0, MaterialOrigin);
	}), GetWorld()->GetDeltaSeconds(), false, 0.5f);
}

void AMyMainCharacter::HitReactEnd()
{
	MovementStatus = EMovementStatus::EMS_Normal;
}

void AMyMainCharacter::Die()
{
	Super::Die();

	//UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		MovementStatus = EMovementStatus::EMS_Dead;

		AnimInstance->Montage_Play(MoveUtilityMontage, 1.5f);
		AnimInstance->Montage_JumpToSection(FName("Death"), MoveUtilityMontage);
	}
}

void AMyMainCharacter::DeadEnd()
{
	//??????????????? ??????
	GetMesh()->bPauseAnims = true;
	GetMesh()->bNoSkeletonUpdate = true;
}

void AMyMainCharacter::AvoidUp()
{
}

void AMyMainCharacter::RunDown()
{
	if (MovementStatus == EMovementStatus::EMS_Normal)
	{
		MovementStatus = EMovementStatus::EMS_Sprinting;
		GetCharacterMovement()->MaxWalkSpeed = SprintingSpeed;
	}
}

void AMyMainCharacter::RunUp()
{
	if (MovementStatus == EMovementStatus::EMS_Sprinting)
	{
		MovementStatus = EMovementStatus::EMS_Normal;
	}
	GetCharacterMovement()->MaxWalkSpeed = RunningSpeed;
}

void AMyMainCharacter::AttackDown()
{
	//?????? ???????????? ????????????
	AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		AttackMotion->AnimInstance = AnimInstance;
	}

	//???????????? ???????????? ????????????
	if (MovementStatus == EMovementStatus::EMS_Normal)
	{
		MovementStatus = EMovementStatus::EMS_Attacking;
		weapon->SwingSoundPlay();
		AttackMotion->Attack(false, -1);
	}

	//???????????? ????????? "?????? ?????? ?????? ?????????" ????????? ?????? ?????? ?????? ??????
	else if (MovementStatus == EMovementStatus::EMS_Attacking)
	{
		if (AttackMotion->NextAttackPosibile())
		{
			weapon->SwingSoundPlay();
			AttackMotion->ComboAttackOn();
			AttackMotion->Attack(false,-1);
		}
	}

	//????????? ????????? ?????? ?????? ??????
	else if (MovementStatus == EMovementStatus::EMS_Sprinting)
	{
		MovementStatus = EMovementStatus::EMS_Attacking;
		AttackMotion->Attack(true,1);

	}
}

void AMyMainCharacter::AttackUp()
{

}

void AMyMainCharacter::AttackStrongDonw()
{	
	//???????????? ???????????? ????????????
	if (MovementStatus == EMovementStatus::EMS_Normal)
	{
		MovementStatus = EMovementStatus::EMS_Attacking;
		AttackMotion->Attack(true,-1);
	}

	//???, ???????????? ???, ??????????????? ????????? ???????????? ?????? ????????? ?????????.
	else if (MovementStatus == EMovementStatus::EMS_Attacking)
	{
		if (AttackMotion->NextStrongAttackComboPosibile())
		{
			AttackMotion->ComboAttackOn();
			AttackMotion->Attack(true,0);
		}
	}
}

void AMyMainCharacter::AttackStrongUp()
{

}

void AMyMainCharacter::GunShotDonw()
{
	if (theTarget != nullptr)
	{
		NowMyDrone->LookForward(theTarget->GetActorLocation());
	}
	NowMyDrone->Fire();
}

void AMyMainCharacter::GunShotUp()
{

}

void AMyMainCharacter::InteractDown()
{
	if (MainPlayerController)
	{
		//???????????? ???????????? ????????? ????????? ??????
		if (MainPlayerController->bNPCInteractActive)
		{
			//??????????????????
			MainPlayerController->InteractNPC();

			NPCTarget->InteractSuccess();
		}
	}
}

void AMyMainCharacter::InteractUp()
{

}


void AMyMainCharacter::UsePosionDown()
{

}

void AMyMainCharacter::UsePosionUp()
{

}

void AMyMainCharacter::UseItemDown()
{

}

void AMyMainCharacter::UseItemUp()
{

}

void AMyMainCharacter::LockDown()
{
	if (theTarget != nullptr) //????????? ??? ????????? ?????? ?????? ??????
	{
		LookattheLockOnTargetOff();
		NowMyDrone->SetTheTargetIsLock(false);
	}

	else //????????? ??????????????? ??????
	{
		////////SphereTraceMulitForObjects??? ?????? ?????? ??????
		FVector StartLoc = FollowCamera->GetComponentLocation();
		FVector EndLoc = StartLoc + FollowCamera->GetComponentRotation().Vector() * 5000.f;

		TArray<AActor*> IngoreActors;
		IngoreActors.Add(this);

		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_WorldStatic));
		ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));

		TArray<FHitResult> HitResArray;


		//HitResult ??????
		bool HitResult = UKismetSystemLibrary::SphereTraceMultiForObjects(
			GetWorld(),
			StartLoc,
			EndLoc,
			100.f,
			ObjectTypes,
			false,
			IngoreActors,
			EDrawDebugTrace::ForDuration,
			HitResArray,
			true);


		//Trace??? ?????? ????????? ????????? ??????
		if (HitResult)
		{
			//?????? ????????? ?????? ????????? ?????? ????????? Target?????? ????????? For??? ??????.
			for (auto i : HitResArray)
			{
				theTarget = Cast<AEnemy>(i.Actor);
				if (theTarget)
				{
					theTarget->TargetShowInfo(true);

					//????????????
					NowMyDrone->SetTheTargetIsLock(true);
					break;
				}
			}
		}
	}
}

void AMyMainCharacter::LookattheLockOnTarget(float _DeltaTime)
{
	//FVector TargetLocation = theTarget->GetActorLocation();
	FVector TargetLocation = theTarget->TargetLookPos->GetComponentLocation();

	FVector CameraLocation = FollowCamera->GetComponentLocation();

	FRotator findLookatRot = UKismetMathLibrary::FindLookAtRotation(CameraLocation,TargetLocation);
	FRotator ControlRot = Controller->GetControlRotation();
	FRotator Rinterp = UKismetMathLibrary::RInterpTo(ControlRot, findLookatRot, _DeltaTime, 7.0f);

	Controller->SetControlRotation(Rinterp);
}

void AMyMainCharacter::LookattheLockOnTargetOff()
{
	theTarget->TargetShowInfo(false);
	theTarget = nullptr;
	CameraBoom->TargetArmLength = 500.0f; // The camera follows at this distance behind the character	

	FollowCamera->SetWorldRotation(UKismetMathLibrary::FindLookAtRotation(FollowCamera->GetComponentLocation(), GetActorLocation()));
}

bool AMyMainCharacter::hasTarget()
{
	if (theTarget)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void AMyMainCharacter::LockUp()
{

}

void AMyMainCharacter::MapDown()
{

}

void AMyMainCharacter::MapUp()
{

}



void AMyMainCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMyMainCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AMyMainCharacter::Turn(float Value)
{
	if(theTarget == nullptr) //?????? ????????? ???????????? ?????????
	{
		AddControllerYawInput(Value);
	}
}

void AMyMainCharacter::LookUp(float Value)
{
	if (theTarget == nullptr) //?????? ????????? ???????????? ?????????
	{
		AddControllerPitchInput(Value);
	}
}


void AMyMainCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f) && MovementStatus != EMovementStatus::EMS_Attacking)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation(); 
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		AddMovementInput(Direction, Value);
	}
}

void AMyMainCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f) && MovementStatus != EMovementStatus::EMS_Attacking)
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation(); 
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void AMyMainCharacter::EquipWeapon()
{

	//***************************** ?????? ??????a
	//*****************************
	//*****************************
	//1. ??????????????? ????????? ?????? ?????? ???.
	//2. ?????? ?????? ????????? ????????? ?????? (?????? ?????? ??????????????? ?????? -> ?????? ??????)

	//???????????? ( ???????????? - 1 )
	if (EquippedWeapon != NULL)
	{
		//????????? ??????
		weapon = GetWorld()->SpawnActor<AWeapon>(EquippedWeapon);
		AnimAttackPose = weapon->EquipWeaponAndSetAttackPose(this);	// ??????????????? ?????? ??? ??????
		if (AttackMotion)
		{
			AttackMotion->NowMyAttackType = AnimAttackPose;	// ?????? ??? ??????
		}
		
	}

	//???????????? ( ???????????? - 2 )
	else
	{
		//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, "Empty Hand");
	}
}

void AMyMainCharacter::EquipDrone()
{
	FVector SpawnLoc = GetActorLocation() + FVector(-45.f,-45.f, 95.f);
	FRotator rot = GetActorRotation();
	NowMyDrone = GetWorld()->SpawnActor<ADrone>(EquippedDrone,SpawnLoc,rot);
	NowMyDrone->EquipDrone();
}



void AMyMainCharacter::SlowMotion()
{
	//?????? ?????????
	GenAfterImage();

	TimeCheck = GetWorld()->GetDeltaSeconds(); //???????????? ?????????
	
	GetWorld()->GetTimerManager().SetTimer(SlowTimeFloatDelayHandle, FTimerDelegate::CreateLambda([&]()
	{
		TimeCheck = GetWorld()->GetDeltaSeconds(); //???????????? ?????????
		TotalTimeCheck += TimeCheck; //????????????
		SlowTime = UKismetMathLibrary::FInterpTo(SlowTime, 0.1f, TimeCheck, 25.f); //??????

		//0.075??? ?????? ?????????(??????, ????????? ????????????????????? ?????? ????????? ???)
		if (TotalTimeCheck > 0.075f)
		{
			//?????????
			TotalTimeCheck = 0;
			SlowTime = 1;
			GetWorld()->GetTimerManager().ClearTimer(SlowTimeFloatDelayHandle);
		}

		UGameplayStatics::SetGlobalTimeDilation(GetWorld(), SlowTime);

	}), TimeCheck, true, 0.f);
}

void AMyMainCharacter::GenAfterImage()
{
	//?????? ?????? ??????
	FVector Loc = GetActorLocation();
	Loc.Z -= 100.0f;

	FRotator Rot = GetActorRotation();
	Rot.Yaw -= 90.f;

	//??????
	for(int i = 0 ; i < 2; i++)
	{
		//??????
		AAvoidAfterImage* AfterImage = GetWorld()->SpawnActor<AAvoidAfterImage>(AvoidAfterImage_Spawn, Loc, Rot);

		//?????????(?????? ??????, ?????? ??????)
		AfterImage->InitAvoidAfterImage(GetMesh(), i);
	}
}
