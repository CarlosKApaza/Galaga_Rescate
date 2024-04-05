// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventarioActor.h" //Incluimos el archivo de cabecera de la clase InventarioActor
#include "ComponenteRecogerHumanos.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_RESCATE_API UComponenteRecogerHumanos : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteRecogerHumanos();

	UPROPERTY()
	TArray<AHumanos*> InventarioHumanos;

	UFUNCTION()
	int32 AgregarHumanosInventario(AHumanos* HumanosaAgregar);

	UFUNCTION()
	void ElminarHumanosInventario(AHumanos* HumanosaEliminar);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
