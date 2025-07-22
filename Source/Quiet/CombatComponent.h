// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Quiet/QuietCharacter.h"
#include "CombatComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class QUIET_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCombatComponent();
	friend class AQuietCharacter;

	//最大行走速度
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float WalkSpeed = 250.f;

	//疾跑速度
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SprintSpeed = 1000.f;

	//蹲伏速度
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CrouchSpeed = 100.f;

	//蹲伏半高
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CrouchHalfHeight = 44.f;

	//最大耐力
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxStamina = 100.f;

	//当前耐力
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CurrentStamina = 100.f;

	//最小耐力
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MinStamina = 0.f;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//初始化
	UFUNCTION()
	void Initialize(AQuietCharacter* Character);
	UPROPERTY()
	class AQuietCharacter* CharacterRef;


private:
	
	FString FUName = "SprintTimer";


	//开始疾跑
	UFUNCTION()
	void StartSprint();

	//停止疾跑
	UFUNCTION()
	void StopSprint();

	//疾跑计时
	UFUNCTION(DisplayName = "SprintTimer")
	void SprintTimer();

	//停止疾跑
	UFUNCTION()
	void StartRegenerate();

	//开始蹲伏
	UFUNCTION()
	void StartCrouch();

	//结束蹲伏
	UFUNCTION()
	void StopCrouch();

	bool isCrouch = false;

	//回复耐力计时
	UFUNCTION(DisplayName = "RegenerateStamina")
	void RegenerateStamina();
};
