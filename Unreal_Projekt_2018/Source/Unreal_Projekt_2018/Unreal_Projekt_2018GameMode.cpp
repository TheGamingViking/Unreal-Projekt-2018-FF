// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Unreal_Projekt_2018GameMode.h"
#include "Unreal_Projekt_2018HUD.h"
#include "Unreal_Projekt_2018Character.h"
#include "UObject/ConstructorHelpers.h"

AUnreal_Projekt_2018GameMode::AUnreal_Projekt_2018GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnreal_Projekt_2018HUD::StaticClass();
}
