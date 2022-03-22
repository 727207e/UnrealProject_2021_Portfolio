// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NierProject/NPC_DataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_DataTable() {}
// Cross Module References
	NIERPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FNPC_DataTableRow();
	UPackage* Z_Construct_UPackage__Script_NierProject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	NIERPROJECT_API UClass* Z_Construct_UClass_ANPC_DataTable_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_ANPC_DataTable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References

static_assert(std::is_polymorphic<FNPC_DataTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FNPC_DataTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FNPC_DataTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIERPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FNPC_DataTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPC_DataTableRow, Z_Construct_UPackage__Script_NierProject(), TEXT("NPC_DataTableRow"), sizeof(FNPC_DataTableRow), Get_Z_Construct_UScriptStruct_FNPC_DataTableRow_Hash());
	}
	return Singleton;
}
template<> NIERPROJECT_API UScriptStruct* StaticStruct<FNPC_DataTableRow>()
{
	return FNPC_DataTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNPC_DataTableRow(FNPC_DataTableRow::StaticStruct, TEXT("/Script/NierProject"), TEXT("NPC_DataTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_NierProject_StaticRegisterNativesFNPC_DataTableRow
{
	FScriptStruct_NierProject_StaticRegisterNativesFNPC_DataTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NPC_DataTableRow")),new UScriptStruct::TCppStructOps<FNPC_DataTableRow>);
	}
} ScriptStruct_NierProject_StaticRegisterNativesFNPC_DataTableRow;
	struct Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_List_NPCTalk_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_List_NPCTalk_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_List_NPCTalk;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "NPC_DataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPC_DataTableRow>();
	}
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::NewProp_List_NPCTalk_Inner = { "List_NPCTalk", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::NewProp_List_NPCTalk_MetaData[] = {
		{ "Category", "List_NPC_Talk" },
		{ "ModuleRelativePath", "NPC_DataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::NewProp_List_NPCTalk = { "List_NPCTalk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNPC_DataTableRow, List_NPCTalk), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::NewProp_List_NPCTalk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::NewProp_List_NPCTalk_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::NewProp_List_NPCTalk_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::NewProp_List_NPCTalk,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"NPC_DataTableRow",
		sizeof(FNPC_DataTableRow),
		alignof(FNPC_DataTableRow),
		Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNPC_DataTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNPC_DataTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NierProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NPC_DataTableRow"), sizeof(FNPC_DataTableRow), Get_Z_Construct_UScriptStruct_FNPC_DataTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNPC_DataTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNPC_DataTableRow_Hash() { return 1983354357U; }
	void ANPC_DataTable::StaticRegisterNativesANPC_DataTable()
	{
	}
	UClass* Z_Construct_UClass_ANPC_DataTable_NoRegister()
	{
		return ANPC_DataTable::StaticClass();
	}
	struct Z_Construct_UClass_ANPC_DataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPC_DataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_DataTable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NPC_DataTable.h" },
		{ "ModuleRelativePath", "NPC_DataTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPC_DataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC_DataTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPC_DataTable_Statics::ClassParams = {
		&ANPC_DataTable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANPC_DataTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_DataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPC_DataTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPC_DataTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPC_DataTable, 1223303471);
	template<> NIERPROJECT_API UClass* StaticClass<ANPC_DataTable>()
	{
		return ANPC_DataTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPC_DataTable(Z_Construct_UClass_ANPC_DataTable, &ANPC_DataTable::StaticClass, TEXT("/Script/NierProject"), TEXT("ANPC_DataTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC_DataTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
