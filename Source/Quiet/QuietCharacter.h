// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Quiet/Structs/CharacterType.h"
#include "Quiet/Structs/ItemType.h"
#include "Components/TimelineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "QuietCharacter.generated.h"

UCLASS()
class QUIET_API AQuietCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AQuietCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Turn(float Rate);
	void LookUp(float Rate);
	void MoveForward(float Value);
	void MoveRight(float Value);
	void SprintButtonPressed();
	void SprintButtonReleased();
	void CrouchButtonPressed();
	void CrouchButtonReleased();
	void InteractionButtonPressed();
	UFUNCTION(BlueprintCallable)
	void BackpackPressed();
	void EscPressed();
	void ReadIntroducePressed();
	void UseItemPressed();
	void UseItemReleased();
	void CancelAimPressed();
	void GameSetPressed();

	UPROPERTY(EditAnywhere)
	UAnimMontage* ElimMontage;

	UPROPERTY(EditAnywhere)
	UAnimMontage* RespawnMontage;

	UFUNCTION()
	virtual void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
private:
	FTimerHandle ElimTimer;

	float ElimDelay = 10.f;

	void ElimTimerFinished();

	FTimerHandle RespawnTimer;

	float RespawnDelay = 6.f;

	void RespawnTimerFinished();
public:	
	//鼠标灵敏度
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float MouseSensitivity=0.4f;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCombatComponent* Combat;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UChildActorComponent* ItemRef;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UInventoryComponent* Inventory;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* TouchComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpotLightComponent* SpotLight_FlashLight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UPointLightComponent* PointLight_ViewItem;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UPointLightComponent* PointLight_LampLight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ToGetLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* Plane;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* ThrowTraceSpline;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UAkComponent* PlayerAK;

	UPROPERTY()
	class AQuietPlayerController* QuietPlayerController;

	UFUNCTION(BlueprintImplementableEvent)
	void ShortHalfHeight();
	UFUNCTION(BlueprintImplementableEvent)
	void LengHalfHeight();
	UFUNCTION(BlueprintImplementableEvent)
	void HeadShake();
	UFUNCTION(BlueprintImplementableEvent)
	void DrewHUD();
	//初始化
	UFUNCTION()
	void Initialize();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void UpdataSlot(int32 Index, UTexture2D* Icon, int32 Amount,EItemType Itemtype, TSubclassOf<class AGameItemActor> Item);

	UFUNCTION(BlueprintCallable)
	void ItemViewEvent(TSubclassOf<class AGameItemActor> ViewingItem);

	UPROPERTY(EditAnywhere)
	class USoundCue* OpenBackPackSound;

	UPROPERTY(EditAnywhere)
	class USoundCue* CloseBackPackSound;

	UPROPERTY(EditAnywhere)
	class USoundCue* DeadSound;

	UPROPERTY(EditDefaultsOnly)
	class UAkAudioEvent* RespawnEvent;

	class UQuietGameInstance* MYGameInstance;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class AAIController_01* AIController_01;
	//UPROPERTY(BlueprintReadOnly, EditAnywhere)
	//TSubclassOf<class AGameItemActor> ViewingItem;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ECharacterType CharacterType;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	ECharacterState CharacterState;

	UPROPERTY(BlueprintReadOnly,EditAnywhere, Category = "LightItem")
	TSubclassOf<class AGameItemActor> FlashLightItem;

	UPROPERTY(BlueprintReadOnly,EditAnywhere, Category = "LightItem")
	TSubclassOf<class AGameItemActor> LampLightItem;

	UPROPERTY(BlueprintReadWrite)
	float FlashLightElectricity=1.f;

	bool IsReadingItemIntroduce = false;

	UPROPERTY(BlueprintReadWrite)
	bool IsLight = false;

	bool IsLightRef = false;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void UseLightPressed();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void ResetFlashLight();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void ShowDeadUMG();

	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	//void ShowRestartUMG();

	UPROPERTY(BlueprintReadWrite)
	bool isHover = false;

	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<class AGameItemActor> HoverItem;

	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<class AGameItemActor> TackingItem;

	bool bIsCrouch = false;

	bool bIsSprint = false;

	UPROPERTY(BlueprintReadWrite)
	bool bIsTP = false;
	
	UFUNCTION(BlueprintCallable)
	void Elim();

	void PlayElimMontage();

	void Respawn();

	void PlayRespawnMontage();

	UPROPERTY(BlueprintReadWrite)
	bool bElimmed = false;

	UPROPERTY(BlueprintReadWrite)
	bool bRespawn = false;

	//红框显示
	UPROPERTY(BlueprintReadWrite)
	int32 GangGangNeed;

	//当前生命值
	UPROPERTY(BlueprintReadWrite)
	int32 CurrentHealth = 100;

	//当前生命数量
	UPROPERTY(BlueprintReadWrite)
	int32 CurrentLife = 3;

	//当游戏时间
	UPROPERTY(BlueprintReadWrite)
	float CurrentGameTime = 0.f;

	//当游戏时间
	UPROPERTY(BlueprintReadWrite)
	float SurviveGameTime;

	//当前勾玉数量
	UPROPERTY(BlueprintReadWrite)
	int32 CurrentJadeNum = 0;

	//需要收集勾玉数量
	UPROPERTY(BlueprintReadWrite)
	int32 NeedJadeNum;

	//已携带卡牌
	UPROPERTY(BlueprintReadWrite)
	TMap<FString,bool> CarryCards;

	UFUNCTION(BlueprintCallable)
	void SetHealth(int32 AddHealth);

	UPROPERTY(EditAnywhere, Category = "Item")
	TSubclassOf<class AItemActorInGame> LightStoneClass;

	UPROPERTY(EditAnywhere, Category = "Item")
	TSubclassOf<class AActor> TPClass;

	UPROPERTY(EditAnywhere, Category = "Item")
	TSubclassOf<class AActor> TimeOutClass;

	UPROPERTY(EditAnywhere, Category = "Item")
	TSubclassOf<class AActor> FirecrackerClass;

	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundCue* S_DropLightStone;

	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundCue* S_EatCake;

	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundCue* S_TP;

	UPROPERTY(EditDefaultsOnly, Category = "MaterialParameterCollection")
	UMaterialParameterCollection* MPC_Dissolve;

	UPROPERTY(VisibleAnywhere, Category = "Timeline")
	UTimelineComponent* TPTimeline;

	FOnTimelineFloat OnTimelineUpdate_TP;
	FOnTimelineEvent OnTimelineFinished_TP;
	FVector TPRandomLocation;
	bool bIsTPOverlerp = false;

	UPROPERTY(EditAnywhere, Category = "Timeline")
	UCurveFloat* TPCurve;

	UFUNCTION()
	void TimelineUpdate_TP(float Value);

	UFUNCTION()
	void TimelineFinished_TP();

	UFUNCTION(BlueprintCallable)
	void ThrowTrace();

	UPROPERTY(BlueprintReadWrite)
	bool bAim = false;

	UPROPERTY(BlueprintReadWrite)
	TArray<USplineMeshComponent*> AllThrowLine;

	UPROPERTY(BlueprintReadWrite)
	USplineMeshComponent* CurrentThrowLine;

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	UStaticMesh* LineMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	UStaticMesh* EndMesh;

	UPROPERTY(VisibleAnywhere, Category = "Timeline")
	UTimelineComponent* AimTimeline;

	FOnTimelineFloat OnTimelineUpdate_Aim;
	FOnTimelineEvent OnTimelineFinished_Aim;

	UPROPERTY(EditAnywhere, Category = "Timeline")
	UCurveFloat* AimCurve;

	UFUNCTION()
	void TimelineUpdate_Aim(float Value);

	UFUNCTION()
	void TimelineFinished_Aim();

	UPROPERTY(BlueprintReadWrite)
	int32 SoulNum = 0;

	UFUNCTION(BlueprintCallable)
	void ChangeSoulNum(int32 Num);

	UPROPERTY(BlueprintReadWrite)
	float Filth = 0;

	UPROPERTY(BlueprintReadWrite)
	float Mania = 0;

	UFUNCTION(BlueprintCallable)
	void ChangeFilth(float Value);

	UFUNCTION(BlueprintCallable)
	void ChangeMania(float Value);

	UPROPERTY(BlueprintReadWrite)
	bool bFrantic = false;
};

