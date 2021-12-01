// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LifeEntity.h"
#include "Enemy.generated.h"

UCLASS()
class NIERPROJECT_API AEnemy : public ALifeEntity
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
