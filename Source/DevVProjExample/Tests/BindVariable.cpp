// Fill out your copyright notice in the Description page of Project Settings.


#include "BindVariable.h"
#include "../DevVProjExample.h"

// Sets default values
ABindVariable::ABindVariable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	VisibleInstanceOnlyOdd = 34;
	EditAnywhere = 0.57f;
}

// Called when the game starts or when spawned
void ABindVariable::BeginPlay()
{
	Super::BeginPlay();
	
	//Log
	UE_LOG(Game, Error, TEXT("Actor's Name is %s"), *GetName());
	UE_LOG(Game, Display, TEXT("int %d and a float is %f"), VisibleInstanceOnlyOdd, EditAnywhere);
	UE_LOG(Game, Error, TEXT("Actor's Name is %s"), *GetVelocity().ToString());
}

// Called every frame
void ABindVariable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

