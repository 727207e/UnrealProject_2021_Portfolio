// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef NIERPROJECT_InterfaceLifeEntity_generated_h
#error "InterfaceLifeEntity.generated.h already included, missing '#pragma once' in InterfaceLifeEntity.h"
#endif
#define NIERPROJECT_InterfaceLifeEntity_generated_h

#define NierProject_Source_NierProject_InterfaceLifeEntity_h_16_SPARSE_DATA
#define NierProject_Source_NierProject_InterfaceLifeEntity_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInterfaceGetMyID); \
	DECLARE_FUNCTION(execInterfaceTakeDamage);


#define NierProject_Source_NierProject_InterfaceLifeEntity_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInterfaceGetMyID); \
	DECLARE_FUNCTION(execInterfaceTakeDamage);


#define NierProject_Source_NierProject_InterfaceLifeEntity_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIERPROJECT_API UInterfaceLifeEntity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterfaceLifeEntity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIERPROJECT_API, UInterfaceLifeEntity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterfaceLifeEntity); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIERPROJECT_API UInterfaceLifeEntity(UInterfaceLifeEntity&&); \
	NIERPROJECT_API UInterfaceLifeEntity(const UInterfaceLifeEntity&); \
public:


#define NierProject_Source_NierProject_InterfaceLifeEntity_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIERPROJECT_API UInterfaceLifeEntity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIERPROJECT_API UInterfaceLifeEntity(UInterfaceLifeEntity&&); \
	NIERPROJECT_API UInterfaceLifeEntity(const UInterfaceLifeEntity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIERPROJECT_API, UInterfaceLifeEntity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterfaceLifeEntity); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterfaceLifeEntity)


#define NierProject_Source_NierProject_InterfaceLifeEntity_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterfaceLifeEntity(); \
	friend struct Z_Construct_UClass_UInterfaceLifeEntity_Statics; \
public: \
	DECLARE_CLASS(UInterfaceLifeEntity, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NierProject"), NIERPROJECT_API) \
	DECLARE_SERIALIZER(UInterfaceLifeEntity)


#define NierProject_Source_NierProject_InterfaceLifeEntity_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NierProject_Source_NierProject_InterfaceLifeEntity_h_16_GENERATED_UINTERFACE_BODY() \
	NierProject_Source_NierProject_InterfaceLifeEntity_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NierProject_Source_NierProject_InterfaceLifeEntity_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NierProject_Source_NierProject_InterfaceLifeEntity_h_16_GENERATED_UINTERFACE_BODY() \
	NierProject_Source_NierProject_InterfaceLifeEntity_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NierProject_Source_NierProject_InterfaceLifeEntity_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterfaceLifeEntity() {} \
public: \
	typedef UInterfaceLifeEntity UClassType; \
	typedef IInterfaceLifeEntity ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NierProject_Source_NierProject_InterfaceLifeEntity_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterfaceLifeEntity() {} \
public: \
	typedef UInterfaceLifeEntity UClassType; \
	typedef IInterfaceLifeEntity ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NierProject_Source_NierProject_InterfaceLifeEntity_h_13_PROLOG
#define NierProject_Source_NierProject_InterfaceLifeEntity_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_InterfaceLifeEntity_h_16_SPARSE_DATA \
	NierProject_Source_NierProject_InterfaceLifeEntity_h_16_RPC_WRAPPERS \
	NierProject_Source_NierProject_InterfaceLifeEntity_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NierProject_Source_NierProject_InterfaceLifeEntity_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NierProject_Source_NierProject_InterfaceLifeEntity_h_16_SPARSE_DATA \
	NierProject_Source_NierProject_InterfaceLifeEntity_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	NierProject_Source_NierProject_InterfaceLifeEntity_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIERPROJECT_API UClass* StaticClass<class UInterfaceLifeEntity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NierProject_Source_NierProject_InterfaceLifeEntity_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
