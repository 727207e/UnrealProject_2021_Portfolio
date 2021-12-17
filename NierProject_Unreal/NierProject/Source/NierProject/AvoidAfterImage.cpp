// Fill out your copyright notice in the Description page of Project Settings.


#include "AvoidAfterImage.h"
#include "Components/PoseableMeshComponent.h"

// Sets default values
AAvoidAfterImage::AAvoidAfterImage()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PoseMesh = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("Mesh"));
	RootComponent = PoseMesh;

	myDirect = 4;
	Speed = 750.f;
	DestroyTImer = 0.f;
}

// Called when the game starts or when spawned
void AAvoidAfterImage::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAvoidAfterImage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (myDirect != 4) // 방향이 지정이 된상태
	{
		FVector Location = GetActorLocation();
		DestroyTImer += DeltaTime;

		switch (myDirect)
		{
		case 0:	//상

			Location += GetActorForwardVector() * Speed * DeltaTime;
			break;
		case 1: //하
			Location += GetActorForwardVector() * -Speed * DeltaTime;
			break;

				/*
		case 2: //좌
			Location += GetActorRightVector() * -Speed * DeltaTime;
			break;
		case 3: //우
			Location += GetActorRightVector() * Speed * DeltaTime;
			break;*/

		default:
			break;
		}

		if (DestroyTImer >= DestroyTimeLimit) //파괴
		{
			Destroy();
		}

		SetActorLocation(Location);
	}
}

void AAvoidAfterImage::InitAvoidAfterImage(USkeletalMeshComponent* Pawn, int direct)
{
	PoseMesh->CopyPoseFromSkeletalComponent(Pawn);

	myDirect = direct; //방향 지정
}