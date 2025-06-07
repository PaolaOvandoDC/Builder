// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BombermanGameMode.generated.h"
class ABloque;
UCLASS(minimalapi)
class ABombermanGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
ABombermanGameMode(); public:
	virtual void BeginPlay() override;

public:
	// Declarar la posición del siguiente bloque
	//FVector posicionSiguienteBloque = FVector(1000.0f, 500.0f, 20.0f);

	// Declarar un mapa de bloques como un array bidimensional
	/*
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
	float ZInicial = 0.0f;
	float AnchoBloque = 100.0f;
	float LargoBloque = 100.0f;
	ABloque* BloqueActual = nullptr;
	// Declarar un array de punteros a objetos de tipo BloqueMadera
	TArray<ABloque*> aBloques;

	FTimerHandle tHDestruirBloques;

	void SpawnBloque(FVector posicion, int32 tipoBloque);
	//void DestruirBloque();
	*/
};

