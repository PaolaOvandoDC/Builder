// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ilaberintobuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class Uilaberintobuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN_API Iilaberintobuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void buildMuros() = 0;
	virtual void buildBloqueMadera() = 0;
	virtual void builBloqueConcreto() = 0;
	virtual void buildBloqueLadrillo() = 0;
	virtual void buildGenerarBombas() = 0;	

	//virtual class GetLaberinto() = 0;
	virtual class Alaberinto* GetLaberinto() = 0;
	// Reinicia el builder para una nueva construcción
	virtual void Reset() = 0;
	//virtual Alaberinto* Clonar() = 0;

};
