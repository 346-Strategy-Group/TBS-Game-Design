#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class USpinBox;
class UTextBlock;
#include "SpinBox_Vector3D__pf530537768.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/DebugMenu/Widgets/SpinBox_Vector3D.SpinBox_Vector3D_C", OverrideNativeName="SpinBox_Vector3D_C"))
class USpinBox_Vector3D_C__pf530537768 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="on_Value_Changed__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(Fon_Value_Changed__pf__SpinBox_Vector3D_C__pf__MulticastDelegate , FVector , bpp__Value__pf);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Value_X", Category="SpinBox_Vector3D", OverrideNativeName="SpinBox_Value_X"))
	USpinBox* bpv__SpinBox_Value_X__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Value_Y", Category="SpinBox_Vector3D", OverrideNativeName="SpinBox_Value_Y"))
	USpinBox* bpv__SpinBox_Value_Y__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Value_Z", Category="SpinBox_Vector3D", OverrideNativeName="SpinBox_Value_Z"))
	USpinBox* bpv__SpinBox_Value_Z__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_Value", Category="SpinBox_Vector3D", OverrideNativeName="TextBlock_Value"))
	UTextBlock* bpv__TextBlock_Value__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Name", Category="默认", MultiLine="true", OverrideNativeName="Name"))
	FText bpv__Name__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Min Max Slider", Category="默认", MultiLine="true", OverrideNativeName="MinMax_Slider"))
	FVector2D bpv__MinMax_Slider__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Min Max Value", Category="默认", MultiLine="true", OverrideNativeName="MinMax_Value"))
	FVector2D bpv__MinMax_Value__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Value", Category="默认", MultiLine="true", OverrideNativeName="Value"))
	FVector bpv__Value__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Min Max Fract Digts", Category="默认", MultiLine="true", OverrideNativeName="MinMax_FractDigts"))
	FVector2D bpv__MinMax_FractDigts__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="始终固定使用差量对齐", Category="默认", MultiLine="true", OverrideNativeName="始终固定使用差量对齐"))
	bool bpv__xxxxxxxxxx__pf6CuoorYNul4uxruvQsIwtUaqF3ucip;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="差量", Category="默认", MultiLine="true", OverrideNativeName="差量"))
	float bpv__xx__pfIwtUaq;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Value Changed", Category="默认", MultiLine="true", OverrideNativeName="on_Value_Changed"))
	Fon_Value_Changed__pf__SpinBox_Vector3D_C__pf__MulticastDelegate bpv__on_Value_Changed__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Has_Been_Initd_Variable"))
	bool b0l_____bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable"))
	int32 b0l_____int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable"))
	int32 b0l_____int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Whether_the_gate_is_currently_open_or_close_Variable"))
	bool b0l_____bool_Whether_the_gate_is_currently_open_or_close_Variable__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_InValue_2"))
	float b0l__K2Node_ComponentBoundEvent_InValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_IsClosed_Variable"))
	bool b0l_____bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_InValue_1"))
	float b0l__K2Node_ComponentBoundEvent_InValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_InValue"))
	float b0l__K2Node_ComponentBoundEvent_InValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<USpinBox*> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	USpinBox* b0l__CallFunc_Array_Get_Item__pf;
	USpinBox_Vector3D_C__pf530537768(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_SpinBox_Vector3D__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_SpinBox_Vector3D_1"))
	void bpf__ExecuteUbergraph_SpinBox_Vector3D__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__SpinBox_Vector3D_SpinBox_Value_Z_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__SpinBox_Vector3D_SpinBox_Value_Z_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__SpinBox_Vector2D_SpinBox_Value_Y_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__SpinBox_Vector2D_SpinBox_Value_Y_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__SpinBox_Carema_SpinBox_Value_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__SpinBox_Carema_SpinBox_Value_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\t * the setup in the designer and since generally that same setup code is required at runtime, it\'s called there\t * as well.\t *\t * **WARNING**\t * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\t * state, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.\t *\t * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\t * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.\t */", ToolTip="Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it\'s called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences.", CppFromBpEvent, OverrideNativeName="PreConstruct"))
	virtual void bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set_Value"))
	virtual void bpf__Set_Value__pf(FVector bpp__NewValue__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
