// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Personajes.h"
#include "ComponenteRecogerHumanos.h"
#include "Humanos.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_RESCATE_API AHumanos : public APersonajes
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	AHumanos();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

//protected:
//	// Called to bind functionality to input
//	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
//	UComponenteRecogerHumanos* ComponenteRecogerHumanos;
};
