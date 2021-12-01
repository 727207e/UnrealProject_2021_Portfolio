// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NierProject/AvoidAfterImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvoidAfterImage() {}
// Cross Module References
	NIERPROJECT_API UClass* Z_Construct_UClass_AAvoidAfterImage_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_AAvoidAfterImage();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NierProject();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
// End Cross Module References
	void AAvoidAfterImage::StaticRegisterNativesAAvoidAfterImage()
	{
	}
	UClass* Z_Construct_UClass_AAvoidAfterImage_NoRegister()
	{
		return AAvoidAfterImage::StaticClass();
	}
	struct Z_Construct_UClass_AAvoidAfterImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoseMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAvoidAfterImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvoidAfterImage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AvoidAfterImage.h" },
		{ "ModuleRelativePath", "AvoidAfterImage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvoidAfterImage_Statics::NewProp_PoseMesh_MetaData[] = {
		{ "Category", "Skel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AvoidAfterImage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvoidAfterImage_Statics::NewProp_PoseMesh = { "PoseMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvoidAfterImage, PoseMesh), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvoidAfterImage_Statics::NewProp_PoseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAvoidAfterImage_Statics::NewProp_PoseMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAvoidAfterImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvoidAfterImage_Statics::NewProp_PoseMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAvoidAfterImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAvoidAfterImage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAvoidAfterImage_Statics::ClassParams = {
		&AAvoidAfterImage::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAvoidAfterImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAvoidAfterImage_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAvoidAfterImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAvoidAfterImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAvoidAfterImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAvoidAfterImage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAvoidAfterImage, 3920032359);
	template<> NIERPROJECT_API UClass* StaticClass<AAvoidAfterImage>()
	{
		return AAvoidAfterImage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAvoidAfterImage(Z_Construct_UClass_AAvoidAfterImage, &AAvoidAfterImage::StaticClass, TEXT("/Script/NierProject"), TEXT("AAvoidAfterImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAvoidAfterImage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
