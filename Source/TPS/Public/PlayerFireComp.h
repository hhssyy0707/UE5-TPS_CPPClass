// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerBaseComp.h"
#include "PlayerFireComp.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (TPSPlayer), meta=(BlueprintSpawnableComponent))
class TPS_API UPlayerFireComp : public UPlayerBaseComp
{
	GENERATED_BODY()

public:
	UPlayerFireComp();
	virtual void BeginPlay() override;
	// 자식이 재정의 할 수 있도록
	virtual void SetupPlayerInputComp(class UInputComponent* PlayerInputComponent) override;

	

	UPROPERTY(EditAnywhere)
	TSubclassOf<class ABullet> BulletFactory;

	void ActionFire();
	void ActionSetSniperGun();
	void ActionSetGrenadeGun();
	void GrenadeFire();
	void SniperFire();
	void ActionZoomIn();
	void ActionZoomOut();
	void PlayFireAnim();


	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UUserWidget> CrosshairUIFactory;
	
	UPROPERTY()
	class UUserWidget* crosshairUI;

	UPROPERTY()
	UUserWidget* sniperUI;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> SniperUIFactory;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = TPS)
	bool bSetGrenadeGun;

	UPROPERTY(EditAnywhere)
	UParticleSystem* ExplosionVFXFactory;
	
	UPROPERTY(VisibleAnywhere)
	int32 HP = 5;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* FireAnimMontage;

	bool IsZoomIn = false;

	
	UPROPERTY(EditAnywhere)
	class USoundBase* FireSound;

	//총쏘면 진동
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UCameraShakeBase> CameraShakeFactory; // 이건 그냥 블루프린트용 입력란
	
	UPROPERTY(EditAnywhere)
	UCameraShakeBase* CameraShake;

};
