// Fill out your copyright notice in the Description page of Project Settings.


#include "theDamageText.h"
#include "Components/WidgetComponent.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/Color.h"

// Sets default values
AtheDamageText::AtheDamageText()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	theRootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(theRootComp);

	theDamageText = CreateDefaultSubobject<UWidgetComponent>(TEXT("DamageText"));
	theDamageText->SetupAttachment(RootComponent);

	damageTextColor = FLinearColor::White; //색상 지정
	damageTextColor.A = 1.f;
	theTextScaleVector = { 1.0f, 1.0f };	//크기 초기화

}

// Called when the game starts or when spawned
void AtheDamageText::BeginPlay()
{
	Super::BeginPlay();
	
	//알파값 변화 및 파괴
	DestroyThis();
}

void AtheDamageText::DestroyThis()
{

	TimeCheck = GetWorld()->GetDeltaSeconds(); //델타타임 가져옴

	GetWorld()->GetTimerManager().SetTimer(Timer, FTimerDelegate::CreateLambda([&]()
	{
		TimeCheck = GetWorld()->GetDeltaSeconds(); //델타타임 가져옴
		TotalTimeCheck += TimeCheck; //누적시간

		//서서히 없어짐(알파값 변화)
		//서서히 작아짐(스케일 변화)
		if (TotalTimeCheck >= AlphaChangeTime)
		{
			damageTextColor.A -= 0.02f;
			theTextScaleVector.X -= 0.01f;
			theTextScaleVector.Y -= 0.01f;
		}

		//파괴
		if (TotalTimeCheck >= DistroyTime)
		{
			//초기화
			GetWorld()->GetTimerManager().ClearTimer(Timer);

			Destroy();
		}
	}), TimeCheck, true, 0.f);


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