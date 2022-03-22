// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "LifeEntity.h"
#include "GameFramework/Character.h"
#include "MainCharacterWeaponMovement.generated.h"

#define NoWeapon 0
#define GreatHand 1
#define OneHand 2



USTRUCT(Atomic, BlueprintType)
struct FAttackTypeStruct
{
	GENERATED_BODY()
public:
	bool NextComboOnOffTrigger; //���� �޺��� �̾�⸦ �Է��ص� ����(On / Off)
	uint8 AttackCount; //��° ���� �ѹ�
	TArray<FName> AttackComboNumber;	//�⺻����
	TArray<FName> AttackStrongComboNumber; //������
	TArray<FName> SpecialAttackNumber;	//�޺�����, �����̵���� ���� Ư������

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "Anims")
	class UAnimMontage* CombatMontage; //GreatSword ���� ��Ÿ��
};



UCLASS()
class NIERPROJECT_API AMainCharacterWeaponMovement : public ACharacter
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	AMainCharacterWeaponMovement();

protected:
public:	

	class UAnimInstance* AnimInstance;	//ĳ���� �ִϸ��̼� �ν��Ͻ�

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;




	///////////////// ���� �߿� ó�ٺ��� ////////////////////
	FRotator LookAtTargetWhenAttacking(float _DeltaTime, FVector theTargetLoc,FVector MyActorLocation, FRotator MyActorRotation); // �����ϴ� ���� ���� ó�ٺ�

	float LookAtDeltaCount = 0.f;
	float LookAtDeltaCountLimit = 0.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attack")
	float LookSpeed_TargetAttacking;
	///////////////////////////////////////////



	///////////////// ���� �Լ� (��ü ����) ////////////////////
	void Attack(bool bIsStrongAttack, float _ComboNumber); //true->������, false->�����  / -1 : ����, 0 : 0�� ...

	bool NextAttackPosibile();	//���� ���� ����
	bool NextStrongAttackComboPosibile();	//���� ����(��) ����
	void ComboAttackOn();	//�޺����� Ȱ��ȭ(onoffTrigger �ʱ�ȭ, ī��Ʈ ���� ��)

	//�������Ʈ���� �۵�
	UFUNCTION(BlueprintCallable)
	void NextComboOn();	//�޺� ���� �κ�
	UFUNCTION(BlueprintCallable)
	void NextComboOff();	//�޺� �Ұ��� �κ�

	void Init();	//�ʱ�ȭ(MyMainCharacter.cpp���� ����)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Montage")
	TArray<FAttackTypeStruct> VAttackTypeStruct;	//����Ÿ�� ����ü �迭

	void InitNoWeaponMovement();			//��� �� �ʱ�ȭ
	void InitGreatSwordAttackMovement();	//�μհ� ������ �ʱ�ȭ
	void InitOneHandSwordAttackMovement();	//�Ѽհ� ������ �ʱ�ȭ

	int NowMyAttackType = 1;	//0 - ���� ����, 1 - �μ� ��(greatSword), 2 - �Ѽ� ��(oneHandSword)
	
	TArray<float> VAttackSpeed;	//�� ����� ���� �ӵ�

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Montage")
	TArray<class UAnimMontage*> MontageArray;	//���� ��Ÿ�� ����Ʈ(MyMainCharacter.cpp���� ���� �ο�����)
	///////////////////////////////////////////





	///////////////// ���� �Լ� (Ư�� ���� �Լ�, ���) ////////////////////
	bool GetNowNextComboOnOffTrigger();

	int GetNowAttackCount();
	
	void ResetNowAttack();	//���� ���� ��� ��� �ʱ�ȭ(OnOffTrigger , AttackCount, ��)
	
	///////////////////////////////////////////


};
