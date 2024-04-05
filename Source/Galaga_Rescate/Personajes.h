// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Personajes.generated.h"

UCLASS(abstract)
class GALAGA_RESCATE_API APersonajes : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaPersonajes;

protected:
	// atributos globales
	FVector posicion;
	FString nombre;
	float vida;

public:
	// getters
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE float GetVida() const { return vida; }

	// setters
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetVida(float _vida) { vida = _vida; }

public:	
	// Sets default values for this actor's properties
	APersonajes();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

//protected:
//	void Mover(float DeltaTime) PURE_VIRTUAL(APersonajes::Mover, );
};
