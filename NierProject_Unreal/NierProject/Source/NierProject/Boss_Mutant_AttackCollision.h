// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NierProject/InterfaceLifeEntity.h"
#include "Boss_Mutant_AttackCollision.generated.h"




UCLASS()
class NIERPROJECT_API ABoss_Mutant_AttackCollision : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoss_Mutant_AttackCollision();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};