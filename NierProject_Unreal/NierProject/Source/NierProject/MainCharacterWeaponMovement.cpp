// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacterWeaponMovement.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
AMainCharacterWeaponMovement::AMainCharacterWeaponMovement()
{

	LookSpeed_TargetAttacking = 45.0f;
	LookAtDeltaCountLimit = 1.f;

	//각 무기당 공격 속도
	VAttackSpeed.Add(0.f);
	VAttackSpeed.Add(1.5f);
	VAttackSpeed.Add(2.2f);

	////////빈손 초기화////////

	InitNoWeaponMovement();

	///////////////////////////////

	////////두손 대검 초기화////////

	InitGreatSwordAttackMovement();

	///////////////////////////////

	////////한손 검 초기화//////// 

	InitOneHandSwordAttackMovement();

	///////////////////////////////

}

void AMainCharacterWeaponMovement::Attack(bool bIsStrongAttack, float _ComboNumber)
{	
	//이후, Status를 Normal로 변경해주는 부분은 
	//AttackMong 에서 전투 끝나는 부분의 
	//EndAttack 노티파이에서 Normal로 변경되도록 정의함 (BP내용)

	//무기 타입대로 공격 진행
	if (VAttackTypeStruct[NowMyAttackType].CombatMontage)
	{
		if (AnimInstance)
		{
			AnimInstance->Montage_Play(VAttackTypeStruct[NowMyAttackType].CombatMontage, VAttackSpeed[NowMyAttackType]);

			if (!bIsStrongAttack)	//약공격
			{
				AnimInstance->Montage_JumpToSection(VAttackTypeStruct[NowMyAttackType].AttackComboNumber[VAttackTypeStruct[NowMyAttackType].AttackCount], 
					VAttackTypeStruct[NowMyAttackType].CombatMontage);
			}

			else if (bIsStrongAttack && _ComboNumber == -1.f)	//강공격
			{
				AnimInstance->Montage_JumpToSection(VAttackTypeStruct[NowMyAttackType].AttackStrongComboNumber[VAttackTypeStruct[NowMyAttackType].AttackCount], 
					VAttackTypeStruct[NowMyAttackType].CombatMontage);
			}

			else		//콤보공격, 특수공격
			{
				//잘못된 공격 루트(소형검에는 달리는 공격이능 없음. 하지만 호출된 경우)
				if (_ComboNumber + 1 > VAttackTypeStruct[NowMyAttackType].SpecialAttackNumber.Num())
				{
					Attack(false,-1);
				}
				//옳은 경로
				else
				{
					AnimInstance->Montage_JumpToSection(VAttackTypeStruct[NowMyAttackType].SpecialAttackNumber[_ComboNumber],
						VAttackTypeStruct[NowMyAttackType].CombatMontage);
				}
			}
		}
	}
}


FRotator AMainCharacterWeaponMovement::LookAtTargetWhenAttacking(float _DeltaTime, FVector theTargetLoc,FVector MyActorLocation, FRotator MyActorRotation)
{
	//회전시간 일부를 허용(애니메이션 버그, 과한 Following 등등의 이유)
	//초기화는 NextComboOn 함수안에서

	FRotator InterpRotation = {0,0,0};

	if (LookAtDeltaCount <= LookAtDeltaCountLimit)
	{
		LookAtDeltaCount += _DeltaTime;

		//플레이어 위치 좌표
		//FVector MyActorLocation = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetActorLocation();
		//
		theTargetLoc.Z = MyActorLocation.Z; // Target이 위나 아래에 있어도 정면을 공격한다

		FRotator LookAt = UKismetMathLibrary::FindLookAtRotation(MyActorLocation, theTargetLoc);

		InterpRotation = UKismetMathLibrary::RInterpTo(MyActorRotation, LookAt, _DeltaTime, LookSpeed_TargetAttacking);

	}

	return InterpRotation;
}

