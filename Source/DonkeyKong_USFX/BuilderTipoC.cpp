// Fill out your copyright notice in the Description page of Project Settings.#include "BuilderTipoC.h"

#include "BuilderTipoC.h"
#include "Plataforma.h"

// Sets default values
ABuilderTipoC::ABuilderTipoC()
{
    PrimaryActorTick.bCanEverTick = true;
    ID = 0;

    // Inicialización de variables
   /* e = 10.0f;
    varAux = 551.0f;
    clavePlataformacero = 0;
    clavePlataforma = 1;
    plataformaPosicion = FVector(1207.0f, -516 + 551 / 2 * (e - 1), 780.0f);
    plataformaRotacion = FRotator(0.0f, 0.0f, 0.0f);*/
    plataformaPosicion = FVector(1207.0f, -516.0f, 780.0f);
    plataformaRotacion = FRotator(0.0f, 0.0f, 0.0f);
}

// Called when the game starts or when spawned
void ABuilderTipoC::BeginPlay()
{
    Super::BeginPlay();
    Escenario = GetWorld()->SpawnActor<AActor>(AActor::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
    if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Builder Tipo C"));
	}
}


// Called every frame
void ABuilderTipoC::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABuilderTipoC::ConstruirNivel1(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direccionInicial)
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Construyendo Nivel 1"));
    FVector Posicion = ubicacionInicial;
    FRotator Rotacion;
    float distanciaZ = 700.f;
    float distanciaY = 550.f;
    float RotacionZ = 20.f;
    int Rotara = 0;
    direccionInicial > 0 ? Rotacion = FRotator(0.f, 0.f, -2.f) : Rotacion = FRotator(0.f, 0.f, 2.f);

    // Adaptación del código original
    APlataforma* ceroPlataforma;
    for (int k = 0; k < e * 2; k++) {
        ceroPlataforma = GetWorld()->SpawnActor<APlataforma>(FVector(1207.0f, (-516.0f + 551.0f * e) - varAux, 80.0f), FRotator(0.0f, 0.0f, 0.0f));
        varAux += 551.0f;
        Plataformas.Add(clavePlataformacero, ceroPlataforma);
        clavePlataformacero++;
    }

    varAux = 1.0f;
    APlataforma* NuevaPlataforma;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < e; j++) {
            if (j == 0 || j + 1 == e) {
                plataformaRotacion.Roll = -15.0f * varAux;
                plataformaPosicion.Z -= FMath::Tan(FMath::DegreesToRadians(15.0f)) * 551 / 2;
                NuevaPlataforma = GetWorld()->SpawnActor<APlataforma>(plataformaPosicion, plataformaRotacion);
                plataformaPosicion.Z -= FMath::Tan(FMath::DegreesToRadians(15.0f)) * 551 / 2;
            }
            else {
                plataformaRotacion.Roll = 0.0f;
                NuevaPlataforma = GetWorld()->SpawnActor<APlataforma>(plataformaPosicion, plataformaRotacion);
            }
            if (NuevaPlataforma) {
                Plataformas.Add(clavePlataforma, NuevaPlataforma);
                clavePlataforma++;
            }
            plataformaPosicion.Y -= 551.0f * varAux;
        }
        varAux *= -1;
        plataformaPosicion.Z += 900.0f;
    }

    for (int z = 0; z < 3; z++) {
        numRandoms = FMath::RoundToInt(FMath::FRandRange(1.0f, 5 * e));
        APlataforma** PlataformaEncontrada = Plataformas.Find(numRandoms);
        if (PlataformaEncontrada) {
            (*PlataformaEncontrada)->SetMoverse(true);
        }
    }

    for (int p = 0; p < 3; p++) {
        numRandoms2 = FMath::RoundToInt(FMath::FRandRange(1.0f, 5 * e));
        APlataforma** PlataformaEncontrada2 = Plataformas.Find(numRandoms2);
        APlataforma** PlataformaEncontradaD = Plataformas.Find(numRandoms2 + 1);
        if (PlataformaEncontrada2 && PlataformaEncontradaD) {
            (*PlataformaEncontrada2)->SetMoverse2(true);
        }
    }
}

void ABuilderTipoC::ConstruirNivel2(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direccionInicial)
{
}

void ABuilderTipoC::ConstruirNivel3(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direccionInicial)
{
}

AActor* ABuilderTipoC::ObtenerEscenario()
{
    return Escenario;
}

TMap<int, APlataforma*> ABuilderTipoC::ObtenerPlataformas()
{
	return TMap<int, APlataforma*>(Plataformas);
}