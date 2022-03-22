// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NPCParentScripts.generated.h"

UCLASS()
class NIERPROJECT_API ANPCParentScripts : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPCParentScripts();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interact")
	class USphereComponent* InteractSphere;	//��ȣ�ۿ� Ȱ��ȭ ����

	UFUNCTION()
	void InteractSphereOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
	void InteractSphereOnverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
	class UWidgetComponent* NPCNameComponent;	//ü�¹� ������Ʈ(���� ����)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
	FString theNPCName;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "InteractSuccess")
	void InteractSuccess();	//�÷��̾ ��ȣ�ۿ� ��ư�� ���� ���

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerController")
	class AMainPlayerController* MainCharPlayerController;

};
