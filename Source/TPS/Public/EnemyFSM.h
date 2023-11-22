// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyFSM.generated.h"

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	Idle	UMETA(DisplayName = "IDLE"),
	Move	UMETA(DisplayName = "MOVE"),
	Attack	UMETA(DisplayName = "ATTACK"),
	Damage	UMETA(DisplayName = "DAMAGE"),
	Die		UMETA(DisplayName = "DIE")
};

//union MyUnion{}

//typedef enum aaa {
//	Idle, ...
//}; EEnemyState

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TPS_API UEnemyFSM : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemyFSM();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EEnemyState CurrentState;
	
	
	UPROPERTY()
	class AEnemy* Me;
	UPROPERTY()
	class ATPSPlayer* Target;
	UPROPERTY()
	float AttackDistance = 300;

	UPROPERTY(VisibleAnywhere)
	int32 HP;
	
	UPROPERTY(VisibleAnywhere)
	int32 MaxHP = 5;

	FVector DieEndLoc;

	void OnTakeDamage(int32 Damage);
	float CurrentTime;

	
	UPROPERTY(EditAnywhere)
	float DamageTime = 2;

	UPROPERTY(EditAnywhere)
	float DieTime = 2;

	UPROPERTY(EditAnywhere)
	float AttackTime = 2;

private:
	void TickIdle();
	void TickMove();
	void TickAttack();
	void TickDamage();
	void TickDie();

	void SetCurrentState(EEnemyState NextState);


	
public:
	//나의 상태가 바뀔 때 애니메이션의 상태도 바꾸고싶다.
	//생성자에서 직접 ABP_Enemy를 로드하고싶다.
	UPROPERTY()
	class UEnemyAnim* EnemyAnim;

	UPROPERTY(EditAnywhere)
	//TSubclassOf<class UAnimMontage> EAnimActionMontage;
	class UAnimMontage* EnemyActionMontage;

	void PlayMontageDamage();
	void PlayMontageDie();

	void OnChangeMoveState();

	UPROPERTY()
	class AAIController* AI;
	FVector RandomLocation;

	// & : 값을 넣어주기 위함
	bool UpdateRandomLocation(FVector Origin, float Radius, FVector& OutLocation);

	void UpdateHP(float NewHP);
};
