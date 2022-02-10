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
 	//틱 필요없음
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootPos"));
	RootComponent = Mesh;

	skeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("skeletalMesh"));
	skeletalMesh->SetupAttachment(GetRootComponent());

	CombatCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CombatCollision"));
	CombatCollision->SetupAttachment(GetRootComponent());

	BloodPoint = CreateDefaultSubobject<USceneComponent>(TEXT("BloodPoint"));
	BloodPoint->SetupAttachment(GetRootComponent());

	//Pawn과 상호작용하게 설정 , 콜리전 끄기(이후 특정상황에만 활성화)
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
			if (Enemy->InterfaceGetMyID() == DDEnemy)	//적군인 경우 체크
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
	CombatCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly); //콜리전 키기
}


void AWeapon::DeActivateCollison()
{
	CombatCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision); //콜리전 끄기
}

int AWeapon::EquipWeaponAndSetAttackPose(AMyMainCharacter* Char)
{
	//카메라 콜리전 무시
	skeletalMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	skeletalMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
	//기본 물리 비활성화
	skeletalMesh->SetSimulatePhysics(false);

	//오른손에 장착
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