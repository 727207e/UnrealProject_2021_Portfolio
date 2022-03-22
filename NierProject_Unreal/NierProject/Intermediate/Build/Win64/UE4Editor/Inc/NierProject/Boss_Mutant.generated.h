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
#ifdef NIERPROJECT_Boss_Mutant_generated_h
#error "Boss_Mutant.generated.h already included, missing '#pragma once' in Boss_Mutant.h"
#endif
#define NIERPROJECT_Boss_Mutant_generated_h

#define NierProject_Source_NierProject_Boss_Mutant_h_39_SPARSE_DATA
#define NierProject_Source_NierProject_Boss_Mutant_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBossHealthBarShowUp); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execDeActiveCollision); \
	DECLARE_FUNCTION(execActiveCollision); \
	DECLARE_FUNCTION(execAttack_OnOverlapEnd); \
	DECLARE_FUNCTION(execAttack_OnOverlapBegin); \
	DECLARE_FUNCTION(execAttackRange_OnOverlapEnd); \
	DECLARE_FUNCTION(execAttackRange_OnOverlapBegin);


#define NierProject_Source_NierProject_Boss_Mutant_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBossHealthBarShowUp); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execDeActiveCollision); \
	DECLARE_FUNCTION(execActiveCollision); \
	DECLARE_FUNCTION(execAttack_OnOverlapEnd); \
	DECLARE_FUNCTION(execAttack_OnOverlapBegin); \
	DECLARE_FUNCTION(execAttackRange_OnOverlapEnd); \
	DECLARE_FUNCTION(execAttackRange_OnOverlapBegin);


#define NierProject_Source_NierProject_Boss_Mutant_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoss_Mutant(); \
	friend struct Z_Construct_UClass_ABoss_Mutant_Statics; \
public: \
	DECLARE_CLASS(ABoss_Mutant, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(ABoss_Mutant) \
	virtual UObject* _getUObject() const override { return const_cast<ABoss_Mutant*>(this); }


#define NierProject_Source_NierProject_Boss_Mutant_h_39_INCLASS \
private: \
	static void StaticRegisterNativesABoss_Mutant(); \
	friend struct Z_Construct_UClass_ABoss_Mutant_Statics; \
public: \
	DECLARE_CLASS(ABoss_Mutant, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(ABoss_Mutant) \
	virtual UObject* _getUObject() const override { return const_cast<ABoss_Mutant*>(this); }


#define NierProject_Source_NierProject_Boss_Mutant_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoss_Mutant(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoss_Mutant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoss_Mutant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoss_Mutant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoss_Mutant(ABoss_Mutant&&); \
	NO_API ABoss_Mutant(const ABoss_Mutant&); \
public:


#define NierProject_Source_NierProject_Boss_Mutant_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoss_Mutant(ABoss_Mutant&&); \
	NO_API ABoss_Mutant(const ABoss_Mutant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoss_Mutant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoss_Mutant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoss_Mutant)


#define NierProject_Source_NierProject_Boss_Mutant_h_39_PRIVATE_PROPERTY_OFFSET
#define NierProject_Source_NierProject_Boss_Mutant_h_36_PROLOG
#define NierProject_Source_NierProject_Boss_Mutant_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_Boss_Mutant_h_39_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_Boss_Mutant_h_39_SPARSE_DATA \
	NierProject_Source_NierProject_Boss_Mutant_h_39_RPC_WRAPPERS \
	NierProject_Source_NierProject_Boss_Mutant_h_39_INCLASS \
	NierProject_Source_NierProject_Boss_Mutant_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NierProject_Source_NierProject_Boss_Mutant_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_Boss_Mutant_h_39_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_Boss_Mutant_h_39_SPARSE_DATA \
	NierProject_Source_NierProject_Boss_Mutant_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	NierProject_Source_NierProject_Boss_Mutant_h_39_INCLASS_NO_PURE_DECLS \
	NierProject_Source_NierProject_Boss_Mutant_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIERPROJECT_API UClass* StaticClass<class ABoss_Mutant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NierProject_Source_NierProject_Boss_Mutant_h


#define FOREACH_ENUM_EBOSSMUTANTMOVEMENTSTATUS(op) \
	op(EBossMutantMovementStatus::BMMS_Idle) \
	op(EBossMutantMovementStatus::BMMS_MoveToTarget) \
	op(EBossMutantMovementStatus::BMMS_Attacking) \
	op(EBossMutantMovementStatus::BMMS_Dead) \
	op(EBossMutantMovementStatus::BMMS_Hit) 

enum class EBossMutantMovementStatus : uint8;
template<> NIERPROJECT_API UEnum* StaticEnum<EBossMutantMovementStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
