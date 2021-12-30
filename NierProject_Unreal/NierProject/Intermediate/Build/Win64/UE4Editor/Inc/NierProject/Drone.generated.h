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
#ifdef NIERPROJECT_Drone_generated_h
#error "Drone.generated.h already included, missing '#pragma once' in Drone.h"
#endif
#define NIERPROJECT_Drone_generated_h

#define NierProject_Source_NierProject_Drone_h_12_SPARSE_DATA
#define NierProject_Source_NierProject_Drone_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayerOnOnverlapEnd); \
	DECLARE_FUNCTION(execPlayerOnOverlapBegin);


#define NierProject_Source_NierProject_Drone_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayerOnOnverlapEnd); \
	DECLARE_FUNCTION(execPlayerOnOverlapBegin);


#define NierProject_Source_NierProject_Drone_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADrone(); \
	friend struct Z_Construct_UClass_ADrone_Statics; \
public: \
	DECLARE_CLASS(ADrone, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(ADrone)


#define NierProject_Source_NierProject_Drone_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADrone(); \
	friend struct Z_Construct_UClass_ADrone_Statics; \
public: \
	DECLARE_CLASS(ADrone, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(ADrone)


#define NierProject_Source_NierProject_Drone_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADrone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADrone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADrone(ADrone&&); \
	NO_API ADrone(const ADrone&); \
public:


#define NierProject_Source_NierProject_Drone_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADrone(ADrone&&); \
	NO_API ADrone(const ADrone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADrone)


#define NierProject_Source_NierProject_Drone_h_12_PRIVATE_PROPERTY_OFFSET
#define NierProject_Source_NierProject_Drone_h_9_PROLOG
#define NierProject_Source_NierProject_Drone_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_Drone_h_12_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_Drone_h_12_SPARSE_DATA \
	NierProject_Source_NierProject_Drone_h_12_RPC_WRAPPERS \
	NierProject_Source_NierProject_Drone_h_12_INCLASS \
	NierProject_Source_NierProject_Drone_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NierProject_Source_NierProject_Drone_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_Drone_h_12_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_Drone_h_12_SPARSE_DATA \
	NierProject_Source_NierProject_Drone_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NierProject_Source_NierProject_Drone_h_12_INCLASS_NO_PURE_DECLS \
	NierProject_Source_NierProject_Drone_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIERPROJECT_API UClass* StaticClass<class ADrone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NierProject_Source_NierProject_Drone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
