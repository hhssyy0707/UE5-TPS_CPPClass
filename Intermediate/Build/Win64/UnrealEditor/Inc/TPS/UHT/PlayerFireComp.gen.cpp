// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/Public/PlayerFireComp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerFireComp() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	TPS_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	TPS_API UClass* Z_Construct_UClass_UPlayerBaseComp();
	TPS_API UClass* Z_Construct_UClass_UPlayerFireComp();
	TPS_API UClass* Z_Construct_UClass_UPlayerFireComp_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TPS();
// End Cross Module References
	void UPlayerFireComp::StaticRegisterNativesUPlayerFireComp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerFireComp);
	UClass* Z_Construct_UClass_UPlayerFireComp_NoRegister()
	{
		return UPlayerFireComp::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerFireComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BulletFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairUIFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CrosshairUIFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crosshairUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_crosshairUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sniperUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sniperUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SniperUIFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SniperUIFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetGrenadeGun_MetaData[];
#endif
		static void NewProp_bSetGrenadeGun_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetGrenadeGun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionVFXFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionVFXFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShakeFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShake_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraShake;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerFireComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerBaseComp,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFireComp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "TPSPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlayerFireComp.h" },
		{ "ModuleRelativePath", "Public/PlayerFireComp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_BulletFactory_MetaData[] = {
		{ "Category", "PlayerFireComp" },
		{ "ModuleRelativePath", "Public/PlayerFireComp.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_BulletFactory = { "BulletFactory", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFireComp, BulletFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_BulletFactory_MetaData), Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_BulletFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CrosshairUIFactory_MetaData[] = {
		{ "Category", "PlayerFireComp" },
		{ "ModuleRelativePath", "Public/PlayerFireComp.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CrosshairUIFactory = { "CrosshairUIFactory", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFireComp, CrosshairUIFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CrosshairUIFactory_MetaData), Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CrosshairUIFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_crosshairUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerFireComp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_crosshairUI = { "crosshairUI", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFireComp, crosshairUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_crosshairUI_MetaData), Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_crosshairUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_sniperUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerFireComp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_sniperUI = { "sniperUI", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFireComp, sniperUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_sniperUI_MetaData), Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_sniperUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_SniperUIFactory_MetaData[] = {
		{ "Category", "PlayerFireComp" },
		{ "ModuleRelativePath", "Public/PlayerFireComp.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_SniperUIFactory = { "SniperUIFactory", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFireComp, SniperUIFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_SniperUIFactory_MetaData), Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_SniperUIFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_bSetGrenadeGun_MetaData[] = {
		{ "Category", "TPS" },
		{ "ModuleRelativePath", "Public/PlayerFireComp.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_bSetGrenadeGun_SetBit(void* Obj)
	{
		((UPlayerFireComp*)Obj)->bSetGrenadeGun = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_bSetGrenadeGun = { "bSetGrenadeGun", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerFireComp), &Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_bSetGrenadeGun_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_bSetGrenadeGun_MetaData), Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_bSetGrenadeGun_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_ExplosionVFXFactory_MetaData[] = {
		{ "Category", "PlayerFireComp" },
		{ "ModuleRelativePath", "Public/PlayerFireComp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_ExplosionVFXFactory = { "ExplosionVFXFactory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFireComp, ExplosionVFXFactory), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_ExplosionVFXFactory_MetaData), Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_ExplosionVFXFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "PlayerFireComp" },
		{ "ModuleRelativePath", "Public/PlayerFireComp.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFireComp, HP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_HP_MetaData), Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_HP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_FireAnimMontage_MetaData[] = {
		{ "Category", "PlayerFireComp" },
		{ "ModuleRelativePath", "Public/PlayerFireComp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_FireAnimMontage = { "FireAnimMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFireComp, FireAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_FireAnimMontage_MetaData), Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_FireAnimMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "PlayerFireComp" },
		{ "ModuleRelativePath", "Public/PlayerFireComp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFireComp, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_FireSound_MetaData), Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_FireSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CameraShakeFactory_MetaData[] = {
		{ "Category", "PlayerFireComp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xb4\x9d\xec\x8f\x98\xeb\xa9\xb4 \xec\xa7\x84\xeb\x8f\x99\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerFireComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb4\x9d\xec\x8f\x98\xeb\xa9\xb4 \xec\xa7\x84\xeb\x8f\x99" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CameraShakeFactory = { "CameraShakeFactory", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFireComp, CameraShakeFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CameraShakeFactory_MetaData), Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CameraShakeFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CameraShake_MetaData[] = {
		{ "Category", "PlayerFireComp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xb4\xea\xb1\xb4 \xea\xb7\xb8\xeb\x83\xa5 \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x9a\xa9 \xec\x9e\x85\xeb\xa0\xa5\xeb\x9e\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerFireComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xea\xb1\xb4 \xea\xb7\xb8\xeb\x83\xa5 \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x9a\xa9 \xec\x9e\x85\xeb\xa0\xa5\xeb\x9e\x80" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFireComp, CameraShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CameraShake_MetaData), Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CameraShake_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerFireComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_BulletFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CrosshairUIFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_crosshairUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_sniperUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_SniperUIFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_bSetGrenadeGun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_ExplosionVFXFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_HP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_FireAnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_FireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CameraShakeFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFireComp_Statics::NewProp_CameraShake,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerFireComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerFireComp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerFireComp_Statics::ClassParams = {
		&UPlayerFireComp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerFireComp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerFireComp_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFireComp_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerFireComp()
	{
		if (!Z_Registration_Info_UClass_UPlayerFireComp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerFireComp.OuterSingleton, Z_Construct_UClass_UPlayerFireComp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerFireComp.OuterSingleton;
	}
	template<> TPS_API UClass* StaticClass<UPlayerFireComp>()
	{
		return UPlayerFireComp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerFireComp);
	UPlayerFireComp::~UPlayerFireComp() {}
	struct Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_PlayerFireComp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_PlayerFireComp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerFireComp, UPlayerFireComp::StaticClass, TEXT("UPlayerFireComp"), &Z_Registration_Info_UClass_UPlayerFireComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerFireComp), 2369383795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_PlayerFireComp_h_2224092978(TEXT("/Script/TPS"),
		Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_PlayerFireComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_PlayerFireComp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
