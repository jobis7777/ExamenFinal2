
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderNiveles.h"
#include "BuilderTipoC.generated.h"

UCLASS()
class DONKEYKONG_USFX_API ABuilderTipoC : public AActor, public IBuilderNiveles
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ABuilderTipoC();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    void ConstruirNivel1(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direccionInicial);
    void ConstruirNivel2(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direccionInicial);
	void ConstruirNivel3(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direccionInicial);

    AActor* ObtenerEscenario();
    TMap<int, APlataforma*> ObtenerPlataformas();

private:
    AActor* Escenario;
    TMap<int, APlataforma*> Plataformas;
    int ID;

    // Variables originales adaptadas
    float e;
    float varAux;
    int clavePlataformacero;
    int clavePlataforma;
    int numRandoms;
    int numRandoms2;
    FVector plataformaPosicion;
    FRotator plataformaRotacion;
};

