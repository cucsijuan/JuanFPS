// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "JuanFPSGameMode.h"
#include "JuanFPSHUD.h"
#include "JuanFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJuanFPSGameMode::AJuanFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AJuanFPSHUD::StaticClass();
}
