// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NierProject/MinionMeleeCoreDawn_Enemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinionMeleeCoreDawn_Enemy() {}
// Cross Module References
	NIERPROJECT_API UEnum* Z_Construct_UEnum_NierProject_EEnemyMovementStatus();
	UPackage* Z_Construct_UPackage__Script_NierProject();
	NIERPROJECT_API UClass* Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy();
	NIERPROJECT_API UClass* Z_Construct_UClass_AEnemy();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NIERPROJECT_API UClass* Z_Construct_UClass_AMyMainCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	static UEnum* EEnemyMovementStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NierProject_EEnemyMovementStatus, Z_Construct_UPackage__Script_NierProject(), TEXT("EEnemyMovementStatus"));
		}
		return Singleton;
	}
	template<> NIERPROJECT_API UEnum* StaticEnum<EEnemyMovementStatus>()
	{
		return EEnemyMovementStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnemyMovementStatus(EEnemyMovementStatus_StaticEnum, TEXT("/Script/NierProject"), TEXT("EEnemyMovementStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NierProject_EEnemyMovementStatus_Hash() { return 1158906587U; }
	UEnum* Z_Construct_UEnum_NierProject_EEnemyMovementStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NierProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnemyMovementStatus"), 0, Get_Z_Construct_UEnum_NierProject_EEnemyMovementStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnemyMovementStatus::EMS_Idle", (int64)EEnemyMovementStatus::EMS_Idle },
				{ "EEnemyMovementStatus::EMS_MoveToTarget", (int64)EEnemyMovementStatus::EMS_MoveToTarget },
				{ "EEnemyMovementStatus::EMS_Attacking", (int64)EEnemyMovementStatus::EMS_Attacking },
				{ "EEnemyMovementStatus::EMS_Dead", (int64)EEnemyMovementStatus::EMS_Dead },
				{ "EEnemyMovementStatus::EMS_Hit", (int64)EEnemyMovementStatus::EMS_Hit },
				{ "EEnemyMovementStatus::EMS_MAX", (int64)EEnemyMovementStatus::EMS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n *\n */" },
				{ "EMS_Attacking.Comment", "/**\n *\n */" },
				{ "EMS_Attacking.DisplayName", "Attacking" },
				{ "EMS_Attacking.Name", "EEnemyMovementStatus::EMS_Attacking" },
				{ "EMS_Dead.Comment", "/**\n *\n */" },
				{ "EMS_Dead.DisplayName", "Dead" },
				{ "EMS_Dead.Name", "EEnemyMovementStatus::EMS_Dead" },
				{ "EMS_Hit.Comment", "/**\n *\n */" },
				{ "EMS_Hit.DisplayName", "Hit" },
				{ "EMS_Hit.Name", "EEnemyMovementStatus::EMS_Hit" },
				{ "EMS_Idle.Comment", "/**\n *\n */" },
				{ "EMS_Idle.DisplayName", "Idle" },
				{ "EMS_Idle.Name", "EEnemyMovementStatus::EMS_Idle" },
				{ "EMS_MAX.Comment", "/**\n *\n */" },
				{ "EMS_MAX.DisplayName", "DefaultMax" },
				{ "EMS_MAX.Name", "EEnemyMovementStatus::EMS_MAX" },
				{ "EMS_MoveToTarget.Comment", "/**\n *\n */" },
				{ "EMS_MoveToTarget.DisplayName", "MoveToTarget" },
				{ "EMS_MoveToTarget.Name", "EEnemyMovementStatus::EMS_MoveToTarget" },
				{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NierProject,
				nullptr,
				"EEnemyMovementStatus",
				"EEnemyMovementStatus",
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
	DEFINE_FUNCTION(AMinionMeleeCoreDawn_Enemy::execHitReactEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HitReactEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinionMeleeCoreDawn_Enemy::execDeActivateCollison)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeActivateCollison();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinionMeleeCoreDawn_Enemy::execActivateCollison)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateCollison();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinionMeleeCoreDawn_Enemy::execAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinionMeleeCoreDawn_Enemy::execMoveToTarget)
	{
		P_GET_OBJECT(AMyMainCharacter,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToTarget(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinionMeleeCoreDawn_Enemy::execCombatOnOnverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CombatOnOnverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinionMeleeCoreDawn_Enemy::execCombatOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CombatOnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinionMeleeCoreDawn_Enemy::execCombatSphereOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CombatSphereOnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinionMeleeCoreDawn_Enemy::execCombatSphereOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CombatSphereOnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinionMeleeCoreDawn_Enemy::execAgroSphereOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AgroSphereOnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinionMeleeCoreDawn_Enemy::execAgroSphereOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AgroSphereOnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AMinionMeleeCoreDawn_Enemy::StaticRegisterNativesAMinionMeleeCoreDawn_Enemy()
	{
		UClass* Class = AMinionMeleeCoreDawn_Enemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateCollison", &AMinionMeleeCoreDawn_Enemy::execActivateCollison },
			{ "AgroSphereOnOverlapBegin", &AMinionMeleeCoreDawn_Enemy::execAgroSphereOnOverlapBegin },
			{ "AgroSphereOnOverlapEnd", &AMinionMeleeCoreDawn_Enemy::execAgroSphereOnOverlapEnd },
			{ "AttackEnd", &AMinionMeleeCoreDawn_Enemy::execAttackEnd },
			{ "CombatOnOnverlapEnd", &AMinionMeleeCoreDawn_Enemy::execCombatOnOnverlapEnd },
			{ "CombatOnOverlapBegin", &AMinionMeleeCoreDawn_Enemy::execCombatOnOverlapBegin },
			{ "CombatSphereOnOverlapBegin", &AMinionMeleeCoreDawn_Enemy::execCombatSphereOnOverlapBegin },
			{ "CombatSphereOnOverlapEnd", &AMinionMeleeCoreDawn_Enemy::execCombatSphereOnOverlapEnd },
			{ "DeActivateCollison", &AMinionMeleeCoreDawn_Enemy::execDeActivateCollison },
			{ "HitReactEnd", &AMinionMeleeCoreDawn_Enemy::execHitReactEnd },
			{ "MoveToTarget", &AMinionMeleeCoreDawn_Enemy::execMoveToTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_ActivateCollison_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_ActivateCollison_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//???? ???? ?????? ?\xc3\xb0?\n" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
		{ "ToolTip", "???? ???? ?????? ?\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_ActivateCollison_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy, nullptr, "ActivateCollison", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_ActivateCollison_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_ActivateCollison_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_ActivateCollison()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_ActivateCollison_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics
	{
		struct MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapBegin_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapBegin_Parms), &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy, nullptr, "AgroSphereOnOverlapBegin", nullptr, nullptr, sizeof(MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapBegin_Parms), Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics
	{
		struct MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapEnd_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy, nullptr, "AgroSphereOnOverlapEnd", nullptr, nullptr, sizeof(MinionMeleeCoreDawn_Enemy_eventAgroSphereOnOverlapEnd_Parms), Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy, nullptr, "AttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics
	{
		struct MinionMeleeCoreDawn_Enemy_eventCombatOnOnverlapEnd_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatOnOnverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatOnOnverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatOnOnverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatOnOnverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy, nullptr, "CombatOnOnverlapEnd", nullptr, nullptr, sizeof(MinionMeleeCoreDawn_Enemy_eventCombatOnOnverlapEnd_Parms), Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics
	{
		struct MinionMeleeCoreDawn_Enemy_eventCombatOnOverlapBegin_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MinionMeleeCoreDawn_Enemy_eventCombatOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MinionMeleeCoreDawn_Enemy_eventCombatOnOverlapBegin_Parms), &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy, nullptr, "CombatOnOverlapBegin", nullptr, nullptr, sizeof(MinionMeleeCoreDawn_Enemy_eventCombatOnOverlapBegin_Parms), Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics
	{
		struct MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapBegin_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapBegin_Parms), &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy, nullptr, "CombatSphereOnOverlapBegin", nullptr, nullptr, sizeof(MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapBegin_Parms), Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics
	{
		struct MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapEnd_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy, nullptr, "CombatSphereOnOverlapEnd", nullptr, nullptr, sizeof(MinionMeleeCoreDawn_Enemy_eventCombatSphereOnOverlapEnd_Parms), Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_DeActivateCollison_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_DeActivateCollison_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//???? ?\xdd\xb8??? On , Off\n" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
		{ "ToolTip", "???? ?\xdd\xb8??? On , Off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_DeActivateCollison_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy, nullptr, "DeActivateCollison", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_DeActivateCollison_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_DeActivateCollison_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_DeActivateCollison()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_DeActivateCollison_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_HitReactEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_HitReactEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_HitReactEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy, nullptr, "HitReactEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_HitReactEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_HitReactEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_HitReactEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_HitReactEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_MoveToTarget_Statics
	{
		struct MinionMeleeCoreDawn_Enemy_eventMoveToTarget_Parms
		{
			AMyMainCharacter* Target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_MoveToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MinionMeleeCoreDawn_Enemy_eventMoveToTarget_Parms, Target), Z_Construct_UClass_AMyMainCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_MoveToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_MoveToTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_MoveToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_MoveToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy, nullptr, "MoveToTarget", nullptr, nullptr, sizeof(MinionMeleeCoreDawn_Enemy_eventMoveToTarget_Parms), Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_MoveToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_MoveToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_MoveToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_MoveToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_MoveToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_MoveToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_NoRegister()
	{
		return AMinionMeleeCoreDawn_Enemy::StaticClass();
	}
	struct Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnemyMovementStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyMovementStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnemyMovementStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgroSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgroSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aiController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aiController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackMinTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackMinTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackMaxTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackMaxTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_ActivateCollison, "ActivateCollison" }, // 1118345215
		{ &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapBegin, "AgroSphereOnOverlapBegin" }, // 1443448318
		{ &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AgroSphereOnOverlapEnd, "AgroSphereOnOverlapEnd" }, // 2333293442
		{ &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_AttackEnd, "AttackEnd" }, // 3822484159
		{ &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd, "CombatOnOnverlapEnd" }, // 683975207
		{ &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin, "CombatOnOverlapBegin" }, // 257998421
		{ &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapBegin, "CombatSphereOnOverlapBegin" }, // 991256346
		{ &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatSphereOnOverlapEnd, "CombatSphereOnOverlapEnd" }, // 940260689
		{ &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_DeActivateCollison, "DeActivateCollison" }, // 3459880100
		{ &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_HitReactEnd, "HitReactEnd" }, // 1562451810
		{ &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_MoveToTarget, "MoveToTarget" }, // 2256728415
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MinionMeleeCoreDawn_Enemy.h" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_EnemyMovementStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_EnemyMovementStatus_MetaData[] = {
		{ "Category", "MoveMent" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_EnemyMovementStatus = { "EnemyMovementStatus", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinionMeleeCoreDawn_Enemy, EnemyMovementStatus), Z_Construct_UEnum_NierProject_EEnemyMovementStatus, METADATA_PARAMS(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_EnemyMovementStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_EnemyMovementStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AgroSphere_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AgroSphere = { "AgroSphere", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinionMeleeCoreDawn_Enemy, AgroSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AgroSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AgroSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatSphere_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "//???\xd7\xb7? (?????? ?????? ?i?\xc6\xb0?)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
		{ "ToolTip", "???\xd7\xb7? (?????? ?????? ?i?\xc6\xb0?)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatSphere = { "CombatSphere", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinionMeleeCoreDawn_Enemy, CombatSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatCollision_MetaData[] = {
		{ "Category", "Combat" },
		{ "Comment", "//???? ???? ???? (?????\xc8\xbf? ?????? ?????? ????)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
		{ "ToolTip", "???? ???? ???? (?????\xc8\xbf? ?????? ?????? ????)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatCollision = { "CombatCollision", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinionMeleeCoreDawn_Enemy, CombatCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_aiController_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_aiController = { "aiController", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinionMeleeCoreDawn_Enemy, aiController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_aiController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_aiController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatMontage = { "CombatMontage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinionMeleeCoreDawn_Enemy, CombatMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AttackMinTime_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AttackMinTime = { "AttackMinTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinionMeleeCoreDawn_Enemy, AttackMinTime), METADATA_PARAMS(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AttackMinTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AttackMinTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AttackMaxTime_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AttackMaxTime = { "AttackMaxTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinionMeleeCoreDawn_Enemy, AttackMaxTime), METADATA_PARAMS(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AttackMaxTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AttackMaxTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatTarget_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinionMeleeCoreDawn_Enemy, CombatTarget), Z_Construct_UClass_AMyMainCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_EnemyMovementStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_EnemyMovementStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AgroSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_aiController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AttackMinTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_AttackMaxTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinionMeleeCoreDawn_Enemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::ClassParams = {
		&AMinionMeleeCoreDawn_Enemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinionMeleeCoreDawn_Enemy, 3684300653);
	template<> NIERPROJECT_API UClass* StaticClass<AMinionMeleeCoreDawn_Enemy>()
	{
		return AMinionMeleeCoreDawn_Enemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinionMeleeCoreDawn_Enemy(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy, &AMinionMeleeCoreDawn_Enemy::StaticClass, TEXT("/Script/NierProject"), TEXT("AMinionMeleeCoreDawn_Enemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinionMeleeCoreDawn_Enemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
