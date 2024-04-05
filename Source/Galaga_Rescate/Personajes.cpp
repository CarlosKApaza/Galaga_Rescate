// Fill out your copyright notice in the Description page of Project Settings.


#include "Personajes.h"

// Sets default values
APersonajes::APersonajes()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//
	// create a static mesh component
	mallaPersonajes = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaPersonajes"));
	mallaPersonajes->SetupAttachment(RootComponent);
	//RootComponent = mallaPersonajes;
}

// Called when the game starts or when spawned
void APersonajes::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APersonajes::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

