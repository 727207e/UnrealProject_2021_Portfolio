// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIERPROJECT_MyMainCharacter_generated_h
#error "MyMainCharacter.generated.h already included, missing '#pragma once' in MyMainCharacter.h"
#endif
#define NIERPROJECT_MyMainCharacter_generated_h

#define NierProject_Source_NierProject_MyMainCharacter_h_49_SPARSE_DATA
#define NierProject_Source_NierProject_MyMainCharacter_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNextComboOff); \
	DECLARE_FUNCTION(execNextComboOn); \
	DECLARE_FUNCTION(execEquipWeapon); \
	DECLARE_FUNCTION(execLookattheLockOnTarget);


#define NierProject_Source_NierProject_MyMainCharacter_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNextComboOff); \
	DECLARE_FUNCTION(execNextComboOn); \
	DECLARE_FUNCTION(execEquipWeapon); \
	DECLARE_FUNCTION(execLookattheLockOnTarget);


#define NierProject_Source_NierProject_MyMainCharacter_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyMainCharacter(); \
	friend struct Z_Construct_UClass_AMyMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyMainCharacter, ALifeEntity, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(AMyMainCharacter)


#define NierProject_Source_NierProject_MyMainCharacter_h_49_INCLASS \
private: \
	static void StaticRegisterNativesAMyMainCharacter(); \
	friend struct Z_Construct_UClass_AMyMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyMainCharacter, ALifeEntity, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NierProject"), NO_API) \
	DECLARE_SERIALIZER(AMyMainCharacter)


#define NierProject_Source_NierProject_MyMainCharacter_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyMainCharacter(AMyMainCharacter&&); \
	NO_API AMyMainCharacter(const AMyMainCharacter&); \
public:


#define NierProject_Source_NierProject_MyMainCharacter_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyMainCharacter(AMyMainCharacter&&); \
	NO_API AMyMainCharacter(const AMyMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyMainCharacter)


#define NierProject_Source_NierProject_MyMainCharacter_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyMainCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMyMainCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__FollowCameraEndPoint() { return STRUCT_OFFSET(AMyMainCharacter, FollowCameraEndPoint); }


#define NierProject_Source_NierProject_MyMainCharacter_h_46_PROLOG
#define NierProject_Source_NierProject_MyMainCharacter_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_MyMainCharacter_h_49_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_MyMainCharacter_h_49_SPARSE_DATA \
	NierProject_Source_NierProject_MyMainCharacter_h_49_RPC_WRAPPERS \
	NierProject_Source_NierProject_MyMainCharacter_h_49_INCLASS \
	NierProject_Source_NierProject_MyMainCharacter_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NierProject_Source_NierProject_MyMainCharacter_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_MyMainCharacter_h_49_PRIVATE_PROPERTY_OFFSET \
	NierProject_Source_NierProject_MyMainCharacter_h_49_SPARSE_DATA \
	NierProject_Source_NierProject_MyMainCharacter_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	NierProject_Source_NierProject_MyMainCharacter_h_49_INCLASS_NO_PURE_DECLS \
	NierProject_Source_NierProject_MyMainCharacter_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIERPROJECT_API UClass* StaticClass<class AMyMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NierProject_Source_NierProject_MyMainCharacter_h


#define FOREACH_ENUM_EMOVEMENTSTATUS(op) \
	op(EMovementStatus::EMS_Normal) \
	op(EMovementStatus::EMS_Sprinting) \
	op(EMovementStatus::EMS_Attacking) \
	op(EMovementStatus::EMS_Dead) 

enum class EMovementStatus : uint8;
template<> NIERPROJECT_API UEnum* StaticEnum<EMovementStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
