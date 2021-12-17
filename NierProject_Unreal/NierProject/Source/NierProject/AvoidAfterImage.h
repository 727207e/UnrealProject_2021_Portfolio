// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AvoidAfterImage.generated.h"

UCLASS()
class NIERPROJECT_API AAvoidAfterImage : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAvoidAfterImage();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Skel")
	class UPoseableMeshComponent* PoseMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	int myDirect; //이 분신의 방향. <0 : 상> , <1 : 하> , <2 : 좌> , <3 : 우>
	float Speed; 
	float DestroyTImer;
	float DestroyTimeLimit = 0.2f; //파괴될 시간 지정

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void InitAvoidAfterImage(USkeletalMeshComponent* Pawn, int direct);
};
