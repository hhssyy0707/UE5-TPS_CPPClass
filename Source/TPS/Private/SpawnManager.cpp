// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnManager.h"
#include "EnemySpawn.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "TPS.h"
#include "Enemy.h"
//#include <../../../../../../../Source/Runtime/Engine/Public/EngineUtils.h>
//#include "Engine/Public/EngineUtils.h"

// Sets default values
ASpawnManager::ASpawnManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnManager::BeginPlay()
{
	Super::BeginPlay();
	SetSpawnList(true);

	//일정시간마다 적을 생성
	//적의 위치  SpawnList 랜덤
	//생성시간도 랜덤
	//FTimerHandle EnemyHandler;
	float randTime = FMath::RandRange(MakeTimeMin, MakeTimeMax);
	GetWorld()->GetTimerManager().SetTimer(EnemyHandler, this, &ASpawnManager::MakeEnemy, randTime, false);
	/*
	GetWorld()->GetTimerManager().SetTimer(EnemyHandler, FTimerDelegate::CreateLambda(
		[this]()->void{
						GetWorld()->SpawnActor<AEnemy>(EnemyFactory, SpawnList[FMath::RandRange(0, SpawnList.Num()-1)]->GetActorLocation());//, FRotator::ZeroRotator);
						}
	), FMath::RandRange(MakeTimeMin, MakeTimeMax), false); */

	
}

// Called every frame
void ASpawnManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int prevIndx = -1;
void ASpawnManager::MakeEnemy()
{
	int index = FMath::RandRange(0,SpawnList.Num()-1);
	if ( prevIndx == index ) {
		index = (index + 1) % SpawnList.Num();
	}
	FVector spawnLocation = SpawnList[index]->GetActorLocation();
	GetWorld()->SpawnActor<AEnemy>(EnemyFactory, spawnLocation, FRotator::ZeroRotator);
	float randTime = FMath::RandRange(MakeTimeMin, MakeTimeMax);
	GetWorld()->GetTimerManager().SetTimer(EnemyHandler, this, &ASpawnManager::MakeEnemy, randTime, false);

}

void ASpawnManager::SetSpawnList(bool bUseIterator)
{
	SpawnList.Empty();
	if ( bUseIterator ) {
		for ( TActorIterator<AEnemySpawn> It(GetWorld()); It; ++It ) {
		SpawnList.Add(*It);
		//MY_LOG2(TEXT("%s", *It->GetActorNameOrLabel()));
		}
	}
	else {
		TArray<AActor*> tempActor;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(),AEnemySpawn::StaticClass(), tempActor);

		for ( auto var : tempActor ) {
			AEnemySpawn* es = Cast<AEnemySpawn>(var);
			//SpawnList.Add(Cast<AEnemySpawn>(var));
			SpawnList.Add(es);
			//MY_LOG2(TEXT("%s",*es->GetActorNameOrLabel()));


		}
	}
}

