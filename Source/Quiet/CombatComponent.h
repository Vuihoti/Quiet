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

	//��������ٶ�
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float WalkSpeed = 250.f;

	//�����ٶ�
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SprintSpeed = 1000.f;

	//�׷��ٶ�
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CrouchSpeed = 100.f;

	//�׷����
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CrouchHalfHeight = 44.f;

	//�������
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxStamina = 100.f;

	//��ǰ����
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CurrentStamina = 100.f;

	//��С����
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MinStamina = 0.f;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//��ʼ��
	UFUNCTION()
	void Initialize(AQuietCharacter* Character);
	UPROPERTY()
	class AQuietCharacter* CharacterRef;


private:
	
	FString FUName = "SprintTimer";


	//��ʼ����
	UFUNCTION()
	void StartSprint();

	//ֹͣ����
	UFUNCTION()
	void StopSprint();

	//���ܼ�ʱ
	UFUNCTION(DisplayName = "SprintTimer")
	void SprintTimer();

	//ֹͣ����
	UFUNCTION()
	void StartRegenerate();

	//��ʼ�׷�
	UFUNCTION()
	void StartCrouch();

	//�����׷�
	UFUNCTION()
	void StopCrouch();

	bool isCrouch = false;

	//�ظ�������ʱ
	UFUNCTION(DisplayName = "RegenerateStamina")
	void RegenerateStamina();
};
