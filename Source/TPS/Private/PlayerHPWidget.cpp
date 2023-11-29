// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHPWidget.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"


void UPlayerHPWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime) {
	Super::NativeTick( MyGeometry, InDeltaTime);

	float NewPercent = FMath::Lerp(PrgrB_HPGuide->GetPercent(), TargetHPPercent, InDeltaTime*5);
	PrgrB_HPGuide->SetPercent(NewPercent);
}


void UPlayerHPWidget::SetHPPercent(int CurrentHP, int MaxHP)
{
	TargetHPPercent = (float)CurrentHP / MaxHP;
	PrgrB_HP->SetPercent(TargetHPPercent);
	FString TxtHP = FString::Printf(TEXT("%d / %d"), CurrentHP, MaxHP);
	Txt_HPPercent->SetText(FText::FromString(TxtHP) );
	//Txt_HPPercent->SetText(FString::printf(TEXT("%f/%f", CurrentHP, MaxHP)));
	//Txt_HPPercent->SetText(TEXT("%f/%f", CurrentHP, MaxHP)); 
}

