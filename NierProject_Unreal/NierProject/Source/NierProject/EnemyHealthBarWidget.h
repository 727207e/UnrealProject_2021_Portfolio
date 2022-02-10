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
	void Show(bool bOnOff);	//ü�¹� ���̱�

	UFUNCTION(BlueprintCallable)
	FName SetTargetText(bool bOnOff); //Ÿ�� ������ �ؽ�Ʈ ����

	UFUNCTION(BlueprintCallable)
	float HealthPercent();	//���� ü�� ��Ȳ

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthValue")
	float MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthValue")
	float NowHealth;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TargetText")
	bool theTarget = false;
};
