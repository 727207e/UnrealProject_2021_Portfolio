// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NierProject/MyMainCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMainCharacter() {}
// Cross Module References
	NIERPROJECT_API UEnum* Z_Construct_UEnum_NierProject_EMovementStatus();
	UPackage* Z_Construct_UPackage__Script_NierProject();
	NIERPROJECT_API UClass* Z_Construct_UClass_AMyMainCharacter_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_AMyMainCharacter();
	NIERPROJECT_API UClass* Z_Construct_UClass_ALifeEntity();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NIERPROJECT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_ADrone_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	NIERPROJECT_API UClass* Z_Construct_UClass_AAvoidAfterImage_NoRegister();
// End Cross Module References
	static UEnum* EMovementStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NierProject_EMovementStatus, Z_Construct_UPackage__Script_NierProject(), TEXT("EMovementStatus"));
		}
		return Singleton;
	}
	template<> NIERPROJECT_API UEnum* StaticEnum<EMovementStatus>()
	{
		return EMovementStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementStatus(EMovementStatus_StaticEnum, TEXT("/Script/NierProject"), TEXT("EMovementStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NierProject_EMovementStatus_Hash() { return 2778671054U; }
	UEnum* Z_Construct_UEnum_NierProject_EMovementStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NierProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementStatus"), 0, Get_Z_Construct_UEnum_NierProject_EMovementStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementStatus::EMS_Normal", (int64)EMovementStatus::EMS_Normal },
				{ "EMovementStatus::EMS_Sprinting", (int64)EMovementStatus::EMS_Sprinting },
				{ "EMovementStatus::EMS_Attacking", (int64)EMovementStatus::EMS_Attacking },
				{ "EMovementStatus::EMS_Avoid", (int64)EMovementStatus::EMS_Avoid },
				{ "EMovementStatus::EMS_Hit", (int64)EMovementStatus::EMS_Hit },
				{ "EMovementStatus::EMS_Dead", (int64)EMovementStatus::EMS_Dead },
				{ "EMovementStatus::EMS_MAX", (int64)EMovementStatus::EMS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMS_Attacking.DisplayName", "Attacking" },
				{ "EMS_Attacking.Name", "EMovementStatus::EMS_Attacking" },
				{ "EMS_Avoid.DisplayName", "Avoid" },
				{ "EMS_Avoid.Name", "EMovementStatus::EMS_Avoid" },
				{ "EMS_Dead.DisplayName", "Dead" },
				{ "EMS_Dead.Name", "EMovementStatus::EMS_Dead" },
				{ "EMS_Hit.DisplayName", "Hit" },
				{ "EMS_Hit.Name", "EMovementStatus::EMS_Hit" },
				{ "EMS_MAX.DisplayName", "DefaultMax" },
				{ "EMS_MAX.Name", "EMovementStatus::EMS_MAX" },
				{ "EMS_Normal.DisplayName", "Normal" },
				{ "EMS_Normal.Name", "EMovementStatus::EMS_Normal" },
				{ "EMS_Sprinting.DisplayName", "Sprinting" },
				{ "EMS_Sprinting.Name", "EMovementStatus::EMS_Sprinting" },
				{ "ModuleRelativePath", "MyMainCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NierProject,
				nullptr,
				"EMovementStatus",
				"EMovementStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execDeadEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeadEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execHitReactEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HitReactEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execGenAfterImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenAfterImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execSlowMotion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SlowMotion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execLookAtTargetWhenAttacking)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookAtTargetWhenAttacking(Z_Param__DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::exechasTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->hasTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execNextComboOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextComboOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execNextComboOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextComboOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execEquipWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execLookattheLockOnTarget)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookattheLockOnTarget(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execAvoidDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AvoidDown();
		P_NATIVE_END;
	}
	void AMyMainCharacter::StaticRegisterNativesAMyMainCharacter()
	{
		UClass* Class = AMyMainCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AvoidDown", &AMyMainCharacter::execAvoidDown },
			{ "DeadEnd", &AMyMainCharacter::execDeadEnd },
			{ "EquipWeapon", &AMyMainCharacter::execEquipWeapon },
			{ "GenAfterImage", &AMyMainCharacter::execGenAfterImage },
			{ "hasTarget", &AMyMainCharacter::exechasTarget },
			{ "HitReactEnd", &AMyMainCharacter::execHitReactEnd },
			{ "LookAtTargetWhenAttacking", &AMyMainCharacter::execLookAtTargetWhenAttacking },
			{ "LookattheLockOnTarget", &AMyMainCharacter::execLookattheLockOnTarget },
			{ "NextComboOff", &AMyMainCharacter::execNextComboOff },
			{ "NextComboOn", &AMyMainCharacter::execNextComboOn },
			{ "SlowMotion", &AMyMainCharacter::execSlowMotion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyMainCharacter_AvoidDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_AvoidDown_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Action Keys*/" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "Action Keys" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_AvoidDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "AvoidDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_AvoidDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_AvoidDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_AvoidDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_AvoidDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_DeadEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_DeadEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_DeadEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "DeadEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_DeadEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_DeadEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_DeadEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_DeadEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_EquipWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_EquipWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "EquipWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_EquipWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_EquipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_EquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_EquipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_GenAfterImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_GenAfterImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_GenAfterImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "GenAfterImage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_GenAfterImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_GenAfterImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_GenAfterImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_GenAfterImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_hasTarget_Statics
	{
		struct MyMainCharacter_eventhasTarget_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyMainCharacter_hasTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyMainCharacter_eventhasTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyMainCharacter_hasTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyMainCharacter_eventhasTarget_Parms), &Z_Construct_UFunction_AMyMainCharacter_hasTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyMainCharacter_hasTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyMainCharacter_hasTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_hasTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_hasTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "hasTarget", nullptr, nullptr, sizeof(MyMainCharacter_eventhasTarget_Parms), Z_Construct_UFunction_AMyMainCharacter_hasTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_hasTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_hasTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_hasTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_hasTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_hasTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_HitReactEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_HitReactEnd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//?\xc7\xb0\xdd\xbd? ?\xda\xb7? ???????? ?\xd3\xb5???\n" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "?\xc7\xb0\xdd\xbd? ?\xda\xb7? ???????? ?\xd3\xb5???" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_HitReactEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "HitReactEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_HitReactEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_HitReactEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_HitReactEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_HitReactEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_LookAtTargetWhenAttacking_Statics
	{
		struct MyMainCharacter_eventLookAtTargetWhenAttacking_Parms
		{
			float _DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyMainCharacter_LookAtTargetWhenAttacking_Statics::NewProp__DeltaTime = { "_DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyMainCharacter_eventLookAtTargetWhenAttacking_Parms, _DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyMainCharacter_LookAtTargetWhenAttacking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyMainCharacter_LookAtTargetWhenAttacking_Statics::NewProp__DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_LookAtTargetWhenAttacking_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Rotation \xc5\xb8?\xcc\xb8? ?\xda\xb5\xe9\xb7\xaf\n" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "Rotation \xc5\xb8?\xcc\xb8? ?\xda\xb5\xe9\xb7\xaf" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_LookAtTargetWhenAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "LookAtTargetWhenAttacking", nullptr, nullptr, sizeof(MyMainCharacter_eventLookAtTargetWhenAttacking_Parms), Z_Construct_UFunction_AMyMainCharacter_LookAtTargetWhenAttacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_LookAtTargetWhenAttacking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_LookAtTargetWhenAttacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_LookAtTargetWhenAttacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_LookAtTargetWhenAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_LookAtTargetWhenAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_LookattheLockOnTarget_Statics
	{
		struct MyMainCharacter_eventLookattheLockOnTarget_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyMainCharacter_LookattheLockOnTarget_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyMainCharacter_eventLookattheLockOnTarget_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyMainCharacter_LookattheLockOnTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyMainCharacter_LookattheLockOnTarget_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_LookattheLockOnTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_LookattheLockOnTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "LookattheLockOnTarget", nullptr, nullptr, sizeof(MyMainCharacter_eventLookattheLockOnTarget_Parms), Z_Construct_UFunction_AMyMainCharacter_LookattheLockOnTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_LookattheLockOnTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_LookattheLockOnTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_LookattheLockOnTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_LookattheLockOnTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_LookattheLockOnTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_NextComboOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_NextComboOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_NextComboOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "NextComboOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_NextComboOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_NextComboOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_NextComboOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_NextComboOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_NextComboOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_NextComboOn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//?\xde\xba?????, ?????\xcc\xb5????? ???? \xc6\xaf??????\n" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "?\xde\xba?????, ?????\xcc\xb5????? ???? \xc6\xaf??????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_NextComboOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "NextComboOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_NextComboOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_NextComboOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_NextComboOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_NextComboOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_SlowMotion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_SlowMotion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_SlowMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "SlowMotion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_SlowMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_SlowMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_SlowMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_SlowMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyMainCharacter_NoRegister()
	{
		return AMyMainCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyMainCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCameraEndPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCameraEndPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunningSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveUtilityMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveUtilityMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EquippedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedDrone_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EquippedDrone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NowMyDrone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NowMyDrone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_theTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookSpeed_TargetAttacking_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookSpeed_TargetAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidAfterImage_Spawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AvoidAfterImage_Spawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMainCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALifeEntity,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyMainCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyMainCharacter_AvoidDown, "AvoidDown" }, // 3029802249
		{ &Z_Construct_UFunction_AMyMainCharacter_DeadEnd, "DeadEnd" }, // 1246432038
		{ &Z_Construct_UFunction_AMyMainCharacter_EquipWeapon, "EquipWeapon" }, // 3442641567
		{ &Z_Construct_UFunction_AMyMainCharacter_GenAfterImage, "GenAfterImage" }, // 605315125
		{ &Z_Construct_UFunction_AMyMainCharacter_hasTarget, "hasTarget" }, // 4023766651
		{ &Z_Construct_UFunction_AMyMainCharacter_HitReactEnd, "HitReactEnd" }, // 1465613957
		{ &Z_Construct_UFunction_AMyMainCharacter_LookAtTargetWhenAttacking, "LookAtTargetWhenAttacking" }, // 2250715990
		{ &Z_Construct_UFunction_AMyMainCharacter_LookattheLockOnTarget, "LookattheLockOnTarget" }, // 3023245554
		{ &Z_Construct_UFunction_AMyMainCharacter_NextComboOff, "NextComboOff" }, // 2483084321
		{ &Z_Construct_UFunction_AMyMainCharacter_NextComboOn, "NextComboOn" }, // 535158080
		{ &Z_Construct_UFunction_AMyMainCharacter_SlowMotion, "SlowMotion" }, // 3067538861
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyMainCharacter.h" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_FollowCameraEndPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera ?? ??\xc4\xa1 **/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "Follow camera ?? ??\xc4\xa1 *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_FollowCameraEndPoint = { "FollowCameraEndPoint", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, FollowCameraEndPoint), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_FollowCameraEndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_FollowCameraEndPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MovementStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MovementStatus_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MovementStatus = { "MovementStatus", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, MovementStatus), Z_Construct_UEnum_NierProject_EMovementStatus, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MovementStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MovementStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_RunningSpeed_MetaData[] = {
		{ "Category", "Running" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_RunningSpeed = { "RunningSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, RunningSpeed), METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_RunningSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_RunningSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_SprintingSpeed_MetaData[] = {
		{ "Category", "Running" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_SprintingSpeed = { "SprintingSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, SprintingSpeed), METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_SprintingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_SprintingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_CombatMontage_MetaData[] = {
		{ "Category", "Anims" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_CombatMontage = { "CombatMontage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, CombatMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_CombatMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_CombatMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MoveUtilityMontage_MetaData[] = {
		{ "Category", "Anims" },
		{ "Comment", "//GreatSword ???? ??\xc5\xb8??\n" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "GreatSword ???? ??\xc5\xb8??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MoveUtilityMontage = { "MoveUtilityMontage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, MoveUtilityMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MoveUtilityMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MoveUtilityMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MaterialOrigin_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "//???? ???\xcd\xb8???(?\xd8\xbd???)\n" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "???? ???\xcd\xb8???(?\xd8\xbd???)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MaterialOrigin = { "MaterialOrigin", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, MaterialOrigin), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MaterialOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MaterialOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "///////////////// ???? ////////////////////\n" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_EquippedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_EquippedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_weapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// ?????\xd6\xb4? ???? ????\n" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "?????\xd6\xb4? ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, weapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_EquippedDrone_MetaData[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_EquippedDrone = { "EquippedDrone", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, EquippedDrone), Z_Construct_UClass_ADrone_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_EquippedDrone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_EquippedDrone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_NowMyDrone_MetaData[] = {
		{ "Category", "Drone" },
		{ "Comment", "// ?????\xd6\xb4? ???? ????\n" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "?????\xd6\xb4? ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_NowMyDrone = { "NowMyDrone", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, NowMyDrone), Z_Construct_UClass_ADrone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_NowMyDrone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_NowMyDrone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_theTarget_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_theTarget = { "theTarget", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, theTarget), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_theTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_theTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_LookSpeed_TargetAttacking_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_LookSpeed_TargetAttacking = { "LookSpeed_TargetAttacking", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, LookSpeed_TargetAttacking), METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_LookSpeed_TargetAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_LookSpeed_TargetAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_AvoidAfterImage_Spawn_MetaData[] = {
		{ "Category", "AvoidAfterImageBP" },
		{ "Comment", "//?????\xc3\xb0?(??\xc5\xb8\xc5\xb8?? ????)\n" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "?????\xc3\xb0?(??\xc5\xb8\xc5\xb8?? ????)" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_AvoidAfterImage_Spawn = { "AvoidAfterImage_Spawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, AvoidAfterImage_Spawn), Z_Construct_UClass_AAvoidAfterImage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_AvoidAfterImage_Spawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_AvoidAfterImage_Spawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MaterialHit_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "//?\xc7\xb0? ???\xcd\xb8???(?\xd8\xbd???)\n" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
		{ "ToolTip", "?\xc7\xb0? ???\xcd\xb8???(?\xd8\xbd???)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MaterialHit = { "MaterialHit", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, MaterialHit), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MaterialHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MaterialHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyMainCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_FollowCameraEndPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MovementStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MovementStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_RunningSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_SprintingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_CombatMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MoveUtilityMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MaterialOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_EquippedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_EquippedDrone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_NowMyDrone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_theTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_LookSpeed_TargetAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_AvoidAfterImage_Spawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MaterialHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMainCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMainCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyMainCharacter_Statics::ClassParams = {
		&AMyMainCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyMainCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyMainCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyMainCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyMainCharacter, 4041270728);
	template<> NIERPROJECT_API UClass* StaticClass<AMyMainCharacter>()
	{
		return AMyMainCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyMainCharacter(Z_Construct_UClass_AMyMainCharacter, &AMyMainCharacter::StaticClass, TEXT("/Script/NierProject"), TEXT("AMyMainCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMainCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
