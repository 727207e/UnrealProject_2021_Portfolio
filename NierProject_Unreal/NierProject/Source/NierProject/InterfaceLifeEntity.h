// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InterfaceLifeEntity.generated.h"

#define DDPlayer 1
#define DDEnemy 2

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterfaceLifeEntity : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class NIERPROJECT_API IInterfaceLifeEntity
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION()
	virtual void InterfaceTakeDamage(float _Damage, FVector EnemyVec, FVector HitReactVec) = 0;
	
	UFUNCTION()
	virtual int InterfaceGetMyID() = 0;	//플레이어 = 1(DDPlayer) ; Enemy = 2(DDEnemy) ;

};
