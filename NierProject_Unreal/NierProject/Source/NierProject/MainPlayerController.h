// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class NIERPROJECT_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	/** Reference to the UMG asset in the editor*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> HUDOverlayAsset;

	/** Variable to hold the widget after creating it*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* HUDOverlay_myOverlay;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> WPauseMenu;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* PauseMenu;

	bool bPauseMenuVisible;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "HUD")
	void DisplayPauseMenu();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "HUD")
	void RemovePauseMenu();









	///////////////////////NPC

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> WNPCInteractMenu;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* NPCInteractMenu;	//선택 버튼 활성화

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> WNPCTalkTable;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* NPCTalkTable;		//대화 창

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void DisplayNPCInteractMenu();

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void RemoveNPCInteractMenu();

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void DisplayNPCTalkTable();

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void RemoveNPCTalkTable();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "HUD")
	void InteractNPC();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NCPInteract")
	bool bNPCInteractActive;	//NPC 메뉴바 활성화









	/////////////////////BossHpBar


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> WBossHealthBar;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* BossHealthBar;

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void DisplayBossHealthBar();

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void RemoveBossHealthBar();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "HUD")
	void BossHealthBarShowUp();








	void GameModeOnly();

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
};
