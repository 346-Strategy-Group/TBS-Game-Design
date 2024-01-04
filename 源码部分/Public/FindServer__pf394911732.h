#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UCircularThrobber;
class UScrollBox;
class UFindSessionsCallbackProxy;
#include "FindServer__pf394911732.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Server/FindServer.FindServer_C", OverrideNativeName="FindServer_C"))
class UFindServer_C__pf394911732 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="BlueprintFindSessionsResultDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__BlueprintFindSessionsResultDelegate__DelegateSignature__SC_0, TArray<FBlueprintSessionResult> const& , bpp__Results__pf);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button", Category="FindServer", OverrideNativeName="Button"))
	UButton* bpv__Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_45", Category="FindServer", OverrideNativeName="Button_45"))
	UButton* bpv__Button_45__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CircularThrobber_141", Category="FindServer", OverrideNativeName="CircularThrobber_141"))
	UCircularThrobber* bpv__CircularThrobber_141__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ScrollBox_83", Category="FindServer", OverrideNativeName="ScrollBox_83"))
	UScrollBox* bpv__ScrollBox_83__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable"))
	int32 b0l_____int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__BlueprintFindSessionsResultDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Results_1"))
	TArray<FBlueprintSessionResult> b0l__K2Node_CustomEvent_Results_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Results"))
	TArray<FBlueprintSessionResult> b0l__K2Node_CustomEvent_Results__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__BlueprintFindSessionsResultDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___struct_Variable"))
	TArray<FBlueprintSessionResult> b0l_____struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable"))
	int32 b0l_____int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FBlueprintSessionResult b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FindSessions_ReturnValue"))
	UFindSessionsCallbackProxy* b0l__CallFunc_FindSessions_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UFindServer_C__pf394911732(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_FindServer__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FindServer__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FindServer__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FindServer__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FindServer__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FindServer__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="刷新服务器"))
	virtual void bpf__xxxxx__pfugumQtELtDfusPu();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__FindServer_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__FindServer_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__FindServer_Button_45_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__FindServer_Button_45_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_5696BDF64AC62C55826976868A02F173"))
	virtual void bpf__OnSuccess_5696BDF64AC62C55826976868A02F173__pf(TArray<FBlueprintSessionResult> const& bpp__Results__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_5696BDF64AC62C55826976868A02F173"))
	virtual void bpf__OnFailure_5696BDF64AC62C55826976868A02F173__pf(TArray<FBlueprintSessionResult> const& bpp__Results__pf__const);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_0"))
	virtual ESlateVisibility  bpf__GetVisibility_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
