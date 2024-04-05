// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_RescateGameMode.h"
#include "Galaga_RescatePawn.h"
#include "Humanos.h"


AGalaga_RescateGameMode::AGalaga_RescateGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_RescatePawn::StaticClass();
}

void AGalaga_RescateGameMode::BeginPlay()
{
	Super::BeginPlay();

	//Rotacion de las humanos
	FRotator rotacionHumanos = FRotator(0.0f, 0.0f, 0.0f);

	//Ubicacion de los humanos
	FVector ubicacionHumanoInicial = FVector(-380.0f, -200.0f, 180.0f); //-200 porque quiero que mi primera nave se cree a partir desde el punto medio un poco mas a la izquierda
	FVector ubicacionHumanoActual = ubicacionHumanoInicial;
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		//spawenado los humanos con un ciclo
		for (int i = 0; i < 5; i++) {
			ubicacionHumanoActual.Y += 180.0f;
			AHumanos* HumanoActual = World->SpawnActor<AHumanos>(ubicacionHumanoActual, rotacionHumanos);
			//NaveEnemigaCazaActual->SetNombre("Nave Enemiga Caza" + FString::FromInt(i + 1));
			TAPersonajes.Add(HumanoActual);
			//TMPosicionesNavesEnemigas.Add(NaveEnemigaCazaActual, ubicacionNaveActual);
		}
	}

}

