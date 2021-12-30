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

	//���� �ҷ����� �� ��Ȱ��ȭ(�÷��̾ Ÿ������ �����ϸ� Ȱ��ȭ)
	EnemyHealthBarWidget = Cast<UEnemyHealthBarWidget>(EnemyHealthBarWidgetComp->GetUserWidgetObject());
	EnemyHealthBarWidget->Show(false);
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (itsTarget)
	{
		//ü�¹� ���� ����
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
	//1. Ȱ��ȭ -> ��Ȱ��ȭ �� ���� üũ
	if (itsTarget == true && bShowInfo == false) 
	{
		//�ǰ��� �Ȱ�� ���ʵ��� ���̰� Ȱ��ȭ
		if (MaxHealth / Health != 1.f)
		{
			GetWorldTimerManager().SetTimer(TimerShowOffHealthBar,this,&AEnemy::HealthBarOff,ShowoffHealthBarFloat,false);
		}

		//�ǰ��� �ȵȰ�� �ٷ� ��Ȱ��ȭ
		else
		{
			HealthBarOff();
		}
	}

	//2. �ƴҰ�� ����
	else
	{
		//���� Ÿ���� ��� ü�¹ٰ� ���δ�.
		if (bShowInfo)
		{
			HealthBarOn();
		}
		else
		{
			HealthBarOff();
		}
	}

	//3. ����
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

	//���� Ÿ������ �����Ǿ��ְ�, ���� �״´ٸ� �÷��̾� LockOn��� ����
	ACharacter* WorldPlayer = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	AMyMainCharacter* Player = Cast<AMyMainCharacter>(WorldPlayer);
	if (itsTarget && Player != nullptr)
	{
		Player->LookattheLockOnTargetOff();
	}
}