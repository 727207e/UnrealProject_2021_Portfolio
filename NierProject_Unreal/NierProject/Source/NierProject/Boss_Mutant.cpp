// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss_Mutant.h"
#include "AIController.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SceneComponent.h"
//#include "Boss_Mutant_AttackCollision.h"
#include "Components/ChildActorComponent.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "MyMainCharacter.h"
#include "MainPlayerController.h"

// Sets default values
ABoss_Mutant::ABoss_Mutant()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//AttackCol = CreateDefaultSubobject<UChildActorComponent>(TEXT("AttackCol"));
	//AttackCol->SetupAttachment(GetMesh());
	//AttackCol->CreateChildActor();

	FireBallStartPos = CreateDefaultSubobject<USphereComponent>(TEXT("FireBallStartPos"));
	FireBallStartPos->SetupAttachment(GetRootComponent());

	RoarStartPos = CreateDefaultSubobject<USphereComponent>(TEXT("RoarStartPos"));
	RoarStartPos->SetupAttachment(GetMesh(), FName("AttackPos")); 

	AttackAbleAround = CreateDefaultSubobject<USphereComponent>(TEXT("AttackAround"));
	AttackAbleAround->SetupAttachment(GetRootComponent());

	AttackAbleAround->OnComponentBeginOverlap.AddDynamic(this, &ABoss_Mutant::AttackRange_OnOverlapBegin);
	AttackAbleAround->OnComponentEndOverlap.AddDynamic(this, &ABoss_Mutant::AttackRange_OnOverlapEnd);

	Health = 75.f;
	MaxHealth = 100.f;

	BossMutantMovement = EBossMutantMovementStatus::BMMS_Idle;

	CombatDamageList = { 1.f, 2.f, 3.f, 4.f, 5.f, 6.f, 7.f };

	InitAttackColl();

}

// Called when the game starts or when spawned
void ABoss_Mutant::BeginPlay()
{
	Super::BeginPlay();


	aiController = Cast<AAIController>(GetController());

	CombatTarget = Cast<AMyMainCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));

	GetWorldTimerManager().SetTimer(AttackTimer, this, &ABoss_Mutant::AttackPatern, 2.f, true);

}

// Called every frame
void ABoss_Mutant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bCanAttack && BossMutantMovement == EBossMutantMovementStatus::BMMS_Idle)
	{
		BossMutantMovement = EBossMutantMovementStatus::BMMS_MoveToTarget;
		MoveToTarget(CombatTarget);
	}

	if (bCanAttack && BossMutantMovement != EBossMutantMovementStatus::BMMS_Attacking)
	{
		/////플레이어(Target)을 처다보기
		FVector TargetLot = CombatTarget->GetActorLocation();
		TargetLot.Z = GetActorLocation().Z;

		FRotator Rot = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), TargetLot);

		SetActorRotation(Rot);

		//////공격
		AttackPatern();
	}

}

// Called to bind functionality to input
void ABoss_Mutant::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ABoss_Mutant::InitAttackColl()
{
	coll_1 = CreateDefaultSubobject<UBoxComponent>(TEXT("coll_1"));
	coll_1->SetupAttachment(GetMesh(), FName("LeftHandAttackPos"));
	CombatCollisionList.Add(coll_1);

	coll_2 = CreateDefaultSubobject<UBoxComponent>(TEXT("coll_2"));
	coll_2->SetupAttachment(GetMesh(), FName("RightHandAttackPos"));
	CombatCollisionList.Add(coll_2);

	coll_3 = CreateDefaultSubobject<UBoxComponent>(TEXT("coll_3"));
	coll_3->SetupAttachment(GetMesh(), FName("AttackPos"));
	CombatCollisionList.Add(coll_3);

	coll_4 = CreateDefaultSubobject<UBoxComponent>(TEXT("coll_4"));
	coll_4->SetupAttachment(GetMesh(), FName("AttackPos"));
	CombatCollisionList.Add(coll_4);

	for (auto i : CombatCollisionList)
	{
		i->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		i->OnComponentBeginOverlap.AddDynamic(this, &ABoss_Mutant::Attack_OnOverlapBegin);
		i->OnComponentEndOverlap.AddDynamic(this, &ABoss_Mutant::Attack_OnOverlapEnd);

	}
}

void ABoss_Mutant::Attack()
{
	switch (AttackNumber)
	{
	case 1:
		AttackSwing();
		break;

	case 2:
		AttackFire();
		break;

	case 3:
		AttackPunch();
		break;

	case 4:
		AttackRoarDebuffSlow();
		break;

	case 5:
		AttackSpecialPowerUp();
		break;

	case 6:
		AttackAround();
		break;

	case 7:
		AttackSpawnEnemy();
		break;

	default:
		break;
	}
}
 
void ABoss_Mutant::AttackEnd()
{
	BossMutantMovement = EBossMutantMovementStatus::BMMS_Idle;
}


void ABoss_Mutant::AttackPatern()
{
	if (BossMutantMovement != EBossMutantMovementStatus::BMMS_Attacking)
	{
		AttackNumber = FMath::RandRange(3, 3);	//1~7패턴 랜덤 등장
		Attack();
	}
}

