// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Enemy.h"
#include "Sound/SoundCue.h"
#include "MyMainCharacter.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Components/SceneComponent.h"

// Sets default values
AWeapon::AWeapon()
{
 	//ƽ �ʿ����
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootPos"));
	RootComponent = Mesh;

	skeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("skeletalMesh"));
	skeletalMesh->SetupAttachment(GetRootComponent());

	CombatCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CombatCollision"));
	CombatCollision->SetupAttachment(GetRootComponent());

	BloodPoint = CreateDefaultSubobject<USceneComponent>(TEXT("BloodPoint"));
	BloodPoint->SetupAttachment(GetRootComponent());

	//Pawn�� ��ȣ�ۿ��ϰ� ���� , �ݸ��� ����(���� Ư����Ȳ���� Ȱ��ȭ)
	CombatCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	CombatCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	CombatCollision->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	CombatCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Damage = 25.f;
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	CombatCollision->OnComponentBeginOverlap.AddDynamic(this, &AWeapon::CombatOnOverlapBegin);
	CombatCollision->OnComponentEndOverlap.AddDynamic(this, &AWeapon::CombatOnOnverlapEnd);
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeapon::CombatOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor)
	{
		IInterfaceLifeEntity* Enemy = Cast<IInterfaceLifeEntity>(OtherActor);
		if (Enemy)
		{
			if (Enemy->InterfaceGetMyID() == DDEnemy)	//������ ��� üũ
			{
				Enemy->InterfaceTakeDamage(Damage, { 0,0,0 }, BloodPoint->GetComponentLocation());
			}
		}
	}
}

void AWeapon::CombatOnOnverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {

}

void AWeapon::ActivateCollison()
{
	CombatCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly); //�ݸ��� Ű��
}


void AWeapon::DeActivateCollison()
{
	CombatCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision); //�ݸ��� ����
}

int AWeapon::EquipWeaponAndSetAttackPose(AMyMainCharacter* Char)
{
	//ī�޶� �ݸ��� ����
	skeletalMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	skeletalMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
	//�⺻ ���� ��Ȱ��ȭ
	skeletalMesh->SetSimulatePhysics(false);

	//�����տ� ����
	const USkeletalMeshSocket* RightHandSocket = Char->GetMesh()->GetSocketByName("RightHandSocket");
	if (RightHandSocket)
	{
		RightHandSocket->AttachActor(this, Char->GetMesh());
	}

	return WeaponAttackPoseStatus;
}

void AWeapon::SwingSoundPlay()
{
	if (SwingSound)
	{
		UGameplayStatics::PlaySound2D(this, SwingSound);
	}
}