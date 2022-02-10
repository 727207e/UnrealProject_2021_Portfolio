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
#ifdef NIERPROJECT_FireBall_generated_h
#error "FireBall.generated.h already included, missing '#pragma once' in FireBall.h"
#endif
#define NIERPROJECT_FireBall_generated_h

#define NierProject_Source_NierProject_FireBall_h_13_SPARSE_DATA
#define NierProject_Source_NierProject_FireBall_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSphereOnOverlapEnd); \
	DECLARE_FUNCTION(execSphereOnOverlapBegin);


#define NierProject_Source_NierProject_FireBall_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSphereOnOverlapEnd); \
	DECLARE_FUNCTION(execSphereOnOverlapBegin);


#define NierProject_Source_NierProject_FireBall_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFireBall(); \
	friend struct Z_Construct_UClass_AFireBall_Statics; \
public: \
	DECLARE_CLASS(AFireBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(AFireBall)


#define NierProject_Source_NierProject_FireBall_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFireBall(); \
	friend struct Z_Construct_UClass_AFireBall_Statics; \
public: \
	DECLARE_CLASS(AFireBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(AFireBall)


#define NierProject_Source_NierProject_FireBall_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFireBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFireBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireBall(AFireBall&&); \
	NO_API AFireBall(const AFireBall&); \
public:


#define NierProject_Source_NierProject_FireBall_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireBall(AFireBall&&); \
	NO_API AFireBall(const AFireBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFireBall)


#define NierProject_Source_NierProject_FireBall_h_13_PRIVATE_PROPERTY_OFFSET
#define NierProject_Source_NierProject_FireBall_h_10_PROLOG
#define NierProject_Source_NierProject_FireBall_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_FireBall_h_13_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_FireBall_h_13_SPARSE_DATA \
	NierProject_Source_NierProject_FireBall_h_13_RPC_WRAPPERS \
	NierProject_Source_NierProject_FireBall_h_13_INCLASS \
	NierProject_Source_NierProject_FireBall_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NierProject_Source_NierProject_FireBall_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_FireBall_h_13_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_FireBall_h_13_SPARSE_DATA \
	NierProject_Source_NierProject_FireBall_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NierProject_Source_NierProject_FireBall_h_13_INCLASS_NO_PURE_DECLS \
	NierProject_Source_NierProject_FireBall_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIERPROJECT_API UClass* StaticClass<class AFireBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NierProject_Source_NierProject_FireBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
