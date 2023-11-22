// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/Public/TPSPlayer_Anim.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSPlayer_Anim() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	TPS_API UClass* Z_Construct_UClass_ATPSPlayer_NoRegister();
	TPS_API UClass* Z_Construct_UClass_UTPSPlayer_Anim();
	TPS_API UClass* Z_Construct_UClass_UTPSPlayer_Anim_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TPS();
// End Cross Module References
	void UTPSPlayer_Anim::StaticRegisterNativesUTPSPlayer_Anim()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPSPlayer_Anim);
	UClass* Z_Construct_UClass_UTPSPlayer_Anim_NoRegister()
	{
		return UTPSPlayer_Anim::StaticClass();
	}
	struct Z_Construct_UClass_UTPSPlayer_Anim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFalling_MetaData[];
#endif
		static void NewProp_IsFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFalling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPSPlayer_Anim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPSPlayer_Anim_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPSPlayer_Anim_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "TPSPlayer_Anim.h" },
		{ "ModuleRelativePath", "Public/TPSPlayer_Anim.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_player_MetaData[] = {
		{ "ModuleRelativePath", "Public/TPSPlayer_Anim.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTPSPlayer_Anim, player), Z_Construct_UClass_ATPSPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_player_MetaData), Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_player_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "TPSPlayer_Anim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x95\x9e\xeb\x92\xa4\xeb\xa1\x9c \xec\x9b\x80\xec\xa7\x81\xec\x9d\xb4\xeb\x8a\x94 \xec\x86\x8d\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/TPSPlayer_Anim.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x9e\xeb\x92\xa4\xeb\xa1\x9c \xec\x9b\x80\xec\xa7\x81\xec\x9d\xb4\xeb\x8a\x94 \xec\x86\x8d\xeb\xa0\xa5" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTPSPlayer_Anim, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "TPSPlayer_Anim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xa2\x8c\xec\x9a\xb0\xeb\xa1\x9c \xec\x9b\x80\xec\xa7\x81\xec\x9d\xb4\xeb\x8a\x94 \xec\x86\x8d\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/TPSPlayer_Anim.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa2\x8c\xec\x9a\xb0\xeb\xa1\x9c \xec\x9b\x80\xec\xa7\x81\xec\x9d\xb4\xeb\x8a\x94 \xec\x86\x8d\xeb\xa0\xa5" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTPSPlayer_Anim, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_Direction_MetaData), Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_Direction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_IsFalling_MetaData[] = {
		{ "Category", "TPSPlayer_Anim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xa0\x90\xed\x94\x84\xec\xa4\x91\xec\x9d\xb4\xeb\x8b\x88?\n" },
#endif
		{ "ModuleRelativePath", "Public/TPSPlayer_Anim.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x90\xed\x94\x84\xec\xa4\x91\xec\x9d\xb4\xeb\x8b\x88?" },
#endif
	};
#endif
	void Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_IsFalling_SetBit(void* Obj)
	{
		((UTPSPlayer_Anim*)Obj)->IsFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_IsFalling = { "IsFalling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTPSPlayer_Anim), &Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_IsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_IsFalling_MetaData), Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_IsFalling_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTPSPlayer_Anim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPSPlayer_Anim_Statics::NewProp_IsFalling,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPSPlayer_Anim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTPSPlayer_Anim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPSPlayer_Anim_Statics::ClassParams = {
		&UTPSPlayer_Anim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTPSPlayer_Anim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTPSPlayer_Anim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPSPlayer_Anim_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPSPlayer_Anim_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPSPlayer_Anim_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTPSPlayer_Anim()
	{
		if (!Z_Registration_Info_UClass_UTPSPlayer_Anim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPSPlayer_Anim.OuterSingleton, Z_Construct_UClass_UTPSPlayer_Anim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTPSPlayer_Anim.OuterSingleton;
	}
	template<> TPS_API UClass* StaticClass<UTPSPlayer_Anim>()
	{
		return UTPSPlayer_Anim::StaticClass();
	}
	UTPSPlayer_Anim::UTPSPlayer_Anim(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPSPlayer_Anim);
	UTPSPlayer_Anim::~UTPSPlayer_Anim() {}
	struct Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_Anim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_Anim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTPSPlayer_Anim, UTPSPlayer_Anim::StaticClass, TEXT("UTPSPlayer_Anim"), &Z_Registration_Info_UClass_UTPSPlayer_Anim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPSPlayer_Anim), 410293243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_Anim_h_382272904(TEXT("/Script/TPS"),
		Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_Anim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_Anim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
