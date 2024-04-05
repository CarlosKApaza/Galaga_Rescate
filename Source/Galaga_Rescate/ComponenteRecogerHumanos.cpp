// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteRecogerHumanos.h"
#include "Humanos.h"

// Sets default values for this component's properties
UComponenteRecogerHumanos::UComponenteRecogerHumanos()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// aqui implementamos lo del UPROPERTY
	// ...
}

int32 UComponenteRecogerHumanos::AgregarHumanosInventario(AHumanos* HumanosaAgregar)
{
	return InventarioHumanos.Add(HumanosaAgregar);
}

void UComponenteRecogerHumanos::ElminarHumanosInventario(AHumanos* HumanosaEliminar)
{
	InventarioHumanos.Remove(HumanosaEliminar);
}



// Called when the game starts
void UComponenteRecogerHumanos::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComponenteRecogerHumanos::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	// AQUI PODEMOS AGREGAR FUNCINOES COMO ESTAS: 
	 

	// ...
}

