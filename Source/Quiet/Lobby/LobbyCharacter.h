// 最终解释权，著作权归Vuihoti所有

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Quiet/Structs/CharacterType.h"
#include "LobbyCharacter.generated.h"

UCLASS()
class QUIET_API ALobbyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ALobbyCharacter();

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
	void GameSetPressed();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	//鼠标灵敏度
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float MouseSensitivity = 0.4f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ECharacterType CharacterType;

	UPROPERTY()
	class ALobbyPlayerController* LobbyPlayerController;

	bool bIsCrouch = false;

	class UQuietGameInstance* MYGameInstance;
};
