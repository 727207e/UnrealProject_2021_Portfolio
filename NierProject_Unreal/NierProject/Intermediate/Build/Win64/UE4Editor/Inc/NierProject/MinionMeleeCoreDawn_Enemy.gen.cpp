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
	NIERPROJECT_API UClass* Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy();
	NIERPROJECT_API UClass* Z_Construct_UClass_AEnemy();
	UPackage* Z_Construct_UPackage__Script_NierProject();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
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
	void AMinionMeleeCoreDawn_Enemy::StaticRegisterNativesAMinionMeleeCoreDawn_Enemy()
	{
		UClass* Class = AMinionMeleeCoreDawn_Enemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CombatOnOnverlapEnd", &AMinionMeleeCoreDawn_Enemy::execCombatOnOnverlapEnd },
			{ "CombatOnOverlapBegin", &AMinionMeleeCoreDawn_Enemy::execCombatOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy, nullptr, "CombatOnOnverlapEnd", nullptr, nullptr, sizeof(MinionMeleeCoreDawn_Enemy_eventCombatOnOnverlapEnd_Parms), Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy, nullptr, "CombatOnOverlapBegin", nullptr, nullptr, sizeof(MinionMeleeCoreDawn_Enemy_eventCombatOnOverlapBegin_Parms), Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin_Statics::FuncParams);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOnverlapEnd, "CombatOnOnverlapEnd" }, // 1926283740
		{ &Z_Construct_UFunction_AMinionMeleeCoreDawn_Enemy_CombatOnOverlapBegin, "CombatOnOverlapBegin" }, // 74127996
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MinionMeleeCoreDawn_Enemy.h" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatCollision_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatCollision = { "CombatCollision", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinionMeleeCoreDawn_Enemy, CombatCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics::NewProp_CombatCollision,
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
	IMPLEMENT_CLASS(AMinionMeleeCoreDawn_Enemy, 3226681146);
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
