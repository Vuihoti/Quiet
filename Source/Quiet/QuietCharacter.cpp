// Fill out your copyright notice in the Description page of Project Settings.


#include "QuietCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Quiet/PlayerController/QuietPlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Quiet/CombatComponent.h"
#include "Quiet/Component/InventoryComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/GamePlayStatics.h"
#include "Sound/SoundCue.h"
#include "Quiet/Actor/GameItemActor.h"
#include "Quiet/Actor/ItemActorInGame.h"
#include "Quiet/HUD/BackpackOverlay.h"
#include "Quiet/HUD/MyHUD.h"
#include "Quiet/HUD/MainMenuOverlay.h"
#include "Quiet/HUD/InventorySlotOverlay.h"
#include "Quiet/QuietGameModeBase.h"
#include "TimerManager.h"
#include "GameFramework/PlayerStart.h"
#include "Quiet/AI/AIController_01.h"
#include "Quiet/AI/AICharacter_01.h"
#include "Components/Widget.h"
#include "Quiet/QuietGameInstance.h"
//#include "Kismet2/BlueprintEditorUtils.h"
#include "NavigationSystem.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Kismet/KismetArrayLibrary.h"
#include "Components/ActorComponent.h"
#include "Components/SceneComponent.h"
#include "AkComponent.h"
#include "AkAudio/Classes/AkGameplayStatics.h"
#include "AkAudio/Public/AkAudioDevice.h" 

// Sets default values
AQuietCharacter::AQuietCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetMesh(),"head");
	CameraBoom->TargetArmLength = 0.f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = true; // Camera does not rotate relative to arm
	
	Combat = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));
	Inventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponentRef"));
	ItemRef = CreateDefaultSubobject<UChildActorComponent>(TEXT("ItemRef"));
	ItemRef->SetupAttachment(FollowCamera);

	PointLight_LampLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightLampLight"));
	PointLight_LampLight->SetupAttachment(GetMesh());
	SpotLight_FlashLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightFlashLight"));
	SpotLight_FlashLight->SetupAttachment(CameraBoom);
	PointLight_ViewItem = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightViewItem"));
	PointLight_ViewItem->SetupAttachment(FollowCamera);

	ToGetLocation = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ToGetLocation"));
	ToGetLocation->SetupAttachment(RootComponent);

	Plane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane"));
	Plane->SetupAttachment(FollowCamera);

	TouchComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Touch"));
	TouchComponent->SetupAttachment(RootComponent);
	TouchComponent->OnComponentBeginOverlap.AddDynamic(this, &AQuietCharacter::OnSphereOverlap);

	ThrowTraceSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ThrowTraceSpline"));

	PrimaryActorTick.bCanEverTick = true;

	TPTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("TPTimeline"));
	OnTimelineUpdate_TP.BindUFunction(this, FName("TimelineUpdate_TP"));
	OnTimelineFinished_TP.BindUFunction(this, FName("TimelineFinished_TP"));
	
	PlayerAK = CreateDefaultSubobject<UAkComponent>(TEXT("PlayerAK"));

	AimTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("AimTimeline"));
	OnTimelineUpdate_Aim.BindUFunction(this, FName("TimelineUpdate_Aim"));
	OnTimelineFinished_Aim.BindUFunction(this, FName("TimelineFinished_Aim"));
	if (GetWorld()) {
		MYGameInstance = Cast<UQuietGameInstance>(GetWorld()->GetGameInstance());
	}
	
	if (MYGameInstance != nullptr)
	{
		MYGameInstance->LodingLocalArchive();
		for (int i = 0; i < MYGameInstance->InGamePlayerSave.CarryCards.Num(); i++) {
			CarryCards.Add(MYGameInstance->InGamePlayerSave.CarryCards[i], true);
		}
	}
	
}

// Called when the game starts or when spawned
void AQuietCharacter::BeginPlay()
{
	Super::BeginPlay();
	Initialize();
}

// Called every frame
void AQuietCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CharacterType != ECharacterType::ECT_Free || GetVelocity().Size() != 0) {
		bIsTP = false;
	}
	if (bAim) {
		ThrowTrace();
	}
}