void AMainCharacterWeaponMovement::InitNoWeaponMovement()
{
	FAttackTypeStruct attackType_0;	//빈손
	attackType_0.NextComboOnOffTrigger = false;
	attackType_0.AttackCount = 0;
	attackType_0.AttackComboNumber = {};
	attackType_0.AttackStrongComboNumber = {};
	attackType_0.SpecialAttackNumber = {};

	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE
	(TEXT("/Game/Character/MyMainChar/Animation/GreatSword/GreatAttackMong.GreatAttackMong"));

	if (ATTACK_MONTAGE.Succeeded())
	{
		attackType_0.CombatMontage = ATTACK_MONTAGE.Object;
	}

	VAttackTypeStruct.Add(attackType_0);
}

void AMainCharacterWeaponMovement::InitGreatSwordAttackMovement()
{
	FAttackTypeStruct attackType_1;	//두손 대검(Great sword)
	attackType_1.NextComboOnOffTrigger = false;
	attackType_1.AttackCount = 0;
	attackType_1.AttackComboNumber = { "Attack_1", "Attack_2", "Attack_3" };
	attackType_1.AttackStrongComboNumber = { "Attack_Strong_1" };
	attackType_1.SpecialAttackNumber = { "combo_1", "SlideAttack" };

	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE
	(TEXT("/Game/Character/MyMainChar/Animation/GreatSword/GreatAttackMong.GreatAttackMong"));

	if (ATTACK_MONTAGE.Succeeded())
	{
		attackType_1.CombatMontage = ATTACK_MONTAGE.Object;
	}

	VAttackTypeStruct.Add(attackType_1);
}

void AMainCharacterWeaponMovement::InitOneHandSwordAttackMovement()
{
	FAttackTypeStruct attackType_2;	//두손 대검(Great sword)
	attackType_2.NextComboOnOffTrigger = false;
	attackType_2.AttackCount = 0;
	attackType_2.AttackComboNumber = { "Attack_1", "Attack_2"};
	attackType_2.AttackStrongComboNumber = { "StrongAttack" };
	attackType_2.SpecialAttackNumber = { "combo_1"};

	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE
	(TEXT("/Game/Character/MyMainChar/Animation/OneHandSword/OneHandSwordAttackMon.OneHandSwordAttackMon"));

	if (ATTACK_MONTAGE.Succeeded())
	{
		attackType_2.CombatMontage = ATTACK_MONTAGE.Object;
	}

	VAttackTypeStruct.Add(attackType_2);
}



bool AMainCharacterWeaponMovement::NextAttackPosibile()
{
	if (VAttackTypeStruct[NowMyAttackType].NextComboOnOffTrigger && 
		VAttackTypeStruct[NowMyAttackType].AttackCount < 
		VAttackTypeStruct[NowMyAttackType].AttackComboNumber.Num() - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool AMainCharacterWeaponMovement::NextStrongAttackComboPosibile()
{
	if (VAttackTypeStruct[NowMyAttackType].NextComboOnOffTrigger && 
		VAttackTypeStruct[NowMyAttackType].AttackCount == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void AMainCharacterWeaponMovement::ComboAttackOn()
{
	VAttackTypeStruct[NowMyAttackType].AttackCount++;
	VAttackTypeStruct[NowMyAttackType].NextComboOnOffTrigger = false;
}


void AMainCharacterWeaponMovement::NextComboOn()
{
	VAttackTypeStruct[NowMyAttackType].NextComboOnOffTrigger = true;
	LookAtDeltaCount = 0.f;
}

void AMainCharacterWeaponMovement::NextComboOff()
{
	VAttackTypeStruct[NowMyAttackType].NextComboOnOffTrigger = false;
	VAttackTypeStruct[NowMyAttackType].AttackCount = 0;
}

bool AMainCharacterWeaponMovement::GetNowNextComboOnOffTrigger()
{
	return VAttackTypeStruct[NowMyAttackType].NextComboOnOffTrigger;
}

int AMainCharacterWeaponMovement::GetNowAttackCount()
{
	return VAttackTypeStruct[NowMyAttackType].AttackCount;
}

void AMainCharacterWeaponMovement::ResetNowAttack()
{
	VAttackTypeStruct[NowMyAttackType].NextComboOnOffTrigger = false;
	VAttackTypeStruct[NowMyAttackType].AttackCount = 0;
}