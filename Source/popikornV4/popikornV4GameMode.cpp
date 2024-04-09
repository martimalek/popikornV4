// Copyright Epic Games, Inc. All Rights Reserved.

#include "popikornV4GameMode.h"
#include "popikornV4Character.h"
#include "UObject/ConstructorHelpers.h"

ApopikornV4GameMode::ApopikornV4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