// Called to bind functionality to input
void AQuietCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AQuietCharacter::SprintButtonPressed);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AQuietCharacter::SprintButtonReleased);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AQuietCharacter::CrouchButtonPressed);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AQuietCharacter::CrouchButtonReleased);
	PlayerInputComponent->BindAction("Interaction", IE_Pressed, this, &AQuietCharacter::InteractionButtonPressed);
	PlayerInputComponent->BindAction("Backpack", IE_Pressed, this, &AQuietCharacter::BackpackPressed);
	PlayerInputComponent->BindAction("EscViewItem", IE_Pressed, this, &AQuietCharacter::EscPressed);
	PlayerInputComponent->BindAction("ReadIntroduce", IE_Pressed, this, &AQuietCharacter::ReadIntroducePressed);
	PlayerInputComponent->BindAction("UseItem", IE_Pressed, this, &AQuietCharacter::UseItemPressed);
	PlayerInputComponent->BindAction("UseItem", IE_Released, this, &AQuietCharacter::UseItemReleased);
	PlayerInputComponent->BindAction("CancelAim", IE_Pressed, this, &AQuietCharacter::CancelAimPressed);
	PlayerInputComponent->BindAction("GameSet", IE_Pressed, this, &AQuietCharacter::GameSetPressed).bExecuteWhenPaused = true;


	PlayerInputComponent->BindAxis("MoveForward", this, &AQuietCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AQuietCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &AQuietCharacter::LookUp);
	PlayerInputComponent->BindAxis("Turn", this, &AQuietCharacter::Turn);
}

void AQuietCharacter::Turn(float Rate)
{
	switch (CharacterType)
	{
	case ECharacterType::ECT_Free:
		AddControllerYawInput(Rate * MouseSensitivity);
		break;
	case ECharacterType::ECT_Interface:
		FRotator A = ItemRef->GetRelativeRotation();
		FRotator B = FRotator(0,( Rate*(-1) )* MouseSensitivity, 0);
		ItemRef->SetRelativeRotation(UKismetMathLibrary::ComposeRotators(A, B));
		break;
	}
}

void AQuietCharacter::LookUp(float Rate)
{
	switch (CharacterType)
	{
	case ECharacterType::ECT_Free:
		AddControllerPitchInput(Rate * MouseSensitivity);
		break;
	case ECharacterType::ECT_Interface:
		FRotator A = ItemRef->GetRelativeRotation();
		FRotator B = FRotator(Rate * MouseSensitivity, 0, 0);
		ItemRef->SetRelativeRotation(UKismetMathLibrary::ComposeRotators(A, B));
		break;
	}
}

void AQuietCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f)&& CharacterType==ECharacterType::ECT_Free)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X));
		AddMovementInput(Direction, Value);
		if (!bIsCrouch) {
			if (bIsSprint) {
				this->MakeNoise(0.5f, this, this->GetActorLocation(),2400.f);
			}
			else {
				this->MakeNoise(0.25f, this, this->GetActorLocation(), 1600.f);
			}
		}
	}
}

void AQuietCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f)&&CharacterType == ECharacterType::ECT_Free)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y));
		AddMovementInput(Direction, Value);
		if (!bIsCrouch) {
			if (bIsSprint) {
				this->MakeNoise(0.5f, this, this->GetActorLocation(), 2400.f);
			}
			else {
				this->MakeNoise(0.25f, this, this->GetActorLocation(), 1600.f);
			}
		}
	}
}

void AQuietCharacter::SprintButtonPressed()
{
	if (Combat) {
		Combat->StartSprint();
	}
}

void AQuietCharacter::SprintButtonReleased()
{
	if (Combat) {
		Combat->StopSprint();
	}
}

void AQuietCharacter::CrouchButtonPressed()
{
	if (Combat) {
		Combat->StartCrouch();
	}
}

void AQuietCharacter::CrouchButtonReleased()
{
	if (Combat) {
		Combat->StopCrouch();
	}
}

void AQuietCharacter::InteractionButtonPressed()
{
}

