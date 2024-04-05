// Fill out your copyright notice in the Description page of Project Settings.


#include "InventarioActor.h"
//#include "ConstructorHelpers.h"
#include "Engine/CollisionProfile.h"

AInventarioActor::AInventarioActor()
{
	PrimaryActorTick.bCanEverTick = true;
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Object != nullptr)
		{
			GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
			GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
		}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);
}

void AInventarioActor::RecogerHumanos()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

void AInventarioActor::ColocarHumanos(FTransform Ubicacion)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(Ubicacion.GetLocation());
}
