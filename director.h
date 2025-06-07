// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ilaberintobuilder.h"
#include "director.generated.h"
UCLASS()
class BOMBERMAN_API Adirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Adirector();
	void SetBuilder(TScriptInterface<Iilaberintobuilder> NuevoBuilder);

	void construirlaberintodesolomuros();
private:
	// Referencia al builder actual
	TScriptInterface<Iilaberintobuilder> Builder;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
