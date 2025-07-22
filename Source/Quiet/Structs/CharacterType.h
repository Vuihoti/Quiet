#pragma once
UENUM(BlueprintType)
enum class ECharacterType : uint8
{
	ECT_Free UMETA(DisplayName = "Free"),
	ECT_Interface UMETA(DisplayName = "Interface"),
	ECT_Backpack  UMETA(DisplayName = "Backpack"),
	ECT_Dead UMETA(DisplayName = "Dead"),
	ECT_GameSetting UMETA(DisplayName = "GameSetting"),
	ECT_PickLevel UMETA(DisplayName = "PickLevel"),
	ECT_ChangeCard UMETA(DisplayName = "PickLevel"),
	ECT_OnShop UMETA(DisplayName = "OnShop"),
};

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Normal UMETA(DisplayName = "Normal"),
	ECS_Invincible UMETA(DisplayName = "Invincible"),
};