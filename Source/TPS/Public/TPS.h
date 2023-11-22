// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

DECLARE_LOG_CATEGORY_EXTERN(TPS, Log, All) //LogTemp(TPS로 대체가능)의 카테고리 설정 

#include "CoreMinimal.h"
#define HELLO_WORLD4 FString("Hello World444!")
#define CLASS_INFO FString(__FUNCTION__)
#define CLASS_INFO (FString(__FUNCTION__)+TEXT("(")+FString::FromInt(__LINE__)+TEXT(")"))
//#define MY_LOG(text) UE_LOG(LogTemp, Warning, TEXT("%s, %s"), *CLASS_INFO,text) // text 인자를 하나 밖에 못넣는 단점이 있음
//#define MY_LOG2(fmt,...) UE_LOG(LogTemp, Warning, TEXT("%s, %s"), *CLASS_INFO, *FString::Printf(fmt,##__VA_ARGS__)); 
#define MY_LOG(text) UE_LOG(TPS, Warning, TEXT("%s, %s"), *CLASS_INFO,text) // text 인자를 하나 밖에 못넣는 단점이 있음
#define MY_LOG2(fmt,...) UE_LOG(TPS, Warning, TEXT("%s, %s"), *CLASS_INFO, *FString::Printf(fmt,##__VA_ARGS__)); 

