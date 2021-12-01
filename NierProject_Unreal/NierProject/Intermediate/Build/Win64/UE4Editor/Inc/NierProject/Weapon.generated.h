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
#ifdef NIERPROJECT_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define NIERPROJECT_Weapon_generated_h

#define NierProject_Source_NierProject_Weapon_h_12_SPARSE_DATA
#define NierProject_Source_NierProject_Weapon_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeActivateCollison); \
	DECLARE_FUNCTION(execActivateCollison); \
	DECLARE_FUNCTION(execCombatOnOnverlapEnd); \
	DECLARE_FUNCTION(execCombatOnOverlapBegin);


#define NierProject_Source_NierProject_Weapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeActivateCollison); \
	DECLARE_FUNCTION(execActivateCollison); \
	DECLARE_FUNCTION(execCombatOnOnverlapEnd); \
	DECLARE_FUNCTION(execCombatOnOverlapBegin);


#define NierProject_Source_NierProject_Weapon_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define NierProject_Source_NierProject_Weapon_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define NierProject_Source_NierProject_Weapon_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define NierProject_Source_NierProject_Weapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define NierProject_Source_NierProject_Weapon_h_12_PRIVATE_PROPERTY_OFFSET
#define NierProject_Source_NierProject_Weapon_h_9_PROLOG
#define NierProject_Source_NierProject_Weapon_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_Weapon_h_12_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_Weapon_h_12_SPARSE_DATA \
	NierProject_Source_NierProject_Weapon_h_12_RPC_WRAPPERS \
	NierProject_Source_NierProject_Weapon_h_12_INCLASS \
	NierProject_Source_NierProject_Weapon_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NierProject_Source_NierProject_Weapon_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_Weapon_h_12_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_Weapon_h_12_SPARSE_DATA \
	NierProject_Source_NierProject_Weapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NierProject_Source_NierProject_Weapon_h_12_INCLASS_NO_PURE_DECLS \
	NierProject_Source_NierProject_Weapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIERPROJECT_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NierProject_Source_NierProject_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
