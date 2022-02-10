// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NierProject/Boss_Mutant_AttackCollision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoss_Mutant_AttackCollision() {}
// Cross Module References
	NIERPROJECT_API UClass* Z_Construct_UClass_ABoss_Mutant_AttackCollision_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_ABoss_Mutant_AttackCollision();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NierProject();
// End Cross Module References
	void ABoss_Mutant_AttackCollision::StaticRegisterNativesABoss_Mutant_AttackCollision()
	{
	}
	UClass* Z_Construct_UClass_ABoss_Mutant_AttackCollision_NoRegister()
	{
		return ABoss_Mutant_AttackCollision::StaticClass();
	}
	struct Z_Construct_UClass_ABoss_Mutant_AttackCollision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoss_Mutant_AttackCollision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Mutant_AttackCollision_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Boss_Mutant_AttackCollision.h" },
		{ "ModuleRelativePath", "Boss_Mutant_AttackCollision.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoss_Mutant_AttackCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoss_Mutant_AttackCollision>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoss_Mutant_AttackCollision_Statics::ClassParams = {
		&ABoss_Mutant_AttackCollision::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoss_Mutant_AttackCollision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Mutant_AttackCollision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoss_Mutant_AttackCollision()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoss_Mutant_AttackCollision_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoss_Mutant_AttackCollision, 2926711724);
	template<> NIERPROJECT_API UClass* StaticClass<ABoss_Mutant_AttackCollision>()
	{
		return ABoss_Mutant_AttackCollision::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoss_Mutant_AttackCollision(Z_Construct_UClass_ABoss_Mutant_AttackCollision, &ABoss_Mutant_AttackCollision::StaticClass, TEXT("/Script/NierProject"), TEXT("ABoss_Mutant_AttackCollision"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoss_Mutant_AttackCollision);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
