// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ilaberintobuilder.h"
#include "laberintoconcreto1.generated.h"

UCLASS()
class BOMBERMAN_API Alaberintoconcreto1 : public AActor, public Iilaberintobuilder
{
	GENERATED_BODY()

private:
	UPROPERTY()
	Alaberinto* laberintoactual = nullptr;

public:
	// Sets default values for this actor's properties
	Alaberintoconcreto1();

	// Builder methods
	virtual void Reset() override;
	virtual void buildMuros() override;
	virtual void buildBloqueMadera() override;
	virtual void builBloqueConcreto() override;
	virtual void buildBloqueLadrillo() override;
	virtual void buildGenerarBombas() override;	
	virtual Alaberinto* GetLaberinto() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
