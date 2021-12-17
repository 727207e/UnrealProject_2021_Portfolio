// Fill out your copyright notice in the Description page of Project Settings.


#include "MinionMeleeCoreDawn_AnimInstance.h"
#include "MinionMeleeCoreDawn_Enemy.h"

void UMinionMeleeCoreDawn_AnimInstance::NativeInitializeAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if (Pawn)
		{
			Enemy = Cast<AMinionMeleeCoreDawn_Enemy>(Pawn);
		}
	}
}

void UMinionMeleeCoreDawn_AnimInstance::UpdateAnimationProperties()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if (Pawn)
		{
			Enemy = Cast<AMinionMeleeCoreDawn_Enemy>(Pawn);
		}
	}

	if (Pawn)
	{
		FVector Speed = Pawn->GetVelocity();
		FVector LateralSpeed = FVector(Speed.X, Speed.Y, 0.f);
		MovementSpeed = LateralSpeed.Size();
	}
}