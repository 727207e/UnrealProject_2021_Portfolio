// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "theDamageText.generated.h"

UCLASS()
class NIERPROJECT_API AtheDamageText : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AtheDamageText();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "damageText")
	class UWidgetComponent* theDamageText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "damageText")
	class USceneComponent* theRootComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "damageText")
	float theFloatText;	//���� �ؽ�Ʈ�� �� ����(BP�� ����)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "damageText_Color")
	FLinearColor damageTextColor;	//������ �ؽ�Ʈ Į��
	
	FTimerHandle Timer;	//�ı� �ð�

	float TimeCheck = 0.f;	//��Ÿ Ÿ��
	float TotalTimeCheck = 0.f;	//��ü Ÿ��
	float AlphaChangeTime = 1.f; //�������� �ð�(1�� ���ĺ��� ������ ������)
	float DistroyTime = 2.f;	//�ı��Ǵ� �ð�

	void DestroyThis();

	FVector myLoc;
	float myLocZ;

	UFUNCTION(BlueprintNativeEvent)	//�������Ʈ���� �߰� �ۼ�
	void SetText();	//���� ����(������_���� ����)
	virtual void SetText_Implementation();

};
