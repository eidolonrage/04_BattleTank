// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTankPlayerController.h"

void ABattleTankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("PlayerController Beginning play!"));
	ATank* myPawn = GetControlledTank();

	if (!myPawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("Couldn't find a pawn for the player controller!"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Found pawn for the player controller! Pawn is %s"), *myPawn->GetName())
	}

}

ATank* ABattleTankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


