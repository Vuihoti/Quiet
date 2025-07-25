// 最终解释权，著作权归Vuihoti所有


#include "LobbyCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Quiet/PlayerController/LobbyPlayerController.h"
#include "Quiet/QuietGameInstance.h"
// Sets default values
ALobbyCharacter::ALobbyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetMesh(), "head");
	CameraBoom->TargetArmLength = 0.f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = true; // Camera does not rotate relative to arm

	if (GetWorld()) {
		MYGameInstance = Cast<UQuietGameInstance>(GetWorld()->GetGameInstance());
	}

	if (MYGameInstance != nullptr)
	{
		MYGameInstance->LodingLocalArchive();
	}
}

// Called when the game starts or when spawned
void ALobbyCharacter::BeginPlay()
{
	Super::BeginPlay();
	CharacterType = ECharacterType::ECT_Free;
	LobbyPlayerController = LobbyPlayerController == nullptr ? Cast<ALobbyPlayerController>(Controller) : LobbyPlayerController;
}

// Called every frame
void ALobbyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALobbyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ALobbyCharacter::SprintButtonPressed);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ALobbyCharacter::SprintButtonReleased);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ALobbyCharacter::CrouchButtonPressed);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &ALobbyCharacter::CrouchButtonReleased);
	PlayerInputComponent->BindAction("Interaction", IE_Pressed, this, &ALobbyCharacter::InteractionButtonPressed);
	PlayerInputComponent->BindAction("GameSet", IE_Pressed, this, &ALobbyCharacter::GameSetPressed).bExecuteWhenPaused = true;

	PlayerInputComponent->BindAxis("MoveForward", this, &ALobbyCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ALobbyCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ALobbyCharacter::LookUp);
	PlayerInputComponent->BindAxis("Turn", this, &ALobbyCharacter::Turn);
}

void ALobbyCharacter::Turn(float Rate)
{
	AddControllerYawInput(Rate * MouseSensitivity);
}

void ALobbyCharacter::LookUp(float Rate)
{
	AddControllerPitchInput(Rate * MouseSensitivity);
}

void ALobbyCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X));
		AddMovementInput(Direction, Value);
	}
}

void ALobbyCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y));
		AddMovementInput(Direction, Value);
	}
}

void ALobbyCharacter::SprintButtonPressed()
{
	GetCharacterMovement()->MaxWalkSpeed = 1000.f;
}

void ALobbyCharacter::SprintButtonReleased()
{
	GetCharacterMovement()->MaxWalkSpeed = 250.f;
}

void ALobbyCharacter::CrouchButtonPressed()
{
	GetCharacterMovement()->MaxWalkSpeed = 100.f;
	bIsCrouch = true;
}

void ALobbyCharacter::CrouchButtonReleased()
{
	GetCharacterMovement()->MaxWalkSpeed = 250.f;
	bIsCrouch = false;
}

void ALobbyCharacter::InteractionButtonPressed()
{
}

void ALobbyCharacter::GameSetPressed()
{
	if (CharacterType == ECharacterType::ECT_Free) {
		LobbyPlayerController->SetHUDSetting();
	}
	else if (CharacterType == ECharacterType::ECT_GameSetting) {
		LobbyPlayerController->SetHUDGameSet();
		CharacterType = ECharacterType::ECT_Free;
	}
	else if (CharacterType == ECharacterType::ECT_PickLevel) {
		LobbyPlayerController->ShowHUDLevel(false);
		CharacterType = ECharacterType::ECT_Free;
	}
	else if (CharacterType == ECharacterType::ECT_ChangeCard) {
		LobbyPlayerController->ShowHUDCard(false);
		CharacterType = ECharacterType::ECT_Free;
	}
}