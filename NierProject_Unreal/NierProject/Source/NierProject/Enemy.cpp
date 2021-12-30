// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "MyMainCharacter.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"
#include "EnemyHealthBarWidget.h"
#include "MyMainCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	LifeEntityinitialize();

	EnemyHealthBarWidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBarWidget"));
	EnemyHealthBarWidgetComp->SetupAttachment(RootComponent);

	TargetLookPos = CreateDefaultSubobject< USceneComponent>(TEXT("TargetLookPosition"));
	TargetLookPos->SetupAttachment(GetRootComponent());

}

void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	//위젯 불러오기 및 비활성화(플레이어가 타겟으로 지정하면 활성화)
	EnemyHealthBarWidget = Cast<UEnemyHealthBarWidget>(EnemyHealthBarWidgetComp->GetUserWidgetObject());
	EnemyHealthBarWidget->Show(false);
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (itsTarget)
	{
		//체력바 정보 갱신
		EnemyHealthBarWidget->MaxHealth = MaxHealth;
		EnemyHealthBarWidget->NowHealth = Health;

	}
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::TaketheDamage(float _Damage)
{
	Super::TaketheDamage(_Damage);
}

void AEnemy::BPTaketheDamage(float _Damage)
{
	TaketheDamage(_Damage);
}

void AEnemy::TargetShowInfo(bool bShowInfo)
{
	//1. 활성화 -> 비활성화 된 상태 체크
	if (itsTarget == true && bShowInfo == false) 
	{
		//피격이 된경우 몇초동안 보이게 활성화
		if (MaxHealth / Health != 1.f)
		{
			GetWorldTimerManager().SetTimer(TimerShowOffHealthBar,this,&AEnemy::HealthBarOff,ShowoffHealthBarFloat,false);
		}

		//피격이 안된경우 바로 비활성화
		else
		{
			HealthBarOff();
		}
	}

	//2. 아닐경우 진행
	else
	{
		//내가 타겟일 경우 체력바가 보인다.
		if (bShowInfo)
		{
			HealthBarOn();
		}
		else
		{
			HealthBarOff();
		}
	}

	//3. 변경
	itsTarget = bShowInfo;
}

void AEnemy::HealthBarOn()
{
	EnemyHealthBarWidget->Show(true);
}

void AEnemy::HealthBarOff()
{
	EnemyHealthBarWidget->Show(false);
}

void AEnemy::Die()
{
	Super::Die();

	EnemyHealthBarWidget->NowHealth = 0;

	//내가 타겟으로 지정되어있고, 내가 죽는다면 플레이어 LockOn기능 해제
	ACharacter* WorldPlayer = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	AMyMainCharacter* Player = Cast<AMyMainCharacter>(WorldPlayer);
	if (itsTarget && Player != nullptr)
	{
		Player->LookattheLockOnTargetOff();
	}
}