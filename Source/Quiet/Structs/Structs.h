#pragma once
#include "Quiet/Structs/ItemType.h"
#include "Structs.generated.h"
USTRUCT(BlueprintType)
struct FInventory
{
	GENERATED_BODY();
	//��Ӧ�����е���Ʒ
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	TSubclassOf<class AGameItemActor> Item;
	//��Ӧ�����е���Ʒ����
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	int32 Amount;
};

USTRUCT(BlueprintType)
struct FItemdata : public FTableRowBase
{
	GENERATED_BODY();
	//��Ʒʶ����
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	FName Identification;
	//��Ʒ����
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Inventory")
	EItemType ItemType;
	//��Ʒ����
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	FName ItemName;
	//��ƷID
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	int32 ItemID;
	//��Ʒͼ��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	UTexture2D* Icon;
	//��Ʒ����
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory", meta = (MultilLine = "true"))
	FText Introduce;
	//��Ʒ���ѵ�����
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	int32 MaxAmount;
	//��Ʒʹ�÷�ʽ
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory", meta = (MultilLine = "true"))
	FText UseType;
	//��Ʒģ��
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

	//֡����ʾ
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	bool ShowFPS = false;

	//��ֱͬ��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	bool VSync = true;

	//���֡��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	FString MaxFPS = "60";

	//�ֱ���
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	FIntPoint Resolution = { 1920,1080 };
	
	//����ģʽ
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	FString WindowMode = "FullScreen";

	//�Ƿ�����DLSS
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	bool bDLSS = false;

	//����׷��Ʒ��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 DLSSQuality = 2;

	//�Ƿ�����DLSS֡����
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	bool bFrameGeneration = false;

	//�Ƿ����ù���׷��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	bool bRayTracing = false;

	//����׷��Ʒ��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 RayTracingQuality = 1;

	//�Ƿ����ö�̬ģ��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	bool bMotionBlur = true;
	

	//�Ӿ�
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 ViewDistance = 2;

	//�����
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 AntiAliasing = 2;

	//���ڴ���
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 PostProcessing = 2;

	//��Ӱ
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 Shadow = 2;

	//ȫ�ֹ���
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 GlobalIllumination = 2;

	//����
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 Reflection = 2;

	//����
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 Texture = 2;
	
	//��ɫ
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Screen")
	int32 Shading = 2;


	//������
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Input")
	float MouseSensitivity = 0.4f;


	//������
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volume")
	float TotalVolume = 1.f;

	//��������
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volume")
	float BackgroundVolume = 1.f;

	//��Ч����
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volume")
	float SoundEffectVolume = 1.f;

	//��������
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volume")
	float VoiceVolume = 1.f;

	//��ʾ��Ļ
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volume")
	bool bShowCaption = true;

	//��ʾ��Ļ����
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volume")
	bool bShowCaptionBackground = true;

	//��Ļ��С
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volume")
	int32 CaptionSize = 16;
};

USTRUCT(BlueprintType)
struct FCaption {
	GENERATED_BODY();

	//��Ļ����
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText Content;

	//����ʱ��
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 KeepTime;

	//����ʱ��
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundBase* Sound;

	//��Ļ������
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText WhoSay;

	//��Ļ������
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