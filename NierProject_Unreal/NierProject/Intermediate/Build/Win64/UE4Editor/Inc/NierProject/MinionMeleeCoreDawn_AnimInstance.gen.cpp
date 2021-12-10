// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NierProject/MinionMeleeCoreDawn_AnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinionMeleeCoreDawn_AnimInstance() {}
// Cross Module References
	NIERPROJECT_API UClass* Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_NierProject();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMinionMeleeCoreDawn_AnimInstance::execUpdateAnimationProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties();
		P_NATIVE_END;
	}
	void UMinionMeleeCoreDawn_AnimInstance::StaticRegisterNativesUMinionMeleeCoreDawn_AnimInstance()
	{
		UClass* Class = UMinionMeleeCoreDawn_AnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UMinionMeleeCoreDawn_AnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMinionMeleeCoreDawn_AnimInstance_UpdateAnimationProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinionMeleeCoreDawn_AnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationProperties" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinionMeleeCoreDawn_AnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinionMeleeCoreDawn_AnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinionMeleeCoreDawn_AnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinionMeleeCoreDawn_AnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMinionMeleeCoreDawn_AnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_NoRegister()
	{
		return UMinionMeleeCoreDawn_AnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMinionMeleeCoreDawn_AnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 3437276009
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MinionMeleeCoreDawn_AnimInstance.h" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_AnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionMeleeCoreDawn_AnimInstance, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_Pawn_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionMeleeCoreDawn_AnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_Pawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_Enemy_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MinionMeleeCoreDawn_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionMeleeCoreDawn_AnimInstance, Enemy), Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_Enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_Enemy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::NewProp_Enemy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinionMeleeCoreDawn_AnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::ClassParams = {
		&UMinionMeleeCoreDawn_AnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMinionMeleeCoreDawn_AnimInstance, 3684079844);
	template<> NIERPROJECT_API UClass* StaticClass<UMinionMeleeCoreDawn_AnimInstance>()
	{
		return UMinionMeleeCoreDawn_AnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMinionMeleeCoreDawn_AnimInstance(Z_Construct_UClass_UMinionMeleeCoreDawn_AnimInstance, &UMinionMeleeCoreDawn_AnimInstance::StaticClass, TEXT("/Script/NierProject"), TEXT("UMinionMeleeCoreDawn_AnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMinionMeleeCoreDawn_AnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
