// Copyright Epic Games, Inc. All Rights Reserved.

#include "Projet_Unreal_CGameMode.h"
#include "Projet_Unreal_CCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjet_Unreal_CGameMode::AProjet_Unreal_CGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
