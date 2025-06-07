// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueAcero.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h" // Para trabajar con efectos de partículas
#include "Particles/ParticleSystemComponent.h" // Para efectos avanzados de partículas


ABloqueAcero::ABloqueAcero()
{
    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
        // Cargar efecto de explosión
        static ConstructorHelpers::FObjectFinder<UParticleSystem> ExplosionAsset(TEXT("/Game/StarterContent/Particles/P_Explosion"));
        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
       
        if (ExplosionAsset.Succeeded())
        {
            ExplosionEffect = ExplosionAsset.Object;
        }
    }
}
void ABloqueAcero::Dureza()
{

}

void ABloqueAcero::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Si no ha explotado aún, hacemos que explote después de cierto tiempo
    static float TiempoTranscurrido = 10.0f;
    TiempoTranscurrido += DeltaTime;

    if (TiempoTranscurrido >= 10.0f && !bExploto) // Explota después de 6 segundos
    {
        Explotar();
        bExploto = true;
    }
}
void ABloqueAcero::Explotar()
{
    FVector Posicion = GetActorLocation();

    if (ExplosionEffect)
    {
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, Posicion);
    }

    Destroy(); // Elimina el bloque tras explotar
}



