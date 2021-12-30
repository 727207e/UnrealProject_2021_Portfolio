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
	class UAnimMontage* CombatMontage; //GreatSword 공격 몽타주

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Anims")
	class UAnimMontage* MoveUtilityMontage; //회피, 피격, 죽음 몽타주

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

	//현재 메터리얼(텍스쳐)
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Material")
	class UMaterial* MaterialOrigin;



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



	///////////////// 공격 ////////////////////

	void Attack(bool bIsStrongAttack, float _ComboNumber); //true->강공격, false->약공격  / -1 : 없음, 0 : 0번 ...

	bool NextComboOnOffTrigger; //다음 콤보를 이어가기를 입력해둔 상태(On / Off)
	uint8 AttackCount; //번째 공격 넘버

	TArray<FName> AttackComboNumber;	//기본공격
	TArray<FName> AttackStrongComboNumber; //강공격
	TArray<FName> SpecialAttackNumber;	//콤보공격, 슬라이드공격 등의 특수공격


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

	float deltaCount = 0.f; //캐릭터 Attack Rotation 초기화 시간
	FTimerHandle waitHandle; //Rotation 타이머 핸들러

	UFUNCTION(BlueprintCallable)
	void LookAtTargetWhenAttacking(float _DeltaTime); // 공격하는 순간 적을 처다봄

	FORCEINLINE AEnemy* GettheTarget() { return theTarget; }
	FORCEINLINE void SettheTarget(AEnemy* enemy) { theTarget = enemy; }

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attack")
	float LookSpeed_TargetAttacking;

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

};
