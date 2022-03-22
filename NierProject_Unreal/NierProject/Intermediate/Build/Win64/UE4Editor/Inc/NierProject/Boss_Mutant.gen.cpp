// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NierProject/Boss_Mutant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoss_Mutant() {}
// Cross Module References
	NIERPROJECT_API UEnum* Z_Construct_UEnum_NierProject_EBossMutantMovementStatus();
	UPackage* Z_Construct_UPackage__Script_NierProject();
	NIERPROJECT_API UClass* Z_Construct_UClass_ABoss_Mutant_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_ABoss_Mutant();
	NIERPROJECT_API UClass* Z_Construct_UClass_AEnemy();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_UInterfaceLifeEntity_NoRegister();
// End Cross Module References
	static UEnum* EBossMutantMovementStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NierProject_EBossMutantMovementStatus, Z_Construct_UPackage__Script_NierProject(), TEXT("EBossMutantMovementStatus"));
		}
		return Singleton;
	}
	template<> NIERPROJECT_API UEnum* StaticEnum<EBossMutantMovementStatus>()
	{
		return EBossMutantMovementStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBossMutantMovementStatus(EBossMutantMovementStatus_StaticEnum, TEXT("/Script/NierProject"), TEXT("EBossMutantMovementStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NierProject_EBossMutantMovementStatus_Hash() { return 4230958561U; }
	UEnum* Z_Construct_UEnum_NierProject_EBossMutantMovementStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NierProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBossMutantMovementStatus"), 0, Get_Z_Construct_UEnum_NierProject_EBossMutantMovementStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBossMutantMovementStatus::BMMS_Idle", (int64)EBossMutantMovementStatus::BMMS_Idle },
				{ "EBossMutantMovementStatus::BMMS_MoveToTarget", (int64)EBossMutantMovementStatus::BMMS_MoveToTarget },
				{ "EBossMutantMovementStatus::BMMS_Attacking", (int64)EBossMutantMovementStatus::BMMS_Attacking },
				{ "EBossMutantMovementStatus::BMMS_Dead", (int64)EBossMutantMovementStatus::BMMS_Dead },
				{ "EBossMutantMovementStatus::BMMS_Hit", (int64)EBossMutantMovementStatus::BMMS_Hit },
				{ "EBossMutantMovementStatus::BMMS_MAX", (int64)EBossMutantMovementStatus::BMMS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BMMS_Attacking.Comment", "//\n" },
				{ "BMMS_Attacking.DisplayName", "Attacking" },
				{ "BMMS_Attacking.Name", "EBossMutantMovementStatus::BMMS_Attacking" },
				{ "BMMS_Dead.Comment", "//\n" },
				{ "BMMS_Dead.DisplayName", "Dead" },
				{ "BMMS_Dead.Name", "EBossMutantMovementStatus::BMMS_Dead" },
				{ "BMMS_Hit.Comment", "//\n" },
				{ "BMMS_Hit.DisplayName", "Hit" },
				{ "BMMS_Hit.Name", "EBossMutantMovementStatus::BMMS_Hit" },
				{ "BMMS_Idle.Comment", "//\n" },
				{ "BMMS_Idle.DisplayName", "Idle" },
				{ "BMMS_Idle.Name", "EBossMutantMovementStatus::BMMS_Idle" },
				{ "BMMS_MAX.Comment", "//\n" },
				{ "BMMS_MAX.DisplayName", "DefaultMax" },
				{ "BMMS_MAX.Name", "EBossMutantMovementStatus::BMMS_MAX" },
				{ "BMMS_MoveToTarget.Comment", "//\n" },
				{ "BMMS_MoveToTarget.DisplayName", "MoveToTarget" },
				{ "BMMS_MoveToTarget.Name", "EBossMutantMovementStatus::BMMS_MoveToTarget" },
				{ "Comment", "//\n" },
				{ "ModuleRelativePath", "Boss_Mutant.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NierProject,
				nullptr,
				"EBossMutantMovementStatus",
				"EBossMutantMovementStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ABoss_Mutant::execBossHealthBarShowUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BossHealthBarShowUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoss_Mutant::execAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoss_Mutant::execDeActiveCollision)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_collNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeActiveCollision(Z_Param_collNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoss_Mutant::execActiveCollision)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_collNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActiveCollision(Z_Param_collNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoss_Mutant::execAttack_OnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack_OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoss_Mutant::execAttack_OnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack_OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoss_Mutant::execAttackRange_OnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackRange_OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoss_Mutant::execAttackRange_OnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackRange_OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ABoss_Mutant::StaticRegisterNativesABoss_Mutant()
	{
		UClass* Class = ABoss_Mutant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActiveCollision", &ABoss_Mutant::execActiveCollision },
			{ "Attack_OnOverlapBegin", &ABoss_Mutant::execAttack_OnOverlapBegin },
			{ "Attack_OnOverlapEnd", &ABoss_Mutant::execAttack_OnOverlapEnd },
			{ "AttackEnd", &ABoss_Mutant::execAttackEnd },
			{ "AttackRange_OnOverlapBegin", &ABoss_Mutant::execAttackRange_OnOverlapBegin },
			{ "AttackRange_OnOverlapEnd", &ABoss_Mutant::execAttackRange_OnOverlapEnd },
			{ "BossHealthBarShowUp", &ABoss_Mutant::execBossHealthBarShowUp },
			{ "DeActiveCollision", &ABoss_Mutant::execDeActiveCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoss_Mutant_ActiveCollision_Statics
	{
		struct Boss_Mutant_eventActiveCollision_Parms
		{
			int32 collNumber;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_collNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABoss_Mutant_ActiveCollision_Statics::NewProp_collNumber = { "collNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventActiveCollision_Parms, collNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoss_Mutant_ActiveCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_ActiveCollision_Statics::NewProp_collNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_ActiveCollision_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////// ???? ////////////////////\n" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoss_Mutant_ActiveCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoss_Mutant, nullptr, "ActiveCollision", nullptr, nullptr, sizeof(Boss_Mutant_eventActiveCollision_Parms), Z_Construct_UFunction_ABoss_Mutant_ActiveCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_ActiveCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_ActiveCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_ActiveCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoss_Mutant_ActiveCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoss_Mutant_ActiveCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics
	{
		struct Boss_Mutant_eventAttack_OnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttack_OnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttack_OnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttack_OnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttack_OnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Boss_Mutant_eventAttack_OnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Boss_Mutant_eventAttack_OnOverlapBegin_Parms), &Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttack_OnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//???? ?\xdd\xb6??\xcc\xb4??? ????(????)\n" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
		{ "ToolTip", "???? ?\xdd\xb6??\xcc\xb4??? ????(????)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoss_Mutant, nullptr, "Attack_OnOverlapBegin", nullptr, nullptr, sizeof(Boss_Mutant_eventAttack_OnOverlapBegin_Parms), Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics
	{
		struct Boss_Mutant_eventAttack_OnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttack_OnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttack_OnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttack_OnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttack_OnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoss_Mutant, nullptr, "Attack_OnOverlapEnd", nullptr, nullptr, sizeof(Boss_Mutant_eventAttack_OnOverlapEnd_Parms), Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoss_Mutant_AttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_AttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoss_Mutant_AttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoss_Mutant, nullptr, "AttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_AttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_AttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoss_Mutant_AttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoss_Mutant_AttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics
	{
		struct Boss_Mutant_eventAttackRange_OnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttackRange_OnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttackRange_OnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttackRange_OnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttackRange_OnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Boss_Mutant_eventAttackRange_OnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Boss_Mutant_eventAttackRange_OnOverlapBegin_Parms), &Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttackRange_OnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//???? ???? ?????? ?????? ????\n" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoss_Mutant, nullptr, "AttackRange_OnOverlapBegin", nullptr, nullptr, sizeof(Boss_Mutant_eventAttackRange_OnOverlapBegin_Parms), Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics
	{
		struct Boss_Mutant_eventAttackRange_OnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttackRange_OnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttackRange_OnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttackRange_OnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventAttackRange_OnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoss_Mutant, nullptr, "AttackRange_OnOverlapEnd", nullptr, nullptr, sizeof(Boss_Mutant_eventAttackRange_OnOverlapEnd_Parms), Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoss_Mutant_BossHealthBarShowUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_BossHealthBarShowUp_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////// HUD ////////////////////\n" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
		{ "ToolTip", "HUD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoss_Mutant_BossHealthBarShowUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoss_Mutant, nullptr, "BossHealthBarShowUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_BossHealthBarShowUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_BossHealthBarShowUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoss_Mutant_BossHealthBarShowUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoss_Mutant_BossHealthBarShowUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoss_Mutant_DeActiveCollision_Statics
	{
		struct Boss_Mutant_eventDeActiveCollision_Parms
		{
			int32 collNumber;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_collNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABoss_Mutant_DeActiveCollision_Statics::NewProp_collNumber = { "collNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_Mutant_eventDeActiveCollision_Parms, collNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoss_Mutant_DeActiveCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_Mutant_DeActiveCollision_Statics::NewProp_collNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_Mutant_DeActiveCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoss_Mutant_DeActiveCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoss_Mutant, nullptr, "DeActiveCollision", nullptr, nullptr, sizeof(Boss_Mutant_eventDeActiveCollision_Parms), Z_Construct_UFunction_ABoss_Mutant_DeActiveCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_DeActiveCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoss_Mutant_DeActiveCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_Mutant_DeActiveCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoss_Mutant_DeActiveCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoss_Mutant_DeActiveCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoss_Mutant_NoRegister()
	{
		return ABoss_Mutant::StaticClass();
	}
	struct Z_Construct_UClass_ABoss_Mutant_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BossMutantMovement_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BossMutantMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BossMutantMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UtilMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UtilMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAbleAround_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackAbleAround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireBallStartPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireBallStartPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoarStartPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoarStartPos;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_theParticleList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theParticleList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_theParticleList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coll_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_coll_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coll_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_coll_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coll_3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_coll_3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coll_4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_coll_4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireBallBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FireBallBP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoss_Mutant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoss_Mutant_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoss_Mutant_ActiveCollision, "ActiveCollision" }, // 11626807
		{ &Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapBegin, "Attack_OnOverlapBegin" }, // 3509622705
		{ &Z_Construct_UFunction_ABoss_Mutant_Attack_OnOverlapEnd, "Attack_OnOverlapEnd" }, // 1566802885
		{ &Z_Construct_UFunction_ABoss_Mutant_AttackEnd, "AttackEnd" }, // 1547303876
		{ &Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapBegin, "AttackRange_OnOverlapBegin" }, // 2962917505
		{ &Z_Construct_UFunction_ABoss_Mutant_AttackRange_OnOverlapEnd, "AttackRange_OnOverlapEnd" }, // 2233147238
		{ &Z_Construct_UFunction_ABoss_Mutant_BossHealthBarShowUp, "BossHealthBarShowUp" }, // 190529530
		{ &Z_Construct_UFunction_ABoss_Mutant_DeActiveCollision, "DeActiveCollision" }, // 627663452
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Mutant_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Boss_Mutant.h" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_BossMutantMovement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_BossMutantMovement_MetaData[] = {
		{ "Category", "MoveMent" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_BossMutantMovement = { "BossMutantMovement", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss_Mutant, BossMutantMovement), Z_Construct_UEnum_NierProject_EBossMutantMovementStatus, METADATA_PARAMS(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_BossMutantMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_BossMutantMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_CombatMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_CombatMontage = { "CombatMontage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss_Mutant, CombatMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_CombatMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_CombatMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_UtilMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_UtilMontage = { "UtilMontage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss_Mutant, UtilMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_UtilMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_UtilMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_AttackAbleAround_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_AttackAbleAround = { "AttackAbleAround", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss_Mutant, AttackAbleAround), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_AttackAbleAround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_AttackAbleAround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_FireBallStartPos_MetaData[] = {
		{ "Category", "Combat" },
		{ "Comment", "//???? ???? ????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_FireBallStartPos = { "FireBallStartPos", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss_Mutant, FireBallStartPos), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_FireBallStartPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_FireBallStartPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_RoarStartPos_MetaData[] = {
		{ "Category", "Combat" },
		{ "Comment", "// ?? ???? ???? ????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_RoarStartPos = { "RoarStartPos", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss_Mutant, RoarStartPos), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_RoarStartPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_RoarStartPos_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_theParticleList_Inner = { "theParticleList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_theParticleList_MetaData[] = {
		{ "Category", "ParticleList" },
		{ "Comment", "///////////////// ???? ////////////////////\n" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_theParticleList = { "theParticleList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss_Mutant, theParticleList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_theParticleList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_theParticleList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_1_MetaData[] = {
		{ "Category", "CombatCollision" },
		{ "Comment", "//???? ?????? ?????? ????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_1 = { "coll_1", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss_Mutant, coll_1), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_2_MetaData[] = {
		{ "Category", "CombatCollision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_2 = { "coll_2", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss_Mutant, coll_2), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_3_MetaData[] = {
		{ "Category", "CombatCollision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_3 = { "coll_3", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss_Mutant, coll_3), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_4_MetaData[] = {
		{ "Category", "CombatCollision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_4 = { "coll_4", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss_Mutant, coll_4), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_FireBallBP_MetaData[] = {
		{ "Category", "FireBall" },
		{ "ModuleRelativePath", "Boss_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_FireBallBP = { "FireBallBP", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss_Mutant, FireBallBP), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_FireBallBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_FireBallBP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoss_Mutant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_BossMutantMovement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_BossMutantMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_CombatMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_UtilMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_AttackAbleAround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_FireBallStartPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_RoarStartPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_theParticleList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_theParticleList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_coll_4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Mutant_Statics::NewProp_FireBallBP,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABoss_Mutant_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfaceLifeEntity_NoRegister, (int32)VTABLE_OFFSET(ABoss_Mutant, IInterfaceLifeEntity), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoss_Mutant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoss_Mutant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoss_Mutant_Statics::ClassParams = {
		&ABoss_Mutant::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoss_Mutant_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoss_Mutant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoss_Mutant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoss_Mutant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoss_Mutant, 4025579657);
	template<> NIERPROJECT_API UClass* StaticClass<ABoss_Mutant>()
	{
		return ABoss_Mutant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoss_Mutant(Z_Construct_UClass_ABoss_Mutant, &ABoss_Mutant::StaticClass, TEXT("/Script/NierProject"), TEXT("ABoss_Mutant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoss_Mutant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
