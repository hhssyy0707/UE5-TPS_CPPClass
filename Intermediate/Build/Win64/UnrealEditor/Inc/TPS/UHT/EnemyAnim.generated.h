// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyAnim.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPS_EnemyAnim_generated_h
#error "EnemyAnim.generated.h already included, missing '#pragma once' in EnemyAnim.h"
#endif
#define TPS_EnemyAnim_generated_h

#define FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_SPARSE_DATA
#define FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_DieEnd); \
	DECLARE_FUNCTION(execAnimNotify_DamageEnd); \
	DECLARE_FUNCTION(execOnDamageEnd);


#define FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_ACCESSORS
#define FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_CALLBACK_WRAPPERS
#define FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyAnim(); \
	friend struct Z_Construct_UClass_UEnemyAnim_Statics; \
public: \
	DECLARE_CLASS(UEnemyAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(UEnemyAnim)


#define FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyAnim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyAnim(UEnemyAnim&&); \
	NO_API UEnemyAnim(const UEnemyAnim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyAnim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyAnim); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyAnim) \
	NO_API virtual ~UEnemyAnim();


#define FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_14_PROLOG
#define FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_SPARSE_DATA \
	FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_ACCESSORS \
	FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_CALLBACK_WRAPPERS \
	FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPS_API UClass* StaticClass<class UEnemyAnim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
