// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSPlayer_Anim.h"
#include "TPSPlayer.h"
#include "GameFramework/CharacterMovementComponent.h"

void UTPSPlayer_Anim::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	// GetOwningActor() VS  TryGetPawnOwner()


	//if ( !player ) {
	if ( player == nullptr ) {

		auto owner = TryGetPawnOwner();
		player = Cast<ATPSPlayer>(owner);
	}
	if ( player == nullptr ) {
		return;
	}

	FVector forward = player->GetActorForwardVector();
	FVector right = player->GetActorRightVector();
	FVector velocity = player->GetVelocity();

	Speed = FVector::DotProduct(forward, velocity); 
	Direction = FVector::DotProduct(right, velocity);
	//UCharacterMovementComponent* Movement = player->GetCharacterMovement();
	//IsFalling = Movement->IsFalling();
	IsFalling = player->GetCharacterMovement()->IsFalling();
	
}