void AQuietCharacter::BackpackPressed()
{
	UseItemReleased();
	if (CharacterType == ECharacterType::ECT_Free|| CharacterType == ECharacterType::ECT_Backpack) {
		QuietPlayerController = QuietPlayerController == nullptr ? Cast<AQuietPlayerController>(Controller) : QuietPlayerController;
		if (QuietPlayerController) {
			if (QuietPlayerController->isBackpack) {
				GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
				QuietPlayerController->ShowMainMenu(true);
				UGameplayStatics::PlaySound2D(this, CloseBackPackSound);
				if (IsLightRef) {
					UseLightPressed();
					IsLightRef = false;
				}
				CharacterType = ECharacterType::ECT_Free;
			}
			else {
				CharacterType = ECharacterType::ECT_Backpack;
				GetCharacterMovement()->DisableMovement();
				UGameplayStatics::PlaySound2D(this, OpenBackPackSound);
				QuietPlayerController->ShowMainMenu(false);
				if (IsLight) {
					UseLightPressed();
					IsLightRef = true;
				}
			}
			QuietPlayerController->SetHUDBackpack();
		}
	}
}

void AQuietCharacter::ReadIntroducePressed()
{
	if (CharacterType == ECharacterType::ECT_Interface) {
		QuietPlayerController = QuietPlayerController == nullptr ? Cast<AQuietPlayerController>(Controller) : QuietPlayerController;
		if (QuietPlayerController) {
			if (!IsReadingItemIntroduce) {
				IsReadingItemIntroduce = true;
			}
			else {
				IsReadingItemIntroduce = false;
			}
			QuietPlayerController->ShowItemIntroduce(IsReadingItemIntroduce);
			QuietPlayerController->SetPressETip(IsReadingItemIntroduce);
		}
	}
}

void AQuietCharacter::UseItemPressed()
{
	if (QuietPlayerController)
	{
		if (TackingItem!=nullptr && CharacterType == ECharacterType::ECT_Free && TackingItem.GetDefaultObject()->Itemdata.ItemID != 0) {
			switch (TackingItem.GetDefaultObject()->Itemdata.ItemID)
			{
			case 1:
				if (QuietPlayerController->QuietHUD->MainMenuOverlay->LightItemSlot->Item == FlashLightItem && FlashLightElectricity <= 0.3f) {
					FlashLightElectricity = 1.f;
					ResetFlashLight();
					Inventory->DeleteItem(TackingItem);
				}
				else {
					UKismetSystemLibrary::PrintString(this, "Can not use this");
				}
				break;
			case 3:
				if (GetWorld())
				{
					USoundBase* Sound = Cast<USoundBase>(S_DropLightStone);
					UGameplayStatics::PlaySound2D(GetWorld(), Sound);
					AItemActorInGame* LightStoneRef = GetWorld()->SpawnActor<AItemActorInGame>(LightStoneClass,FTransform(ToGetLocation->GetComponentLocation()));
					LightStoneRef->Amount = 1;
					Inventory->DeleteItem(TackingItem);
				}
				break;
			case 4:
				if (GetWorld())
				{
					bIsTP = true;
					GetWorld()->SpawnActor<AActor>(TPClass, FTransform(GetActorLocation()));
				}
				break;
			case 5:
				if (GetWorld())
				{
					USoundBase* Sound = Cast<USoundBase>(S_EatCake);
					UGameplayStatics::PlaySound2D(GetWorld(), Sound);
					SetHealth(25);
					Inventory->DeleteItem(TackingItem);
				}
				break;
			case 6:
				if (GetWorld())
				{
					UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());

					if (!NavSys)
					{
						UE_LOG(LogTemp, Warning, TEXT("NavigationSystemV1 not found!"));
						return;
					}

					FVector Origin = GetActorLocation(); // 替换为你的原点位置
					float Radius = 10000.0f; // 设置搜索半径

					// 调用函数获取随机位置
					bool bSuccess = NavSys->K2_GetRandomLocationInNavigableRadius(
						GetWorld(),
						Origin,
						TPRandomLocation,
						Radius
					);

					if (bSuccess)
					{
						UGameplayStatics::PlaySound2D(this, S_TP);
						Plane->SetVisibility(true,false);
						TPTimeline->PlayFromStart();
					}
					else
					{
						UE_LOG(LogTemp, Warning, TEXT("未找到可行走位置！"));
					}
				}
				break;
			case 7:
				if (GetWorld())
				{
					if (UGameplayStatics::GetActorOfClass(GetWorld(), TimeOutClass)==nullptr) {
						GetWorld()->SpawnActor<AActor>(TimeOutClass, FTransform(GetActorLocation()));
						Inventory->DeleteItem(TackingItem);
					}
				}
				break;
			case 8:
				bAim = true;
				AimTimeline->Play();
				break;
			default:
				break;
			}
		}
	}
}

