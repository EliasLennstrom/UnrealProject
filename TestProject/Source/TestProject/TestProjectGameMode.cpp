// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TestProjectGameMode.h"
#include "TestProjectPawn.h"
#include "TestProjectHud.h"

ATestProjectGameMode::ATestProjectGameMode()
{
	DefaultPawnClass = ATestProjectPawn::StaticClass();
	HUDClass = ATestProjectHud::StaticClass();
}
