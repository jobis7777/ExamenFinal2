// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstrategiaMovimiento.h"
#include "Enemigos.h"
#include "EstrategiaZigzag.generated.h"

UCLASS()
class DONKEYKONG_USFX_API AEstrategiaZigzag : public AActor, public IIEstrategiaMovimiento
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaZigzag();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	bool moverse;
	FVector PosicionInicial;
	FVector LimiteInicial;
	FVector LimiteFinal;
	FVector PosicionActual;
	FRotator mirar;
	float incrementoY;
	float incrementoZ;
	AEnemigos* enemigo;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Movimiento() override;
	void ObtenerPosicion(AActor* _enemigo) override;
	FTimerHandle mover;
};
