// Fill out your copyright notice in the Description page of Project Settings.


#include "MinionMeleeCoreDawn_Enemy.h"
#include "Components/BoxComponent.h"
#include "MyMainCharacter.h"

AMinionMeleeCoreDawn_Enemy::AMinionMeleeCoreDawn_Enemy()
{
	Health = 100.f;
	MaxHealth = 100.f;

	CombatCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CombatCollision"));
	CombatCollision->SetupAttachment(GetMesh(), FName("weapon_sword_r")); //���⿡ �ݸ��� 


	//Pawn�� ��ȣ�ۿ��ϰ� ���� , �ݸ��� ����(���� Ư����Ȳ���� Ȱ��ȭ)
	CombatCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	CombatCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	CombatCollision->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	//CombatCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Damage = 25.f;


}

// Called when the game starts or when spawned
void AMinionMeleeCoreDawn_Enemy::BeginPlay()
{
	Super::BeginPlay();

	CombatCollision->OnComponentBeginOverlap.AddDynamic(this, &AMinionMeleeCoreDawn_Enemy::CombatOnOverlapBegin);
	CombatCollision->OnComponentEndOverlap.AddDynamic(this, &AMinionMeleeCoreDawn_Enemy::CombatOnOnverlapEnd);
}

void AMinionMeleeCoreDawn_Enemy::CombatOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor)
	{
		AMyMainCharacter* Player = Cast<AMyMainCharacter>(OtherActor);
		if (Player)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, "Enemy : Player_Hit!");
			Player->TaketheDamage(Damage);
		}
	}
}

void AMinionMeleeCoreDawn_Enemy::CombatOnOnverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {

}