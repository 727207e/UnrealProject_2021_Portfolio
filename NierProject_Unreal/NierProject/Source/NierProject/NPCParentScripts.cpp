// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCParentScripts.h"
#include "Components/SphereComponent.h"
#include "MyMainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "MainPlayerController.h"
#include "Components/WidgetComponent.h"
#include "Misc/OutputDeviceNull.h"


// Sets default values
ANPCParentScripts::ANPCParentScripts()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InteractSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractSphere"));
	InteractSphere->SetupAttachment(GetRootComponent());

	NPCNameComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("NameTextComponent"));
	NPCNameComponent->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ANPCParentScripts::BeginPlay()
{
	Super::BeginPlay();

	InteractSphere->OnComponentBeginOverlap.AddDynamic(this, &ANPCParentScripts::InteractSphereOverlapBegin);
	InteractSphere->OnComponentEndOverlap.AddDynamic(this, &ANPCParentScripts::InteractSphereOnverlapEnd);

	UUserWidget* NameText = Cast<UUserWidget>(NPCNameComponent->GetWidget());

	//�Ӹ����� �̸� �ٲٱ�
	//BP�� �ִ� �Լ� ȣ��
	FOutputDeviceNull ar;
	const FString command = FString::Printf(TEXT("SetNameTextWidget %s"), *theNPCName);
	NameText->CallFunctionByNameWithArguments(*command, ar, NULL, true);
}

// Called every frame
void ANPCParentScripts::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPCParentScripts::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ANPCParentScripts::InteractSphereOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor)
	{
		AMyMainCharacter* Player = Cast<AMyMainCharacter>(OtherActor);
		if (Player)
		{
			//�÷��̾� �������̽� ��������
			MainCharPlayerController = Cast<AMainPlayerController>(Player->Controller);
			
			if (MainCharPlayerController)
			{
				//��ȣ�ۿ� �ѱ�
				MainCharPlayerController->DisplayNPCInteractMenu();

				Player->NPCTarget = this;
			}
		}
	}
}

void ANPCParentScripts::InteractSphereOnverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor)
	{
		AMyMainCharacter* Player = Cast<AMyMainCharacter>(OtherActor);
		if (Player)
		{
			if (MainCharPlayerController)
			{
				//��ȣ�ۿ� ����
				MainCharPlayerController->RemoveNPCInteractMenu();

				//�ʱ�ȭ
				Player->NPCTarget = NULL;
			}
		}
	}
}

void ANPCParentScripts::InteractSuccess_Implementation()
{
	//UE_LOG(LogTemp, Warning, TEXT("NPC Scripts IN"));
}