// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIERPROJECT_MyGameMode_generated_h
#error "MyGameMode.generated.h already included, missing '#pragma once' in MyGameMode.h"
#endif
#define NIERPROJECT_MyGameMode_generated_h

#define NierProject_Source_NierProject_MyGameMode_h_15_SPARSE_DATA
#define NierProject_Source_NierProject_MyGameMode_h_15_RPC_WRAPPERS
#define NierProject_Source_NierProject_MyGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define NierProject_Source_NierProject_MyGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameMode(); \
	friend struct Z_Construct_UClass_AMyGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(AMyGameMode)


#define NierProject_Source_NierProject_MyGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameMode(); \
	friend struct Z_Construct_UClass_AMyGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(AMyGameMode)


#define NierProject_Source_NierProject_MyGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameMode(AMyGameMode&&); \
	NO_API AMyGameMode(const AMyGameMode&); \
public:


#define NierProject_Source_NierProject_MyGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameMode(AMyGameMode&&); \
	NO_API AMyGameMode(const AMyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameMode)


#define NierProject_Source_NierProject_MyGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define NierProject_Source_NierProject_MyGameMode_h_12_PROLOG
#define NierProject_Source_NierProject_MyGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_MyGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_MyGameMode_h_15_SPARSE_DATA \
	NierProject_Source_NierProject_MyGameMode_h_15_RPC_WRAPPERS \
	NierProject_Source_NierProject_MyGameMode_h_15_INCLASS \
	NierProject_Source_NierProject_MyGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NierProject_Source_NierProject_MyGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_MyGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_MyGameMode_h_15_SPARSE_DATA \
	NierProject_Source_NierProject_MyGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NierProject_Source_NierProject_MyGameMode_h_15_INCLASS_NO_PURE_DECLS \
	NierProject_Source_NierProject_MyGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIERPROJECT_API UClass* StaticClass<class AMyGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NierProject_Source_NierProject_MyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
