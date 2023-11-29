// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EnemyFSM.h" //무거울 것 같으면 따로 헤더로 뺀다 추가시 항상 제너레이트 위로

#include "EnemyAnim.generated.h"

/**
 * 
 */
UCLASS()
class TPS_API UEnemyAnim : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEnemyState EnemyState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDieDone;

	UFUNCTION(BlueprintImplementableEvent)
	void PlayMontageDamage(FName SectionName);

	UFUNCTION(BlueprintCallable)
	void OnDamageEnd();

	UFUNCTION()
	void AnimNotify_DamageEnd();
	
	UFUNCTION()
	void AnimNotify_DieEnd();

	
	UFUNCTION()
	void AnimNotify_OnAttackHit();

	//UPROPERTY()
	//class AEnemy* Enemy1;
};
