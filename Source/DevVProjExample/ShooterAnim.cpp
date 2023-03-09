// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAnim.h"

void UShooterAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APawn *Pawn = TryGetPawnOwner();
	if (Pawn != nullptr)
	{
		Speed = Pawn->GetVelocity().Size();
	}
}