// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/Public/SpawnManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TPS_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	TPS_API UClass* Z_Construct_UClass_AEnemySpawn_NoRegister();
	TPS_API UClass* Z_Construct_UClass_ASpawnManager();
	TPS_API UClass* Z_Construct_UClass_ASpawnManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TPS();
// End Cross Module References
	void ASpawnManager::StaticRegisterNativesASpawnManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnManager);
	UClass* Z_Construct_UClass_ASpawnManager_NoRegister()
	{
		return ASpawnManager::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyFactory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnManager.h" },
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnList_Inner = { "SpawnList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemySpawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnList_MetaData[] = {
		{ "Category", "SpawnManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0\xeb\xa5\xbc \xeb\xb0\xb0\xec\x97\xb4\xec\x97\x90 \xeb\x8b\xb4\xec\x9d\x84 \xea\xb1\xb0\xec\x95\xbc!\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0\xeb\xa5\xbc \xeb\xb0\xb0\xec\x97\xb4\xec\x97\x90 \xeb\x8b\xb4\xec\x9d\x84 \xea\xb1\xb0\xec\x95\xbc!" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnList = { "SpawnList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnManager, SpawnList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnList_MetaData), Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnManager_Statics::NewProp_EnemyFactory_MetaData[] = {
		{ "Category", "SpawnManager" },
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_EnemyFactory = { "EnemyFactory", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnManager, EnemyFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::NewProp_EnemyFactory_MetaData), Z_Construct_UClass_ASpawnManager_Statics::NewProp_EnemyFactory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_EnemyFactory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnManager_Statics::ClassParams = {
		&ASpawnManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawnManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASpawnManager()
	{
		if (!Z_Registration_Info_UClass_ASpawnManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnManager.OuterSingleton, Z_Construct_UClass_ASpawnManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawnManager.OuterSingleton;
	}
	template<> TPS_API UClass* StaticClass<ASpawnManager>()
	{
		return ASpawnManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnManager);
	ASpawnManager::~ASpawnManager() {}
	struct Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_SpawnManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_SpawnManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnManager, ASpawnManager::StaticClass, TEXT("ASpawnManager"), &Z_Registration_Info_UClass_ASpawnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnManager), 3043773313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_SpawnManager_h_2532031323(TEXT("/Script/TPS"),
		Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_SpawnManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_SpawnManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
