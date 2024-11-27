// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoDragon.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemigoDragon::AEnemigoDragon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("SkeletalMesh'/Game/FourEvilDragonsPBR/Meshes/DrangonTheSoulEater/DragonTheSoulEaterSK.DragonTheSoulEaterSK'"));
	if (MeshAsset.Succeeded())
	{
		SkeletalMesh->SetSkeletalMesh(MeshAsset.Object);
	}
	SkeletalMesh->SetupAttachment(RootComponent);
	SkeletalMesh->SetRelativeScale3D(FVector(0.8f, 0.8f, 0.8f));
	SkeletalMesh->SetRelativeLocation(FVector(0.0f, 0.f, -300.0f));
	// Cargar la animación
	static ConstructorHelpers::FObjectFinder<UAnimSequence> AnimationAsset(TEXT("AnimSequence'/Game/FourEvilDragonsPBR/Animations/DragonTheSoulEater/FlyIdleAnim.FlyIdleAnim'"));
	if (AnimationAsset.Succeeded())
	{
		MyAnimationAsset = AnimationAsset.Object;
	}
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}

// Called when the game starts or when spawned
void AEnemigoDragon::BeginPlay()
{
	Super::BeginPlay();
	SkeletalMesh->PlayAnimation(MyAnimationAsset, true);
}

// Called every frame
void AEnemigoDragon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemigoDragon::AlterarManiobras(AActor* _EstrategiaDeBatalla)
{
	Estrategia = Cast<IIEstrategiaMovimiento>(_EstrategiaDeBatalla);
	if (!Estrategia) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Casteo no establecido")));
	}
	AsignarPosicion();
}

void AEnemigoDragon::Emplear()
{
	if (Estrategia)
	{
		Estrategia->Movimiento();
		GetWorld()->GetTimerManager().SetTimer(mover, this, &AEnemigoDragon::Emplear, 0.009f, true);
	}
}

void AEnemigoDragon::AsignarPosicion()
{
	if (Estrategia) {
		Estrategia->ObtenerPosicion(this);
	}
}

