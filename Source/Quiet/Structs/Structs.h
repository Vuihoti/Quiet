#pragma once
#include "Quiet/Structs/ItemType.h"
#include "Structs.generated.h"
USTRUCT(BlueprintType)
struct FInventory
{
	GENERATED_BODY();
	//对应格子中的物品
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	TSubclassOf<class AGameItemActor> Item;
	//对应格子中的物品数量
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	int32 Amount;
};

USTRUCT(BlueprintType)
struct FItemdata : public FTableRowBase
{
	GENERATED_BODY();
	//物品识别码
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	FName Identification;
	//物品类型
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Inventory")
	EItemType ItemType;
	//物品名称
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	FName ItemName;
	//物品ID
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	int32 ItemID;
	//物品图标
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	UTexture2D* Icon;
	//物品介绍
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory", meta = (MultilLine = "true"))
	FText Introduce;
	//物品最大堆叠数量
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	int32 MaxAmount;
	//物品使用方式
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory", meta = (MultilLine = "true"))
	FText UseType;
	//物品模型
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	UStaticMesh *ItemMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	int32 Price;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	TSubclassOf<class AGameItemActor> GameItemActor;
};

USTRUCT(BlueprintType)
struct FGameSets
{
	GENERATED_BODY();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool FirstTime = true;

	//帧数显示
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	bool ShowFPS = false;

	//垂直同步
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	bool VSync = true;

	//最大帧数
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	FString MaxFPS = "60";

	//分辨率
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	FIntPoint Resolution = { 1920,1080 };
	
	//窗口模式
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	FString WindowMode = "FullScreen";

	//是否启用DLSS
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	bool bDLSS = false;

	//光线追踪品质
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 DLSSQuality = 2;

	//是否启用DLSS帧生成
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	bool bFrameGeneration = false;

	//是否启用光线追踪
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	bool bRayTracing = false;

	//光线追踪品质
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 RayTracingQuality = 1;

	//是否启用动态模糊
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	bool bMotionBlur = true;
	

	//视距
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 ViewDistance = 2;

	//抗锯齿
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 AntiAliasing = 2;

	//后期处理
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 PostProcessing = 2;

	//阴影
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 Shadow = 2;

	//全局光照
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 GlobalIllumination = 2;

	//反射
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 Reflection = 2;

	//纹理
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 Texture = 2;
	
	//着色
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 Shading = 2;


	//灵敏度
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Input")
	float MouseSensitivity = 0.4f;


	//总音量
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volume")
	float TotalVolume = 1.f;

	//背景音量
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volume")
	float BackgroundVolume = 1.f;

	//音效音量
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volume")
	float SoundEffectVolume = 1.f;

	//语音音量
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volume")
	float VoiceVolume = 1.f;

	//显示字幕
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volume")
	bool bShowCaption = true;

	//显示字幕背景
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volume")
	bool bShowCaptionBackground = true;

	//字幕大小
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volume")
	int32 CaptionSize = 16;
};

USTRUCT(BlueprintType)
struct FCaption {
	GENERATED_BODY();

	//字幕内容
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText Content;

	//持续时间
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 KeepTime;

	//持续时间
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundBase* Sound;

	//字幕发出者
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText WhoSay;

	//字幕发出者
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FLinearColor Color;
};

USTRUCT(BlueprintType)
struct FPlayerData {
	GENERATED_BODY();

	UPROPERTY(BlueprintReadWrite)
	TArray<FString> CarryCards;

	UPROPERTY(BlueprintReadWrite)
	TArray<FString> PossessCards;

	UPROPERTY(BlueprintReadWrite)
	TMap<FString, float> Level1Time = { {"Easy",0}, {"Normal",0},{"Hard",0}, {"Rotten",0} };

	UPROPERTY(BlueprintReadWrite)
	TMap<FString, FString> Level1Score = { {"Easy","-"}, {"Normal","-"},{"Hard","-"}, {"Rotten","-"} };
};

USTRUCT(BlueprintType)
struct FCardData : public FTableRowBase{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere)
	int32 UID;

	UPROPERTY(EditAnywhere)
	FString Name;

	UPROPERTY(EditAnywhere)
	FText Message;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> IMG;
};