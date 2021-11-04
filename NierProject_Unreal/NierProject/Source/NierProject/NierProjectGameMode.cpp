// Copyright Epic Games, Inc. All Rights Reserved.

#include "NierProjectGameMode.h"
#include "UObject/ConstructorHelpers.h"

ANierProjectGameMode::ANierProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Character/MyMainChar/MyMainCharacter_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
