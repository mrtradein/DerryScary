// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DerryScaryProjectGameMode.h"
#include "DerryScaryProjectHUD.h"
#include "DerryScaryProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADerryScaryProjectGameMode::ADerryScaryProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADerryScaryProjectHUD::StaticClass();
}
