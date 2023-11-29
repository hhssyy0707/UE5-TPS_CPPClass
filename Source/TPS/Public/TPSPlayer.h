// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TPSPlayer.generated.h"

//싱글캐스트
DECLARE_DELEGATE(FInputSingleDelegate);
DECLARE_DELEGATE_OneParam(FInputSingleParamDelegate,int32);
//멀티캐스트
DECLARE_MULTICAST_DELEGATE(FInputMultiDelegate);
DECLARE_MULTICAST_DELEGATE_OneParam(FInputMultiParamDelegate, FVector);
//블루프린트용 델리게이트 선언
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIputDynamicMultiDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIputDynamicMultiParamDelegate, FVector, dir);

DECLARE_MULTICAST_DELEGATE_OneParam(FInputDelegate, class UInputComponent*);

UCLASS()
class TPS_API ATPSPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATPSPlayer();

	//inline 함수
	inline ATPSPlayer(int a) 
	{	
		//싱글 캐스트 함수 연결
		OnSingleDelegate.BindUFunction(this, TEXT("AA"));
		OnSingleDelegate.BindUObject(this, &ATPSPlayer::AA);

		//싱글 캐스트 함수 호출
		OnMultiDelegate.AddUObject(this, &ATPSPlayer::AA);
		OnMultiDelegate.AddUObject(this, &ATPSPlayer::BB);
		OnMultiDelegate.Broadcast();
		//멀티 캐스트 함수 호출
		OnDynamicMultiDelegate.AddDynamic(this, &ATPSPlayer::AA);
		OnDynamicMultiDelegate.AddDynamic(this, &ATPSPlayer::AA);
		OnDynamicMultiDelegate.Broadcast();

		OnDynamicMultiParamDelegate.AddDynamic(this, &ATPSPlayer::GetDir);
		FVector fff;
		OnDynamicMultiParamDelegate.Broadcast(fff);
	}
	//void 함수같은 개념
	void AA(){ }
	void BB(){ }
	void GetDir(FVector dir){}
	FInputSingleDelegate OnSingleDelegate;
	FInputMultiDelegate OnMultiDelegate;
	FIputDynamicMultiDelegate OnDynamicMultiDelegate;
	FIputDynamicMultiParamDelegate OnDynamicMultiParamDelegate;

	FInputDelegate OnSetUpPlayerInputDelegate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

/****************************************** MOVE ******************************************/

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TPS)
	//FVector Direction;

	//void AxisHorizontal(float value);
	//void AxisVertical(float value);
	//void AxisLookUp(float value);
	//void AxisTurn(float value);
	//void ActionJump();
	//void ActionWalk();
	//void ActionRun();


	//UPROPERTY(EditAnywhere)
	//float WalkSpeed=300;

	//UPROPERTY(EditAnywhere)
	//float RunSpeed=600;

/****************************************** FIRE ******************************************/



	//UPROPERTY(EditAnywhere)
	//TSubclassOf<class ABullet> BulletFactory;

	//void ActionFire();
	//void ActionSetSniperGun();
	//void ActionSetGrenadeGun();
	//void GrenadeFire();
	//void SniperFire();
	//void ActionZoomIn();
	//void ActionZoomOut();

	//UPROPERTY(EditDefaultsOnly)
	//TSubclassOf<class UUserWidget> CrosshairUIFactory;
	
	//UPROPERTY()
	//class UUserWidget* crosshairUI;

	//UPROPERTY()
	//UUserWidget* sniperUI;
	//
	//UPROPERTY(EditDefaultsOnly)
	//TSubclassOf<UUserWidget> SniperUIFactory;
	//
	//UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = TPS)
	//bool bSetGrenadeGun;

	//UPROPERTY(EditAnywhere)
	//UParticleSystem* ExplosionVFXFactory;
	//
	//UPROPERTY(VisibleAnywhere)
	//int32 HP = 5;

	//UPROPERTY(EditAnywhere)
	//class UAnimMontage* FireAnimMontage;

	//void PlayFireAnim();

	//bool IsZoomIn = false;

	//
	//UPROPERTY(EditAnywhere)
	//class USoundBase* FireSound;

	////총쏘면 진동
	//UPROPERTY(EditAnywhere)
	//TSubclassOf<class UCameraShakeBase> CameraShakeFactory; // 이건 그냥 블루프린트용 입력란
	//
	//UPROPERTY(EditAnywhere)
	//UCameraShakeBase* CameraShake;

/******************************************************************************************/


public:

	//컴포넌트, 스프링암, 카메라
	UPROPERTY(EditAnywhere)
	class USpringArmComponent* SpringArmComp;
	//TSubclassOf<USpringArmComponent> SpringArmComp2;
	
	UPROPERTY(EditAnywhere)
	class UCameraComponent* CameraComp;

	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent* GrenadeGun;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* SniperGun;

	//이렇게 쓰는것보다는
	/*UPROPERTY(EditAnywhere)
	class UPlayerFireComp* FireComp;

	UPROPERTY(EditAnywhere)
	class UPlayerMoveComp* MoveComp;*/
	
	// 부모형식으로 포인터를 만드는게 낫다
	UPROPERTY(EditAnywhere)
	class UPlayerBaseComp* FireComp;

	UPROPERTY(EditAnywhere)
	class UPlayerBaseComp* MoveComp;
	
	// 태어날때 HP를 MaxHP로 세팅
	// 태어날때 HP UI를 생성해서 보이게 하고 싶다.
	int MaxHP = 1000;
	int CurrentHP;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UPlayerHPWidget> HPUIFac;
	
	//PlayerHPWidget에 기능을 넣고싶어서 따로 포인터 선언
	UPROPERTY()
	class UPlayerHPWidget* PlayerHPWidget;

	void OnMyHit();
};
