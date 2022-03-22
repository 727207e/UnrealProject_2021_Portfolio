// Fill out your copyright notice in the Description page of Project Settings.

#include "BossMap_Door.h"

#include "Components/SceneComponent.h"
#include "Sound/SoundCue.h"
#include "Components/BoxComponent.h"
#include "InterfaceLifeEntity.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Boss_Mutant.h"

// Sets default values
ABossMap_Door::ABossMap_Door()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(RootPoint);

	Meshcom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	Meshcom->SetupAttachment(GetRootComponent());

	DoorTriggerPoint = CreateDefaultSubobject<UBoxComponent>(TEXT("DoorTriggerPointCollision"));
	DoorTriggerPoint->SetupAttachment(GetRootComponent());

	DoorTriggerPoint->OnComponentBeginOverlap.AddDynamic(this, &ABossMap_Door::DoorTriggerPointBeginOverlap);
	DoorTriggerPoint->OnComponentEndOverlap.AddDynamic(this, &ABossMap_Door::DoorTriggerPointEndOverlap);

	bIsOpen = true;
	bCloseDoorTrig = false;
}

// Called when the game starts or when spawned
void ABossMap_Door::BeginPlay()
{
	Super::BeginPlay();

	curDoorLoc = Meshcom->GetRelativeLocation();
	curDoorZ = curDoorLoc.Z;
}

// Called every frame
void ABossMap_Door::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//���� �����ִ� ���¿��� �ݱ�
	if (bCloseDoorTrig && bIsOpen)
	{
		BossViewSequence(DeltaTime);
	}
}


void ABossMap_Door::DoorTriggerPointBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (bIsOpen)
	{
		IInterfaceLifeEntity* theP = Cast<IInterfaceLifeEntity>(OtherActor);
		if (theP)
		{
			if(theP->InterfaceGetMyID() == DDPlayer)
			{
				bCloseDoorTrig = true;	//�� ������ Ȱ��ȭ

				//���� ü�¹� ���̱� �� ���� ������ BP ����
			}
		}
	}
}

void ABossMap_Door::DoorTriggerPointEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{


}

void ABossMap_Door::CloseDoor(float DeltaTime)
{
	//������ ������
	curDoorZ = Meshcom->GetRelativeLocation().Z;

	curDoorZ =	UKismetMathLibrary::FInterpTo(curDoorZ, -100.f, DeltaTime, 7.f);
	FVector NewLocation = { curDoorLoc.X, curDoorLoc.Y, curDoorZ};

	Meshcom->SetRelativeLocation(NewLocation);


	//�Ϸ��� �Ҹ� �� ���� Ȱ��ȭ
	if (curDoorZ <= 5.f)
	{
		bIsOpen = false;
		UGameplayStatics::PlaySound2D(this, DoorSound);
	}
}

void ABossMap_Door::BossViewSequence_Implementation(const float DeltaTime)
{
	CloseDoor(DeltaTime);
}
