// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss_Mutant_AttackCollision.h"

// Sets default values
ABoss_Mutant_AttackCollision::ABoss_Mutant_AttackCollision()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABoss_Mutant_AttackCollision::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoss_Mutant_AttackCollision::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