void AQuietCharacter::UseItemReleased()
{
	if (QuietPlayerController)
	{
		if (TackingItem != nullptr && CharacterType == ECharacterType::ECT_Free && TackingItem.GetDefaultObject()->Itemdata.ItemID != 0) {
			switch (TackingItem.GetDefaultObject()->Itemdata.ItemID)
			{
			case 4:
				if (GetWorld())
				{
					bIsTP = false;
				}
				break;
			case 8:
				if (bAim) {
					bAim = false;
					FActorSpawnParameters SpawnParams;
					SpawnParams.Owner = this;
					GetWorld()->SpawnActor<AActor>(FirecrackerClass, FollowCamera->K2_GetComponentLocation(), GetActorRotation(), SpawnParams);
					for (int i = 0; i < AllThrowLine.Num(); i++) {
						AllThrowLine[i]->DestroyComponent();
					}
					AllThrowLine.Empty();
					ThrowTraceSpline->ClearSplinePoints();
					AimTimeline->Reverse();
					Inventory->DeleteItem(TackingItem);
				}
				break;
			default:
				break;
			}
		}
	}
}

void AQuietCharacter::CancelAimPressed()
{
	if (bAim) {
		bAim = false;
		for (int i = 0; i < AllThrowLine.Num(); i++) {
			AllThrowLine[i]->DestroyComponent();
		}
		AllThrowLine.Empty();
		ThrowTraceSpline->ClearSplinePoints();
		AimTimeline->Reverse();
	}
}

void AQuietCharacter::GameSetPressed()
{
	if (CharacterType == ECharacterType::ECT_Free) {
		QuietPlayerController->SetHUDSetting();
	}
	else if (CharacterType == ECharacterType::ECT_GameSetting) {
		QuietPlayerController->SetHUDGameSet();
		CharacterType = ECharacterType::ECT_Free;
	}
	else if (CharacterType == ECharacterType::ECT_OnShop) {
		QuietPlayerController->ShowHUDShop(false);
		CharacterType = ECharacterType::ECT_Free;
	}
}

void AQuietCharacter::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AQuietGameModeBase* QuietGameModeBase = GetWorld()->GetAuthGameMode<AQuietGameModeBase>();
	AAICharacter_01 * AICH = Cast<AAICharacter_01>(OtherActor);
	if (AICH == nullptr) {
		return;
	}
	AAIController_01* AICO = Cast<AAIController_01>(AICH->GetController());
	if (QuietGameModeBase&& OtherActor->ActorHasTag("Prowler")&& AICO->bEnable) {
		QuietPlayerController = QuietPlayerController == nullptr ? Cast<AQuietPlayerController>(Controller) : QuietPlayerController;
		Elim();
		
	}
}



//void AQuietCharacter::UseLightPressed()
//{
//	if (CharacterType == ECharacterType::ECT_Free) {
//		if (LampLightItem.GetDefaultObject()->Itemdata.ItemName == "Lamp") {
//			if (IsLight) {
//				PointLight_LampLight->SetVisibility(false);
//				IsLight = false;
//			}
//			else {
//				PointLight_LampLight->SetVisibility(true);
//				IsLight = true;
//			}
//		}
//		else {
//			if (IsLight) {
//				SpotLight_FlashLight->SetVisibility(false);
//				IsLight = false;
//			}
//			else {
//				SpotLight_FlashLight->SetVisibility(true);
//				IsLight = true;
//			}
//		}
//	}
//}
void AQuietCharacter::EscPressed()
{
	if (CharacterType == ECharacterType::ECT_Interface) {
		QuietPlayerController = QuietPlayerController == nullptr ? Cast<AQuietPlayerController>(Controller) : QuietPlayerController;
		if (QuietPlayerController) {
			QuietPlayerController->ShowItemIntroduce(false);
		}
	}
	
}

