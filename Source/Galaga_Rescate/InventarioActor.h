// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
//#include "Humanos.h"
#include "InventarioActor.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_RESCATE_API AInventarioActor : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	AInventarioActor();

public:
	virtual void RecogerHumanos();
	virtual void ColocarHumanos(FTransform Ubicacion);
};
