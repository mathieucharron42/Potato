// Copyright Epic Games, Inc. All Rights Reserved.

#include "PotatoGameMode.h"
#include "PotatoCharacter.h"
#include "UObject/ConstructorHelpers.h"

APotatoGameMode::APotatoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
