// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Pawn.h"

ABasePlayer::ABasePlayer()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->bUsePawnControlRotation = true;

	// Set the location of the SpringArm relative to the character
	SpringArm->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
}

void ABasePlayer::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("TurnTo", this, &APawn::AddControllerYawInput);

	PlayerInputComponent->BindAxis("MoveForward", this, &ABasePlayer::MoveForward);
}
void ABasePlayer::MoveForward(float AxisValue)
{
	FRotator ControlRotation = Controller->GetControlRotation();
	FRotator MakeRotation(0.0f, ControlRotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(MakeRotation).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, AxisValue);
}
