// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NierProject/MainCharAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharAnimInstance() {}
// Cross Module References
	NIERPROJECT_API UClass* Z_Construct_UClass_UMainCharAnimInstance_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_UMainCharAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_NierProject();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_AMyMainCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainCharAnimInstance::execUpdateAnimationProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties();
		P_NATIVE_END;
	}
	void UMainCharAnimInstance::StaticRegisterNativesUMainCharAnimInstance()
	{
		UClass* Class = UMainCharAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UMainCharAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainCharAnimInstance_UpdateAnimationProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainCharAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "AniamationProperties" },
		{ "ModuleRelativePath", "MainCharAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainCharAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainCharAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainCharAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainCharAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainCharAnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainCharAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainCharAnimInstance_NoRegister()
	{
		return UMainCharAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMainCharAnimInstance_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Main_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Main;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainCharAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainCharAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainCharAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 2822834771
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MainCharAnimInstance.h" },
		{ "ModuleRelativePath", "MainCharAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainCharAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainCharAnimInstance, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_Pawn_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainCharAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainCharAnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_Pawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_Main_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainCharAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_Main = { "Main", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainCharAnimInstance, Main), Z_Construct_UClass_AMyMainCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_Main_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_Main_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainCharAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharAnimInstance_Statics::NewProp_Main,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainCharAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainCharAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainCharAnimInstance_Statics::ClassParams = {
		&UMainCharAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainCharAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMainCharAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainCharAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainCharAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainCharAnimInstance, 3414532389);
	template<> NIERPROJECT_API UClass* StaticClass<UMainCharAnimInstance>()
	{
		return UMainCharAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainCharAnimInstance(Z_Construct_UClass_UMainCharAnimInstance, &UMainCharAnimInstance::StaticClass, TEXT("/Script/NierProject"), TEXT("UMainCharAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainCharAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
