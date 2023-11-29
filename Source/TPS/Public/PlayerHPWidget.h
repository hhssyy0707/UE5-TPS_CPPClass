// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHPWidget.generated.h"

/**
 * 
 */
class UTextBlock;
class UProgressBar;

UCLASS()
class TPS_API UPlayerHPWidget : public UUserWidget
{
	GENERATED_BODY()
private:
	UPROPERTY(EditDefaultsOnly, Meta = (AllowPrivateAccess, BindWidget))
	UTextBlock* Txt_HPPercent;

	UPROPERTY(EditDefaultsOnly, Meta = (AllowPrivateAccess, BindWidget))
	UProgressBar* PrgrB_HP;
	
	UPROPERTY(EditDefaultsOnly, Meta = (AllowPrivateAccess, BindWidget))
	UProgressBar* PrgrB_HPGuide;

	float TargetHPPercent=1;

public:

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;


	void SetHPPercent(int CurrentHP, int MaxHP);
};
