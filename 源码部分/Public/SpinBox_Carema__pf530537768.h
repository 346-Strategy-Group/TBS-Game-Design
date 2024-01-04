#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class USpinBox;
class UTextBlock;
#include "SpinBox_Carema__pf530537768.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/DebugMenu/Widgets/SpinBox_Carema.SpinBox_Carema_C", OverrideNativeName="SpinBox_Carema_C"))
class USpinBox_Carema_C__pf530537768 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="on_Value_Changed__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(Fon_Value_Changed__pf__SpinBox_Carema_C__pf__MulticastDelegate , float , bpp__Value__pf);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Value", Category="SpinBox_Carema", OverrideNativeName="SpinBox_Value"))
	USpinBox* bpv__SpinBox_Value__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_Value", Category="SpinBox_Carema", OverrideNativeName="TextBlock_Value"))
	UTextBlock* bpv__TextBlock_Value__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Name", Category="默认", MultiLine="true", OverrideNativeName="Name"))
	FText bpv__Name__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Min Max Slider", Category="默认", MultiLine="true", OverrideNativeName="MinMax_Slider"))
	FVector2D bpv__MinMax_Slider__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Min Max Value", Category="默认", MultiLine="true", OverrideNativeName="MinMax_Value"))
	FVector2D bpv__MinMax_Value__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Value", Category="默认", MultiLine="true", OverrideNativeName="Value"))
	float bpv__Value__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Min Max Fract Digts", Category="默认", MultiLine="true", OverrideNativeName="MinMax_FractDigts"))
	FVector2D bpv__MinMax_FractDigts__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="始终固定使用差量对齐", Category="默认", MultiLine="true", OverrideNativeName="始终固定使用差量对齐"))
	bool bpv__xxxxxxxxxx__pf6CuoorYNul4uxruvQsIwtUaqF3ucip;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="差量", Category="默认", MultiLine="true", OverrideNativeName="差量"))
	float bpv__xx__pfIwtUaq;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Value Changed", Category="默认", MultiLine="true", OverrideNativeName="on_Value_Changed"))
	Fon_Value_Changed__pf__SpinBox_Carema_C__pf__MulticastDelegate bpv__on_Value_Changed__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Whether_the_gate_is_currently_open_or_close_Variable"))
	bool b0l_____bool_Whether_the_gate_is_currently_open_or_close_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Has_Been_Initd_Variable"))
	bool b0l_____bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_IsClosed_Variable"))
	bool b0l_____bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsDesignTime"))
	bool b0l__K2Node_Event_IsDesignTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X"))
	float b0l__CallFunc_BreakVector2D_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y"))
	float b0l__CallFunc_BreakVector2D_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_1"))
	float b0l__CallFunc_BreakVector2D_X_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_1"))
	float b0l__CallFunc_BreakVector2D_Y_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_2"))
	float b0l__CallFunc_BreakVector2D_X_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_2"))
	float b0l__CallFunc_BreakVector2D_Y_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_InValue"))
	float b0l__K2Node_ComponentBoundEvent_InValue__pf;
	USpinBox_Carema_C__pf530537768(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_SpinBox_Carema_0"))
	void bpf__ExecuteUbergraph_SpinBox_Carema__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_SpinBox_Carema__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__SpinBox_Carema_SpinBox_Value_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__SpinBox_Carema_SpinBox_Value_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\t * the setup in the designer and since generally that same setup code is required at runtime, it\'s called there\t * as well.\t *\t * **WARNING**\t * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\t * state, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.\t *\t * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\t * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.\t */", ToolTip="Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it\'s called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences.", CppFromBpEvent, OverrideNativeName="PreConstruct"))
	virtual void bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set_Value"))
	virtual void bpf__Set_Value__pf(float bpp__NewValue__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
