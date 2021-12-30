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
	void BPTaketheDamage(float _Damage); //BP 호출용


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Root")
	class USceneComponent* TargetLookPos;


	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Target")
	class UWidgetComponent* EnemyHealthBarWidgetComp;	//체력바 컴포넌트(정보 보유)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
	class UEnemyHealthBarWidget* EnemyHealthBarWidget;	//체력바

	UPROPERTY(BlueprintReadOnly, Category = "Target")
	bool itsTarget = false;	//해당 적이 타겟인지 스스로 인지

	//몇초동안 지속될 체력바 타임 핸들러
	FTimerHandle TimerShowOffHealthBar;
	float ShowoffHealthBarFloat = 3.f;

	void HealthBarOn();
	void HealthBarOff();

	UFUNCTION(BlueprintCallable)
	void TargetShowInfo(bool bShowInfo);	//MyMainCharacter 클래스에서 호출되는 적군의 체력바 활성화 함수

	virtual void Die() override;
};
