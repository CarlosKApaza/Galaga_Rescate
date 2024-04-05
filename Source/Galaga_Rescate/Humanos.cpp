// Fill out your copyright notice in the Description page of Project Settings.


#include "Humanos.h"
#include "ComponenteRecogerHumanos.h"

void AHumanos::BeginPlay()
{
	Super::BeginPlay();
}

AHumanos::AHumanos()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaPersonajes->SetStaticMesh(malla.Object);

}

void AHumanos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
