#pragma once
UENUM(BlueprintType)
enum class EItemType : uint8
{
	EIT_Active UMETA(DisplayName = "Active"),
	EIT_Passive UMETA(DisplayName = "Passive"),
	EIT_Light UMETA(DisplayName = "Light"),
};
