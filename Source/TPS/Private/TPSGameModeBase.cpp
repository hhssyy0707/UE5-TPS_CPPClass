// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSGameModeBase.h"
//#include "../TPS.h" 상위폴더 접근 
#include "TPS.h" 

#define HELLO_WORLD FString("Hello World333!")

void ATPSGameModeBase::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("Hello SY111"));
	UE_LOG(LogTemp, Warning, TEXT("%s"), *FString("Hello SY222"));
	UE_LOG(LogTemp, Warning, TEXT("%s"), *HELLO_WORLD);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *HELLO_WORLD4);
	UE_LOG(LogTemp, Warning, TEXT("%s, %s"), *CLASS_INFO,TEXT("testest"));
	MY_LOG(TEXT("My Log Print"));
	//FString::Printf();
	MY_LOG2(TEXT("%s,%s"), TEXT("ss"), TEXT("yy"));
}
