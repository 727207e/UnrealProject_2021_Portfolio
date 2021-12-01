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

	Health = 100.f;
	MaxHealth = 100.f;
	Damage = 0.f; // 공격력은 무기에 있다.

	NextComboOnOffTrigger = false;
	AttackCount = 0;
	AttackComboNumber = {"Attack_1", "Attack_2"};

	LookSpeed_TargetAttacking = 15.0f;
	LookAtDeltaCountLimit = 1.f;
	//theTarget_Position = FVector.ZeroVector;
}

// Called when the game starts or when spawned
void AMyMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	EquipWeapon();
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
		if(MovementStatus == EMovementStatus::EMS_Attacking && !NextComboOnOffTrigger && AttackCount == 0)
		{
			LookAtTargetWhenAttacking(DeltaTime);
		}
	}
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
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		MovementStatus = EMovementStatus::EMS_Avoid;

		NextComboOnOffTrigger = false;

		AnimInstance->Montage_Play(MoveUtilityMontage, 1.5f);
		AnimInstance->Montage_JumpToSection(FName("Avoid"), MoveUtilityMontage);

		GetCharacterMovement()->MaxWalkSpeed = RunningSpeed;


		///슬로우 모션
		SlowMotion();
	}
}

void AMyMainCharacter::AvoidUp()
{
}

void AMyMainCharacter::RunDown()
{
	MovementStatus = EMovementStatus::EMS_Sprinting;
	GetCharacterMovement()->MaxWalkSpeed = SprintingSpeed;
}

void AMyMainCharacter::RunUp()
{
	MovementStatus = EMovementStatus::EMS_Normal;
	GetCharacterMovement()->MaxWalkSpeed = RunningSpeed;
}

void AMyMainCharacter::AttackDown()
{
	//공격중이 아닐때만 공격가능
	if (MovementStatus == EMovementStatus::EMS_Normal)
	{
		Attack();
	}

	//공격중일 때라도 "다음 공격 콤보 타이밍" 이라면 다음 콤보 공격 가능
	else if (MovementStatus == EMovementStatus::EMS_Attacking)
	{
		if (NextComboOnOffTrigger && AttackCount < AttackComboNumber.Num() - 1)
		{
			AttackCount++;
			Attack();
		}
	}
}

void AMyMainCharacter::AttackUp()
{

}

void AMyMainCharacter::AttackStrongDonw()
{

}

void AMyMainCharacter::AttackStrongUp()
{

}

void AMyMainCharacter::GunShotDonw()
{

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
					break;
				}
			}
		}
	}
}

void AMyMainCharacter::LookattheLockOnTarget(float _DeltaTime)
{
	FVector TargetLocation = theTarget->GetActorLocation();
	FVector CameraLocation = FollowCamera->GetComponentLocation();

	FRotator findLookatRot = UKismetMathLibrary::FindLookAtRotation(CameraLocation,TargetLocation);
	FRotator ControlRot = Controller->GetControlRotation();
	FRotator Rinterp = UKismetMathLibrary::RInterpTo(ControlRot, findLookatRot, _DeltaTime, 7.0f);

	Controller->SetControlRotation(Rinterp);
}

void AMyMainCharacter::LookattheLockOnTargetOff()
{
	theTarget = nullptr;
	CameraBoom->TargetArmLength = 500.0f; // The camera follows at this distance behind the character	

	FollowCamera->SetWorldRotation(UKismetMathLibrary::FindLookAtRotation(FollowCamera->GetComponentLocation(), GetActorLocation()));
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
	if ((Controller != nullptr) && (Value != 0.0f))
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
	if ((Controller != nullptr) && (Value != 0.0f))
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
		weapon->EquipWeapon(this);
	}

	//빈송상태 ( 초기설정 - 2 )
	else
	{
		//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, "Empty Hand");
	}
}

void AMyMainCharacter::Attack()
{
	//이후, Status를 Normal로 변경해주는 부분은 
	//AttackMong 에서 전투 끝나는 부분의 
	//EndAttack 노티파이에서 Normal로 변경되도록 정의함 (BP내용)

	if (CombatMontage)
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

		if (AnimInstance)
		{
			MovementStatus = EMovementStatus::EMS_Attacking;

			NextComboOnOffTrigger = false;
			
			AnimInstance->Montage_Play(CombatMontage, 1.5f);
			AnimInstance->Montage_JumpToSection(AttackComboNumber[AttackCount], CombatMontage);

		}
	}
}

void AMyMainCharacter::LookAtTargetWhenAttacking(float _DeltaTime)
{
	//회전시간 일부를 허용(애니메이션 버그, 과한 Following 등등의 이유)
	//초기화는 NextComboOn 함수안에서
	if (LookAtDeltaCount <= LookAtDeltaCountLimit)
	{
		LookAtDeltaCount += _DeltaTime;

		FVector MyActorLocation = GetActorLocation();
		FVector theTargetLoc = theTarget->GetActorLocation();
		theTargetLoc.Z = MyActorLocation.Z; // Target이 위나 아래에 있어도 정면을 공격한다

		FRotator LookAt = UKismetMathLibrary::FindLookAtRotation(MyActorLocation, theTargetLoc);

		FRotator InterpRotation = UKismetMathLibrary::RInterpTo(GetActorRotation(), LookAt, GetWorld()->GetDeltaSeconds(), LookSpeed_TargetAttacking);

		SetActorRotation(InterpRotation);
	}
}

void AMyMainCharacter::NextComboOn()
{
	NextComboOnOffTrigger = true;
	LookAtDeltaCount = 0.f;
}

void AMyMainCharacter::NextComboOff()
{
	MovementStatus = EMovementStatus::EMS_Normal;
	NextComboOnOffTrigger = false;
	AttackCount = 0;
	
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
			UE_LOG(LogTemp, Warning, TEXT("Time in"));
		}

		UE_LOG(LogTemp, Warning, TEXT("%f"), SlowTime);
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
	for(int i = 0 ; i < 4; i++)
	{
		//생성
		AAvoidAfterImage* AfterImage = GetWorld()->SpawnActor<AAvoidAfterImage>(AvoidAfterImage_Spawn, Loc, Rot);

		//활성화(포즈 변경, 이동 방향)
		AfterImage->InitAvoidAfterImage(GetMesh(), i);
	}
}