void AQuietCharacter::Initialize()
{
	if (TPCurve && TPTimeline)
	{
		TPTimeline->AddInterpFloat(TPCurve, OnTimelineUpdate_TP);
		TPTimeline->SetTimelineFinishedFunc(OnTimelineFinished_TP);
		TPTimeline->SetLooping(false);
		TPTimeline->SetAutoActivate(false);
		TPTimeline->SetPlayRate(1.0f);
		TPTimeline->SetTimelineLength(0.5);
	}
	if (AimCurve && AimTimeline)
	{
		AimTimeline->AddInterpFloat(AimCurve, OnTimelineUpdate_Aim);
		AimTimeline->SetTimelineFinishedFunc(OnTimelineFinished_Aim);
		AimTimeline->SetLooping(false);
		AimTimeline->SetAutoActivate(false);
		AimTimeline->SetPlayRate(1.0f);
		AimTimeline->SetTimelineLength(0.5);
	}
	if (Combat) {
		Combat->Initialize(this);
		Combat->CharacterRef = this;
		Inventory->Character = this;
		CharacterType = ECharacterType::ECT_Free;
		CharacterState = ECharacterState::ECS_Normal;
		DrewHUD();
		QuietPlayerController = QuietPlayerController == nullptr ? Cast<AQuietPlayerController>(Controller) : QuietPlayerController;
		//if (QuietPlayerController&&QuietPlayerController->HaveFlashLigh) {
		//	QuietPlayerController->QuietHUD->BackpackOverlay->LightItemSlot2->UpData(FlashLightItem, 1);
		//}
		if (Cast<UQuietGameInstance>(UGameplayStatics::GetGameInstance(this))->CurrentLevelDifficulty == "Easy") {
			NeedJadeNum = 3;
		}
		else {
			NeedJadeNum = 5;
		}
	}
}


void AQuietCharacter::ItemViewEvent(TSubclassOf<class AGameItemActor> ViewingItem)
{
	bool IsLight_Temp = IsLight;
	QuietPlayerController = QuietPlayerController == nullptr ? Cast<AQuietPlayerController>(Controller) : QuietPlayerController;
	if (QuietPlayerController) {
		if (QuietPlayerController->isPaused) {
			GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
			if (QuietPlayerController->isBackpack) {
				CharacterType = ECharacterType::ECT_Backpack;
			}
			else {
				CharacterType = ECharacterType::ECT_Free;
			}
			ItemRef->SetVisibility(false, false);
			PointLight_ViewItem->SetVisibility(false);
			if (IsLight) {
				if (QuietPlayerController->LightItem == FlashLightItem) {
					SpotLight_FlashLight->SetVisibility(true);
				}
			}
		}
		else {
			CharacterType = ECharacterType::ECT_Interface;
			ItemRef->SetVisibility(true, false);
			GetCharacterMovement()->DisableMovement();
			PointLight_ViewItem->SetVisibility(true);
			if (IsLight) {
				if (QuietPlayerController->LightItem == FlashLightItem) {
					SpotLight_FlashLight->SetVisibility(false);
				}
			}
		}
		QuietPlayerController->SetHUDView();
		QuietPlayerController->SetItemIntroduce(ViewingItem);
	}
}

void AQuietCharacter::Elim()
{
	if (!bElimmed) {
		SurviveGameTime = CurrentGameTime;
		bElimmed = true;
		TArray<AActor*> AIs;
		if (AIController_01) {
			UGameplayStatics::GetAllActorsOfClass(this, AIController_01->GetClass(), AIs);
		}
		for (int i = 0; i < AIs.Num(); i++) {
			AAIController_01* AI = Cast<AAIController_01>(AIs[i]);
			if (AI) {
				AI->Reset();
			}
		}
		CurrentHealth = 100;
		ChangeFilth(-1 * Filth);
		ChangeMania(-1 * Mania);
		CurrentLife -= 1;
		CameraBoom->bUsePawnControlRotation = false;
		CharacterType = ECharacterType::ECT_Dead;
		PlayElimMontage();
		UGameplayStatics::PlaySound2D(this, DeadSound);

		ShowDeadUMG();
		DisableInput(QuietPlayerController);
		GetWorldTimerManager().SetTimer(
			ElimTimer,
			this,
			&AQuietCharacter::ElimTimerFinished,
			ElimDelay
		);
	}
}

void AQuietCharacter::PlayElimMontage()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && ElimMontage) {
		AnimInstance->Montage_Play(ElimMontage);
	}
}

void AQuietCharacter::ElimTimerFinished()
{
	if (CurrentLife==0) {
		//ShowRestartUMG();
	}
	else {
		bElimmed = false;
		TArray<AActor*> PlayerStart;
		UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), PlayerStart);
		int32 Selection = FMath::RandRange(0, PlayerStart.Num() - 1);
		this->SetActorLocation(PlayerStart[Selection]->GetActorLocation());
		Respawn();
	}
}

