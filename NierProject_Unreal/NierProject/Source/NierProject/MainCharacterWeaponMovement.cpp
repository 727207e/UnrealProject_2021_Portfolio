// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacterWeaponMovement.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
AMainCharacterWeaponMovement::AMainCharacterWeaponMovement()
{

	LookSpeed_TargetAttacking = 45.0f;
	LookAtDeltaCountLimit = 1.f;

	//�� ����� ���� �ӵ�
	VAttackSpeed.Add(0.f);
	VAttackSpeed.Add(1.5f);
	VAttackSpeed.Add(2.2f);

	////////��� �ʱ�ȭ////////

	InitNoWeaponMovement();

	///////////////////////////////

	////////�μ� ��� �ʱ�ȭ////////

	InitGreatSwordAttackMovement();

	///////////////////////////////

	////////�Ѽ� �� �ʱ�ȭ//////// 

	InitOneHandSwordAttackMovement();

	///////////////////////////////

}

void AMainCharacterWeaponMovement::Attack(bool bIsStrongAttack, float _ComboNumber)
{	
	//����, Status�� Normal�� �������ִ� �κ��� 
	//AttackMong ���� ���� ������ �κ��� 
	//EndAttack ��Ƽ���̿��� Normal�� ����ǵ��� ������ (BP����)

	//���� Ÿ�Դ�� ���� ����
	if (VAttackTypeStruct[NowMyAttackType].CombatMontage)
	{
		if (AnimInstance)
		{
			AnimInstance->Montage_Play(VAttackTypeStruct[NowMyAttackType].CombatMontage, VAttackSpeed[NowMyAttackType]);

			if (!bIsStrongAttack)	//�����
			{
				AnimInstance->Montage_JumpToSection(VAttackTypeStruct[NowMyAttackType].AttackComboNumber[VAttackTypeStruct[NowMyAttackType].AttackCount], 
					VAttackTypeStruct[NowMyAttackType].CombatMontage);
			}

			else if (bIsStrongAttack && _ComboNumber == -1.f)	//������
			{
				AnimInstance->Montage_JumpToSection(VAttackTypeStruct[NowMyAttackType].AttackStrongComboNumber[VAttackTypeStruct[NowMyAttackType].AttackCount], 
					VAttackTypeStruct[NowMyAttackType].CombatMontage);
			}

			else		//�޺�����, Ư������
			{
				//�߸��� ���� ��Ʈ(�����˿��� �޸��� �����̴� ����. ������ ȣ��� ���)
				if (_ComboNumber + 1 > VAttackTypeStruct[NowMyAttackType].SpecialAttackNumber.Num())
				{
					Attack(false,-1);
				}
				//���� ���
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
	//ȸ���ð� �Ϻθ� ���(�ִϸ��̼� ����, ���� Following ����� ����)
	//�ʱ�ȭ�� NextComboOn �Լ��ȿ���

	FRotator InterpRotation = {0,0,0};

	if (LookAtDeltaCount <= LookAtDeltaCountLimit)
	{
		LookAtDeltaCount += _DeltaTime;

		//�÷��̾� ��ġ ��ǥ
		//FVector MyActorLocation = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetActorLocation();
		//
		theTargetLoc.Z = MyActorLocation.Z; // Target�� ���� �Ʒ��� �־ ������ �����Ѵ�

		FRotator LookAt = UKismetMathLibrary::FindLookAtRotation(MyActorLocation, theTargetLoc);

		InterpRotation = UKismetMathLibrary::RInterpTo(MyActorRotation, LookAt, _DeltaTime, LookSpeed_TargetAttacking);

	}

	return InterpRotation;
}

void AMainCharacterWeaponMovement::InitNoWeaponMovement()
{
	FAttackTypeStruct attackType_0;	//���
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
	FAttackTypeStruct attackType_1;	//�μ� ���(Great sword)
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
	FAttackTypeStruct attackType_2;	//�μ� ���(Great sword)
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