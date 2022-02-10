// Fill out your copyright notice in the Description page of Project Settings.


#include "BossMutantAnimInstance.h"
#include "Boss_Mutant.h"

void UBossMutantAnimInstance::NativeInitializeAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if (Pawn)
		{
			BossMonster = Cast<ABoss_Mutant>(Pawn);
		}
	}
}

void UBossMutantAnimInstance::UpdateAnimationProperties()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if (Pawn)
		{
			BossMonster = Cast<ABoss_Mutant>(Pawn);
		}

	}

	if (Pawn)
	{
		FVector Speed = Pawn->GetVelocity();
		FVector LateralSpeed = FVector(Speed.X, Speed.Y, 0.f);
		MovementSpeed = LateralSpeed.Size();

	}

}