void AQuietCharacter::Respawn()
{
	bRespawn = true;
	PlayRespawnMontage();
	FOnAkPostEventCallback nullCallback;
	UAkGameplayStatics::PostEvent(RespawnEvent, this, NULL, nullCallback);
	GetWorldTimerManager().SetTimer(
		RespawnTimer,
		this,
		&AQuietCharacter::RespawnTimerFinished,
		RespawnDelay
	);
}

void AQuietCharacter::PlayRespawnMontage()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && RespawnMontage) {
		AnimInstance->Montage_Play(RespawnMontage);
	}
}

void AQuietCharacter::SetHealth(int32 AddHealth)
{
	if (AddHealth < 0 && CharacterState == ECharacterState::ECS_Invincible) return;
	if (!bElimmed) {
		CurrentHealth = UKismetMathLibrary::Clamp(CurrentHealth + AddHealth, 0, 100);
		if (CurrentHealth == 0) {
			Elim();
		}
	}
}

void AQuietCharacter::TimelineUpdate_TP(float Value)
{
	UKismetMaterialLibrary::SetScalarParameterValue(this, MPC_Dissolve, "Dissolve", UKismetMathLibrary::Lerp(0, 1, Value));
}

void AQuietCharacter::TimelineFinished_TP()
{
	if (bIsTPOverlerp) {
		bIsTPOverlerp = false;
		Plane->SetVisibility(false, false);
	}
	else {
		SetActorLocation(TPRandomLocation);
		Inventory->DeleteItem(TackingItem);
		bIsTPOverlerp = true;
		TPTimeline->ReverseFromEnd();
	}
	
}

void AQuietCharacter::ThrowTrace()
{
		for (int i = 0; i < AllThrowLine.Num(); i++) {
			AllThrowLine[i]->DestroyComponent();
		}
		AllThrowLine.Empty();
		ThrowTraceSpline->ClearSplinePoints();
		FHitResult OutHit;
		TArray<FVector> OutPathPositions;
		FVector OutLastTraceDestination;
		FVector StartPos = FollowCamera->K2_GetComponentLocation() - FVector(0, 0, 50);
		FVector LaunchVelocity = (FollowCamera->GetForwardVector() + FVector(0, 0, 0.3)) * 1500;
		TArray<AActor*> ActorsToIgnore;
		ActorsToIgnore.Add(this);
		UGameplayStatics::Blueprint_PredictProjectilePath_ByTraceChannel(GetWorld(), OutHit, OutPathPositions,
			OutLastTraceDestination, StartPos, LaunchVelocity, true, 0, ECollisionChannel::ECC_WorldDynamic, false,
			ActorsToIgnore, EDrawDebugTrace::None, 0, 15, 10);
		for (int i = 0; i < OutPathPositions.Num(); i++) {
			ThrowTraceSpline->AddSplinePointAtIndex(OutPathPositions[i], i, ESplineCoordinateSpace::World, true);
		}
		int32 NumPoints = ThrowTraceSpline->GetNumberOfSplinePoints();
		if (NumPoints < 2)
			return;
		bool bClosedLoop = ThrowTraceSpline->IsClosedLoop();
		int32 NumSegments = bClosedLoop ? NumPoints : NumPoints - 1;

		for (int32 i = 0; i < NumSegments; ++i)
		{
			int32 StartIndex = i;
			int32 EndIndex = (i + 1) % NumPoints;

			// 动态创建并注册组件
			FName ComponentName = FName(*FString::Printf(TEXT("SplineMeshComponent_%d"), i));
			USplineMeshComponent* SplineMesh = NewObject<USplineMeshComponent>(
				this,
				USplineMeshComponent::StaticClass(),
				ComponentName
			);
			SplineMesh->RegisterComponent();
			SplineMesh->CreationMethod = EComponentCreationMethod::Instance;
			SplineMesh->SetMobility(EComponentMobility::Movable); // 设置为可移动

			// 使用SnapToTargetIncludingScale附加到父组件
			SplineMesh->AttachToComponent(
				ThrowTraceSpline,
				FAttachmentTransformRules::SnapToTargetIncludingScale
			);
			// 设置静态网格
			if (SplineMesh) {
				if (i != NumSegments - 1) {
					SplineMesh->SetStaticMesh(LineMesh);
					SplineMesh->SetStartScale(FVector2D(0.05f, 0.05f));
					SplineMesh->SetEndScale(FVector2D(0.05f, 0.05f));
				}
				else {
					SplineMesh->SetStaticMesh(EndMesh);
					SplineMesh->SetStartScale(FVector2D(0.5f, 0.5f));
					SplineMesh->SetEndScale(FVector2D(0.5f, 0.5f));
				}
			}
			SplineMesh->SetForwardAxis(ESplineMeshAxis::Z);
			// 获取本地坐标系下的位置和切线
			FVector StartPos2 = ThrowTraceSpline->GetLocationAtSplinePoint(StartIndex, ESplineCoordinateSpace::Local);
			FVector StartTangent = ThrowTraceSpline->GetTangentAtSplinePoint(StartIndex, ESplineCoordinateSpace::Local);
			FVector EndPos = ThrowTraceSpline->GetLocationAtSplinePoint(EndIndex, ESplineCoordinateSpace::Local);
			FVector EndTangent = ThrowTraceSpline->GetTangentAtSplinePoint(EndIndex, ESplineCoordinateSpace::Local);

			// 设置起始和结束点
			SplineMesh->SetStartAndEnd(StartPos2, StartTangent, EndPos, EndTangent, true);

			// 可选：设置材质、碰撞等
			// SplineMesh->SetMaterial(0, YourMaterial);

			AllThrowLine.Add(SplineMesh);
		}
	//}
}

