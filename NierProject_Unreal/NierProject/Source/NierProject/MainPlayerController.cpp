// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "Blueprint/UserWidget.h"

void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (HUDOverlayAsset) {

		HUDOverlay_myOverlay = CreateWidget<UUserWidget>(this, HUDOverlayAsset);

	}

	HUDOverlay_myOverlay->AddToViewport();
	HUDOverlay_myOverlay->SetVisibility(ESlateVisibility::Visible);

	if (WPauseMenu)
	{
		PauseMenu = CreateWidget<UUserWidget>(this, WPauseMenu);
		if (PauseMenu)
		{
			PauseMenu->AddToViewport();
			PauseMenu->SetVisibility(ESlateVisibility::Hidden);
		}
	}

	if (WNPCInteractMenu)
	{
		NPCInteractMenu = CreateWidget<UUserWidget>(this, WNPCInteractMenu);
		if (NPCInteractMenu)
		{
			NPCInteractMenu->AddToViewport();
			NPCInteractMenu->SetVisibility(ESlateVisibility::Hidden);
		}
	}

	if (WNPCTalkTable)
	{
		NPCTalkTable = CreateWidget<UUserWidget>(this, WNPCTalkTable);
		if (NPCTalkTable)
		{
			NPCTalkTable->AddToViewport();
			NPCTalkTable->SetVisibility(ESlateVisibility::Hidden);
		}
	}

	if (WBossHealthBar)
	{
		BossHealthBar = CreateWidget<UUserWidget>(this, WBossHealthBar);
		if (BossHealthBar)
		{
			BossHealthBar->AddToViewport();
			BossHealthBar->SetVisibility(ESlateVisibility::Hidden);
		}
	}

	bNPCInteractActive = false;
}

void AMainPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMainPlayerController::DisplayPauseMenu_Implementation()
{
	if (PauseMenu)
	{
		bPauseMenuVisible = true;
		PauseMenu->SetVisibility(ESlateVisibility::Visible);

		FInputModeGameAndUI InputModeGameAndUI;
		//FInputModeUIOnly

		SetInputMode(InputModeGameAndUI);
		bShowMouseCursor = true;
	}
}

void AMainPlayerController::RemovePauseMenu_Implementation()
{
	if (PauseMenu)
	{
		GameModeOnly();

		bShowMouseCursor = false;

		bPauseMenuVisible = false;
	}
}

void AMainPlayerController::DisplayNPCInteractMenu()
{
	if (NPCInteractMenu)
	{
		bNPCInteractActive = true;

		NPCInteractMenu->SetVisibility(ESlateVisibility::Visible);
	}
}

void AMainPlayerController::RemoveNPCInteractMenu()
{
	if (NPCInteractMenu)
	{
		bNPCInteractActive = false;

		NPCInteractMenu->SetVisibility(ESlateVisibility::Hidden);
	}
}

void AMainPlayerController::DisplayNPCTalkTable()
{
	if (NPCTalkTable)
	{
		NPCTalkTable->SetVisibility(ESlateVisibility::Visible);
	}
}

void AMainPlayerController::RemoveNPCTalkTable()
{
	if (NPCTalkTable)
	{
		NPCTalkTable->SetVisibility(ESlateVisibility::Hidden);
	}
}

void AMainPlayerController::InteractNPC_Implementation()
{
	//UE_LOG(LogTemp, Warning, TEXT("MainController IN"));
}


void AMainPlayerController::DisplayBossHealthBar()
{
	if (BossHealthBar)
	{
		BossHealthBar->SetVisibility(ESlateVisibility::Visible);
	}
}

void AMainPlayerController::RemoveBossHealthBar()
{
	if (BossHealthBar)
	{
		BossHealthBar->SetVisibility(ESlateVisibility::Hidden);
	}
}

void AMainPlayerController::BossHealthBarShowUp_Implementation()
{
	//보스 체력 보이기
	DisplayBossHealthBar();
}


void AMainPlayerController::GameModeOnly()
{
	FInputModeGameOnly InputModeGameOnly;

	SetInputMode(InputModeGameOnly);
}