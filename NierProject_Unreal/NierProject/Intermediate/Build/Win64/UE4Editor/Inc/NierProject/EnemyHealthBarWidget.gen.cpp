// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NierProject/EnemyHealthBarWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyHealthBarWidget() {}
// Cross Module References
	NIERPROJECT_API UClass* Z_Construct_UClass_UEnemyHealthBarWidget_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_UEnemyHealthBarWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_NierProject();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyHealthBarWidget::execHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->HealthPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemyHealthBarWidget::execSetTargetText)
	{
		P_GET_UBOOL(Z_Param_bOnOff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->SetTargetText(Z_Param_bOnOff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemyHealthBarWidget::execShow)
	{
		P_GET_UBOOL(Z_Param_bOnOff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Show(Z_Param_bOnOff);
		P_NATIVE_END;
	}
	void UEnemyHealthBarWidget::StaticRegisterNativesUEnemyHealthBarWidget()
	{
		UClass* Class = UEnemyHealthBarWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HealthPercent", &UEnemyHealthBarWidget::execHealthPercent },
			{ "SetTargetText", &UEnemyHealthBarWidget::execSetTargetText },
			{ "Show", &UEnemyHealthBarWidget::execShow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyHealthBarWidget_HealthPercent_Statics
	{
		struct EnemyHealthBarWidget_eventHealthPercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemyHealthBarWidget_HealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyHealthBarWidget_eventHealthPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyHealthBarWidget_HealthPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyHealthBarWidget_HealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyHealthBarWidget_HealthPercent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xc5\xb8?? ?????? ?\xd8\xbd?\xc6\xae ????\n" },
		{ "ModuleRelativePath", "EnemyHealthBarWidget.h" },
		{ "ToolTip", "\xc5\xb8?? ?????? ?\xd8\xbd?\xc6\xae ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyHealthBarWidget_HealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyHealthBarWidget, nullptr, "HealthPercent", nullptr, nullptr, sizeof(EnemyHealthBarWidget_eventHealthPercent_Parms), Z_Construct_UFunction_UEnemyHealthBarWidget_HealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBarWidget_HealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyHealthBarWidget_HealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBarWidget_HealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyHealthBarWidget_HealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyHealthBarWidget_HealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics
	{
		struct EnemyHealthBarWidget_eventSetTargetText_Parms
		{
			bool bOnOff;
			FName ReturnValue;
		};
		static void NewProp_bOnOff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnOff;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics::NewProp_bOnOff_SetBit(void* Obj)
	{
		((EnemyHealthBarWidget_eventSetTargetText_Parms*)Obj)->bOnOff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics::NewProp_bOnOff = { "bOnOff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyHealthBarWidget_eventSetTargetText_Parms), &Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics::NewProp_bOnOff_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyHealthBarWidget_eventSetTargetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics::NewProp_bOnOff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xc3\xbc?\xc2\xb9? ???\xcc\xb1?\n" },
		{ "ModuleRelativePath", "EnemyHealthBarWidget.h" },
		{ "ToolTip", "\xc3\xbc?\xc2\xb9? ???\xcc\xb1?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyHealthBarWidget, nullptr, "SetTargetText", nullptr, nullptr, sizeof(EnemyHealthBarWidget_eventSetTargetText_Parms), Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyHealthBarWidget_Show_Statics
	{
		struct EnemyHealthBarWidget_eventShow_Parms
		{
			bool bOnOff;
		};
		static void NewProp_bOnOff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnOff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEnemyHealthBarWidget_Show_Statics::NewProp_bOnOff_SetBit(void* Obj)
	{
		((EnemyHealthBarWidget_eventShow_Parms*)Obj)->bOnOff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnemyHealthBarWidget_Show_Statics::NewProp_bOnOff = { "bOnOff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyHealthBarWidget_eventShow_Parms), &Z_Construct_UFunction_UEnemyHealthBarWidget_Show_Statics::NewProp_bOnOff_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyHealthBarWidget_Show_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyHealthBarWidget_Show_Statics::NewProp_bOnOff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyHealthBarWidget_Show_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyHealthBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyHealthBarWidget_Show_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyHealthBarWidget, nullptr, "Show", nullptr, nullptr, sizeof(EnemyHealthBarWidget_eventShow_Parms), Z_Construct_UFunction_UEnemyHealthBarWidget_Show_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBarWidget_Show_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyHealthBarWidget_Show_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBarWidget_Show_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyHealthBarWidget_Show()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyHealthBarWidget_Show_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnemyHealthBarWidget_NoRegister()
	{
		return UEnemyHealthBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyHealthBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NowHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NowHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theTarget_MetaData[];
#endif
		static void NewProp_theTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_theTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyHealthBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyHealthBarWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyHealthBarWidget_HealthPercent, "HealthPercent" }, // 3882258307
		{ &Z_Construct_UFunction_UEnemyHealthBarWidget_SetTargetText, "SetTargetText" }, // 3245026644
		{ &Z_Construct_UFunction_UEnemyHealthBarWidget_Show, "Show" }, // 1639363561
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyHealthBarWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyHealthBarWidget.h" },
		{ "ModuleRelativePath", "EnemyHealthBarWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "HealthValue" },
		{ "Comment", "//???? \xc3\xbc?? ??\xc8\xb2\n" },
		{ "ModuleRelativePath", "EnemyHealthBarWidget.h" },
		{ "ToolTip", "???? \xc3\xbc?? ??\xc8\xb2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyHealthBarWidget, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_NowHealth_MetaData[] = {
		{ "Category", "HealthValue" },
		{ "ModuleRelativePath", "EnemyHealthBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_NowHealth = { "NowHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyHealthBarWidget, NowHealth), METADATA_PARAMS(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_NowHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_NowHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_theTarget_MetaData[] = {
		{ "Category", "TargetText" },
		{ "ModuleRelativePath", "EnemyHealthBarWidget.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_theTarget_SetBit(void* Obj)
	{
		((UEnemyHealthBarWidget*)Obj)->theTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_theTarget = { "theTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemyHealthBarWidget), &Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_theTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_theTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_theTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyHealthBarWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_NowHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_theTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyHealthBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyHealthBarWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyHealthBarWidget_Statics::ClassParams = {
		&UEnemyHealthBarWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyHealthBarWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyHealthBarWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyHealthBarWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyHealthBarWidget, 3009387444);
	template<> NIERPROJECT_API UClass* StaticClass<UEnemyHealthBarWidget>()
	{
		return UEnemyHealthBarWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyHealthBarWidget(Z_Construct_UClass_UEnemyHealthBarWidget, &UEnemyHealthBarWidget::StaticClass, TEXT("/Script/NierProject"), TEXT("UEnemyHealthBarWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyHealthBarWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
