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

	damageTextColor = FLinearColor::White; //���� ����
	damageTextColor.A = 1.f;
	theTextScaleVector = { 1.0f, 1.0f };	//ũ�� �ʱ�ȭ

}

// Called when the game starts or when spawned
void AtheDamageText::BeginPlay()
{
	Super::BeginPlay();
	
	//���İ� ��ȭ �� �ı�
	DestroyThis();
}

void AtheDamageText::DestroyThis()
{

	TimeCheck = GetWorld()->GetDeltaSeconds(); //��ŸŸ�� ������

	GetWorld()->GetTimerManager().SetTimer(Timer, FTimerDelegate::CreateLambda([&]()
	{
		TimeCheck = GetWorld()->GetDeltaSeconds(); //��ŸŸ�� ������
		TotalTimeCheck += TimeCheck; //�����ð�

		//������ ������(���İ� ��ȭ)
		//������ �۾���(������ ��ȭ)
		if (TotalTimeCheck >= AlphaChangeTime)
		{
			damageTextColor.A -= 0.02f;
			theTextScaleVector.X -= 0.01f;
			theTextScaleVector.Y -= 0.01f;
		}

		//�ı�
		if (TotalTimeCheck >= DistroyTime)
		{
			//�ʱ�ȭ
			GetWorld()->GetTimerManager().ClearTimer(Timer);

			Destroy();
		}
	}), TimeCheck, true, 0.f);


}

// Called every frame
void AtheDamageText::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//���� ����ϴ� �Լ�
	myLocZ = UKismetMathLibrary::FInterpTo(myLocZ, myLocZ + 5.0f, DeltaTime, 10.0f);
	FVector newLoc(myLoc.X, myLoc.Y,myLocZ);
	SetActorLocation(newLoc);
}

void AtheDamageText::SetText_Implementation()
{
	myLoc = GetActorLocation();

	myLocZ = myLoc.Z;
}