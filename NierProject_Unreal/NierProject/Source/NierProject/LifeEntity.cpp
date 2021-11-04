// Fill out your copyright notice in the Description page of Project Settings.


#include "LifeEntity.h"
#include "Components/CapsuleComponent.h"
#include "Sound/SoundCue.h"

// Sets default values
ALifeEntity::ALifeEntity()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ALifeEntity::LifeEntityinitialize()
{
	HitBoxCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CombatSphere"));
	HitBoxCapsule->SetupAttachment(GetRootComponent());
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
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, "Enemy : Im hit!");
	if (Health - _Damage <= .0f)
	{
		Die();
	}
}

void ALifeEntity::Die()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, "Die");
}
