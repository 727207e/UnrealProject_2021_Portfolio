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
	float theFloatText;	//최종 텍스트에 들어갈 숫자(BP에 구현)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "damageText_Color")
	FLinearColor damageTextColor;	//데미지 텍스트 칼러
	
	FTimerHandle Timer;	//파괴 시간

	float TimeCheck = 0.f;	//델타 타임
	float TotalTimeCheck = 0.f;	//전체 타임
	float AlphaChangeTime = 1.f; //없어지는 시간(1초 이후보터 서서히 없어짐)
	float DistroyTime = 2.f;	//파괴되는 시간

	void DestroyThis();

	FVector myLoc;
	float myLocZ;

	UFUNCTION(BlueprintNativeEvent)	//블루프린트에서 추가 작성
	void SetText();	//글자 지정(데미지_숫자 지정)
	virtual void SetText_Implementation();

};
