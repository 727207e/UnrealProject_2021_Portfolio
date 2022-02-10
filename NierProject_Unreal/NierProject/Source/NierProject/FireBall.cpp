// Fill out your copyright notice in the Description page of Project Settings.


#include "FireBall.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SceneComponent.h"

// Sets default values
AFireBall::AFireBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	HitRound = CreateDefaultSubobject<USphereComponent>(TEXT("HitRound"));
	SetRootComponent(HitRound);

	FireBallBody = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireBody"));
	FireBallBody->SetupAttachment(HitRound);

	HitPos = CreateDefaultSubobject<USceneComponent>(TEXT("FireHitPos"));
	HitPos->SetupAttachment(HitRound);

	HitRound->OnComponentBeginOverlap.AddDynamic(this, &AFireBall::SphereOnOverlapBegin);
	HitRound->OnComponentEndOverlap.AddDynamic(this, &AFireBall::SphereOnOverlapEnd);

	//FireBallBody->Deactivate();
}

// Called when the game starts or when spawned
void AFireBall::BeginPlay()
{
	Super::BeginPlay();
	const FVector Up = this->GetActorForwardVector();

	GetWorldTimerManager().SetTimer(DieTimer, this,	&AFireBall::DestroyThis, 3.f);
}

void AFireBall::DestroyThis()
{
	//터질때 파티클 재생
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticles, GetActorLocation() - (0,0,10), FRotator(0.f), false);

	Destroy();

}

// Called every frame
void AFireBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector lot = GetActorLocation();
	lot += GetActorForwardVector() * FireBallForce;

	SetActorLocation(lot);
}


void AFireBall::SphereOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor)
	{
		IInterfaceLifeEntity* theP = Cast<IInterfaceLifeEntity>(OtherActor);
		if (theP)
		{
			if (theP->InterfaceGetMyID() == DDPlayer)	//플레이어 인 경우 체크
			{
				theP->InterfaceTakeDamage(Damage, GetActorLocation(), {0,0,0});

				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticles, HitPos->GetComponentLocation(), FRotator(0.f), false);

				Destroy(this);
			}
		}
	}
}

void AFireBall::SphereOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {

}