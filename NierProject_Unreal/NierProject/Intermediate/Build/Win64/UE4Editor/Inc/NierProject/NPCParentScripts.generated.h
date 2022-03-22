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
#ifdef NIERPROJECT_NPCParentScripts_generated_h
#error "NPCParentScripts.generated.h already included, missing '#pragma once' in NPCParentScripts.h"
#endif
#define NIERPROJECT_NPCParentScripts_generated_h

#define NierProject_Source_NierProject_NPCParentScripts_h_12_SPARSE_DATA
#define NierProject_Source_NierProject_NPCParentScripts_h_12_RPC_WRAPPERS \
	virtual void InteractSuccess_Implementation(); \
 \
	DECLARE_FUNCTION(execInteractSuccess); \
	DECLARE_FUNCTION(execInteractSphereOnverlapEnd); \
	DECLARE_FUNCTION(execInteractSphereOverlapBegin);


#define NierProject_Source_NierProject_NPCParentScripts_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InteractSuccess_Implementation(); \
 \
	DECLARE_FUNCTION(execInteractSuccess); \
	DECLARE_FUNCTION(execInteractSphereOnverlapEnd); \
	DECLARE_FUNCTION(execInteractSphereOverlapBegin);


#define NierProject_Source_NierProject_NPCParentScripts_h_12_EVENT_PARMS
#define NierProject_Source_NierProject_NPCParentScripts_h_12_CALLBACK_WRAPPERS
#define NierProject_Source_NierProject_NPCParentScripts_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCParentScripts(); \
	friend struct Z_Construct_UClass_ANPCParentScripts_Statics; \
public: \
	DECLARE_CLASS(ANPCParentScripts, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(ANPCParentScripts)


#define NierProject_Source_NierProject_NPCParentScripts_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANPCParentScripts(); \
	friend struct Z_Construct_UClass_ANPCParentScripts_Statics; \
public: \
	DECLARE_CLASS(ANPCParentScripts, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(ANPCParentScripts)


#define NierProject_Source_NierProject_NPCParentScripts_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPCParentScripts(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPCParentScripts) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCParentScripts); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCParentScripts); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCParentScripts(ANPCParentScripts&&); \
	NO_API ANPCParentScripts(const ANPCParentScripts&); \
public:


#define NierProject_Source_NierProject_NPCParentScripts_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCParentScripts(ANPCParentScripts&&); \
	NO_API ANPCParentScripts(const ANPCParentScripts&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCParentScripts); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCParentScripts); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCParentScripts)


#define NierProject_Source_NierProject_NPCParentScripts_h_12_PRIVATE_PROPERTY_OFFSET
#define NierProject_Source_NierProject_NPCParentScripts_h_9_PROLOG \
	NierProject_Source_NierProject_NPCParentScripts_h_12_EVENT_PARMS


#define NierProject_Source_NierProject_NPCParentScripts_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_NPCParentScripts_h_12_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_NPCParentScripts_h_12_SPARSE_DATA \
	NierProject_Source_NierProject_NPCParentScripts_h_12_RPC_WRAPPERS \
	NierProject_Source_NierProject_NPCParentScripts_h_12_CALLBACK_WRAPPERS \
	NierProject_Source_NierProject_NPCParentScripts_h_12_INCLASS \
	NierProject_Source_NierProject_NPCParentScripts_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NierProject_Source_NierProject_NPCParentScripts_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_NPCParentScripts_h_12_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_NPCParentScripts_h_12_SPARSE_DATA \
	NierProject_Source_NierProject_NPCParentScripts_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NierProject_Source_NierProject_NPCParentScripts_h_12_CALLBACK_WRAPPERS \
	NierProject_Source_NierProject_NPCParentScripts_h_12_INCLASS_NO_PURE_DECLS \
	NierProject_Source_NierProject_NPCParentScripts_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIERPROJECT_API UClass* StaticClass<class ANPCParentScripts>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NierProject_Source_NierProject_NPCParentScripts_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
