// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnManager.generated.h"

UCLASS()
class TPS_API ASpawnManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

// 필요속성
// 스폰목록, 생성시간 정보, 타이머핸들, 적공장
// 필요기능
// 적 생성
public:
	UPROPERTY(EditAnywhere)
	//포인터를 배열에 담을 거야!
	TArray<class AEnemySpawn*> SpawnList;

	float MakeTimeMin = 1;
	float MakeTimeMax = 3;
	FTimerHandle EnemyHandler;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AEnemy> EnemyFactory;

	void MakeEnemy();
	void SetSpawnList(bool bUseIterator);

};
