// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NierProject/LifeEntity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeEntity() {}
// Cross Module References
	NIERPROJECT_API UClass* Z_Construct_UClass_ALifeEntity_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_ALifeEntity();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NierProject();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NIERPROJECT_API UClass* Z_Construct_UClass_AtheDamageText_NoRegister();
// End Cross Module References
	void ALifeEntity::StaticRegisterNativesALifeEntity()
	{
	}
	UClass* Z_Construct_UClass_ALifeEntity_NoRegister()
	{
		return ALifeEntity::StaticClass();
	}
	struct Z_Construct_UClass_ALifeEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitBoxCapsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitBoxCapsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitTextPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitTextPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theDamageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_theDamageText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALifeEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeEntity_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LifeEntity.h" },
		{ "ModuleRelativePath", "LifeEntity.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeEntity_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "LifeEntity" },
		{ "ModuleRelativePath", "LifeEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALifeEntity_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeEntity, Health), METADATA_PARAMS(Z_Construct_UClass_ALifeEntity_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeEntity_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeEntity_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "LifeEntity" },
		{ "ModuleRelativePath", "LifeEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALifeEntity_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeEntity, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_ALifeEntity_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeEntity_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeEntity_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "LifeEntity" },
		{ "ModuleRelativePath", "LifeEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALifeEntity_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeEntity, Damage), METADATA_PARAMS(Z_Construct_UClass_ALifeEntity_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeEntity_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitBoxCapsule_MetaData[] = {
		{ "Category", "LifeEntity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LifeEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitBoxCapsule = { "HitBoxCapsule", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeEntity, HitBoxCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitBoxCapsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitBoxCapsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitParticles_MetaData[] = {
		{ "Category", "LifeEntity" },
		{ "ModuleRelativePath", "LifeEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitParticles = { "HitParticles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeEntity, HitParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitSound_MetaData[] = {
		{ "Category", "LifeEntity" },
		{ "ModuleRelativePath", "LifeEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeEntity, HitSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitTextPos_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LifeEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitTextPos = { "HitTextPos", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeEntity, HitTextPos), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitTextPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitTextPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeEntity_Statics::NewProp_theDamageText_MetaData[] = {
		{ "Category", "LifeEntity" },
		{ "Comment", "// ?????? ?\xd8\xbd?\xc6\xae ??\xc4\xa1\n" },
		{ "ModuleRelativePath", "LifeEntity.h" },
		{ "ToolTip", "?????? ?\xd8\xbd?\xc6\xae ??\xc4\xa1" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALifeEntity_Statics::NewProp_theDamageText = { "theDamageText", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeEntity, theDamageText), Z_Construct_UClass_AtheDamageText_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALifeEntity_Statics::NewProp_theDamageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeEntity_Statics::NewProp_theDamageText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALifeEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeEntity_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeEntity_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeEntity_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitBoxCapsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeEntity_Statics::NewProp_HitTextPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeEntity_Statics::NewProp_theDamageText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALifeEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALifeEntity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALifeEntity_Statics::ClassParams = {
		&ALifeEntity::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALifeEntity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALifeEntity_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALifeEntity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeEntity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALifeEntity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALifeEntity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALifeEntity, 3518761384);
	template<> NIERPROJECT_API UClass* StaticClass<ALifeEntity>()
	{
		return ALifeEntity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALifeEntity(Z_Construct_UClass_ALifeEntity, &ALifeEntity::StaticClass, TEXT("/Script/NierProject"), TEXT("ALifeEntity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALifeEntity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