void AQuietCharacter::TimelineUpdate_Aim(float Value)
{
	FollowCamera->SetFieldOfView(UKismetMathLibrary::Lerp(60, 90, Value));
}

void AQuietCharacter::TimelineFinished_Aim()
{
}

void AQuietCharacter::ChangeSoulNum(int32 Num)
{
	SoulNum = FMath::Clamp(SoulNum + Num, 0, 99999);
	QuietPlayerController->QuietHUD->MainMenuOverlay->PlaySoulNumAnimation();
}

void AQuietCharacter::ChangeFilth(float Value)
{
	if (Filth == 100 && Value > 0) return;
	if (Value > 0 && CharacterState == ECharacterState::ECS_Invincible) return;
	float Temp = Filth;
	Filth = FMath::Clamp(Filth + Value, 0.f, 100.f);
	if (Temp == 0 && Filth != 0) {
		QuietPlayerController->QuietHUD->MainMenuOverlay->PlayFilthAnimation(false);
	}
	if (Temp != 0 && Filth == 0) {
		QuietPlayerController->QuietHUD->MainMenuOverlay->PlayFilthAnimation(true);
	}
	if (Filth == 100) Elim();
}

void AQuietCharacter::ChangeMania(float Value)
{
	if (Mania == 100 && Value > 0) return;
	if (Value > 0 && CharacterState == ECharacterState::ECS_Invincible) return;
	float Temp = Mania;
	Mania = FMath::Clamp(Mania + Value, 0.f, 100.f);
	if (Temp == 0 && Mania != 0) {
		QuietPlayerController->QuietHUD->MainMenuOverlay->PlayManiaAnimation(false);
	}
	if (Temp != 0 && Mania == 0) {
		QuietPlayerController->QuietHUD->MainMenuOverlay->PlayManiaAnimation(true);
	}
}

void AQuietCharacter::RespawnTimerFinished()
{
	bRespawn = false;
	CameraBoom->bUsePawnControlRotation = true;
	QuietPlayerController = QuietPlayerController == nullptr ? Cast<AQuietPlayerController>(Controller) : QuietPlayerController;
	if (QuietPlayerController) {
		EnableInput(QuietPlayerController);
	}
	CharacterType = ECharacterType::ECT_Free;
}

void AQuietCharacter::ResetFlashLight_Implementation()
{
}

void AQuietCharacter::UseLightPressed_Implementation()
{
}

void AQuietCharacter::UpdataSlot_Implementation(int32 Index, UTexture2D* Icon, int32 Amount, EItemType Itemtype, TSubclassOf<class AGameItemActor> Item)
{
}

void AQuietCharacter::ShowDeadUMG_Implementation()
{
}
