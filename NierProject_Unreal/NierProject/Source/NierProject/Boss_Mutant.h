// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "NierProject/InterfaceLifeEntity.h"
#include "GameFramework/Character.h"
#include "Boss_Mutant.generated.h"

//���� �̸� ����
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
	class USphereComponent* AttackAbleAround;	//���� ��� ����

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	class USceneComponent* FireBallStartPos;	// �� ���� ���� ����

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	USceneComponent* RoarStartPos;	// ��ȿ(�����) ���� ���� ����


	//���� ��� ������ ���� ���
	UFUNCTION()
	void AttackRange_OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION()
	void AttackRange_OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	bool bCanAttack = false; //���� ����




	///////////////// �������̽� ////////////////////

	virtual void InterfaceTakeDamage(float _Damage, FVector EnemyVec, FVector HitReactVec) override;

	virtual int InterfaceGetMyID() override;

	///////////////////////////////////////////





	///////////////// ���� ////////////////////

	UPROPERTY(EditAnywhere, Category = "ParticleList")
	TArray<class UParticleSystem*> theParticleList;

	TArray<class UBoxComponent*> CombatCollisionList;

	TArray<float> CombatDamageList;	//�� ���ݴ� ������

	float NowDamage = 1.f; //���� ������ ������ ����

	UPROPERTY(EditAnywhere, Category = "CombatCollision")
	class UBoxComponent* coll_1;
	UPROPERTY(EditAnywhere, Category = "CombatCollision")
	class UBoxComponent* coll_2;
	UPROPERTY(EditAnywhere, Category = "CombatCollision")
	class UBoxComponent* coll_3;
	UPROPERTY(EditAnywhere, Category = "CombatCollision")
	class UBoxComponent* coll_4;
	void InitAttackColl();

	//���� �ݶ��̴��� ����(����)
	UFUNCTION()
	void Attack_OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION()
	void Attack_OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	///////////////////////////////////////////






	///////////////// �ǰ� ////////////////////

	virtual void TaketheDamage(float _Damage) override;

	///////////////////////////////////////////








	///////////////// ���� ////////////////////

	UFUNCTION(BlueprintCallable)
	void ActiveCollision(int collNumber);

	UFUNCTION(BlueprintCallable)
	void DeActiveCollision(int collNumber);


	FTimerHandle AttackTimer;	//���� Ÿ�̸� - 3�ʿ� �ѹ��� ������ ����ȴ�.
	
	int AttackNumber;		//1~7���� ���� ����

	void Attack();

	UFUNCTION(BlueprintCallable)
	void AttackEnd();

	void AttackPatern();		//3�ʸ��� �������� ����

	//UPROPERTY(EditAnywhere, Category = "Attack")
	//class UChildActorComponent* AttackCol;		//����� BP���� ����

	void AttackMotion(FName _name, float _Speed);

	void AttackSwing();
	void AttackFire();
	void AttackPunch();
	void AttackRoarDebuffSlow();
	void AttackSpecialPowerUp();
	void AttackAround();
	void AttackSpawnEnemy();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FireBall")
	TSubclassOf<class UObject> FireBallBP;	// �� ���� ��

	///////////////////////////////////////////

};
