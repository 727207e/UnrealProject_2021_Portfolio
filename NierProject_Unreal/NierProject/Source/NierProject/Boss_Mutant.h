// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "NierProject/InterfaceLifeEntity.h"
#include "GameFramework/Character.h"
#include "Boss_Mutant.generated.h"

//공격 이름 지정
#define Attack_Swing 1
#define Attack_Fire 2
#define Attack_Punch 3
#define Attack_Roar_Debuff_Slow 4
#define Attack_Special_PowerUp 5
#define Attack_Around 6
#define Attack_SpawnEnemy 7
//

UENUM(BlueprintType)
enum class EBossMutantMovementStatus :uint8 {
	BMMS_Idle			UMETA(DisplayName = "Idle"),
	BMMS_MoveToTarget	UMETA(DisplayName = "MoveToTarget"),
	BMMS_Attacking		UMETA(DisplayName = "Attacking"),
	BMMS_Dead			UMETA(DisplayName = "Dead"),
	BMMS_Hit			UMETA(DisplayName = "Hit"),

	BMMS_MAX			UMETA(DisplayName = "DefaultMax")

};




UCLASS()
class NIERPROJECT_API ABoss_Mutant : public AEnemy, public IInterfaceLifeEntity
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABoss_Mutant();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MoveMent")
	EBossMutantMovementStatus BossMutantMovement;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	class UAnimMontage* CombatMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	UAnimMontage* UtilMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	class USphereComponent* AttackAbleAround;	//공격 허용 범위

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	class USceneComponent* FireBallStartPos;	// 불 공격 시작 지점

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	USceneComponent* RoarStartPos;	// 포효(디버프) 공격 시작 지점


	//공격 허용 범위로 들어온 경우
	UFUNCTION()
	void AttackRange_OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION()
	void AttackRange_OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	bool bCanAttack = false; //공격 가능




	///////////////// 인터페이스 ////////////////////

	virtual void InterfaceTakeDamage(float _Damage, FVector EnemyVec, FVector HitReactVec) override;

	virtual int InterfaceGetMyID() override;

	///////////////////////////////////////////





	///////////////// 정의 ////////////////////

	UPROPERTY(EditAnywhere, Category = "ParticleList")
	TArray<class UParticleSystem*> theParticleList;

	TArray<class UBoxComponent*> CombatCollisionList;

	TArray<float> CombatDamageList;	//각 공격당 데미지

	float NowDamage = 1.f; //지금 공격의 데미지 지정

	UPROPERTY(EditAnywhere, Category = "CombatCollision")
	class UBoxComponent* coll_1;
	UPROPERTY(EditAnywhere, Category = "CombatCollision")
	class UBoxComponent* coll_2;
	UPROPERTY(EditAnywhere, Category = "CombatCollision")
	class UBoxComponent* coll_3;
	UPROPERTY(EditAnywhere, Category = "CombatCollision")
	class UBoxComponent* coll_4;
	void InitAttackColl();

	//공격 콜라이더에 닿음(공격)
	UFUNCTION()
	void Attack_OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION()
	void Attack_OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	///////////////////////////////////////////






	///////////////// 피격 ////////////////////

	virtual void TaketheDamage(float _Damage) override;

	///////////////////////////////////////////








	///////////////// 공격 ////////////////////

	UFUNCTION(BlueprintCallable)
	void ActiveCollision(int collNumber);

	UFUNCTION(BlueprintCallable)
	void DeActiveCollision(int collNumber);


	FTimerHandle AttackTimer;	//공격 타이머 - 3초에 한번씩 공격이 변경된다.
	
	int AttackNumber;		//1~7패턴 랜덤 등장

	void Attack();

	UFUNCTION(BlueprintCallable)
	void AttackEnd();

	void AttackPatern();		//3초마다 지정해줄 공격

	//UPROPERTY(EditAnywhere, Category = "Attack")
	//class UChildActorComponent* AttackCol;		//대상은 BP에서 지정

	void AttackMotion(FName _name, float _Speed);

	void AttackSwing();
	void AttackFire();
	void AttackPunch();
	void AttackRoarDebuffSlow();
	void AttackSpecialPowerUp();
	void AttackAround();
	void AttackSpawnEnemy();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FireBall")
	TSubclassOf<class UObject> FireBallBP;	// 불 공격 공

	///////////////////////////////////////////

};
