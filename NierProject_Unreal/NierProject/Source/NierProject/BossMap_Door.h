// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BossMap_Door.generated.h"

UCLASS()
class NIERPROJECT_API ABossMap_Door : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABossMap_Door();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "RootPoint")
	class USceneComponent* RootPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Door")
	class UStaticMeshComponent* Meshcom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DoorTriggerPointCollision")
	class UBoxComponent* DoorTriggerPoint;		

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DoorSound")
	class USoundCue* DoorSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BossTarget")
	class ABoss_Mutant* BossTarget;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void DoorTriggerPointBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
	void DoorTriggerPointEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DoorCloseSequenceFinish")
	bool bIsOpen;		//문이 열려있는 상태 체크(처음엔 열려있는 상태)

	bool bCloseDoorTrig;//문을 닫게 하는 상태
	void CloseDoor(float DeltaTime);

	FVector curDoorLoc;
	float curDoorZ;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BossView")
	void BossViewSequence(const float DeltaTime);

};
