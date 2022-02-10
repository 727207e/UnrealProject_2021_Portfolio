// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MyMainCharacter.h"

void UMainCharAnimInstance::NativeInitializeAnimation()
{
	if (Pawn == nullptr) {
		Pawn = TryGetPawnOwner();
		if (Pawn) {
			Main = Cast<AMyMainCharacter>(Pawn);
		}
	}
}

void UMainCharAnimInstance::UpdateAnimationProperties() {
	if (Pawn == nullptr) {
		Pawn = TryGetPawnOwner();
	}

	if (Pawn) {
		FVector Speed = Pawn->GetVelocity();
		FVector LateralSpped = FVector(Speed.X, Speed.Y, 0.f);
		MovementSpeed = LateralSpped.Size();

		if (Main == nullptr) {
			Main = Cast<AMyMainCharacter>(Pawn);
		}

		if (Main)
		{
			MyCharAttackPose = Main->AnimAttackPose;
		}
	}
}
