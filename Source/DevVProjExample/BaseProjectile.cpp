// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseProjectile.h"

// Sets default values
ABaseProjectile::ABaseProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//SphereComponent->CreateDefaultSubobject<USceneComponent>(TEXT("SphereComponent"));
	//SphereComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	//SphereComponent->InitSphereRadius(50.0f);
	//SetRootComponent(SphereComponent);
}

// Called when the game starts or when spawned
void ABaseProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

