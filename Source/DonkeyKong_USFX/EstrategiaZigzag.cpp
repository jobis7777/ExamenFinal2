// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaZigzag.h"

// Sets default values
AEstrategiaZigzag::AEstrategiaZigzag()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEstrategiaZigzag::BeginPlay()
{
	Super::BeginPlay();
	incrementoY = 10.0f;
    incrementoZ = 1.5f;
    moverse = true;
}

// Called every frame
void AEstrategiaZigzag::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaZigzag::ObtenerPosicion(AActor* _enemigo)
{
	enemigo = Cast<AEnemigos>(_enemigo);
    PosicionInicial = enemigo->GetActorLocation();
    LimiteInicial = PosicionInicial + FVector(0, 2000, 1000);
    LimiteFinal = PosicionInicial + FVector(0, -2000, -700);
}

void AEstrategiaZigzag::Movimiento()
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
        if (PosicionActual.Z >= LimiteInicial.Z || PosicionActual.Z <= 200) {
            incrementoZ *= -1;
        }
        enemigo->SetActorLocation(PosicionActual);
        enemigo->SetActorRotation(mirar);
    }
}

