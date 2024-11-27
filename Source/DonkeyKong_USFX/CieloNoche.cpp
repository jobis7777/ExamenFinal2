// Fill out your copyright notice in the Description page of Project Settings.


#include "CieloNoche.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ACieloNoche::ACieloNoche()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CieloNocheMallaComponente = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CieloNocheMallaComponente"));
	ConstructorHelpers::FObjectFinder<UBlueprint> cieloNocturno(TEXT("Blueprint'/Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky'"));
	if (cieloNocturno.Succeeded())
	{
		cieloNocturnoBP = cieloNocturno.Object->GeneratedClass;
	}

}

// Called when the game starts or when spawned
void ACieloNoche::BeginPlay()
{
	Super::BeginPlay();

	if (cieloNocturnoBP)
	{
		GetWorld()->SpawnActor<AActor>(cieloNocturnoBP, FVector(0, 0, 0), FRotator(90, 0, 0));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se encontro el blueprint"));
	}
}

// Called every frame
void ACieloNoche::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

