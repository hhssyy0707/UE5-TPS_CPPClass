// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/Public/EnemySpawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TPS_API UClass* Z_Construct_UClass_AEnemySpawn();
	TPS_API UClass* Z_Construct_UClass_AEnemySpawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TPS();
// End Cross Module References
	void AEnemySpawn::StaticRegisterNativesAEnemySpawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemySpawn);
	UClass* Z_Construct_UClass_AEnemySpawn_NoRegister()
	{
		return AEnemySpawn::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemySpawn.h" },
		{ "ModuleRelativePath", "Public/EnemySpawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawn_Statics::ClassParams = {
		&AEnemySpawn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemySpawn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEnemySpawn()
	{
		if (!Z_Registration_Info_UClass_AEnemySpawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemySpawn.OuterSingleton, Z_Construct_UClass_AEnemySpawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemySpawn.OuterSingleton;
	}
	template<> TPS_API UClass* StaticClass<AEnemySpawn>()
	{
		return AEnemySpawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawn);
	AEnemySpawn::~AEnemySpawn() {}
	struct Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemySpawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemySpawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemySpawn, AEnemySpawn::StaticClass, TEXT("AEnemySpawn"), &Z_Registration_Info_UClass_AEnemySpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySpawn), 1484322037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemySpawn_h_3910897184(TEXT("/Script/TPS"),
		Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemySpawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemySpawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
