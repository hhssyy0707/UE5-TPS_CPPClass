// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TPSPlayer_Anim.generated.h"

/**
 * 
 */
UCLASS()
class TPS_API UTPSPlayer_Anim : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY()
	class ATPSPlayer* player;

	//앞뒤로 움직이는 속력
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed;

	//좌우로 움직이는 속력
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Direction;
	
	//점프중이니?
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsFalling;


	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;
	
};
