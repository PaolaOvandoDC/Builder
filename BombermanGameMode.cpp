// Copyright Epic Games, Inc. All Rights Reserved.

#include "BombermanGameMode.h"
#include "BombermanCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "laberintoconcreto1.h"
#include "director.h"
#include "Kismet/GameplayStatics.h"
#include "BloqueD1.h"
#include "BloqueD2.h"

ABombermanGameMode::ABombermanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void ABombermanGameMode::BeginPlay()
{
	Super::BeginPlay();
	// Spawn del Builder
	/*Alaberintoconcreto1* Builder = GetWorld()->SpawnActor<Alaberintoconcreto1>(Alaberintoconcreto1::StaticClass());

	// Spawn del Director
	Adirector* Director = GetWorld()->SpawnActor<Adirector>(Adirector::StaticClass());

	if (Builder && Director)
	{
		// Asignamos el builder al director
		Director->SetBuilder(Builder);

		Director->construirlaberintodesolomuros();

		
	}*/
	ABloqueD1* prototipo = GetWorld()->SpawnActor<ABloqueD1>(ABloqueD1::StaticClass(), FVector(-720.0f, 250.0f, 130.0f), FRotator::ZeroRotator);
	if (prototipo)
	{
		FVector Pos = prototipo->GetActorLocation();
		FVector posicion2 = Pos + FVector(150.0f, 100.0f, 0.0f);
		float Dis = 1000.0f;
		AActor* clon = prototipo->Clonar(posicion2, Dis);

		if (clon)
		{
			clon->SetActorLocation(Pos);
		}
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("¡Clon creado correctamente!"));

	}
	ABloqueD2* prototipo2 = GetWorld()->SpawnActor<ABloqueD2>(ABloqueD2::StaticClass(), FVector(-1420.0f, -280.0f, 130.0f), FRotator::ZeroRotator);
	if (prototipo2)
	{
		FVector Pos = prototipo2->GetActorLocation();
		FVector posicion2 = Pos + FVector(150.0f, 100.0f, 0.0f);
		float Dis = 1000.0f;
		AActor* clon = prototipo2->Clonar(posicion2, Dis);
		if (clon)
		{
			clon->SetActorLocation(Pos);
		}
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("¡Clon creado correctamente!"));
	}


	/*
	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Spawning"));

	int32 MaxAltura = 3;      // Número de capas en el eje Z
	float AlturaBloque = 100.0f; // Distancia entre capas
	// Recorremos la matriz para generar los bloques
	for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{
			int32 valor = aMapaBloques[fila][columna];

			if (valor != 0) // Si no es espacio vacío
			{
				for (int32 altura = 0; altura < MaxAltura; ++altura) // Bucle para la altura
				{
					FVector posicionBloque = FVector(XInicial + columna * AnchoBloque, YInicial + fila * LargoBloque, ZInicial + altura * AlturaBloque); // Incrementar Z

					// Llamamos a la función para generar un bloque
					SpawnBloque(posicionBloque, valor);
				}
			}
		}
	}
	*/

	//GetWorld()->GetTimerManager().SetTimer(tHDestruirBloques, this, &ABomberman_LABGameMode::DestruirBloque, 2.0f, true);
}

/*

void ABombermanGameMode::SpawnBloque(FVector posicionBloque, int32 tipoBloque)
{
	
		//ABloque* BloqueGenerado = nullptr;
		ABloque* BloqueGenerado = nullptr;
		// Elegir tipo de bloque basado en el valor
		if (tipoBloque == 4)
		{
			BloqueGenerado = GetWorld()->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		}
		else if (tipoBloque == 3)
		{
			BloqueGenerado = GetWorld()->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		}
		else if (tipoBloque == 2)
		{
			BloqueGenerado = GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		}
		else if (tipoBloque == 1)
		{
			BloqueGenerado = GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		}
		else {
			return;
		}
		// Agregar el bloque al TArray si fue generado
		if (BloqueGenerado)
		{
			aBloques.Add(BloqueGenerado);
		}
	
}
*/


