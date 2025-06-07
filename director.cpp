// Fill out your copyright notice in the Description page of Project Settings.


#include "director.h"

// Sets default values
Adirector::Adirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void Adirector::SetBuilder(TScriptInterface<Iilaberintobuilder> NuevoBuilder)
{
	Builder = NuevoBuilder;
}

void Adirector::construirlaberintodesolomuros()
{
	if (!Builder) return;

	Builder->Reset();
	Builder->buildMuros();
	Builder->buildBloqueMadera();
	Builder->buildGenerarBombas();
	Builder->buildBloqueLadrillo();
	//Builder->ClonarBloqueMadera(3, 5);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("LABERINTOESPAWNEADO"));
}


// Called when the game starts or when spawned
void Adirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Adirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

