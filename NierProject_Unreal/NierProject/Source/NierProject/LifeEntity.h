// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LifeEntity.generated.h"

UCLASS()
class NIERPROJECT_API ALifeEntity : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ALifeEntity();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LifeEntity")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LifeEntity")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LifeEntity")
	float Damage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "LifeEntity")
	class UCapsuleComponent* HitBoxCapsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LifeEntity")
	class UParticleSystem* HitParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LifeEntity")
	class USoundCue* HitSound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	class USceneComponent* HitTextPos;	// 데미지 텍스트 위치

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LifeEntity")
	TSubclassOf<class AtheDamageText> theDamageText;

	virtual void TaketheDamage(float Damage);

	virtual void Die();
	bool bItsDead = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void LifeEntityinitialize();

	void HitReact(FVector Vec);

	void HitReact_Sound();
};
