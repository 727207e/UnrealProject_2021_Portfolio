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

	// CameraBoom point 지정
	FollowCameraEndPoint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FollowCameraEndPoint"));
	FollowCameraEndPoint->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation


	MovementStatus = EMovementStatus::EMS_Normal;

	RunningSpeed = 300.f;
	SprintingSpeed = 950.f;

	GetCharacterMovement()->MaxWalkSpeed = RunningSpeed;

	/********************  Class LifeEntity 정의  */
	LifeEntityinitialize();

	Health = 75.f;
	MaxHealth = 100.f;
	Damage = 0.f; // 공격력은 무기에 있다.

	//theTarget_Position = FVector.ZeroVector;

	//////////////////////히트 리엑트 텍스쳐 정의
	MaterialOrigin = CreateDefaultSubobject<UMaterial>(TEXT("M_Origin"));
	MaterialHit = CreateDefaultSubobject<UMaterial>(TEXT("M_Hit"));

	//클래스 생성(Construct)
	AttackMotionTSub = AMainCharacterWeaponMovement::StaticClass();
	AttackMotion = NewObject<AMainCharacterWeaponMovement>(AttackMotionTSub);

}

// Called when the game starts or when spawned
void AMyMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	EquipWeapon();
	EquipDrone();

	//애님 인스턴스 넘겨주기
	AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		AttackMotion->AnimInstance = AnimInstance;
	}
}

// Called every frame
void AMyMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//LockOn이 된 상태
	if (theTarget != nullptr)
	{
		LookattheLockOnTarget(DeltaTime);

		//공격을 처음으로 시작하는 순간(콤보 카운트 x)
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
	TaketheDamage(_Damage);	//데미지 입기
	HitReact(HitReactVec);	//피 흘리기
	HitReact_Sound();		//피격 소리
	HitReact_goBack(EnemyVec);	//뒤로 물러나며 경직되기
	HitReact_ChangeColor();	//번쩍임
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

	PlayerInputComponent->BindAction("UseItem", IE_Pressed, this, &AMyMainCharacter::UseItemDown);
	PlayerInputComponent->BindAction("UseItem", IE_Released, this, &AMyMainCharacter::UseItemUp);

	PlayerInputComponent->BindAction("LockOn", IE_Pressed, this, &AMyMainCharacter::LockDown); //오타 수정 LockUp -> LockDown
	PlayerInputComponent->BindAction("LockOn", IE_Released, this, &AMyMainCharacter::LockUp); //오타 수정 LockDown -> LockUp

	PlayerInputComponent->BindAction("Map", IE_Pressed, this, &AMyMainCharacter::MapDown); //오타 수정 MapUp -> MapDown
	PlayerInputComponent->BindAction("Map", IE_Released, this, &AMyMainCharacter::MapUp);  //오타 수정 MapDown -> MapUp


	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyMainCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AMyMainCharacter::Turn);
	//PlayerInputComponent->BindAxis("Turn", this, &Pawn::AddControllerYawInput); 변경
	PlayerInputComponent->BindAxis("TurnRate", this, &AMyMainCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &AMyMainCharacter::LookUp);
	//PlayerInputComponent->BindAxis("LookUp", this, &Pawn::AddControllerPitchInput); 변경
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMyMainCharacter::LookUpAtRate);

}


void AMyMainCharacter::AvoidDown()
{
	//GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	//Avoid 애니메이션의 RootMotion을 사용하기위해서 몽타주로 진행
	//UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		MovementStatus = EMovementStatus::EMS_Avoid;

		AttackMotion->ResetNowAttack();	//초기화

		AnimInstance->Montage_Play(MoveUtilityMontage, 1.5f);
		AnimInstance->Montage_JumpToSection(FName("Avoid"), MoveUtilityMontage);

		GetCharacterMovement()->MaxWalkSpeed = RunningSpeed;


	}
}

void AMyMainCharacter::TaketheDamage(float _Damage)
{
	if (!bItsDead)
	{
		//회피 도중이였다면
		if (MovementStatus == EMovementStatus::EMS_Avoid)
		{
			//슬로우 모션과 회피모션
			SlowMotion();
		}

		else if (NoHitStance)
		{
			//피격 무적상태일땐 데미지 없음
		}

		else
		{
			//UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
			if (AnimInstance)
			{
				//데미지 받기
				Super::TaketheDamage(_Damage);

				//죽은 상태가 아니면 피격 모션
				if (MovementStatus != EMovementStatus::EMS_Dead)
				{
					//히트 애니메이션
					AnimInstance->Montage_Play(MoveUtilityMontage, 1.5f);
					AnimInstance->Montage_JumpToSection(FName("Hit"), MoveUtilityMontage);
				}
			}
		}
	}
}

