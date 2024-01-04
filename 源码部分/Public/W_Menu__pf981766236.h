#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UTab_Camera_C__pf944962347;
class UTab_ConsoleCommand_C__pf944962347;
class UTab_Grid_C__pf944962347;
class UWidgetSwitcher;
#include "W_Menu__pf981766236.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/DebugMenu/W_Menu.W_Menu_C", OverrideNativeName="W_Menu_C"))
class UW_Menu_C__pf981766236 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Carema", Category="W_Menu", OverrideNativeName="Button_Carema"))
	UButton* bpv__Button_Carema__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Commands", Category="W_Menu", OverrideNativeName="Button_Commands"))
	UButton* bpv__Button_Commands__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Grid", Category="W_Menu", OverrideNativeName="Button_Grid"))
	UButton* bpv__Button_Grid__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Tab_Camera", Category="W_Menu", OverrideNativeName="Tab_Camera"))
	UTab_Camera_C__pf944962347* bpv__Tab_Camera__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Tab_ConsoleCommand", Category="W_Menu", OverrideNativeName="Tab_ConsoleCommand"))
	UTab_ConsoleCommand_C__pf944962347* bpv__Tab_ConsoleCommand__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Tab_Grid", Category="W_Menu", OverrideNativeName="Tab_Grid"))
	UTab_Grid_C__pf944962347* bpv__Tab_Grid__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="WidgetSwitcher_UL", Category="W_Menu", OverrideNativeName="WidgetSwitcher_UL"))
	UWidgetSwitcher* bpv__WidgetSwitcher_UL__pf;
	UW_Menu_C__pf981766236(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_W_Menu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_W_Menu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_W_Menu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_W_Menu__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__W_Menu_Button_L3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__W_Menu_Button_L3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__W_Menu_Button_L2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__W_Menu_Button_L2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__W_Menu_Button_L1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__W_Menu_Button_L1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Widget_Index"))
	virtual void bpf__SetxWidget_Index__pfT(int32 bpp__Tab_Index__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="比较当前widgetIndex的值与输入index的值，改变相应tab的颜色", Category, OverrideNativeName="Target_Tab_Updade"))
	virtual void bpf__Target_Tab_Updade__pf(int32 bpp__Tab_Index__pf, UButton* bpp__Target_Tab__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="更新所有Tab的颜色状态", Category, OverrideNativeName="Tab_Update"))
	virtual void bpf__Tab_Update__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
