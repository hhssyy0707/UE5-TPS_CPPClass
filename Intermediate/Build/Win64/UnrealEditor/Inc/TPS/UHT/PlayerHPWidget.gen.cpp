// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/Public/PlayerHPWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHPWidget() {}
// Cross Module References
	TPS_API UClass* Z_Construct_UClass_UPlayerHPWidget();
	TPS_API UClass* Z_Construct_UClass_UPlayerHPWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TPS();
// End Cross Module References
	void UPlayerHPWidget::StaticRegisterNativesUPlayerHPWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerHPWidget);
	UClass* Z_Construct_UClass_UPlayerHPWidget_NoRegister()
	{
		return UPlayerHPWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHPWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Txt_HPPercent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Txt_HPPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrgrB_HP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrgrB_HP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrgrB_HPGuide_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrgrB_HPGuide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerHPWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHPWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHPWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerHPWidget.h" },
		{ "ModuleRelativePath", "Public/PlayerHPWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_Txt_HPPercent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "BindWidget", "" },
		{ "Category", "PlayerHPWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerHPWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_Txt_HPPercent = { "Txt_HPPercent", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHPWidget, Txt_HPPercent), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_Txt_HPPercent_MetaData), Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_Txt_HPPercent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_PrgrB_HP_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "BindWidget", "" },
		{ "Category", "PlayerHPWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerHPWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_PrgrB_HP = { "PrgrB_HP", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHPWidget, PrgrB_HP), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_PrgrB_HP_MetaData), Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_PrgrB_HP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_PrgrB_HPGuide_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "BindWidget", "" },
		{ "Category", "PlayerHPWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerHPWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_PrgrB_HPGuide = { "PrgrB_HPGuide", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHPWidget, PrgrB_HPGuide), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_PrgrB_HPGuide_MetaData), Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_PrgrB_HPGuide_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHPWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_Txt_HPPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_PrgrB_HP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_PrgrB_HPGuide,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHPWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHPWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHPWidget_Statics::ClassParams = {
		&UPlayerHPWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerHPWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHPWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHPWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerHPWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHPWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerHPWidget()
	{
		if (!Z_Registration_Info_UClass_UPlayerHPWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHPWidget.OuterSingleton, Z_Construct_UClass_UPlayerHPWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerHPWidget.OuterSingleton;
	}
	template<> TPS_API UClass* StaticClass<UPlayerHPWidget>()
	{
		return UPlayerHPWidget::StaticClass();
	}
	UPlayerHPWidget::UPlayerHPWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHPWidget);
	UPlayerHPWidget::~UPlayerHPWidget() {}
	struct Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_PlayerHPWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_PlayerHPWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHPWidget, UPlayerHPWidget::StaticClass, TEXT("UPlayerHPWidget"), &Z_Registration_Info_UClass_UPlayerHPWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHPWidget), 3847762064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_PlayerHPWidget_h_4212809667(TEXT("/Script/TPS"),
		Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_PlayerHPWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_PlayerHPWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