void AMyMainCharacter::HitReact_goBack(FVector EnemyVec)	//때린 적군이 해당 함수 호출
{
	if (!bItsDead)	//죽지 않았다면
	{
		//무적타임 지정
		NoHitStance = true;

		goBackTimeCheck = GetWorld()->GetDeltaSeconds(); //델타타임 가져옴

		EnemyVecToNormal = (GetActorLocation() - EnemyVec);	//적-플레이어 방향벡터 가져옴
		EnemyVecToNormal.Normalize();

		GetWorld()->GetTimerManager().SetTimer(goBackReact, FTimerDelegate::CreateLambda([&]()
		{
			goBackTimeCheck = GetWorld()->GetDeltaSeconds(); //델타타임 가져옴
			goBackTotalTimeCheck += goBackTimeCheck; //누적시간

			FVector lot = GetActorLocation();
			lot += EnemyVecToNormal * HitReactSpeed * goBackTimeCheck;

			SetActorLocation(lot);

			//초기화
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
	//피격 메터리얼 변경
	GetMesh()->SetMaterial(0, MaterialHit);

	//타이머가 이미 진행중이라면 삭제
	if (GetWorldTimerManager().IsTimerActive(changeColorTimerHandle))
	{
		GetWorld()->GetTimerManager().ClearTimer(changeColorTimerHandle);
	}

	//타이머 시작 -> 2초후에 초기화(색)
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
	//애니메이션 정지
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

	//공격중이 아닐때만 공격가능
	if (MovementStatus == EMovementStatus::EMS_Normal)
	{
		MovementStatus = EMovementStatus::EMS_Attacking;
		weapon->SwingSoundPlay();
		AttackMotion->Attack(false,-1);
	}

	//공격중일 때라도 "다음 공격 콤보 타이밍" 이라면 다음 콤보 공격 가능
	else if (MovementStatus == EMovementStatus::EMS_Attacking)
	{
		if (AttackMotion->NextAttackPosibile())
		{
			weapon->SwingSoundPlay();
			AttackMotion->ComboAttackOn();
			AttackMotion->Attack(false,-1);
		}
	}

	//달리는 도중일 경우 특수 공격
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
	//공격중이 아닐때만 공격가능
	if (MovementStatus == EMovementStatus::EMS_Normal)
	{
		MovementStatus = EMovementStatus::EMS_Attacking;
		AttackMotion->Attack(true,-1);
	}

	//단, 공격중일 때, 콤보공격의 조건을 달성하면 다른 공격이 나간다.
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
	if (theTarget != nullptr) //락온이 된 상태일 경우 락온 해제
	{
		LookattheLockOnTargetOff();
		NowMyDrone->SetTheTargetIsLock(false);
	}

	else //락온이 안되어있는 경우
	{
		////////SphereTraceMulitForObjects를 위한 변수 선언
		FVector StartLoc = FollowCamera->GetComponentLocation();
		FVector EndLoc = StartLoc + FollowCamera->GetComponentRotation().Vector() * 5000.f;

		TArray<AActor*> IngoreActors;
		IngoreActors.Add(this);

		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_WorldStatic));
		ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));

		TArray<FHitResult> HitResArray;


		//HitResult 정의
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


		//Trace를 맞은 대상이 존재할 경우
		if (HitResult)
		{
			//맞은 대상중 가장 가까이 있는 대상을 Target으로 지정후 For문 탈출.
			for (auto i : HitResArray)
			{
				theTarget = Cast<AEnemy>(i.Actor);
				if (theTarget)
				{
					theTarget->TargetShowInfo(true);

					//드론지정
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
	if(theTarget == nullptr) //락온 기능이 사용중이 아닐때
	{
		AddControllerYawInput(Value);
	}
}

void AMyMainCharacter::LookUp(float Value)
{
	if (theTarget == nullptr) //락온 기능이 사용중이 아닐때
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

	//***************************** 초기 설정a
	//*****************************
	//*****************************
	//1. 기본적으로 대검을 들고 있을 것.
	//2. 이후 빈손 상태도 제작할 예정 (무기 설정 안되어있는 경우 -> 빈손 상태)

	//대검상태 ( 초기설정 - 1 )
	if (EquippedWeapon != NULL)
	{
		//생성후 장착
		weapon = GetWorld()->SpawnActor<AWeapon>(EquippedWeapon);
		AnimAttackPose = weapon->EquipWeaponAndSetAttackPose(this);	// 애니메이션 공격 폼 지정
		AttackMotion->NowMyAttackType = AnimAttackPose;	// 공격 폼 수정
	}

	//빈송상태 ( 초기설정 - 2 )
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
	//잔상 만들기
	GenAfterImage();

	TimeCheck = GetWorld()->GetDeltaSeconds(); //델타타임 가져옴
	
	GetWorld()->GetTimerManager().SetTimer(SlowTimeFloatDelayHandle, FTimerDelegate::CreateLambda([&]()
	{
		TimeCheck = GetWorld()->GetDeltaSeconds(); //델타타임 가져옴
		TotalTimeCheck += TimeCheck; //누적시간
		SlowTime = UKismetMathLibrary::FInterpTo(SlowTime, 0.1f, TimeCheck, 25.f); //보간

		//0.075초 이후 초기화(이때, 시간이 변경되어있다는 것을 감안할 것)
		if (TotalTimeCheck > 0.075f)
		{
			//초기화
			TotalTimeCheck = 0;
			SlowTime = 1;
			GetWorld()->GetTimerManager().ClearTimer(SlowTimeFloatDelayHandle);
		}

		UGameplayStatics::SetGlobalTimeDilation(GetWorld(), SlowTime);

	}), TimeCheck, true, 0.f);
}

void AMyMainCharacter::GenAfterImage()
{
	//위치 각도 조절
	FVector Loc = GetActorLocation();
	Loc.Z -= 100.0f;

	FRotator Rot = GetActorRotation();
	Rot.Yaw -= 90.f;

	//생성
	for(int i = 0 ; i < 2; i++)
	{
		//생성
		AAvoidAfterImage* AfterImage = GetWorld()->SpawnActor<AAvoidAfterImage>(AvoidAfterImage_Spawn, Loc, Rot);

		//활성화(포즈 변경, 이동 방향)
		AfterImage->InitAvoidAfterImage(GetMesh(), i);
	}
}
