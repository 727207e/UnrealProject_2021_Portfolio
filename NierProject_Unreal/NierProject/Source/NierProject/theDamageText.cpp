// Fill out your copyright notice in the Description page of Project Settings.


#include "theDamageText.h"
#include "Components/WidgetComponent.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AtheDamageText::AtheDamageText()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	theRootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(theRootComp);

	theDamageText = CreateDefaultSubobject<UWidgetComponent>(TEXT("DamageText"));
	theDamageText->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AtheDamageText::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorldTimerManager().SetTimer(Timer, this, &AtheDamageText::DestroyThis, 2.f);

}

void AtheDamageText::DestroyThis()
{
	Destroy();
}

// Called every frame
void AtheDamageText::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//위로 상승하는 함수
	myLocZ = UKismetMathLibrary::FInterpTo(myLocZ, myLocZ + 5.0f, DeltaTime, 10.0f);
	FVector newLoc(myLoc.X, myLoc.Y,myLocZ);
	SetActorLocation(newLoc);
}

void AtheDamageText::SetText_Implementation()
{
	myLoc = GetActorLocation();

	myLocZ = myLoc.Z;
}