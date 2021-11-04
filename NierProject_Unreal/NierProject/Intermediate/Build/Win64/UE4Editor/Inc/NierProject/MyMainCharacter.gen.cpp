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
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NIERPROJECT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
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
	uint32 Get_Z_Construct_UEnum_NierProject_EMovementStatus_Hash() { return 2499456585U; }
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
				{ "EMovementStatus::EMS_Dead", (int64)EMovementStatus::EMS_Dead },
				{ "EMovementStatus::EMS_MAX", (int64)EMovementStatus::EMS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMS_Attacking.DisplayName", "Attacking" },
				{ "EMS_Attacking.Name", "EMovementStatus::EMS_Attacking" },
				{ "EMS_Dead.DisplayName", "Dead" },
				{ "EMS_Dead.Name", "EMovementStatus::EMS_Dead" },
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
	void AMyMainCharacter::StaticRegisterNativesAMyMainCharacter()
	{
		UClass* Class = AMyMainCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquipWeapon", &AMyMainCharacter::execEquipWeapon },
			{ "NextComboOff", &AMyMainCharacter::execNextComboOff },
			{ "NextComboOn", &AMyMainCharacter::execNextComboOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "ModuleRelativePath", "MyMainCharacter.h" },
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EquippedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMainCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALifeEntity,
		(UObject* (*)())Z_Construct_UPackage__Script_NierProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyMainCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyMainCharacter_EquipWeapon, "EquipWeapon" }, // 3442641567
		{ &Z_Construct_UFunction_AMyMainCharacter_NextComboOff, "NextComboOff" }, // 2483084321
		{ &Z_Construct_UFunction_AMyMainCharacter_NextComboOn, "NextComboOn" }, // 2202226550
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "Category", "Weapon" },
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyMainCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MovementStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_MovementStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_RunningSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_SprintingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_CombatMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_EquippedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_weapon,
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
	IMPLEMENT_CLASS(AMyMainCharacter, 1201758546);
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
