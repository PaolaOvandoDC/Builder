// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"

ABloqueConcreto::ABloqueConcreto()
{
    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Concrete_Panels.M_Concrete_Panels'"));
        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }

}

void ABloqueConcreto::BeginPlay()
{
    Super::BeginPlay();
}