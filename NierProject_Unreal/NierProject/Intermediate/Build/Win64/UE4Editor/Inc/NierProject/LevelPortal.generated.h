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
#ifdef NIERPROJECT_LevelPortal_generated_h
#error "LevelPortal.generated.h already included, missing '#pragma once' in LevelPortal.h"
#endif
#define NIERPROJECT_LevelPortal_generated_h

#define NierProject_Source_NierProject_LevelPortal_h_12_SPARSE_DATA
#define NierProject_Source_NierProject_LevelPortal_h_12_RPC_WRAPPERS \
	virtual void MoveLevel_Implementation(); \
 \
	DECLARE_FUNCTION(execPlayerStartPoint); \
	DECLARE_FUNCTION(execMoveLevel); \
	DECLARE_FUNCTION(execPortalEndOverlap); \
	DECLARE_FUNCTION(execPortalBeginOverlap);


#define NierProject_Source_NierProject_LevelPortal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MoveLevel_Implementation(); \
 \
	DECLARE_FUNCTION(execPlayerStartPoint); \
	DECLARE_FUNCTION(execMoveLevel); \
	DECLARE_FUNCTION(execPortalEndOverlap); \
	DECLARE_FUNCTION(execPortalBeginOverlap);


#define NierProject_Source_NierProject_LevelPortal_h_12_EVENT_PARMS
#define NierProject_Source_NierProject_LevelPortal_h_12_CALLBACK_WRAPPERS
#define NierProject_Source_NierProject_LevelPortal_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelPortal(); \
	friend struct Z_Construct_UClass_ALevelPortal_Statics; \
public: \
	DECLARE_CLASS(ALevelPortal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(ALevelPortal)


#define NierProject_Source_NierProject_LevelPortal_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALevelPortal(); \
	friend struct Z_Construct_UClass_ALevelPortal_Statics; \
public: \
	DECLARE_CLASS(ALevelPortal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(ALevelPortal)


#define NierProject_Source_NierProject_LevelPortal_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelPortal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelPortal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelPortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelPortal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelPortal(ALevelPortal&&); \
	NO_API ALevelPortal(const ALevelPortal&); \
public:


#define NierProject_Source_NierProject_LevelPortal_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelPortal(ALevelPortal&&); \
	NO_API ALevelPortal(const ALevelPortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelPortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelPortal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelPortal)


#define NierProject_Source_NierProject_LevelPortal_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootPoint() { return STRUCT_OFFSET(ALevelPortal, RootPoint); } \
	FORCEINLINE static uint32 __PPO__NextLevelPortal() { return STRUCT_OFFSET(ALevelPortal, NextLevelPortal); } \
	FORCEINLINE static uint32 __PPO__Meshcom() { return STRUCT_OFFSET(ALevelPortal, Meshcom); } \
	FORCEINLINE static uint32 __PPO__ParticleSys() { return STRUCT_OFFSET(ALevelPortal, ParticleSys); } \
	FORCEINLINE static uint32 __PPO__BplayerStart() { return STRUCT_OFFSET(ALevelPortal, BplayerStart); }


#define NierProject_Source_NierProject_LevelPortal_h_9_PROLOG \
	NierProject_Source_NierProject_LevelPortal_h_12_EVENT_PARMS


#define NierProject_Source_NierProject_LevelPortal_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_LevelPortal_h_12_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_LevelPortal_h_12_SPARSE_DATA \
	NierProject_Source_NierProject_LevelPortal_h_12_RPC_WRAPPERS \
	NierProject_Source_NierProject_LevelPortal_h_12_CALLBACK_WRAPPERS \
	NierProject_Source_NierProject_LevelPortal_h_12_INCLASS \
	NierProject_Source_NierProject_LevelPortal_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NierProject_Source_NierProject_LevelPortal_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_LevelPortal_h_12_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_LevelPortal_h_12_SPARSE_DATA \
	NierProject_Source_NierProject_LevelPortal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NierProject_Source_NierProject_LevelPortal_h_12_CALLBACK_WRAPPERS \
	NierProject_Source_NierProject_LevelPortal_h_12_INCLASS_NO_PURE_DECLS \
	NierProject_Source_NierProject_LevelPortal_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIERPROJECT_API UClass* StaticClass<class ALevelPortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NierProject_Source_NierProject_LevelPortal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
