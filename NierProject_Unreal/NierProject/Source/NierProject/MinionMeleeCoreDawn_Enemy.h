// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "MinionMeleeCoreDawn_Enemy.generated.h"

/**
 * 
 */
UCLASS()
class NIERPROJECT_API AMinionMeleeCoreDawn_Enemy : public AEnemy
{
	GENERATED_BODY()

public :

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	class UBoxComponent* CombatCollision;

	AMinionMeleeCoreDawn_Enemy();

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void CombatOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
	void CombatOnOnverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};
