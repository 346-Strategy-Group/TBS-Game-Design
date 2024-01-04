#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UHorizontalBox;
class UTextBlock;
class UJoinSessionCallbackProxy;
#include "JoinServer__pf394911732.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Server/JoinServer.JoinServer_C", OverrideNativeName="JoinServer_C"))
class UJoinServer_C__pf394911732 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="EmptyOnlineDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(F__EmptyOnlineDelegate__DelegateSignature__SC_0);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_42", Category="JoinServer", OverrideNativeName="Button_42"))
	UButton* bpv__Button_42__pf;
	UPROPERTY(Export, meta=(DisplayName="HorizontalBox_0", OverrideNativeName="HorizontalBox_0"))
	UHorizontalBox* bpv__HorizontalBox_0__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_0", OverrideNativeName="TextBlock_0"))
	UTextBlock* bpv__TextBlock_0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Name Of Server", Category="默认", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="NameOfServer"))
	FString bpv__NameOfServer__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Server", Category="默认", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="Server"))
	FBlueprintSessionResult bpv__Server__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_JoinSession_ReturnValue"))
	UJoinSessionCallbackProxy* b0l__CallFunc_JoinSession_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UJoinServer_C__pf394911732(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_JoinServer__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_JoinServer__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_JoinServer__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__JoinServer_Button_42_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__JoinServer_Button_42_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_1261E3624A1E8650FE67AD874674F30E"))
	virtual void bpf__OnSuccess_1261E3624A1E8650FE67AD874674F30E__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_1261E3624A1E8650FE67AD874674F30E"))
	virtual void bpf__OnFailure_1261E3624A1E8650FE67AD874674F30E__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
