// Fill out your copyright notice in the Description page of Project Settings.


#include "MinionMeleeCoreDawn_Enemy.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "MyMainCharacter.h"
#include "AIController.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"

AMinionMeleeCoreDawn_Enemy::AMinionMeleeCoreDawn_Enemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AgroSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AgroSphere"));
	AgroSphere->SetupAttachment(GetRootComponent());
	AgroSphere->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldDynamic, ECollisionResponse::ECR_Ignore);
	AgroSphere->InitSphereRadius(1000.f);
	
	CombatCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CombatCollision"));
	CombatCollision->SetupAttachment(GetMesh(), FName("weapon_sword_r")); //무기에 콜리더 

	CombatSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CombatSphere"));
	CombatSphere->SetupAttachment(GetRootComponent());
	CombatSphere->InitSphereRadius(150.f);

	Health = 75.f;
	MaxHealth = 100.f;
	Damage = 10.f;

	Damage = 25.f;

	AttackMinTime = 0.1f;
	AttackMaxTime = 1.0f;

	EnemyMovementStatus = EEnemyMovementStatus::EMS_Idle;

	GetCharacterMovement()->MaxWalkSpeed = 450.f;
}

// Called when the game starts or when spawned
void AMinionMeleeCoreDawn_Enemy::BeginPlay()
{
	Super::BeginPlay();
	
	aiController = Cast<AAIController>(GetController());

	AgroSphere->OnComponentBeginOverlap.AddDynamic(this, &AMinionMeleeCoreDawn_Enemy::AgroSphereOnOverlapBegin);
	AgroSphere->OnComponentEndOverlap.AddDynamic(this, &AMinionMeleeCoreDawn_Enemy::AgroSphereOnOverlapEnd);

	CombatSphere->OnComponentBeginOverlap.AddDynamic(this, &AMinionMeleeCoreDawn_Enemy::CombatSphereOnOverlapBegin);
	CombatSphere->OnComponentEndOverlap.AddDynamic(this, &AMinionMeleeCoreDawn_Enemy::CombatSphereOnOverlapEnd);

	CombatCollision->OnComponentBeginOverlap.AddDynamic(this, &AMinionMeleeCoreDawn_Enemy::CombatOnOverlapBegin);
	CombatCollision->OnComponentEndOverlap.AddDynamic(this, &AMinionMeleeCoreDawn_Enemy::CombatOnOnverlapEnd);

	//Pawn과 상호작용하게 설정 (무기 콜리전과 공격 범위 콜리전)
	CombatCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	CombatCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	CombatCollision->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	CombatCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision); //콜리전 끄기(이후 특정상황에만 활성화)

	CombatSphere->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	CombatSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	CombatSphere->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
}

void AMinionMeleeCoreDawn_Enemy::CombatOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor)
	{
		AMyMainCharacter* Player = Cast<AMyMainCharacter>(OtherActor);
		if (Player)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, "Enemy : Player_Hit!");
			Player->TaketheDamage(Damage);
		}
	}
}

void AMinionMeleeCoreDawn_Enemy::CombatOnOnverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {

}


void AMinionMeleeCoreDawn_Enemy::AgroSphereOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult) {
	
	if (OtherActor && Alive())
	{
		AMyMainCharacter* Main = Cast<AMyMainCharacter>(OtherActor);
		if (Main)
		{
			//타겟(유저) 쫓아가기
			SetEnemyMovementStatus(EEnemyMovementStatus::EMS_MoveToTarget);
			MoveToTarget(Main);
		}
	}
}

void AMinionMeleeCoreDawn_Enemy::MoveToTarget(class AMyMainCharacter* Target) {

	if (aiController) {

		FAIMoveRequest MoveRequest;
		MoveRequest.SetGoalActor(Target);
		MoveRequest.SetAcceptanceRadius(10.0f);

		FNavPathSharedPtr NavPath;

		aiController->MoveTo(MoveRequest, &NavPath);

		////* 적이 쫓아오는 경로 디버깅
		////auto PathPoints = NavPath->GetPathPoints();
		//TArray<FNavPathPoint> PathPoints = NavPath->GetPathPoints();
		//for (auto Point : PathPoints) {

		//	FVector Location = Point.Location;

		//	UKismetSystemLibrary::DrawDebugSphere(this, Location, 25.f, 8, FLinearColor::Green,
		//		10.f, 1.5f);
		//}
	}
}

void AMinionMeleeCoreDawn_Enemy::AgroSphereOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {

	if (OtherActor)
	{
		AMyMainCharacter* Main = Cast<AMyMainCharacter>(OtherActor);
		if (Main)
		{
			//그만 쫓아가기
			SetEnemyMovementStatus(EEnemyMovementStatus::EMS_Idle);
			if (aiController)
			{
				aiController->StopMovement();
			}

			//타겟 해제
			CombatTarget = nullptr;
		}
	}
}

