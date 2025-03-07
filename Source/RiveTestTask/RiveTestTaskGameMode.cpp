// Copyright Epic Games, Inc. All Rights Reserved.

#include "RiveTestTaskGameMode.h"
#include "RiveTestTaskCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARiveTestTaskGameMode::ARiveTestTaskGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
