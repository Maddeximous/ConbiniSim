// Copyright Epic Games, Inc. All Rights Reserved.

#include "ConbiniSimGameMode.h"
#include "ConbiniSimCharacter.h"
#include "UObject/ConstructorHelpers.h"

AConbiniSimGameMode::AConbiniSimGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
