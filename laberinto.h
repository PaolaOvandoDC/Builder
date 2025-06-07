// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "laberinto.generated.h"

UCLASS()
class BOMBERMAN_API Alaberinto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Alaberinto();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Declarar un mapa de bloques como un array bidimensional
	TArray<TArray<int32>> aMapaBloques = {
		{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 4, 4},
		{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 0, 4},
		{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 0, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 4},
		{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 3, 3, 3, 3, 3, 1, 2, 2, 2, 2, 2, 2, 2, 0, 4},
		{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4},
		{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 0, 4},
		{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4},
		{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 0, 1, 1, 0, 4},
		{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4},
		{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 0, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 0, 1, 1, 4},
		{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 4},
		{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 0, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4},
		{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 4, 4},


	};

	float XInicial = -600.00f;
	float YInicial = -1000.00f;
	float ZInicial = 150.0f;
	float AnchoBloque = 100.0f;
	float LargoBloque = 100.0f;

	//void SpawnBloque(FVector posicion, int32 tipoBloque);

};
