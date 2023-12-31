// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/Public/EnemyFSM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyFSM() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	TPS_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	TPS_API UClass* Z_Construct_UClass_ATPSPlayer_NoRegister();
	TPS_API UClass* Z_Construct_UClass_UEnemyAnim_NoRegister();
	TPS_API UClass* Z_Construct_UClass_UEnemyFSM();
	TPS_API UClass* Z_Construct_UClass_UEnemyFSM_NoRegister();
	TPS_API UEnum* Z_Construct_UEnum_TPS_EEnemyState();
	UPackage* Z_Construct_UPackage__Script_TPS();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
	static UEnum* EEnemyState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TPS_EEnemyState, (UObject*)Z_Construct_UPackage__Script_TPS(), TEXT("EEnemyState"));
		}
		return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
	}
	template<> TPS_API UEnum* StaticEnum<EEnemyState>()
	{
		return EEnemyState_StaticEnum();
	}
	struct Z_Construct_UEnum_TPS_EEnemyState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TPS_EEnemyState_Statics::Enumerators[] = {
		{ "EEnemyState::Idle", (int64)EEnemyState::Idle },
		{ "EEnemyState::Move", (int64)EEnemyState::Move },
		{ "EEnemyState::Attack", (int64)EEnemyState::Attack },
		{ "EEnemyState::Damage", (int64)EEnemyState::Damage },
		{ "EEnemyState::Die", (int64)EEnemyState::Die },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TPS_EEnemyState_Statics::Enum_MetaDataParams[] = {
		{ "Attack.DisplayName", "ATTACK" },
		{ "Attack.Name", "EEnemyState::Attack" },
		{ "BlueprintType", "true" },
		{ "Damage.DisplayName", "DAMAGE" },
		{ "Damage.Name", "EEnemyState::Damage" },
		{ "Die.DisplayName", "DIE" },
		{ "Die.Name", "EEnemyState::Die" },
		{ "Idle.DisplayName", "IDLE" },
		{ "Idle.Name", "EEnemyState::Idle" },
		{ "ModuleRelativePath", "Public/EnemyFSM.h" },
		{ "Move.DisplayName", "MOVE" },
		{ "Move.Name", "EEnemyState::Move" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TPS_EEnemyState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TPS,
		nullptr,
		"EEnemyState",
		"EEnemyState",
		Z_Construct_UEnum_TPS_EEnemyState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TPS_EEnemyState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TPS_EEnemyState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TPS_EEnemyState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_TPS_EEnemyState()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_TPS_EEnemyState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
	}
	void UEnemyFSM::StaticRegisterNativesUEnemyFSM()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyFSM);
	UClass* Z_Construct_UClass_UEnemyFSM_NoRegister()
	{
		return UEnemyFSM::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyFSM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Me_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Me;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DieTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DieTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyActionMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyActionMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyFSM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//typedef enum aaa {\n//\x09Idle, ...\n//}; EEnemyState\n" },
#endif
		{ "IncludePath", "EnemyFSM.h" },
		{ "ModuleRelativePath", "Public/EnemyFSM.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "typedef enum aaa {\n       Idle, ...\n}; EEnemyState" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "EnemyFSM" },
		{ "ModuleRelativePath", "Public/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFSM, CurrentState), Z_Construct_UEnum_TPS_EEnemyState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_CurrentState_MetaData), Z_Construct_UClass_UEnemyFSM_Statics::NewProp_CurrentState_MetaData) }; // 4121853980
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_Me_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_Me = { "Me", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFSM, Me), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_Me_MetaData), Z_Construct_UClass_UEnemyFSM_Statics::NewProp_Me_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_Target_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFSM, Target), Z_Construct_UClass_ATPSPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_Target_MetaData), Z_Construct_UClass_UEnemyFSM_Statics::NewProp_Target_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AttackDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AttackDistance = { "AttackDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFSM, AttackDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AttackDistance_MetaData), Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AttackDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "EnemyFSM" },
		{ "ModuleRelativePath", "Public/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFSM, HP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_HP_MetaData), Z_Construct_UClass_UEnemyFSM_Statics::NewProp_HP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_MaxHP_MetaData[] = {
		{ "Category", "EnemyFSM" },
		{ "ModuleRelativePath", "Public/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFSM, MaxHP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_MaxHP_MetaData), Z_Construct_UClass_UEnemyFSM_Statics::NewProp_MaxHP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_DamageTime_MetaData[] = {
		{ "Category", "EnemyFSM" },
		{ "ModuleRelativePath", "Public/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_DamageTime = { "DamageTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFSM, DamageTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_DamageTime_MetaData), Z_Construct_UClass_UEnemyFSM_Statics::NewProp_DamageTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_DieTime_MetaData[] = {
		{ "Category", "EnemyFSM" },
		{ "ModuleRelativePath", "Public/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_DieTime = { "DieTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFSM, DieTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_DieTime_MetaData), Z_Construct_UClass_UEnemyFSM_Statics::NewProp_DieTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AttackTime_MetaData[] = {
		{ "Category", "EnemyFSM" },
		{ "ModuleRelativePath", "Public/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFSM, AttackTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AttackTime_MetaData), Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AttackTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_EnemyAnim_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\x82\x98\xec\x9d\x98 \xec\x83\x81\xed\x83\x9c\xea\xb0\x80 \xeb\xb0\x94\xeb\x80\x94 \xeb\x95\x8c \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98\xec\x9d\x98 \xec\x83\x81\xed\x83\x9c\xeb\x8f\x84 \xeb\xb0\x94\xea\xbe\xb8\xea\xb3\xa0\xec\x8b\xb6\xeb\x8b\xa4.\n//\xec\x83\x9d\xec\x84\xb1\xec\x9e\x90\xec\x97\x90\xec\x84\x9c \xec\xa7\x81\xec\xa0\x91 ABP_Enemy\xeb\xa5\xbc \xeb\xa1\x9c\xeb\x93\x9c\xed\x95\x98\xea\xb3\xa0\xec\x8b\xb6\xeb\x8b\xa4.\n" },
#endif
		{ "ModuleRelativePath", "Public/EnemyFSM.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x82\x98\xec\x9d\x98 \xec\x83\x81\xed\x83\x9c\xea\xb0\x80 \xeb\xb0\x94\xeb\x80\x94 \xeb\x95\x8c \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98\xec\x9d\x98 \xec\x83\x81\xed\x83\x9c\xeb\x8f\x84 \xeb\xb0\x94\xea\xbe\xb8\xea\xb3\xa0\xec\x8b\xb6\xeb\x8b\xa4.\n\xec\x83\x9d\xec\x84\xb1\xec\x9e\x90\xec\x97\x90\xec\x84\x9c \xec\xa7\x81\xec\xa0\x91 ABP_Enemy\xeb\xa5\xbc \xeb\xa1\x9c\xeb\x93\x9c\xed\x95\x98\xea\xb3\xa0\xec\x8b\xb6\xeb\x8b\xa4." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_EnemyAnim = { "EnemyAnim", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFSM, EnemyAnim), Z_Construct_UClass_UEnemyAnim_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_EnemyAnim_MetaData), Z_Construct_UClass_UEnemyFSM_Statics::NewProp_EnemyAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_EnemyActionMontage_MetaData[] = {
		{ "Category", "EnemyFSM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<class UAnimMontage> EAnimActionMontage;\n" },
#endif
		{ "ModuleRelativePath", "Public/EnemyFSM.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<class UAnimMontage> EAnimActionMontage;" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_EnemyActionMontage = { "EnemyActionMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFSM, EnemyActionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_EnemyActionMontage_MetaData), Z_Construct_UClass_UEnemyFSM_Statics::NewProp_EnemyActionMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AI_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AI = { "AI", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFSM, AI), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AI_MetaData), Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AI_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyFSM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_CurrentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_Me,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AttackDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_HP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_MaxHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_DamageTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_DieTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_EnemyAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_EnemyActionMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_AI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyFSM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyFSM>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyFSM_Statics::ClassParams = {
		&UEnemyFSM::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyFSM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyFSM_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEnemyFSM()
	{
		if (!Z_Registration_Info_UClass_UEnemyFSM.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyFSM.OuterSingleton, Z_Construct_UClass_UEnemyFSM_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyFSM.OuterSingleton;
	}
	template<> TPS_API UClass* StaticClass<UEnemyFSM>()
	{
		return UEnemyFSM::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyFSM);
	UEnemyFSM::~UEnemyFSM() {}
	struct Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemyFSM_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemyFSM_h_Statics::EnumInfo[] = {
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4121853980U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemyFSM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyFSM, UEnemyFSM::StaticClass, TEXT("UEnemyFSM"), &Z_Registration_Info_UClass_UEnemyFSM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyFSM), 2016038345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemyFSM_h_3029067840(TEXT("/Script/TPS"),
		Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemyFSM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemyFSM_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemyFSM_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Projects_TPS_Source_TPS_Public_EnemyFSM_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
