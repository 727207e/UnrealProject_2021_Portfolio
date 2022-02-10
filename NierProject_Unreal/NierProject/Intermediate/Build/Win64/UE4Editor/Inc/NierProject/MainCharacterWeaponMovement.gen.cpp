// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NierProject/MainCharacterWeaponMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacterWeaponMovement() {}
// Cross Module References
	NIERPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAttackTypeStruct();
	UPackage* Z_Construct_UPackage__Script_NierProject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_AMainCharacterWeaponMovement_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_AMainCharacterWeaponMovement();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
// End Cross Module References
class UScriptStruct* FAttackTypeStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIERPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FAttackTypeStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttackTypeStruct, Z_Construct_UPackage__Script_NierProject(), TEXT("AttackTypeStruct"), sizeof(FAttackTypeStruct), Get_Z_Construct_UScriptStruct_FAttackTypeStruct_Hash());
	}
	return Singleton;
}
template<> NIERPROJECT_API UScriptStruct* StaticStruct<FAttackTypeStruct>()
{
	return FAttackTypeStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttackTypeStruct(FAttackTypeStruct::StaticStruct, TEXT("/Script/NierProject"), TEXT("AttackTypeStruct"), false, nullptr, nullptr);
static struct FScriptStruct_NierProject_StaticRegisterNativesFAttackTypeStruct
{
	FScriptStruct_NierProject_StaticRegisterNativesFAttackTypeStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttackTypeStruct")),new UScriptStruct::TCppStructOps<FAttackTypeStruct>);
	}
} ScriptStruct_NierProject_StaticRegisterNativesFAttackTypeStruct;
	struct Z_Construct_UScriptStruct_FAttackTypeStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackTypeStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MainCharacterWeaponMovement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttackTypeStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttackTypeStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackTypeStruct_Statics::NewProp_CombatMontage_MetaData[] = {
		{ "Category", "Anims" },
		{ "Comment", "//?\xde\xba?????, ?????\xcc\xb5????? ???? \xc6\xaf??????\n" },
		{ "ModuleRelativePath", "MainCharacterWeaponMovement.h" },
		{ "ToolTip", "?\xde\xba?????, ?????\xcc\xb5????? ???? \xc6\xaf??????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttackTypeStruct_Statics::NewProp_CombatMontage = { "CombatMontage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttackTypeStruct, CombatMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackTypeStruct_Statics::NewProp_CombatMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackTypeStruct_Statics::NewProp_CombatMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttackTypeStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackTypeStruct_Statics::NewProp_CombatMontage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttackTypeStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
		nullptr,
		&NewStructOps,
		"AttackTypeStruct",
		sizeof(FAttackTypeStruct),
		alignof(FAttackTypeStruct),
		Z_Construct_UScriptStruct_FAttackTypeStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackTypeStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackTypeStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackTypeStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttackTypeStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttackTypeStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NierProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttackTypeStruct"), sizeof(FAttackTypeStruct), Get_Z_Construct_UScriptStruct_FAttackTypeStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttackTypeStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttackTypeStruct_Hash() { return 3230784068U; }
	DEFINE_FUNCTION(AMainCharacterWeaponMovement::execNextComboOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextComboOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainCharacterWeaponMovement::execNextComboOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextComboOn();
		P_NATIVE_END;
	}
	void AMainCharacterWeaponMovement::StaticRegisterNativesAMainCharacterWeaponMovement()
	{
		UClass* Class = AMainCharacterWeaponMovement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NextComboOff", &AMainCharacterWeaponMovement::execNextComboOff },
			{ "NextComboOn", &AMainCharacterWeaponMovement::execNextComboOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOff_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//?\xde\xba? ???? ?\xce\xba?\n" },
		{ "ModuleRelativePath", "MainCharacterWeaponMovement.h" },
		{ "ToolTip", "?\xde\xba? ???? ?\xce\xba?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacterWeaponMovement, nullptr, "NextComboOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//????????\xc6\xae???? ?\xdb\xb5?\n" },
		{ "ModuleRelativePath", "MainCharacterWeaponMovement.h" },
		{ "ToolTip", "????????\xc6\xae???? ?\xdb\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacterWeaponMovement, nullptr, "NextComboOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainCharacterWeaponMovement_NoRegister()
	{
		return AMainCharacterWeaponMovement::StaticClass();
	}
	struct Z_Construct_UClass_AMainCharacterWeaponMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookSpeed_TargetAttacking_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookSpeed_TargetAttacking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOff, "NextComboOff" }, // 2884090828
		{ &Z_Construct_UFunction_AMainCharacterWeaponMovement_NextComboOn, "NextComboOn" }, // 2537952561
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainCharacterWeaponMovement.h" },
		{ "ModuleRelativePath", "MainCharacterWeaponMovement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::NewProp_LookSpeed_TargetAttacking_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "MainCharacterWeaponMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::NewProp_LookSpeed_TargetAttacking = { "LookSpeed_TargetAttacking", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacterWeaponMovement, LookSpeed_TargetAttacking), METADATA_PARAMS(Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::NewProp_LookSpeed_TargetAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::NewProp_LookSpeed_TargetAttacking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::NewProp_LookSpeed_TargetAttacking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacterWeaponMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::ClassParams = {
		&AMainCharacterWeaponMovement::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainCharacterWeaponMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainCharacterWeaponMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainCharacterWeaponMovement, 807178839);
	template<> NIERPROJECT_API UClass* StaticClass<AMainCharacterWeaponMovement>()
	{
		return AMainCharacterWeaponMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainCharacterWeaponMovement(Z_Construct_UClass_AMainCharacterWeaponMovement, &AMainCharacterWeaponMovement::StaticClass, TEXT("/Script/NierProject"), TEXT("AMainCharacterWeaponMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacterWeaponMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
