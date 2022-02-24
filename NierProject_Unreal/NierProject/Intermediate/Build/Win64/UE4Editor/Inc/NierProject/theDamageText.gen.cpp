// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NierProject/theDamageText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetheDamageText() {}
// Cross Module References
	NIERPROJECT_API UClass* Z_Construct_UClass_AtheDamageText_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_AtheDamageText();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NierProject();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(AtheDamageText::execSetText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AtheDamageText_SetText = FName(TEXT("SetText"));
	void AtheDamageText::SetText()
	{
		ProcessEvent(FindFunctionChecked(NAME_AtheDamageText_SetText),NULL);
	}
	void AtheDamageText::StaticRegisterNativesAtheDamageText()
	{
		UClass* Class = AtheDamageText::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetText", &AtheDamageText::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AtheDamageText_SetText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AtheDamageText_SetText_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//????????\xc6\xae???? ?\xdf\xb0? ?\xdb\xbc?\n" },
		{ "ModuleRelativePath", "theDamageText.h" },
		{ "ToolTip", "????????\xc6\xae???? ?\xdf\xb0? ?\xdb\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AtheDamageText_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AtheDamageText, nullptr, "SetText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AtheDamageText_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AtheDamageText_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AtheDamageText_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AtheDamageText_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AtheDamageText_NoRegister()
	{
		return AtheDamageText::StaticClass();
	}
	struct Z_Construct_UClass_AtheDamageText_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theDamageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_theDamageText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theRootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_theRootComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theFloatText_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_theFloatText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theTextScaleVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_theTextScaleVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageTextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_damageTextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AtheDamageText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AtheDamageText_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AtheDamageText_SetText, "SetText" }, // 2631998088
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtheDamageText_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "theDamageText.h" },
		{ "ModuleRelativePath", "theDamageText.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtheDamageText_Statics::NewProp_theDamageText_MetaData[] = {
		{ "Category", "damageText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "theDamageText.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AtheDamageText_Statics::NewProp_theDamageText = { "theDamageText", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtheDamageText, theDamageText), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AtheDamageText_Statics::NewProp_theDamageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtheDamageText_Statics::NewProp_theDamageText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtheDamageText_Statics::NewProp_theRootComp_MetaData[] = {
		{ "Category", "damageText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "theDamageText.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AtheDamageText_Statics::NewProp_theRootComp = { "theRootComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtheDamageText, theRootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AtheDamageText_Statics::NewProp_theRootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtheDamageText_Statics::NewProp_theRootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtheDamageText_Statics::NewProp_theFloatText_MetaData[] = {
		{ "Category", "damageText" },
		{ "ModuleRelativePath", "theDamageText.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AtheDamageText_Statics::NewProp_theFloatText = { "theFloatText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtheDamageText, theFloatText), METADATA_PARAMS(Z_Construct_UClass_AtheDamageText_Statics::NewProp_theFloatText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtheDamageText_Statics::NewProp_theFloatText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtheDamageText_Statics::NewProp_theTextScaleVector_MetaData[] = {
		{ "Category", "damageText" },
		{ "Comment", "//???? ?\xd8\xbd?\xc6\xae?? ???\xee\xb0\xa5 ????(BP?? ????)\n" },
		{ "ModuleRelativePath", "theDamageText.h" },
		{ "ToolTip", "???? ?\xd8\xbd?\xc6\xae?? ???\xee\xb0\xa5 ????(BP?? ????)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AtheDamageText_Statics::NewProp_theTextScaleVector = { "theTextScaleVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtheDamageText, theTextScaleVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AtheDamageText_Statics::NewProp_theTextScaleVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtheDamageText_Statics::NewProp_theTextScaleVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtheDamageText_Statics::NewProp_damageTextColor_MetaData[] = {
		{ "Category", "damageText_Color" },
		{ "Comment", "//?????? ?\xd8\xbd?\xc6\xae \xc5\xa9??\n" },
		{ "ModuleRelativePath", "theDamageText.h" },
		{ "ToolTip", "?????? ?\xd8\xbd?\xc6\xae \xc5\xa9??" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AtheDamageText_Statics::NewProp_damageTextColor = { "damageTextColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtheDamageText, damageTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AtheDamageText_Statics::NewProp_damageTextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtheDamageText_Statics::NewProp_damageTextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AtheDamageText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtheDamageText_Statics::NewProp_theDamageText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtheDamageText_Statics::NewProp_theRootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtheDamageText_Statics::NewProp_theFloatText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtheDamageText_Statics::NewProp_theTextScaleVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtheDamageText_Statics::NewProp_damageTextColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AtheDamageText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AtheDamageText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AtheDamageText_Statics::ClassParams = {
		&AtheDamageText::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AtheDamageText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AtheDamageText_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AtheDamageText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AtheDamageText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AtheDamageText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AtheDamageText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AtheDamageText, 2149684025);
	template<> NIERPROJECT_API UClass* StaticClass<AtheDamageText>()
	{
		return AtheDamageText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AtheDamageText(Z_Construct_UClass_AtheDamageText, &AtheDamageText::StaticClass, TEXT("/Script/NierProject"), TEXT("AtheDamageText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AtheDamageText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
