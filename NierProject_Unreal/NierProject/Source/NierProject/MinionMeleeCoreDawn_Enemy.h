// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "NierProject/InterfaceLifeEntity.h"
#include "MinionMeleeCoreDawn_Enemy.generated.h"

/**
 *
 */


UENUM(BlueprintType)
enum class EEnemyMovementStatus :uint8 {
	EMS_Idle			UMETA(DisplayName = "Idle"),
	EMS_MoveToTarget	UMETA(DisplayName = "MoveToTarget"),
	EMS_Attacking		UMETA(DisplayName = "Attacking"),
	EMS_Dead			UMETA(DisplayName = "Dead"),
	EMS_Hit				UMETA(DisplayName = "Hit"),

	EMS_MAX				UMETA(DisplayName = "DefaultMax")

};

UCLASS()
class NIERPROJECT_API AMinionMeleeCoreDawn_Enemy : public AEnemy, public IInterfaceLifeEntity
{
	GENERATED_BODY()

public:

	FORCEINLINE void SetEnemyMovementStatus(EEnemyMovementStatus Status) { EnemyMovementStatus = Status; }
	FORCEINLINE EEnemyMovementStatus GetEnemyMovementStatus() { return EnemyMovementStatus; }

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MoveMent")
	EEnemyMovementStatus EnemyMovementStatus;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	class USphereComponent* AgroSphere;		//��׷� (������ ����� �i�ư�)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	USphereComponent* CombatSphere;			//���� ��� ���� (�����ȿ� ����� ������ ����)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	class UBoxComponent* CombatCollision;

	FTimerHandle AttackTimer;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	class UAnimMontage* CombatMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackMinTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackMaxTime;

	AMinionMeleeCoreDawn_Enemy();

protected:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void AgroSphereOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
	void AgroSphereOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void CombatSphereOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
	void CombatSphereOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION(BlueprintCallable)
	void CombatOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION(BlueprintCallable)
	void CombatOnOnverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	bool Alive();


	///////////////// �������̽� ////////////////////

	virtual void InterfaceTakeDamage(float _Damage, FVector EnemyVec, FVector HitReactVec) override;

	virtual int InterfaceGetMyID() override;

	///////////////////////////////////////////


	///////////////// ���� ////////////////////
	void Attack();

	UFUNCTION(BlueprintCallable)
	void AttackEnd();

	bool bAttacking = false;
	bool bOverlappingCombatSphere = false;

	FTimerHandle LookAtHandle;	//�������� �Ĵٺ��� ���� Ÿ�̸�
	float TotalTimeCheck;		//Ÿ�̸� �ð�

	float AttackTime;			//���� ���� ������ �ð�

	UFUNCTION(BlueprintCallable)
	void ActivateCollison();	//���� �ݸ��� On , Off

	UFUNCTION(BlueprintCallable)
	void DeActivateCollison();
	///////////////////////////////////////////


	///////////////// �ǰ� ////////////////////
	virtual void TaketheDamage(float _Damage) override;

	UFUNCTION(BlueprintCallable)
	void HitReactEnd();

	virtual void Die() override;

	UFUNCTION(BlueprintCallable)
	void Disappear();

	
	///////////////////////////////////////////


};