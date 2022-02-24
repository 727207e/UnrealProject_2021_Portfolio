// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelPortal.generated.h"

UCLASS()
class NIERPROJECT_API ALevelPortal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelPortal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "RootPoint")
	class USceneComponent* RootPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Portal")
	class UBoxComponent* NextLevelPortal;		//레벨 변경 포탈 범위(상호작용)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Portal")
	class UStaticMeshComponent* Meshcom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Portal")
	class UParticleSystemComponent* ParticleSys;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPlayerStartPoint")
	bool BplayerStart = false;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void PortalBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
	void PortalEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MoveLevel")
	void MoveLevel();

	UFUNCTION()
	void PlayerStartPoint();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ToLevelName")
	FName TransferLevelName;
};
