// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef NIERPROJECT_BossMap_Door_generated_h
#error "BossMap_Door.generated.h already included, missing '#pragma once' in BossMap_Door.h"
#endif
#define NIERPROJECT_BossMap_Door_generated_h

#define NierProject_Source_NierProject_BossMap_Door_h_12_SPARSE_DATA
#define NierProject_Source_NierProject_BossMap_Door_h_12_RPC_WRAPPERS \
	virtual void BossViewSequence_Implementation(const float DeltaTime); \
 \
	DECLARE_FUNCTION(execBossViewSequence); \
	DECLARE_FUNCTION(execDoorTriggerPointEndOverlap); \
	DECLARE_FUNCTION(execDoorTriggerPointBeginOverlap);


#define NierProject_Source_NierProject_BossMap_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BossViewSequence_Implementation(const float DeltaTime); \
 \
	DECLARE_FUNCTION(execBossViewSequence); \
	DECLARE_FUNCTION(execDoorTriggerPointEndOverlap); \
	DECLARE_FUNCTION(execDoorTriggerPointBeginOverlap);


#define NierProject_Source_NierProject_BossMap_Door_h_12_EVENT_PARMS \
	struct BossMap_Door_eventBossViewSequence_Parms \
	{ \
		float DeltaTime; \
	};


#define NierProject_Source_NierProject_BossMap_Door_h_12_CALLBACK_WRAPPERS
#define NierProject_Source_NierProject_BossMap_Door_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABossMap_Door(); \
	friend struct Z_Construct_UClass_ABossMap_Door_Statics; \
public: \
	DECLARE_CLASS(ABossMap_Door, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(ABossMap_Door)


#define NierProject_Source_NierProject_BossMap_Door_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABossMap_Door(); \
	friend struct Z_Construct_UClass_ABossMap_Door_Statics; \
public: \
	DECLARE_CLASS(ABossMap_Door, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(ABossMap_Door)


#define NierProject_Source_NierProject_BossMap_Door_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABossMap_Door(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABossMap_Door) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABossMap_Door); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABossMap_Door); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABossMap_Door(ABossMap_Door&&); \
	NO_API ABossMap_Door(const ABossMap_Door&); \
public:


#define NierProject_Source_NierProject_BossMap_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABossMap_Door(ABossMap_Door&&); \
	NO_API ABossMap_Door(const ABossMap_Door&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABossMap_Door); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABossMap_Door); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABossMap_Door)


#define NierProject_Source_NierProject_BossMap_Door_h_12_PRIVATE_PROPERTY_OFFSET
#define NierProject_Source_NierProject_BossMap_Door_h_9_PROLOG \
	NierProject_Source_NierProject_BossMap_Door_h_12_EVENT_PARMS


#define NierProject_Source_NierProject_BossMap_Door_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_BossMap_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_BossMap_Door_h_12_SPARSE_DATA \
	NierProject_Source_NierProject_BossMap_Door_h_12_RPC_WRAPPERS \
	NierProject_Source_NierProject_BossMap_Door_h_12_CALLBACK_WRAPPERS \
	NierProject_Source_NierProject_BossMap_Door_h_12_INCLASS \
	NierProject_Source_NierProject_BossMap_Door_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NierProject_Source_NierProject_BossMap_Door_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_BossMap_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_BossMap_Door_h_12_SPARSE_DATA \
	NierProject_Source_NierProject_BossMap_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NierProject_Source_NierProject_BossMap_Door_h_12_CALLBACK_WRAPPERS \
	NierProject_Source_NierProject_BossMap_Door_h_12_INCLASS_NO_PURE_DECLS \
	NierProject_Source_NierProject_BossMap_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIERPROJECT_API UClass* StaticClass<class ABossMap_Door>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NierProject_Source_NierProject_BossMap_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
