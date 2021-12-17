// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyMainCharacter;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef NIERPROJECT_MinionMeleeCoreDawn_Enemy_generated_h
#error "MinionMeleeCoreDawn_Enemy.generated.h already included, missing '#pragma once' in MinionMeleeCoreDawn_Enemy.h"
#endif
#define NIERPROJECT_MinionMeleeCoreDawn_Enemy_generated_h

#define NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_SPARSE_DATA
#define NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHitReactEnd); \
	DECLARE_FUNCTION(execDeActivateCollison); \
	DECLARE_FUNCTION(execActivateCollison); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execMoveToTarget); \
	DECLARE_FUNCTION(execCombatOnOnverlapEnd); \
	DECLARE_FUNCTION(execCombatOnOverlapBegin); \
	DECLARE_FUNCTION(execCombatSphereOnOverlapEnd); \
	DECLARE_FUNCTION(execCombatSphereOnOverlapBegin); \
	DECLARE_FUNCTION(execAgroSphereOnOverlapEnd); \
	DECLARE_FUNCTION(execAgroSphereOnOverlapBegin);


#define NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHitReactEnd); \
	DECLARE_FUNCTION(execDeActivateCollison); \
	DECLARE_FUNCTION(execActivateCollison); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execMoveToTarget); \
	DECLARE_FUNCTION(execCombatOnOnverlapEnd); \
	DECLARE_FUNCTION(execCombatOnOverlapBegin); \
	DECLARE_FUNCTION(execCombatSphereOnOverlapEnd); \
	DECLARE_FUNCTION(execCombatSphereOnOverlapBegin); \
	DECLARE_FUNCTION(execAgroSphereOnOverlapEnd); \
	DECLARE_FUNCTION(execAgroSphereOnOverlapBegin);


#define NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinionMeleeCoreDawn_Enemy(); \
	friend struct Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics; \
public: \
	DECLARE_CLASS(AMinionMeleeCoreDawn_Enemy, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(AMinionMeleeCoreDawn_Enemy)


#define NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAMinionMeleeCoreDawn_Enemy(); \
	friend struct Z_Construct_UClass_AMinionMeleeCoreDawn_Enemy_Statics; \
public: \
	DECLARE_CLASS(AMinionMeleeCoreDawn_Enemy, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(AMinionMeleeCoreDawn_Enemy)


#define NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMinionMeleeCoreDawn_Enemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMinionMeleeCoreDawn_Enemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinionMeleeCoreDawn_Enemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinionMeleeCoreDawn_Enemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinionMeleeCoreDawn_Enemy(AMinionMeleeCoreDawn_Enemy&&); \
	NO_API AMinionMeleeCoreDawn_Enemy(const AMinionMeleeCoreDawn_Enemy&); \
public:


#define NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinionMeleeCoreDawn_Enemy(AMinionMeleeCoreDawn_Enemy&&); \
	NO_API AMinionMeleeCoreDawn_Enemy(const AMinionMeleeCoreDawn_Enemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinionMeleeCoreDawn_Enemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinionMeleeCoreDawn_Enemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinionMeleeCoreDawn_Enemy)


#define NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CombatTarget() { return STRUCT_OFFSET(AMinionMeleeCoreDawn_Enemy, CombatTarget); }


#define NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_26_PROLOG
#define NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_SPARSE_DATA \
	NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_RPC_WRAPPERS \
	NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_INCLASS \
	NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_SPARSE_DATA \
	NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_INCLASS_NO_PURE_DECLS \
	NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIERPROJECT_API UClass* StaticClass<class AMinionMeleeCoreDawn_Enemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NierProject_Source_NierProject_MinionMeleeCoreDawn_Enemy_h


#define FOREACH_ENUM_EENEMYMOVEMENTSTATUS(op) \
	op(EEnemyMovementStatus::EMS_Idle) \
	op(EEnemyMovementStatus::EMS_MoveToTarget) \
	op(EEnemyMovementStatus::EMS_Attacking) \
	op(EEnemyMovementStatus::EMS_Dead) \
	op(EEnemyMovementStatus::EMS_Hit) 

enum class EEnemyMovementStatus : uint8;
template<> NIERPROJECT_API UEnum* StaticEnum<EEnemyMovementStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
