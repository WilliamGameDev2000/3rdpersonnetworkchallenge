// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetworkedGame2GameMode.h"
#include "NetworkedGame2Character.h"
#include "UObject/ConstructorHelpers.h"

ANetworkedGame2GameMode::ANetworkedGame2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
