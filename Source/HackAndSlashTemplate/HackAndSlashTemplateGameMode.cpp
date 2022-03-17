// Copyright Epic Games, Inc. All Rights Reserved.

#include "HackAndSlashTemplateGameMode.h"
#include "HackAndSlashTemplatePlayerController.h"
#include "HackAndSlashTemplateCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHackAndSlashTemplateGameMode::AHackAndSlashTemplateGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AHackAndSlashTemplatePlayerController::StaticClass();
}