// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMoveComp.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TPSPlayer.h"

UPlayerMoveComp::UPlayerMoveComp()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UPlayerMoveComp::BeginPlay()
{
	Super::BeginPlay();

	Me->JumpMaxCount = 2;
	Me->GetCharacterMovement()->AirControl = 1;
	ActionWalk();
}

void UPlayerMoveComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	Direction.Normalize();
	FVector dir = FTransform(Me->GetControlRotation()).TransformVector(Direction);
	Me->AddMovementInput(dir);
}

void UPlayerMoveComp::SetupPlayerInputComp(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComp(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Look Up / Down Mouse"), this, &UPlayerMoveComp::AxisLookUp);

	PlayerInputComponent->BindAxis(TEXT("Move Forward / Backward"), this, &UPlayerMoveComp::AxisVertical);

	PlayerInputComponent->BindAxis(TEXT("Move Right / Left"), this, &UPlayerMoveComp::AxisHorizontal);

	PlayerInputComponent->BindAxis(TEXT("Turn Right / Left Mouse"), this, &UPlayerMoveComp::AxisTurn);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &UPlayerMoveComp::ActionJump);

	PlayerInputComponent->BindAction(TEXT("Run"), EInputEvent::IE_Pressed, this, &UPlayerMoveComp::ActionRun);
	PlayerInputComponent->BindAction(TEXT("Run"), EInputEvent::IE_Released, this, &UPlayerMoveComp::ActionWalk);
}

void UPlayerMoveComp::AxisHorizontal(float value)
{
	Direction.Y = value;
}

void UPlayerMoveComp::AxisVertical(float value)
{
	Direction.X = value;
}

void UPlayerMoveComp::AxisLookUp(float value)
{
	Me->AddControllerPitchInput(value);
}

void UPlayerMoveComp::AxisTurn(float value)
{
	Me->AddControllerYawInput(value);
}

void UPlayerMoveComp::ActionJump()
{
	Me->Jump();
}

void UPlayerMoveComp::ActionWalk()
{
	Me->GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void UPlayerMoveComp::ActionRun()
{
	Me->GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
}