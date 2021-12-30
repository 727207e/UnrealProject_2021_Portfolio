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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	virtual void TaketheDamage(float _Damage) override;

	UFUNCTION(BlueprintCallable)
	void BPTaketheDamage(float _Damage); //BP ȣ���


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Root")
	class USceneComponent* TargetLookPos;


	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Target")
	class UWidgetComponent* EnemyHealthBarWidgetComp;	//ü�¹� ������Ʈ(���� ����)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
	class UEnemyHealthBarWidget* EnemyHealthBarWidget;	//ü�¹�

	UPROPERTY(BlueprintReadOnly, Category = "Target")
	bool itsTarget = false;	//�ش� ���� Ÿ������ ������ ����

	//���ʵ��� ���ӵ� ü�¹� Ÿ�� �ڵ鷯
	FTimerHandle TimerShowOffHealthBar;
	float ShowoffHealthBarFloat = 3.f;

	void HealthBarOn();
	void HealthBarOff();

	UFUNCTION(BlueprintCallable)
	void TargetShowInfo(bool bShowInfo);	//MyMainCharacter Ŭ�������� ȣ��Ǵ� ������ ü�¹� Ȱ��ȭ �Լ�

	virtual void Die() override;
};