void AMinionMeleeCoreDawn_Enemy::CombatSphereOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult) {

	if (OtherActor && Alive())
	{
		AMyMainCharacter* Main = Cast<AMyMainCharacter>(OtherActor);
		if (Main)
		{
			//범위 안으로 들어온다(트리거)
			bOverlappingCombatSphere = true;

			//정지
			aiController->StopMovement();

			//타겟 지정
			CombatTarget = Main;

			//적군 랜덤 시간에 공격
			AttackTime = FMath::FRandRange(AttackMinTime, AttackMaxTime);
			GetWorldTimerManager().SetTimer(AttackTimer, this, &AMinionMeleeCoreDawn_Enemy::Attack, AttackTime);
		}
	}
}

void AMinionMeleeCoreDawn_Enemy::CombatSphereOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherComp)
	{
		AMyMainCharacter* Main = Cast<AMyMainCharacter>(OtherActor);
		{
			if (Main)
			{
				//공격중이 아닐때, Target이 범위 밖으로 나가면 쫓아간다.(공격중일땐 안쫓아감)
				if (!bAttacking)
				{
					MoveToTarget(Main);
				}
				bOverlappingCombatSphere = false; //Target이 범위 밖으로 나갔다고 알림

				//HUD 부분
				/*
				if (Main->MainPlayerController)
				{
					USkeletalMeshComponent* MainMesh = Cast<USkeletalMeshComponent>(OtherComp);
					if (MainMesh) Main->MainPlayerController->RemoveEnemyHealthBar();
				}
				*/

				GetWorldTimerManager().ClearTimer(AttackTimer);
			}
		}
	}
}



bool AMinionMeleeCoreDawn_Enemy::Alive()
{
	return GetEnemyMovementStatus() != EEnemyMovementStatus::EMS_Dead;
}

void AMinionMeleeCoreDawn_Enemy::Attack()
{
	if (Alive())
	{
		if (aiController)
		{
			SetEnemyMovementStatus(EEnemyMovementStatus::EMS_Attacking);
		}
		if (!bAttacking)
		{
			bAttacking = true;
			UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
			if (AnimInstance)
			{
				//공격 몽타주 실행
				AnimInstance->Montage_Play(CombatMontage, 0.8f);
				AnimInstance->Montage_JumpToSection(FName("Attack"), CombatMontage);
			}
		}
	}
}

void AMinionMeleeCoreDawn_Enemy::AttackEnd()
{
	bAttacking = false;

	//공격이 끝나고 범위밖으로 Target이 나가면 쫓아간다.
	if (!bOverlappingCombatSphere)
	{
		MoveToTarget(CombatTarget);
	}

	//도망간게 아니면 다음 공격 준비
	else
	{

		AttackTime = FMath::FRandRange(AttackMinTime, AttackMaxTime);

		float TimeCheck = GetWorld()->GetDeltaSeconds(); //델타타임 가져옴
		TotalTimeCheck = 0;

		GetWorld()->GetTimerManager().SetTimer(LookAtHandle, FTimerDelegate::CreateLambda([&]()
		{
			TimeCheck = GetWorld()->GetDeltaSeconds(); //델타타임 가져옴
			TotalTimeCheck += TimeCheck; //누적시간

			/////공격이 끝나고 플레이어(Target)을 처다보기
			FVector TargetLot = CombatTarget->GetActorLocation();
			TargetLot.Z = GetActorLocation().Z;

			FRotator Rot = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), TargetLot);

			SetActorRotation(Rot);
			/////

			//AttackTime(다음 공격 시간) 이후 초기화
			if (TotalTimeCheck >= AttackTime)
			{
				//초기화
				GetWorld()->GetTimerManager().ClearTimer(LookAtHandle); 
			}
		}), TimeCheck, true, 0.f);


		GetWorldTimerManager().SetTimer(AttackTimer, this, &AMinionMeleeCoreDawn_Enemy::Attack, AttackTime);
	}
}

void AMinionMeleeCoreDawn_Enemy::ActivateCollison()
{
	CombatCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly); //콜리전 키기
}


void AMinionMeleeCoreDawn_Enemy::DeActivateCollison()
{
	CombatCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision); //콜리전 끄기
}

void AMinionMeleeCoreDawn_Enemy::TaketheDamage(float _Damage)
{
	EnemyMovementStatus = EEnemyMovementStatus::EMS_Hit;

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		//공격 몽타주 실행
		AnimInstance->Montage_Play(CombatMontage, 0.5f);
		AnimInstance->Montage_JumpToSection(FName("Hit"), CombatMontage);
	}

	UE_LOG(LogTemp, Warning, TEXT("its Minion"));
	Super::TaketheDamage(_Damage);
}

void AMinionMeleeCoreDawn_Enemy::HitReactEnd()
{
	EnemyMovementStatus = EEnemyMovementStatus::EMS_Idle;
	AttackEnd();
}