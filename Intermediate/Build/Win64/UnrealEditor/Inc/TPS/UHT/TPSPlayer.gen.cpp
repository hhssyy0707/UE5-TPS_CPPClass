// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/Public/TPSPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSPlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TPS_API UClass* Z_Construct_UClass_ATPSPlayer();
	TPS_API UClass* Z_Construct_UClass_ATPSPlayer_NoRegister();
	TPS_API UClass* Z_Construct_UClass_UPlayerBaseComp_NoRegister();
	TPS_API UClass* Z_Construct_UClass_UPlayerHPWidget_NoRegister();
	TPS_API UFunction* Z_Construct_UDelegateFunction_TPS_IputDynamicMultiDelegate__DelegateSignature();
	TPS_API UFunction* Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TPS();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TPS_IputDynamicMultiDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TPS_IputDynamicMultiDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x9a\xa9 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8 \xec\x84\xa0\xec\x96\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x9a\xa9 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8 \xec\x84\xa0\xec\x96\xb8" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TPS_IputDynamicMultiDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TPS, nullptr, "IputDynamicMultiDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPS_IputDynamicMultiDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TPS_IputDynamicMultiDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_TPS_IputDynamicMultiDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TPS_IputDynamicMultiDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FIputDynamicMultiDelegate_DelegateWrapper(const FMulticastScriptDelegate& IputDynamicMultiDelegate)
{
	IputDynamicMultiDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature_Statics
	{
		struct _Script_TPS_eventIputDynamicMultiParamDelegate_Parms
		{
			FVector dir;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_dir;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature_Statics::NewProp_dir = { "dir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TPS_eventIputDynamicMultiParamDelegate_Parms, dir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature_Statics::NewProp_dir,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TPS, nullptr, "IputDynamicMultiParamDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature_Statics::_Script_TPS_eventIputDynamicMultiParamDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature_Statics::_Script_TPS_eventIputDynamicMultiParamDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TPS_IputDynamicMultiParamDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FIputDynamicMultiParamDelegate_DelegateWrapper(const FMulticastScriptDelegate& IputDynamicMultiParamDelegate, FVector dir)
{
	struct _Script_TPS_eventIputDynamicMultiParamDelegate_Parms
	{
		FVector dir;
	};
	_Script_TPS_eventIputDynamicMultiParamDelegate_Parms Parms;
	Parms.dir=dir;
	IputDynamicMultiParamDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void ATPSPlayer::StaticRegisterNativesATPSPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSPlayer);
	UClass* Z_Construct_UClass_ATPSPlayer_NoRegister()
	{
		return ATPSPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ATPSPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeGun_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeGun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SniperGun_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SniperGun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPUIFac_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HPUIFac;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHPWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerHPWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TPSPlayer.h" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "TPSPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8, \xec\x8a\xa4\xed\x94\x84\xeb\xa7\x81\xec\x95\x94, \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8, \xec\x8a\xa4\xed\x94\x84\xeb\xa7\x81\xec\x95\x94, \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_SpringArmComp_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_SpringArmComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "TPSPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<USpringArmComponent> SpringArmComp2;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<USpringArmComponent> SpringArmComp2;" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_CameraComp_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_CameraComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_GrenadeGun_MetaData[] = {
		{ "Category", "TPSPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_GrenadeGun = { "GrenadeGun", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, GrenadeGun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_GrenadeGun_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_GrenadeGun_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_SniperGun_MetaData[] = {
		{ "Category", "TPSPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_SniperGun = { "SniperGun", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, SniperGun), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_SniperGun_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_SniperGun_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_FireComp_MetaData[] = {
		{ "Category", "TPSPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb6\x80\xeb\xaa\xa8\xed\x98\x95\xec\x8b\x9d\xec\x9c\xbc\xeb\xa1\x9c \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0\xeb\xa5\xbc \xeb\xa7\x8c\xeb\x93\x9c\xeb\x8a\x94\xea\xb2\x8c \xeb\x82\xab\xeb\x8b\xa4\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb6\x80\xeb\xaa\xa8\xed\x98\x95\xec\x8b\x9d\xec\x9c\xbc\xeb\xa1\x9c \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0\xeb\xa5\xbc \xeb\xa7\x8c\xeb\x93\x9c\xeb\x8a\x94\xea\xb2\x8c \xeb\x82\xab\xeb\x8b\xa4" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_FireComp = { "FireComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, FireComp), Z_Construct_UClass_UPlayerBaseComp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_FireComp_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_FireComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_MoveComp_MetaData[] = {
		{ "Category", "TPSPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_MoveComp = { "MoveComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, MoveComp), Z_Construct_UClass_UPlayerBaseComp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_MoveComp_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_MoveComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_HPUIFac_MetaData[] = {
		{ "Category", "TPSPlayer" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_HPUIFac = { "HPUIFac", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, HPUIFac), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerHPWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_HPUIFac_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_HPUIFac_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_PlayerHPWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//PlayerHPWidget\xec\x97\x90 \xea\xb8\xb0\xeb\x8a\xa5\xec\x9d\x84 \xeb\x84\xa3\xea\xb3\xa0\xec\x8b\xb6\xec\x96\xb4\xec\x84\x9c \xeb\x94\xb0\xeb\xa1\x9c \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0 \xec\x84\xa0\xec\x96\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PlayerHPWidget\xec\x97\x90 \xea\xb8\xb0\xeb\x8a\xa5\xec\x9d\x84 \xeb\x84\xa3\xea\xb3\xa0\xec\x8b\xb6\xec\x96\xb4\xec\x84\x9c \xeb\x94\xb0\xeb\xa1\x9c \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0 \xec\x84\xa0\xec\x96\xb8" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_PlayerHPWidget = { "PlayerHPWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, PlayerHPWidget), Z_Construct_UClass_UPlayerHPWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_PlayerHPWidget_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_PlayerHPWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_SpringArmComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_CameraComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_GrenadeGun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_SniperGun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_FireComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_MoveComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_HPUIFac,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_PlayerHPWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSPlayer_Statics::ClassParams = {
		&ATPSPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATPSPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPSPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATPSPlayer()
	{
		if (!Z_Registration_Info_UClass_ATPSPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSPlayer.OuterSingleton, Z_Construct_UClass_ATPSPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPSPlayer.OuterSingleton;
	}
	template<> TPS_API UClass* StaticClass<ATPSPlayer>()
	{
		return ATPSPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSPlayer);
	ATPSPlayer::~ATPSPlayer() {}
	struct Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPSPlayer, ATPSPlayer::StaticClass, TEXT("ATPSPlayer"), &Z_Registration_Info_UClass_ATPSPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSPlayer), 1084902933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_2466858335(TEXT("/Script/TPS"),
		Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_TPSPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
