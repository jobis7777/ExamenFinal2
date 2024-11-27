// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_USFXGameMode.h"
#include "DonkeyKong_USFXCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "BuilderNiveles.h"
#include "BuilderTipoA.h"
#include "BuilderTipoB.h"
#include "BuilderTipoC.h"
#include "Arquitecto.h"
#include "EstrategiaZigzag.h"
#include "EstrategiaSenoidal.h"
#include "EnemigoDragon.h"
#include "CieloNoche.h"


ADonkeyKong_USFXGameMode::ADonkeyKong_USFXGameMode()
{
	// set default pawn class to our Blueprinted character
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ADonkeyKong_USFXGameMode::BeginPlay()
{
	//UWorld* World = GetWorld(); static bool toggle = 0; // Bandera para alternar
	//if (World) {
	//	FVector PosicionInicial = FVector(1207.0f, -516.0f, 780.0f); // Posición inicial común 
	//	FRotator RotacionInicial = FRotator(0.0f, 0.0f, 0.0f);
	//	if (toggle==0) { // Instanciar BuilderTipoA 
	//		ABuilderTipoA* BuilderA = World->SpawnActor<ABuilderTipoA>(ABuilderTipoA::StaticClass(), PosicionInicial, RotacionInicial);
	//		Ingeniero->GetWorld()->SpawnActor<AArquitecto>(AArquitecto::StaticClass());
	//		if (BuilderA) {
	//			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("BuilderTipoA instanciado"));
	//		}
	//	}
	//	else if(toggle=1) {
	//		// Instanciar BuilderTipoB 
	//		ABuilderTipoB* BuilderB = World->SpawnActor<ABuilderTipoB>(ABuilderTipoB::StaticClass(), PosicionInicial, RotacionInicial);
	//		if (BuilderB) {
	//			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("BuilderTipoB instanciado"));
	//		}
	//	}
	//	else if(toggle==2) {
	//		// Instanciar BuilderTipoC 
	//		ABuilderTipoC* BuilderC = World->SpawnActor<ABuilderTipoC>(ABuilderTipoC::StaticClass(), PosicionInicial, RotacionInicial);
	//		if (BuilderC) {
	//			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("BuilderTipoC instanciado"));
	//		}
	//	}
	//}// Alternar la bandera 
	//toggle = (toggle+1) % 3; 


	//builder
	Posicion = FVector(1206.8f, 1700.f, 180.f);
	Constructor = GetWorld()->SpawnActor<ABuilderTipoA>(ABuilderTipoA::StaticClass());
	Ingeniero = GetWorld()->SpawnActor<AArquitecto>(AArquitecto::StaticClass());
	/*Ingeniero->EstablecerConstructorNiveles(Constructor);
	Ingeniero->ConstruirNivel1(5,10,Posicion,1);
	Escenario = Ingeniero->obtenerEscenario();*/

	Posicion.Y -= 1600.f;
	Constructor2 = GetWorld()->SpawnActor<ABuilderTipoB>(ABuilderTipoB::StaticClass());
	Ingeniero->EstablecerConstructorNiveles(Constructor2);
	/*Ingeniero->ConstruirNivel1(5, 10, Posicion, 1);
	PosicionMapa = Ingeniero->obtenerPlataformas();*/
	//segundos = 0;	
	//Posicion.Y -= 2600.f;
	Constructor3 = GetWorld()->SpawnActor<ABuilderTipoC>(ABuilderTipoC::StaticClass());
	Ingeniero->EstablecerConstructorNiveles(Constructor3);
	Ingeniero->ConstruirNivel1(5, 10, Posicion, 1);
	PosicionMapa = Ingeniero->obtenerPlataformas();


	//strategy
	zigzag = GetWorld()->SpawnActor<AEstrategiaZigzag>(AEstrategiaZigzag::StaticClass());
	senoidal = GetWorld()->SpawnActor<AEstrategiaSenoidal>(AEstrategiaSenoidal::StaticClass());
	dragon = GetWorld()->SpawnActor<AEnemigoDragon>(AEnemigoDragon::StaticClass(), FVector(1208, -1210, 450), FRotator::ZeroRotator);
	dragon->AlterarManiobras(senoidal);
	dragon->Emplear();
}

void ADonkeyKong_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	segundos += DeltaTime;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Cambio de estrategia en: %f"), segundos));
	if (segundos >= 10 && segundos <=10.1) {
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Cambio de nivel")));
		//UGameplayStatics::OpenLevel(GetWorld(), FName("nivel2"));
		//segundos = 0;
		dragon->AlterarManiobras(senoidal);
	}
}

void ADonkeyKong_USFXGameMode::alternarBuilders()
{
}
