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

	if (myDirect != 4) // ������ ������ �Ȼ���
	{
		FVector Location = GetActorLocation();
		DestroyTImer += DeltaTime;

		switch (myDirect)
		{
		case 0:	//��

			Location += GetActorForwardVector() * Speed * DeltaTime;
			break;
		case 1: //��
			Location += GetActorForwardVector() * -Speed * DeltaTime;
			break;

				/*
		case 2: //��
			Location += GetActorRightVector() * -Speed * DeltaTime;
			break;
		case 3: //��
			Location += GetActorRightVector() * Speed * DeltaTime;
			break;*/

		default:
			break;
		}

		if (DestroyTImer >= DestroyTimeLimit) //�ı�
		{
			Destroy();
		}

		SetActorLocation(Location);
	}
}

void AAvoidAfterImage::InitAvoidAfterImage(USkeletalMeshComponent* Pawn, int direct)
{
	PoseMesh->CopyPoseFromSkeletalComponent(Pawn);

	myDirect = direct; //���� ����
}