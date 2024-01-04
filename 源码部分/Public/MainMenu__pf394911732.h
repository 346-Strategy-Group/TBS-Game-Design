#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UCreateSessionCallbackProxy;
#include "MainMenu__pf394911732.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Server/MainMenu.MainMenu_C", OverrideNativeName="MainMenu_C"))
class UMainMenu_C__pf394911732 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="EmptyOnlineDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(F__EmptyOnlineDelegate__DelegateSignature__SC_0);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button", Category="MainMenu", OverrideNativeName="Button"))
	UButton* bpv__Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_0", Category="MainMenu", OverrideNativeName="Button_0"))
	UButton* bpv__Button_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_1", Category="MainMenu", OverrideNativeName="Button_1"))
	UButton* bpv__Button_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateSession_ReturnValue"))
	UCreateSessionCallbackProxy* b0l__CallFunc_CreateSession_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UMainMenu_C__pf394911732(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MainMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__MainMenu_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__MainMenu_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__MainMenu_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__MainMenu_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_5135A5EE4738221613BFCF8D37A0EF4C"))
	virtual void bpf__OnSuccess_5135A5EE4738221613BFCF8D37A0EF4C__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_5135A5EE4738221613BFCF8D37A0EF4C"))
	virtual void bpf__OnFailure_5135A5EE4738221613BFCF8D37A0EF4C__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
