﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBaseComp.h"
#include "TPSPlayer.h"

// Sets default values for this component's properties
UPlayerBaseComp::UPlayerBaseComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerBaseComp::BeginPlay()
{
	Super::BeginPlay();

	// ...
	Me = Cast<ATPSPlayer>(GetOwner());
}


// Called every frame
void UPlayerBaseComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPlayerBaseComp::SetupPlayerInputComp(UInputComponent* PlayerInputComponent)
{
}
