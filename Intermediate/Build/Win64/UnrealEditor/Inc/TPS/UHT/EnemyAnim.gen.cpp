// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/Public/EnemyAnim.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAnim() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	TPS_API UClass* Z_Construct_UClass_UEnemyAnim();
	TPS_API UClass* Z_Construct_UClass_UEnemyAnim_NoRegister();
	TPS_API UEnum* Z_Construct_UEnum_TPS_EEnemyState();
	UPackage* Z_Construct_UPackage__Script_TPS();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyAnim::execAnimNotify_DieEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_DieEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemyAnim::execAnimNotify_DamageEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_DamageEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemyAnim::execOnDamageEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamageEnd();
		P_NATIVE_END;
	}
	struct EnemyAnim_eventPlayMontageDamage_Parms
	{
		FName SectionName;
	};
	static FName NAME_UEnemyAnim_PlayMontageDamage = FName(TEXT("PlayMontageDamage"));
	void UEnemyAnim::PlayMontageDamage(FName SectionName)
	{
		EnemyAnim_eventPlayMontageDamage_Parms Parms;
		Parms.SectionName=SectionName;
		ProcessEvent(FindFunctionChecked(NAME_UEnemyAnim_PlayMontageDamage),&Parms);
	}
	void UEnemyAnim::StaticRegisterNativesUEnemyAnim()
	{
		UClass* Class = UEnemyAnim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_DamageEnd", &UEnemyAnim::execAnimNotify_DamageEnd },
			{ "AnimNotify_DieEnd", &UEnemyAnim::execAnimNotify_DieEnd },
			{ "OnDamageEnd", &UEnemyAnim::execOnDamageEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyAnim_AnimNotify_DamageEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyAnim_AnimNotify_DamageEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyAnim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnim_AnimNotify_DamageEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnim, nullptr, "AnimNotify_DamageEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnim_AnimNotify_DamageEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyAnim_AnimNotify_DamageEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UEnemyAnim_AnimNotify_DamageEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyAnim_AnimNotify_DamageEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyAnim_AnimNotify_DieEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyAnim_AnimNotify_DieEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyAnim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnim_AnimNotify_DieEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnim, nullptr, "AnimNotify_DieEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnim_AnimNotify_DieEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyAnim_AnimNotify_DieEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UEnemyAnim_AnimNotify_DieEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyAnim_AnimNotify_DieEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyAnim_OnDamageEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyAnim_OnDamageEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyAnim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnim_OnDamageEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnim, nullptr, "OnDamageEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnim_OnDamageEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyAnim_OnDamageEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UEnemyAnim_OnDamageEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyAnim_OnDamageEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyAnim_PlayMontageDamage_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnemyAnim_PlayMontageDamage_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyAnim_eventPlayMontageDamage_Parms, SectionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyAnim_PlayMontageDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyAnim_PlayMontageDamage_Statics::NewProp_SectionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyAnim_PlayMontageDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyAnim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnim_PlayMontageDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnim, nullptr, "PlayMontageDamage", nullptr, nullptr, Z_Construct_UFunction_UEnemyAnim_PlayMontageDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnim_PlayMontageDamage_Statics::PropPointers), sizeof(EnemyAnim_eventPlayMontageDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnim_PlayMontageDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyAnim_PlayMontageDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnim_PlayMontageDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(EnemyAnim_eventPlayMontageDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyAnim_PlayMontageDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyAnim_PlayMontageDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyAnim);
	UClass* Z_Construct_UClass_UEnemyAnim_NoRegister()
	{
		return UEnemyAnim::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnemyState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnemyState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAttack_MetaData[];
#endif
		static void NewProp_IsAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDieDone_MetaData[];
#endif
		static void NewProp_IsDieDone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDieDone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyAnim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyAnim_AnimNotify_DamageEnd, "AnimNotify_DamageEnd" }, // 2541121318
		{ &Z_Construct_UFunction_UEnemyAnim_AnimNotify_DieEnd, "AnimNotify_DieEnd" }, // 222182227
		{ &Z_Construct_UFunction_UEnemyAnim_OnDamageEnd, "OnDamageEnd" }, // 2896440077
		{ &Z_Construct_UFunction_UEnemyAnim_PlayMontageDamage, "PlayMontageDamage" }, // 3470461259
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnim_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "EnemyAnim.h" },
		{ "ModuleRelativePath", "Public/EnemyAnim.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemyAnim_Statics::NewProp_EnemyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnim_Statics::NewProp_EnemyState_MetaData[] = {
		{ "Category", "EnemyAnim" },
		{ "ModuleRelativePath", "Public/EnemyAnim.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemyAnim_Statics::NewProp_EnemyState = { "EnemyState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyAnim, EnemyState), Z_Construct_UEnum_TPS_EEnemyState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::NewProp_EnemyState_MetaData), Z_Construct_UClass_UEnemyAnim_Statics::NewProp_EnemyState_MetaData) }; // 4121853980
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnim_Statics::NewProp_IsAttack_MetaData[] = {
		{ "Category", "EnemyAnim" },
		{ "ModuleRelativePath", "Public/EnemyAnim.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyAnim_Statics::NewProp_IsAttack_SetBit(void* Obj)
	{
		((UEnemyAnim*)Obj)->IsAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyAnim_Statics::NewProp_IsAttack = { "IsAttack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnemyAnim), &Z_Construct_UClass_UEnemyAnim_Statics::NewProp_IsAttack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::NewProp_IsAttack_MetaData), Z_Construct_UClass_UEnemyAnim_Statics::NewProp_IsAttack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnim_Statics::NewProp_IsDieDone_MetaData[] = {
		{ "Category", "EnemyAnim" },
		{ "ModuleRelativePath", "Public/EnemyAnim.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyAnim_Statics::NewProp_IsDieDone_SetBit(void* Obj)
	{
		((UEnemyAnim*)Obj)->IsDieDone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyAnim_Statics::NewProp_IsDieDone = { "IsDieDone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnemyAnim), &Z_Construct_UClass_UEnemyAnim_Statics::NewProp_IsDieDone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::NewProp_IsDieDone_MetaData), Z_Construct_UClass_UEnemyAnim_Statics::NewProp_IsDieDone_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnim_Statics::NewProp_EnemyState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnim_Statics::NewProp_EnemyState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnim_Statics::NewProp_IsAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnim_Statics::NewProp_IsDieDone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAnim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAnim_Statics::ClassParams = {
		&UEnemyAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyAnim_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEnemyAnim()
	{
		if (!Z_Registration_Info_UClass_UEnemyAnim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyAnim.OuterSingleton, Z_Construct_UClass_UEnemyAnim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyAnim.OuterSingleton;
	}
	template<> TPS_API UClass* StaticClass<UEnemyAnim>()
	{
		return UEnemyAnim::StaticClass();
	}
	UEnemyAnim::UEnemyAnim(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAnim);
	UEnemyAnim::~UEnemyAnim() {}
	struct Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyAnim, UEnemyAnim::StaticClass, TEXT("UEnemyAnim"), &Z_Registration_Info_UClass_UEnemyAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyAnim), 1442968542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_3306514538(TEXT("/Script/TPS"),
		Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemyAnim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
