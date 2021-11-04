// Fill out your copyright notice in the Description page of Project Settings.


		//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, "Empty Hand");

#include "MyMainCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Weapon.h"

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
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

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
}

// Called when the game starts or when spawned
void AMyMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	EquipWeapon();
	
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, "Github");
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

	PlayerInputComponent->BindAction("LockOn", IE_Pressed, this, &AMyMainCharacter::LockUp);
	PlayerInputComponent->BindAction("LockOn", IE_Released, this, &AMyMainCharacter::LockDown);

	PlayerInputComponent->BindAction("Map", IE_Pressed, this, &AMyMainCharacter::MapUp);
	PlayerInputComponent->BindAction("Map", IE_Released, this, &AMyMainCharacter::MapDown);


	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyMainCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMyMainCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMyMainCharacter::LookUpAtRate);

}


void AMyMainCharacter::AvoidDown()
{
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
	if (MovementStatus == EMovementStatus::EMS_Normal)
	{
		Attack();
		MovementStatus = EMovementStatus::EMS_Attacking;
	}

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

void AMyMainCharacter::LockUp()
{

}

void AMyMainCharacter::LockDown()
{

}

void AMyMainCharacter::MapUp()
{

}

void AMyMainCharacter::MapDown()
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
	if (CombatMontage)
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

		if (AnimInstance)
		{
			NextComboOnOffTrigger = false;
			
			AnimInstance->Montage_Play(CombatMontage, 1.5f);
			AnimInstance->Montage_JumpToSection(AttackComboNumber[AttackCount], CombatMontage);
			//AnimInstance->Montage_JumpToSection(FName("Attack_1"), CombatMontage);

		}
	}
}

void AMyMainCharacter::NextComboOn()
{
	NextComboOnOffTrigger = true;
}

void AMyMainCharacter::NextComboOff()
{
	MovementStatus = EMovementStatus::EMS_Normal;
	NextComboOnOffTrigger = false;
	AttackCount = 0;
	
	//캐릭터 애니메이션 버그를 강제 조정(회전 버그 수정)
	FRotator CharacterRotation = GetActorRotation();
	CharacterRotation.Pitch = 0.f;
	CharacterRotation.Roll = 0.f;

	SetActorRotation(CharacterRotation);

}
