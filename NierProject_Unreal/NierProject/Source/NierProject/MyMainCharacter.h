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
	EMS_Avoid UMETA(DisplayName = "Avoid"),
	EMS_Hit UMETA(DisplayName = "Hit"),
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

	/** Follow camera �� ��ġ **/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* FollowCameraEndPoint;



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
	class UAnimMontage* CombatMontage; //GreatSword ���� ��Ÿ��

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Anims")
	class UAnimMontage* MoveUtilityMontage; //ȸ��, �ǰ�, ���� ��Ÿ��

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void MoveRight(float Value);

	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);

	void Turn(float Value);
	void LookUp(float Value);

	/** Action Keys*/
	UFUNCTION(BlueprintCallable)
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
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void LookattheLockOnTarget(float DeltaTime);
	void LookattheLockOnTargetOff();

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	//���� ���͸���(�ؽ���)
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Material")
	class UMaterial* MaterialOrigin;



	///////////////// ���� ////////////////////

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	TSubclassOf<class AWeapon> EquippedWeapon;	// ����ִ� ���� ����

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	AWeapon* weapon; // ���� ������� ����

	FORCEINLINE AWeapon* GetEquippedWeapon() { return weapon; }

	UFUNCTION(BlueprintCallable)
	void EquipWeapon();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Drone")
	TSubclassOf<class ADrone> EquippedDrone;	// ����ִ� ��� ����

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Drone")
	ADrone* NowMyDrone;	// ���� ������� ���

	void EquipDrone();
	///////////////////////////////////////////



	///////////////// ���� ////////////////////

	void Attack(bool bIsStrongAttack, float _ComboNumber); //true->������, false->�����  / -1 : ����, 0 : 0�� ...

	bool NextComboOnOffTrigger; //���� �޺��� �̾�⸦ �Է��ص� ����(On / Off)
	uint8 AttackCount; //��° ���� �ѹ�

	TArray<FName> AttackComboNumber;	//�⺻����
	TArray<FName> AttackStrongComboNumber; //������
	TArray<FName> SpecialAttackNumber;	//�޺�����, �����̵���� ���� Ư������


	UFUNCTION(BlueprintCallable)
	void NextComboOn();

	UFUNCTION(BlueprintCallable)
	void NextComboOff();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Target")
	class AEnemy* theTarget;

	UFUNCTION(BlueprintCallable)
	bool hasTarget();

	float LookAtDeltaCount = 0.f;
	float LookAtDeltaCountLimit = 0.f;

	float deltaCount = 0.f; //ĳ���� Attack Rotation �ʱ�ȭ �ð�
	FTimerHandle waitHandle; //Rotation Ÿ�̸� �ڵ鷯

	UFUNCTION(BlueprintCallable)
	void LookAtTargetWhenAttacking(float _DeltaTime); // �����ϴ� ���� ���� ó�ٺ�

	FORCEINLINE AEnemy* GettheTarget() { return theTarget; }
	FORCEINLINE void SettheTarget(AEnemy* enemy) { theTarget = enemy; }

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attack")
	float LookSpeed_TargetAttacking;

	///////////////////////////////////////////



	///////////////// ȸ�� ////////////////////
	FTimerHandle SlowTimeFloatDelayHandle;
	float SlowTime = 1;	//���� �ð�
	float TimeCheck = 0; //��Ÿ Ÿ��
	float TotalTimeCheck = 0; //�����ð�(��ŸŸ�� ����)
	
	UPROPERTY(EditAnywhere, Category = "AvoidAfterImageBP")
	TSubclassOf<class AAvoidAfterImage> AvoidAfterImage_Spawn;

	UFUNCTION(BlueprintCallable)
	void SlowMotion();

	UFUNCTION(BlueprintCallable)
	void GenAfterImage();
	///////////////////////////////////////////



	///////////////// �ǰ� ////////////////////
	float goBackTimeCheck;
	float goBackTotalTimeCheck;
	FTimerHandle goBackReact;

	virtual void TaketheDamage(float _Damage) override;

	//UFUNCTION(BlueprintCallable)
	void HitReact_goBack(FVector EnemyVec);	//�ڷ� �ް����� 

	FVector EnemyVecToNormal;
	bool NoHitStance = false; // ��������
	float NoHitStanceTime = 0.5f; //���� ���� �ð�
	
	float HitReactSpeed = 200.f; //�ǰݽ� �ڷ� �������� �ӵ���

	UFUNCTION(BlueprintCallable)
	void HitReactEnd();

	//�ǰ� ���͸���(�ؽ���)
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Material")
	UMaterial* MaterialHit;

	virtual void Die() override;

	UFUNCTION(BlueprintCallable)
	void DeadEnd();
	///////////////////////////////////////////



	///////////////// HUD ////////////////////

};
