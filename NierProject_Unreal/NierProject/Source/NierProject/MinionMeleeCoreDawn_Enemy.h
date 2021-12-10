// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
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


	EMS_MAX				UMETA(DisplayName = "DefaultMax")

};

UCLASS()
class NIERPROJECT_API AMinionMeleeCoreDawn_Enemy : public AEnemy
{
	GENERATED_BODY()

public:

	FORCEINLINE void SetEnemyMovementStatus(EEnemyMovementStatus Status) { EnemyMovementStatus = Status; }
	FORCEINLINE EEnemyMovementStatus GetEnemyMovementStatus() { return EnemyMovementStatus; }

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MoveMent")
	EEnemyMovementStatus EnemyMovementStatus;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	class USphereComponent* AgroSphere;		//어그로 (공격할 대상을 쫒아감)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	USphereComponent* CombatSphere;			//공격 허용 범위 (범위안에 대상이 있으면 공격)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	class UBoxComponent* CombatCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	class AAIController* aiController;

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
	
	UFUNCTION(BlueprintCallable)
	void MoveToTarget(class AMyMainCharacter* Target);

	bool Alive();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
	AMyMainCharacter* CombatTarget;

	void Attack();

	UFUNCTION(BlueprintCallable)
	void AttackEnd();

	bool bAttacking = false;
	bool bOverlappingCombatSphere = false;
	
	UFUNCTION(BlueprintCallable)
	void ActivateCollison();

	UFUNCTION(BlueprintCallable)
	void DeActivateCollison();
};