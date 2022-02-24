// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelPortal.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"	
#include "Particles/ParticleSystemComponent.h"
#include "InterfaceLifeEntity.h"
#include "Components/SceneComponent.h"
#include "Engine/World.h"
#include "GameFramework/PlayerStart.h"
#include "GameFramework/Character.h"

// Sets default values
ALevelPortal::ALevelPortal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(RootPoint);

	NextLevelPortal = CreateDefaultSubobject<UBoxComponent>(TEXT("PortalColl"));
	NextLevelPortal->SetupAttachment(GetRootComponent());

	Meshcom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PortalMesh"));
	Meshcom->SetupAttachment(GetRootComponent());

	ParticleSys = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PortalParticle"));
	ParticleSys->SetupAttachment(GetRootComponent());

	NextLevelPortal->OnComponentBeginOverlap.AddDynamic(this, &ALevelPortal::PortalBeginOverlap);
	NextLevelPortal->OnComponentEndOverlap.AddDynamic(this, &ALevelPortal::PortalEndOverlap);

}

// Called when the game starts or when spawned
void ALevelPortal::BeginPlay()
{
	Super::BeginPlay();
	

	//만약 이 포탈이 시작점이라면 여기로 스폰
	PlayerStartPoint();
}

// Called every frame
void ALevelPortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALevelPortal::PortalBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	//GetAsyncLoadPercentage <- ????

	IInterfaceLifeEntity* theP = Cast<IInterfaceLifeEntity>(OtherActor);
	if (theP)
	{
		if (theP->InterfaceGetMyID() == DDPlayer)
		{
			if (TransferLevelName != "")	//갈 곳이 정해져있다면
			{
				MoveLevel();
			}
		}
	}
	
}

void ALevelPortal::PortalEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) 
{


}

void ALevelPortal::MoveLevel_Implementation()
{
}

void ALevelPortal::PlayerStartPoint()
{
	//현재위치로 스폰되는 것이면 
	//스폰하기
	if (BplayerStart)
	{
		FVector Offset = {0.f, 0.f, 200.f};

		ACharacter* myChar = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

		myChar->SetActorLocation(GetActorLocation() + Offset);
	}
}