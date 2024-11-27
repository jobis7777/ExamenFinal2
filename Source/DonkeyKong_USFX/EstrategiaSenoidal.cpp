// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaSenoidal.h"

// Sets default values
AEstrategiaSenoidal::AEstrategiaSenoidal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaSenoidal::BeginPlay()
{
	Super::BeginPlay();
    incrementoY = 9.0f;
    incrementoZ = 7.0f;
    moverse = true;
}

// Called every frame
void AEstrategiaSenoidal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaSenoidal::ObtenerPosicion(AActor* _enemigo)
{
    enemigo = Cast<AEnemigos>(_enemigo);
    PosicionInicial = enemigo->GetActorLocation();
    LimiteInicial = PosicionInicial + FVector(0, 2000, 300);
    LimiteFinal = PosicionInicial + FVector(0, -2000, -300);
}

void AEstrategiaSenoidal::Movimiento()
{
    if (enemigo) {
        PosicionActual = enemigo->GetActorLocation();
        mirar = enemigo->GetActorRotation();
        if (moverse)
        {
            if (PosicionActual.Y <= LimiteInicial.Y) {
                PosicionActual.Y += incrementoY;
                PosicionActual.Z += incrementoZ;
                mirar.Yaw = 0;
            }
            else moverse = false;
        }
        else
        {
            if (PosicionActual.Y >= LimiteFinal.Y) {
                PosicionActual.Y -= incrementoY;
                PosicionActual.Z += incrementoZ;
                mirar.Yaw = 180;
            }
            else moverse = true;
        }
        if (PosicionActual.Z >= LimiteInicial.Z || PosicionActual.Z <= LimiteFinal.Z) {
            incrementoZ *= -1;
        }
        enemigo->SetActorLocation(PosicionActual);
        enemigo->SetActorRotation(mirar);
    }
}

