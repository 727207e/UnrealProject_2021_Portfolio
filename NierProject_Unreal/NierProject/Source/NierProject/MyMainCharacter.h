// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "MainCharacterWeaponMovement.h"
#include "NierProject/InterfaceLifeEntity.h"
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
class NIERPROJECT_API AMyMainCharacter : public ALifeEntity, public IInterfaceLifeEntity
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
	class UAnimMontage* MoveUtilityMontage; //ȸ��, �ǰ�, ���� ��Ÿ��

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Controller")
	class AMainPlayerController* MainPlayerController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "NPC")
	class ANPCParentScripts* NPCTarget;	//���� Ȱ��ȭ�� NPC



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

	void InteractDown();
	void InteractUp();
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

	void LookattheLockOnTarget(float DeltaTime);
	void LookattheLockOnTargetOff();


	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	//���� ���͸���(�ؽ���)
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Material")
	class UMaterial* MaterialOrigin;


	///////////////// �������̽� ////////////////////

	virtual void InterfaceTakeDamage(float _Damage, FVector EnemyVec, FVector HitReactVec) override;
	
	virtual int InterfaceGetMyID() override;

	///////////////////////////////////////////




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



	///////////////// ���� ////////////////////	AMainCharacterWeaponMovement���� �����

	UPROPERTY(EditAnywhere, Category = "MainCharacterWeaponMovement")
	class UChildActorComponent* MovementClass;		//����� BP���� ����

	AMainCharacterWeaponMovement* AttackMotion; //���� ��Ÿ�� �� �� ���� ����

	UFUNCTION(BlueprintCallable)
	FORCEINLINE AMainCharacterWeaponMovement* GetAttackMotion() {return AttackMotion; }

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Target")
	class AEnemy* theTarget;

	UFUNCTION(BlueprintCallable)
	bool hasTarget();

	float deltaCount = 0.f; //ĳ���� Attack Rotation �ʱ�ȭ �ð�
	FTimerHandle waitHandle; //Rotation Ÿ�̸� �ڵ鷯

	UAnimInstance* AnimInstance;

	int AnimAttackPose;
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

	FTimerHandle changeColorTimerHandle;
	void HitReact_ChangeColor();	//��½��

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LockOnTargetCheck")
	class UWidgetComponent* LockOnTargetCheckComponent;	//���� ���� ��� üũ


	///////////////////////////////////////////


	///////////////// Sound ////////////////////

	///////////////////////////////////////////
};
