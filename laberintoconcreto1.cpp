// Fill out your copyright notice in the Description page of Project Settings.


#include "laberintoconcreto1.h"
#include "laberinto.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "bomba.h"
#include "Engine/World.h"


// Sets default values
Alaberintoconcreto1::Alaberintoconcreto1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Alaberintoconcreto1::BeginPlay()
{
	Super::BeginPlay();
	Reset();
	buildMuros();
	//buildBloqueMadera();
	//builBloqueConcreto();
	//buildBloqueLadrillo();
	  // Clonar un bloque de madera en la posición (3,5) del laberinto
	//ClonarBloqueMadera(3, 5);

}

// Called every frame
void Alaberintoconcreto1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void Alaberintoconcreto1::Reset()
{
	if (laberintoactual)
	{
		laberintoactual->Destroy();
		laberintoactual = nullptr;
	}

	if (GetWorld())
	{
		FVector Posicion = GetActorLocation() + FVector(0, 0, 200);
		FRotator Rotacion = FRotator::ZeroRotator;

		laberintoactual = GetWorld()->SpawnActor<Alaberinto>(Alaberinto::StaticClass(), Posicion, Rotacion);
		if (laberintoactual)
		{
			// Modificar la estructura del laberinto antes de construirlo
			//laberintoactual->aMapaBloques[3][5] = 1; // Coloca un bloque de madera en la fila 3, columna 5
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("¡Laberinto generado correctamente!"));
		}
	}
}

void Alaberintoconcreto1::buildMuros()
{
	if (laberintoactual)
	{
		for (int32 i = 0; i < laberintoactual->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < laberintoactual->aMapaBloques[i].Num(); j++)
			{
				if (laberintoactual->aMapaBloques[i][j] == 4)
				{
					FVector Pos = FVector(
						laberintoactual->XInicial + j * laberintoactual->AnchoBloque,
						laberintoactual->YInicial + i * laberintoactual->LargoBloque,
						laberintoactual->ZInicial

					);
					GetWorld()->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), Pos, FRotator::ZeroRotator);
				}
			}
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("build muros"));
}


void Alaberintoconcreto1::buildBloqueMadera() 
{
	if (laberintoactual && GetWorld())
	{
		for (int32 i = 0; i < laberintoactual->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < laberintoactual->aMapaBloques[i].Num(); j++)
			{
				if (laberintoactual->aMapaBloques[i][j] == 1)
				{
					FVector Pos = FVector(
						laberintoactual->XInicial + j * laberintoactual->AnchoBloque,
						laberintoactual->YInicial + i * laberintoactual->LargoBloque,
						laberintoactual->ZInicial
					);
					GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), Pos, FRotator::ZeroRotator);
				}
			}
		}
	}
}
void Alaberintoconcreto1::builBloqueConcreto()
{
	if (laberintoactual && GetWorld())
	{
		for (int32 i = 0; i < laberintoactual->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < laberintoactual->aMapaBloques[i].Num(); j++)
			{
				if (laberintoactual->aMapaBloques[i][j] == 3)
				{
					FVector Pos = FVector(
						laberintoactual->XInicial + j * laberintoactual->AnchoBloque,
						laberintoactual->YInicial + i * laberintoactual->LargoBloque,
						laberintoactual->ZInicial
					);
					GetWorld()->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), Pos, FRotator::ZeroRotator);
				}
			}
		}
	}
}
void Alaberintoconcreto1::buildBloqueLadrillo() 
{
	if (laberintoactual && GetWorld())
	{
		for (int32 i = 0; i < laberintoactual->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < laberintoactual->aMapaBloques[i].Num(); j++)
			{
				if (laberintoactual->aMapaBloques[i][j] == 2)
				{
					FVector Pos = FVector(
						laberintoactual->XInicial + j * laberintoactual->AnchoBloque,
						laberintoactual->YInicial + i * laberintoactual->LargoBloque,
						laberintoactual->ZInicial
					);
					GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), Pos, FRotator::ZeroRotator);
				}
			}
		}
	}
}
void Alaberintoconcreto1::buildGenerarBombas()
{
	// Implementar la lógica para generar bombas en el laberinto
	if (laberintoactual && GetWorld())
	{
		
		 // Definir la cantidad de bombas aleatorias a generar
		int32 CantidadBombas = 10; // Puedes cambiar este número

		for (int32 k = 0; k < CantidadBombas; k++)
		{
			// Seleccionar una posición aleatoria dentro del mapa de bloques
			int32 i = FMath::RandRange(0, laberintoactual->aMapaBloques.Num() - 1);
			int32 j = FMath::RandRange(0, laberintoactual->aMapaBloques[i].Num() - 1);

			// Comprobar si la celda es un espacio vacío (0)
			if (laberintoactual->aMapaBloques[i][j] == 0)
			{
				FVector Pos = FVector(
					laberintoactual->XInicial + j * laberintoactual->AnchoBloque,
					laberintoactual->YInicial + i * laberintoactual->LargoBloque,
					laberintoactual->ZInicial
				);

				// Generar la bomba en la posición aleatoria
				GetWorld()->SpawnActor<Abomba>(Abomba::StaticClass(), Pos, FRotator::ZeroRotator);

				UE_LOG(LogTemp, Warning, TEXT("Bomba generada en X=%f Y=%f"), Pos.X, Pos.Y);
			}
		}
	}
	// Por ejemplo, podrías crear un método en Alaberinto que maneje la generación de bombas
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Generando Bombas..."));
}	

Alaberinto* Alaberintoconcreto1::GetLaberinto()
{
	return laberintoactual;
}





