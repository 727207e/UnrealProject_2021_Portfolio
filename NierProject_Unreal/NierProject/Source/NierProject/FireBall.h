// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NierProject/InterfaceLifeEntity.h"
#include "FireBall.generated.h"

UCLASS()
class NIERPROJECT_API AFireBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFireBall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fireball")
	class USphereComponent* HitRound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	class USceneComponent* HitPos;	// 히트효과 위치

	float Damage = 10.f;

	float FireBallForce = 10;	// 날라갈 힘

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fireball")
	class UParticleSystemComponent* FireBallBody;

	UFUNCTION()
	void SphereOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
	void SphereOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	FTimerHandle DieTimer;
	void DestroyThis();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HitParticle")
	class UParticleSystem* HitParticles;

};
