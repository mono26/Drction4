// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	// Move the barrel the right amount this frame
	// Given max elevation speed and frameTime
	UE_LOG(LogTemp, Warning, TEXT("Barrel Elevate() called at speed %f"), DegreesPerSecond);
}


