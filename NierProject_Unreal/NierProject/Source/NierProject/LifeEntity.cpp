// Fill out your copyright notice in the Description page of Project Settings.


#include "LifeEntity.h"
#include "Components/CapsuleComponent.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
#include "theDamageText.h"
#include "Components/SceneComponent.h"

// Sets default values
ALifeEntity::ALifeEntity()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ALifeEntity::LifeEntityinitialize()
{
	HitBoxCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HitBoxCapsule"));
	HitBoxCapsule->SetupAttachment(GetRootComponent());

	HitTextPos = CreateDefaultSubobject<USceneComponent>(TEXT("HitTextPosition"));
	HitTextPos->SetupAttachment(GetRootComponent());

	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
}

// Called when the game starts or when spawned
void ALifeEntity::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALifeEntity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALifeEntity::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
void ALifeEntity::TaketheDamage(float _Damage)
{
	AtheDamageText* Text = GetWorld()->SpawnActor<AtheDamageText>(theDamageText);
	Text->theFloatText = _Damage;
	Text->SetActorLocation(HitTextPos->GetComponentLocation());
	Text->SetText();

	Health -= _Damage;

	if (Health <= .0f)
	{
		Die();
	}
}

void ALifeEntity::Die()
{
	bItsDead = true; //데미지 입지 않음

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, "Die");
}

void ALifeEntity::HitReact(FVector Vec)
{
	if (HitParticles)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticles, Vec, FRotator(0.f), false);
	}
}

void ALifeEntity::HitReact_Sound()
{
	if (HitSound)
	{
		UGameplayStatics::PlaySound2D(this, HitSound);
	}
}