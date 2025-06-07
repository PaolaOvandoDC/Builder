// Fill out your copyright notice in the Description page of Project Settings.


#include "laberinto.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "Engine/World.h"

// Sets default values
Alaberinto::Alaberinto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Alaberinto::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Spawning"));

	for (int32 Fila = 0; Fila < aMapaBloques.Num(); ++Fila)
	{
		for (int32 Columna = 0; Columna < aMapaBloques[Fila].Num(); ++Columna)
		{
			int32 TipoBloque = aMapaBloques[Fila][Columna];
			FVector Posicion = FVector(
				XInicial + Columna * AnchoBloque,
				YInicial + Fila * LargoBloque,
				ZInicial
			);
			//SpawnBloque(Posicion, TipoBloque);
		}
	}
	
}
/*void Alaberinto::SpawnBloque(FVector posicion, int32 tipoBloque)
{
	
		UWorld* World = GetWorld();
		if (!World) return;
		// Elegir tipo de bloque basado en el valor
		switch (tipoBloque)
		{
		case 1:
			World->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), posicion, FRotator::ZeroRotator);
			break;
		case 4:
			World->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), posicion, FRotator::ZeroRotator);
			break;
		case 3:
			World->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), posicion, FRotator::ZeroRotator);
			break;
		case 2:
			World->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), posicion, FRotator::ZeroRotator);
			break;
		default:
			break;
		}
	//cambiar estoo	
}*/


// Called every frame
void Alaberinto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


