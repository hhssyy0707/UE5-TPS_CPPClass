// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerBaseComp.h"
#include "PlayerMoveComp.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (TPSPlayer), meta=(BlueprintSpawnableComponent))
class TPS_API UPlayerMoveComp : public UPlayerBaseComp
{
	GENERATED_BODY()
	
public:

	UPlayerMoveComp();

	virtual void BeginPlay() override;


	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// 자식이 재정의될 수 있도록 virtual 선언
	virtual void SetupPlayerInputComp(class UInputComponent* PlayerInputComponent) override;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TPS)
	FVector Direction;

	void AxisHorizontal(float value);
	void AxisVertical(float value);
	void AxisLookUp(float value);
	void AxisTurn(float value);
	void ActionJump();
	void ActionWalk();
	void ActionRun();
	

	UPROPERTY(EditAnywhere)
	float WalkSpeed=300;

	UPROPERTY(EditAnywhere)
	float RunSpeed=600;

};
