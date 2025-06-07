// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueAcero.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_API ABloqueAcero : public ABloque
{
	GENERATED_BODY()
public:
	ABloqueAcero();

	
	virtual void Tick(float DeltaTime) override;
	void Explotar(); //esta funcion activa la explosion

	UPROPERTY(EditAnywhere, Category = "Efectos")
	UParticleSystem* ExplosionEffect;
	float DurezaBloque = 100.0f;

private:
	void Dureza();
	bool bExploto = false; //esto indica si se exploto
};
