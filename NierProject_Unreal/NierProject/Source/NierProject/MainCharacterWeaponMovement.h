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
	bool NextComboOnOffTrigger; //다음 콤보를 이어가기를 입력해둔 상태(On / Off)
	uint8 AttackCount; //번째 공격 넘버
	TArray<FName> AttackComboNumber;	//기본공격
	TArray<FName> AttackStrongComboNumber; //강공격
	TArray<FName> SpecialAttackNumber;	//콤보공격, 슬라이드공격 등의 특수공격

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "Anims")
	class UAnimMontage* CombatMontage; //GreatSword 공격 몽타주
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

	class UAnimInstance* AnimInstance;	//캐릭터 애니메이션 인스턴스

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;




	///////////////// 공격 중에 처다보기 ////////////////////
	FRotator LookAtTargetWhenAttacking(float _DeltaTime, FVector theTargetLoc,FVector MyActorLocation, FRotator MyActorRotation); // 공격하는 순간 적을 처다봄

	float LookAtDeltaCount = 0.f;
	float LookAtDeltaCountLimit = 0.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attack")
	float LookSpeed_TargetAttacking;
	///////////////////////////////////////////



	///////////////// 공격 함수 (전체 포함) ////////////////////
	void Attack(bool bIsStrongAttack, float _ComboNumber); //true->강공격, false->약공격  / -1 : 없음, 0 : 0번 ...

	bool NextAttackPosibile();	//다음 공격 가능
	bool NextStrongAttackComboPosibile();	//다음 공격(강) 가능
	void ComboAttackOn();	//콤보어택 활성화(onoffTrigger 초기화, 카운트 증가 등)

	//블루프린트에서 작동
	UFUNCTION(BlueprintCallable)
	void NextComboOn();	//콤보 가능 부분
	UFUNCTION(BlueprintCallable)
	void NextComboOff();	//콤보 불가능 부분

	void Init();	//초기화(MyMainCharacter.cpp에서 진행)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Montage")
	TArray<FAttackTypeStruct> VAttackTypeStruct;	//공격타입 구조체 배열

	void InitNoWeaponMovement();			//빈손 폼 초기화
	void InitGreatSwordAttackMovement();	//두손검 공격폼 초기화
	void InitOneHandSwordAttackMovement();	//한손검 공격폼 초기화

	int NowMyAttackType = 1;	//0 - 무기 없음, 1 - 두손 검(greatSword), 2 - 한손 검(oneHandSword)
	
	TArray<float> VAttackSpeed;	//각 무기당 공격 속도

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Montage")
	TArray<class UAnimMontage*> MontageArray;	//공격 몽타주 리스트(MyMainCharacter.cpp에서 값을 부여받음)
	///////////////////////////////////////////





	///////////////// 공격 함수 (특정 리턴 함수, 등등) ////////////////////
	bool GetNowNextComboOnOffTrigger();

	int GetNowAttackCount();
	
	void ResetNowAttack();	//현재 공격 모션 모두 초기화(OnOffTrigger , AttackCount, 등)
	
	///////////////////////////////////////////


};
