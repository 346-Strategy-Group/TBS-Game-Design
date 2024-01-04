#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class UWidgetComponent;
class AActor;
class UBP_HP_C__pf1489439355;
class Umana_C__pf1489439355;
class USkeletalMeshComponent;
#include "chesscharacter__pf772598429.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/AC/chesscharacter.chesscharacter_C", OverrideNativeName="chesscharacter_C"))
class Achesscharacter_C__pf772598429 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="Widgetmana"))
	UWidgetComponent* bpv__Widgetmana__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="Widget"))
	UWidgetComponent* bpv__Widget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Health", Category="默认", MultiLine="true", OverrideNativeName="health"))
	float bpv__health__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Healthmax", Category="默认", MultiLine="true", OverrideNativeName="healthmax"))
	float bpv__healthmax__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Manamax", Category="默认", MultiLine="true", OverrideNativeName="manamax"))
	float bpv__manamax__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Mana", Category="默认", MultiLine="true", OverrideNativeName="mana"))
	float bpv__mana__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Nowtarget", Category="默认", MultiLine="true", OverrideNativeName="Nowtarget"))
	AActor* bpv__Nowtarget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Team", Category="默认", MultiLine="true", OverrideNativeName="team"))
	int32 bpv__team__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Range", Category="默认", MultiLine="true", OverrideNativeName="range"))
	int32 bpv__range__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Base Damage", Category="默认", MultiLine="true", OverrideNativeName="Base Damage"))
	float bpv__BasexDamage__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_HP"))
	UBP_HP_C__pf1489439355* b0l__K2Node_DynamicCast_AsBP_HP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMana"))
	Umana_C__pf1489439355* b0l__K2Node_DynamicCast_AsMana__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	Achesscharacter_C__pf772598429(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_chesscharacter__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_chesscharacter__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="rb"))
	virtual void bpf__rb__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="默认", OverrideNativeName="setteam"))
	virtual void bpf__setteam__pf(int32 bpp__team__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="默认", OverrideNativeName="dodamage"))
	virtual float  bpf__dodamage__pf(AActor* bpp__target__pf, USkeletalMeshComponent* bpp__me__pf);
public:
};