void ABoss_Mutant::AttackSwing()
{

	if (bCanAttack)	//범위 안일때만 공격
	{
		NowDamage = CombatDamageList[0];	//데미지 수정
		aiController->StopMovement();
		BossMutantMovement = EBossMutantMovementStatus::BMMS_Attacking;

		//((ABoss_Mutant_AttackCollision*)AttackCol->GetChildActor())->AttackSwing();
		AttackMotion(FName("SwingAttack"), 1.f);
	}

}
 
void ABoss_Mutant::AttackFire()
{
	BossMutantMovement = EBossMutantMovementStatus::BMMS_Attacking;
	aiController->StopMovement();

	FVector SpawnLoc = FireBallStartPos->GetComponentLocation();

	FRotator rot = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), CombatTarget->GetActorLocation());

	UObject* FireBall = GetWorld()->SpawnActor<UObject>(FireBallBP, SpawnLoc, rot);

	AttackMotion(FName("FireAttack"), 1.f);
}


void ABoss_Mutant::AttackPunch()
{
	if (bCanAttack)	//범위 안일때만 공격
	{
		NowDamage = CombatDamageList[0];	//데미지 수정

		BossMutantMovement = EBossMutantMovementStatus::BMMS_Attacking;

		//((ABoss_Mutant_AttackCollision*)AttackCol->GetChildActor())->AttackSwing();
		AttackMotion(FName("PunchAttack"), 1.f);
	}
}

void ABoss_Mutant::AttackRoarDebuffSlow()
{
	BossMutantMovement = EBossMutantMovementStatus::BMMS_Attacking;

	if (theParticleList.Num() > 0)
	{

		//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticles, HitPos->GetComponentLocation(), FRotator(0.f), false);

	}

	AttackMotion(FName("RoaringAttack"), 1.f);
}

void ABoss_Mutant::AttackSpecialPowerUp()
{
	BossMutantMovement = EBossMutantMovementStatus::BMMS_Attacking;

	AttackMotion(FName("SpecialAttack"), 1.f);
}

void ABoss_Mutant::AttackAround()
{
	BossMutantMovement = EBossMutantMovementStatus::BMMS_Attacking;

	AttackMotion(FName("SpecialAttack_2"), 1.f);
}

void ABoss_Mutant::AttackSpawnEnemy()
{
	BossMutantMovement = EBossMutantMovementStatus::BMMS_Attacking;

	AttackMotion(FName("SpecialAttack_3"), 1.f);
}



void ABoss_Mutant::AttackRange_OnOverlapBegin(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor)
	{
		IInterfaceLifeEntity* theP = Cast<IInterfaceLifeEntity>(OtherActor);
		if (theP)
		{
			if (theP->InterfaceGetMyID() == DDPlayer)
			{
				bCanAttack = true;
			}
		}
	}
}

void ABoss_Mutant::AttackRange_OnOverlapEnd(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor)
	{
		IInterfaceLifeEntity* theP = Cast<IInterfaceLifeEntity>(OtherActor);
		if (theP)
		{
			if (theP->InterfaceGetMyID() == DDPlayer)
			{
				bCanAttack = false;
			}
		}
	}
}




void ABoss_Mutant::InterfaceTakeDamage(float _Damage, FVector EnemyVec, FVector HitReactVec)
{
	TaketheDamage(_Damage);
	HitReact(HitReactVec);
	HitReact_Sound();
}

int ABoss_Mutant::InterfaceGetMyID()
{
	return DDEnemy;
} 


void ABoss_Mutant::Attack_OnOverlapBegin(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor)
	{
		IInterfaceLifeEntity* theP = Cast<IInterfaceLifeEntity>(OtherActor);
		if (theP)
		{
			if (theP->InterfaceGetMyID() == DDPlayer)	//플레이어 인 경우 체크
			{
				theP->InterfaceTakeDamage(NowDamage, GetActorLocation(), { 0,0,0 });
			}
		}
	}
}

void ABoss_Mutant::Attack_OnOverlapEnd(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
}

void ABoss_Mutant::TaketheDamage(float _Damage)
{
	if (!bItsDead)	//살아있을 때만 적용
	{
		BossMutantMovement = EBossMutantMovementStatus::BMMS_Hit;

		Super::TaketheDamage(_Damage);	//죽은 걸로 바뀔수 있기때문에 if문 한번 더 적용

		if (!bItsDead)	//살아있을 때만 적용
		{
			UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
			if (AnimInstance)
			{
				//몽타주 실행
				AnimInstance->Montage_Play(CombatMontage, 0.3f);
				AnimInstance->Montage_JumpToSection(FName("Hit"), CombatMontage);
			}
		}
	}
}




void ABoss_Mutant::ActiveCollision(int collNumber)
{
	//((ABoss_Mutant_AttackCollision*)AttackCol->GetChildActor())->ActiveCollision(collNumber);

	CombatCollisionList[collNumber]->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void ABoss_Mutant::DeActiveCollision(int collNumber)
{
	//((ABoss_Mutant_AttackCollision*)AttackCol->GetChildActor())->DeActiveCollision(collNumber);

	CombatCollisionList[collNumber]->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ABoss_Mutant::AttackMotion(FName _name, float _Speed)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		AnimInstance->Montage_Play(CombatMontage, _Speed);
		AnimInstance->Montage_JumpToSection(_name, CombatMontage);
	}
}

void ABoss_Mutant::BossHealthBarShowUp()
{
	AMainPlayerController* myController = Cast<AMainPlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	myController->BossHealthBarShowUp();
}