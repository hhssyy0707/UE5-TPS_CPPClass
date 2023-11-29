// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TPSPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPS_TPSPlayer_generated_h
#error "TPSPlayer.generated.h already included, missing '#pragma once' in TPSPlayer.h"
#endif
#define TPS_TPSPlayer_generated_h

#define FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_16_DELEGATE \
TPS_API void FIputDynamicMultiDelegate_DelegateWrapper(const FMulticastScriptDelegate& IputDynamicMultiDelegate);


#define FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_17_DELEGATE \
TPS_API void FIputDynamicMultiParamDelegate_DelegateWrapper(const FMulticastScriptDelegate& IputDynamicMultiParamDelegate, FVector dir);


#define FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_SPARSE_DATA
#define FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_ACCESSORS
#define FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSPlayer(); \
	friend struct Z_Construct_UClass_ATPSPlayer_Statics; \
public: \
	DECLARE_CLASS(ATPSPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(ATPSPlayer)


#define FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSPlayer(ATPSPlayer&&); \
	NO_API ATPSPlayer(const ATPSPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSPlayer) \
	NO_API virtual ~ATPSPlayer();


#define FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_21_PROLOG
#define FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_SPARSE_DATA \
	FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_ACCESSORS \
	FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_INCLASS_NO_PURE_DECLS \
	FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPS_API UClass* StaticClass<class ATPSPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
