// Fill out your copyright notice in the Description page of Project Settings.


#include "LifeEntity.h"
#include "Components/CapsuleComponent.h"
#include "Sound/SoundCue.h"
#include "theDamageText.h"

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
	Text->SetActorLocation(GetActorLocation());
	Text->SetText();

	Health -= _Damage;

	if (Health <= .0f)
	{
		Die();
	}
}

void ALifeEntity::Die()
{
	bItsDead = true; //������ ���� ����

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, "Die");
}
