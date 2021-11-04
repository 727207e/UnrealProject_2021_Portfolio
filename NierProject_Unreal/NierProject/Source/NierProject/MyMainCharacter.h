// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LifeEntity.h"
#include "MyMainCharacter.generated.h"

UENUM(BlueprintType)
enum class EMovementStatus : uint8 {
	EMS_Normal UMETA(DisplayName = "Normal"),
	EMS_Sprinting UMETA(DisplayName = "Sprinting"),
	EMS_Attacking UMETA(DisplayName = "Attacking"),
	EMS_Dead UMETA(DisplayName = "Dead"),

	EMS_MAX UMETA(DisplayName = "DefaultMax")
};

UCLASS()
class NIERPROJECT_API AMyMainCharacter : public ALifeEntity
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;


public:
	AMyMainCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseLookUpRate;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enums")
	EMovementStatus MovementStatus;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Running")
	float RunningSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Running")
	float SprintingSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Anims")
	class UAnimMontage* CombatMontage;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void MoveRight(float Value);

	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);

	/** Action Keys*/
	void AvoidDown();
	void AvoidUp();
	void RunDown();
	void RunUp();

	void AttackDown();
	void AttackUp();
	void AttackStrongDonw();
	void AttackStrongUp();
	void GunShotDonw();
	void GunShotUp();

	void UsePosionDown();
	void UsePosionUp();
	void UseItemDown();
	void UseItemUp();

	void LockUp();
	void LockDown();

	void MapUp();
	void MapDown();
	/** Action Keys*/


protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	TSubclassOf<class AWeapon> EquippedWeapon;	// ����ִ� ���� ����

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	AWeapon* weapon; // ���� ������� ����

	FORCEINLINE AWeapon* GetEquippedWeapon() { return weapon; }

	UFUNCTION(BlueprintCallable)
	void EquipWeapon();

	void Attack();

	bool NextComboOnOffTrigger; //���� �޺��� �̾�⸦ �Է��ص� ����(On / Off)
	uint8 AttackCount; //��° ���� �ѹ�

	TArray<FName> AttackComboNumber;

	UFUNCTION(BlueprintCallable)
	void NextComboOn();

	UFUNCTION(BlueprintCallable)
	void NextComboOff();



};
