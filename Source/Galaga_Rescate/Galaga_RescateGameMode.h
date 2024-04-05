// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_RescateGameMode.generated.h"

class APersonajes;
class AHumanos;

UCLASS(MinimalAPI)
class AGalaga_RescateGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_RescateGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// contenedor para almacenar los personajes tanto humanos como 
	TArray <APersonajes*> TAPersonajes;

};



