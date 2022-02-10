// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NierProject/InterfaceLifeEntity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfaceLifeEntity() {}
// Cross Module References
	NIERPROJECT_API UClass* Z_Construct_UClass_UInterfaceLifeEntity_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_UInterfaceLifeEntity();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_NierProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(IInterfaceLifeEntity::execInterfaceGetMyID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->InterfaceGetMyID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInterfaceLifeEntity::execInterfaceTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__Damage);
		P_GET_STRUCT(FVector,Z_Param_EnemyVec);
		P_GET_STRUCT(FVector,Z_Param_HitReactVec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InterfaceTakeDamage(Z_Param__Damage,Z_Param_EnemyVec,Z_Param_HitReactVec);
		P_NATIVE_END;
	}
	void UInterfaceLifeEntity::StaticRegisterNativesUInterfaceLifeEntity()
	{
		UClass* Class = UInterfaceLifeEntity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InterfaceGetMyID", &IInterfaceLifeEntity::execInterfaceGetMyID },
			{ "InterfaceTakeDamage", &IInterfaceLifeEntity::execInterfaceTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceGetMyID_Statics
	{
		struct InterfaceLifeEntity_eventInterfaceGetMyID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceGetMyID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterfaceLifeEntity_eventInterfaceGetMyID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceGetMyID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceGetMyID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceGetMyID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterfaceLifeEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceGetMyID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterfaceLifeEntity, nullptr, "InterfaceGetMyID", nullptr, nullptr, sizeof(InterfaceLifeEntity_eventInterfaceGetMyID_Parms), Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceGetMyID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceGetMyID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceGetMyID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceGetMyID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceGetMyID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceGetMyID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics
	{
		struct InterfaceLifeEntity_eventInterfaceTakeDamage_Parms
		{
			float _Damage;
			FVector EnemyVec;
			FVector HitReactVec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__Damage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyVec;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitReactVec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics::NewProp__Damage = { "_Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterfaceLifeEntity_eventInterfaceTakeDamage_Parms, _Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics::NewProp_EnemyVec = { "EnemyVec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterfaceLifeEntity_eventInterfaceTakeDamage_Parms, EnemyVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics::NewProp_HitReactVec = { "HitReactVec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterfaceLifeEntity_eventInterfaceTakeDamage_Parms, HitReactVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics::NewProp__Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics::NewProp_EnemyVec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics::NewProp_HitReactVec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterfaceLifeEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterfaceLifeEntity, nullptr, "InterfaceTakeDamage", nullptr, nullptr, sizeof(InterfaceLifeEntity_eventInterfaceTakeDamage_Parms), Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInterfaceLifeEntity_NoRegister()
	{
		return UInterfaceLifeEntity::StaticClass();
	}
	struct Z_Construct_UClass_UInterfaceLifeEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterfaceLifeEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterfaceLifeEntity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceGetMyID, "InterfaceGetMyID" }, // 2588111345
		{ &Z_Construct_UFunction_UInterfaceLifeEntity_InterfaceTakeDamage, "InterfaceTakeDamage" }, // 1085253220
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfaceLifeEntity_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterfaceLifeEntity.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterfaceLifeEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterfaceLifeEntity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterfaceLifeEntity_Statics::ClassParams = {
		&UInterfaceLifeEntity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterfaceLifeEntity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterfaceLifeEntity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterfaceLifeEntity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterfaceLifeEntity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterfaceLifeEntity, 4250921296);
	template<> NIERPROJECT_API UClass* StaticClass<UInterfaceLifeEntity>()
	{
		return UInterfaceLifeEntity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterfaceLifeEntity(Z_Construct_UClass_UInterfaceLifeEntity, &UInterfaceLifeEntity::StaticClass, TEXT("/Script/NierProject"), TEXT("UInterfaceLifeEntity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterfaceLifeEntity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
