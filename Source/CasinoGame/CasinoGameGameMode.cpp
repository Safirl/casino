// Copyright Epic Games, Inc. All Rights Reserved.

#include "CasinoGameGameMode.h"
#include "CasinoGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACasinoGameGameMode::ACasinoGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
