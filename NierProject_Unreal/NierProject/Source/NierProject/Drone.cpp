// Fill out your copyright notice in the Description page of Project Settings.


#include "Drone.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "MyMainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "AIController.h"
#include "Math/Vector.h"

// Sets default values
ADrone::ADrone()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(RootComp);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(GetRootComponent());

	FirePos = CreateDefaultSubobject< USceneComponent>(TEXT("firePos"));
	FirePos->SetupAttachment(GetRootComponent());

	PlayerAgroSphere = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerAgroSphere"));
	PlayerAgroSphere->SetupAttachment(Mesh);

	DroneCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DroneCollSphere"));
	DroneCollisionSphere->SetupAttachment(Mesh);
}

// Called when the game starts or when spawned
void ADrone::BeginPlay()
{
	Super::BeginPlay();

	aiController = Cast<AAIController>(GetController());

	PlayerAgroSphere->OnComponentBeginOverlap.AddDynamic(this, &ADrone::PlayerOnOverlapBegin);
	PlayerAgroSphere->OnComponentEndOverlap.AddDynamic(this, &ADrone::PlayerOnOnverlapEnd);


}

// Called every frame
void ADrone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isFollowing)
	{
		FollowPlayer(DeltaTime);
	}
}

// Called to bind functionality to input
void ADrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ADrone::Fire()
{
	FVector loc = FirePos->GetComponentLocation();
	FRotator rot = GetActorRotation();

	AActor* _bullet = GetWorld()->SpawnActor<AActor>(Bullet,loc,rot);
}


void ADrone::EquipDrone()
{

}

void ADrone::PlayerOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	/*
	AMyMainCharacter* Player = Cast<AMyMainCharacter>(OtherActor);
	if (Player)
	{
		//따라가기 종료
		isFollowing = false;
	}
	*/
}

void ADrone::PlayerOnOnverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AMyMainCharacter* Player = Cast<AMyMainCharacter>(OtherActor);
	if (Player)
	{
		//따라가기
		isFollowing = true;
	}
}

void ADrone::FollowPlayer(float DeltaTime)
{
	//////플레이어 위치 기준 (-50 -50 100)로 이동하기
	ACharacter* myChar = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	FVector MyMasterLoc = myChar->GetActorLocation();
	FVector GoalLoc = MyMasterLoc + FVector(-50.f, -50.f, 100.f);

	FVector newLoc = UKismetMathLibrary::VInterpTo(GetActorLocation(), GoalLoc, DeltaTime, 3.f);

	SetActorLocation(newLoc);

	if (FVector::Dist(newLoc, GoalLoc) <= 1.f)	//도착시 종료
	{
		isFollowing = false;
	}
	//////


	//////가는 방향 처다보기(Lock이 되어있지 않다면)
	if (!theTargetIsLock)
	{
		LookForward(GoalLoc);
	}
}

void ADrone::LookForward(FVector GoalV)
{
	FRotator Rot = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), GoalV);

	SetActorRotation(Rot);
}

void ADrone::SetTheTargetIsLock(bool _theTargetLock)
{
	//타겟이 지정이 되었는지 체크한다.
	theTargetIsLock = _theTargetLock;
}