// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EnemyHealthBarWidget.generated.h"

/**
 * 
 */
UCLASS()
class NIERPROJECT_API UEnemyHealthBarWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	void Show(bool bOnOff);	//체력바 보이기

	UFUNCTION(BlueprintCallable)
	FName SetTargetText(bool bOnOff); //타겟 지정시 텍스트 지정

	UFUNCTION(BlueprintCallable)
	float HealthPercent();	//현재 체력 상황

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthValue")
	float MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthValue")
	float NowHealth;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TargetText")
	bool theTarget = false;
};
