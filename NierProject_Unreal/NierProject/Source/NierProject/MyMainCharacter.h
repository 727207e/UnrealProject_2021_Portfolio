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

	/** Follow camera 끝 위치 **/
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
	class UAnimMontage* MoveUtilityMontage; //회피, 피격, 죽음 몽타주

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Controller")
	class AMainPlayerController* MainPlayerController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "NPC")
	class ANPCParentScripts* NPCTarget;	//현재 활성화된 NPC



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

	//현재 메터리얼(텍스쳐)
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Material")
	class UMaterial* MaterialOrigin;


	///////////////// 인터페이스 ////////////////////

	virtual void InterfaceTakeDamage(float _Damage, FVector EnemyVec, FVector HitReactVec) override;
	
	virtual int InterfaceGetMyID() override;

	///////////////////////////////////////////




	///////////////// 무기 ////////////////////

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	TSubclassOf<class AWeapon> EquippedWeapon;	// 들고있는 무기 정보

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	AWeapon* weapon; // 현재 사용중인 무기

	FORCEINLINE AWeapon* GetEquippedWeapon() { return weapon; }

	UFUNCTION(BlueprintCallable)
	void EquipWeapon();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Drone")
	TSubclassOf<class ADrone> EquippedDrone;	// 들고있는 드론 정보

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Drone")
	ADrone* NowMyDrone;	// 현재 사용중인 드론

	void EquipDrone();
	///////////////////////////////////////////



	///////////////// 공격 ////////////////////	AMainCharacterWeaponMovement에서 진행됨

	UPROPERTY(EditAnywhere, Category = "MainCharacterWeaponMovement")
	class UChildActorComponent* MovementClass;		//대상은 BP에서 지정

	AMainCharacterWeaponMovement* AttackMotion; //공격 몽타주 및 각 정보 저장

	UFUNCTION(BlueprintCallable)
	FORCEINLINE AMainCharacterWeaponMovement* GetAttackMotion() {return AttackMotion; }

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Target")
	class AEnemy* theTarget;

	UFUNCTION(BlueprintCallable)
	bool hasTarget();

	float deltaCount = 0.f; //캐릭터 Attack Rotation 초기화 시간
	FTimerHandle waitHandle; //Rotation 타이머 핸들러

	UAnimInstance* AnimInstance;

	int AnimAttackPose;
	///////////////////////////////////////////



	///////////////// 회피 ////////////////////
	FTimerHandle SlowTimeFloatDelayHandle;
	float SlowTime = 1;	//월드 시간
	float TimeCheck = 0; //델타 타임
	float TotalTimeCheck = 0; //지난시간(델타타임 누적)
	
	UPROPERTY(EditAnywhere, Category = "AvoidAfterImageBP")
	TSubclassOf<class AAvoidAfterImage> AvoidAfterImage_Spawn;

	UFUNCTION(BlueprintCallable)
	void SlowMotion();

	UFUNCTION(BlueprintCallable)
	void GenAfterImage();
	///////////////////////////////////////////



	///////////////// 피격 ////////////////////
	float goBackTimeCheck;
	float goBackTotalTimeCheck;
	FTimerHandle goBackReact;

	virtual void TaketheDamage(float _Damage) override;

	//UFUNCTION(BlueprintCallable)
	void HitReact_goBack(FVector EnemyVec);	//뒤로 뒷걸음질 

	FTimerHandle changeColorTimerHandle;
	void HitReact_ChangeColor();	//번쩍임

	FVector EnemyVecToNormal;
	bool NoHitStance = false; // 무적판정
	float NoHitStanceTime = 0.5f; //무적 판정 시간
	
	float HitReactSpeed = 200.f; //피격시 뒤로 물러날때 속도값

	UFUNCTION(BlueprintCallable)
	void HitReactEnd();

	//피격 메터리얼(텍스쳐)
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Material")
	UMaterial* MaterialHit;

	virtual void Die() override;

	UFUNCTION(BlueprintCallable)
	void DeadEnd();
	///////////////////////////////////////////



	///////////////// HUD ////////////////////

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LockOnTargetCheck")
	class UWidgetComponent* LockOnTargetCheckComponent;	//락온 상태 대상 체크


	///////////////////////////////////////////


	///////////////// Sound ////////////////////

	///////////////////////////////////////////
};
