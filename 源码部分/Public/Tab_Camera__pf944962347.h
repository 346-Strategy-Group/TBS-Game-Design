#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UExpandableArea;
class USpinBox_Carema_C__pf530537768;
class ATB_pawn_C__pf625247592;
#include "Tab_Camera__pf944962347.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/DebugMenu/Tabs/Tab_Camera.Tab_Camera_C", OverrideNativeName="Tab_Camera_C"))
class UTab_Camera_C__pf944962347 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="EXArea_Console Command", Category="Tab_Camera", OverrideNativeName="EXArea_ConsoleCommand"))
	UExpandableArea* bpv__EXArea_ConsoleCommand__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ExpandableArea_250", Category="Tab_Camera", OverrideNativeName="ExpandableArea_250"))
	UExpandableArea* bpv__ExpandableArea_250__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Carema_LInterp", Category="Tab_Camera", OverrideNativeName="SpinBox_Carema_LInterp"))
	USpinBox_Carema_C__pf530537768* bpv__SpinBox_Carema_LInterp__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Carema_LRange", Category="Tab_Camera", OverrideNativeName="SpinBox_Carema_LRange"))
	USpinBox_Carema_C__pf530537768* bpv__SpinBox_Carema_LRange__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Carema_LSpeed", Category="Tab_Camera", OverrideNativeName="SpinBox_Carema_LSpeed"))
	USpinBox_Carema_C__pf530537768* bpv__SpinBox_Carema_LSpeed__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Carema_RInterp", Category="Tab_Camera", OverrideNativeName="SpinBox_Carema_RInterp"))
	USpinBox_Carema_C__pf530537768* bpv__SpinBox_Carema_RInterp__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Carema_RSpeed", Category="Tab_Camera", OverrideNativeName="SpinBox_Carema_RSpeed"))
	USpinBox_Carema_C__pf530537768* bpv__SpinBox_Carema_RSpeed__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Carema_ZInterp", Category="Tab_Camera", OverrideNativeName="SpinBox_Carema_ZInterp"))
	USpinBox_Carema_C__pf530537768* bpv__SpinBox_Carema_ZInterp__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Carema_ZMax", Category="Tab_Camera", OverrideNativeName="SpinBox_Carema_ZMax"))
	USpinBox_Carema_C__pf530537768* bpv__SpinBox_Carema_ZMax__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Carema_ZMin", Category="Tab_Camera", OverrideNativeName="SpinBox_Carema_ZMin"))
	USpinBox_Carema_C__pf530537768* bpv__SpinBox_Carema_ZMin__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Carema_ZSpeed", Category="Tab_Camera", OverrideNativeName="SpinBox_Carema_ZSpeed"))
	USpinBox_Carema_C__pf530537768* bpv__SpinBox_Carema_ZSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pawn", Category="默认", MultiLine="true", OverrideNativeName="Pawn"))
	ATB_pawn_C__pf625247592* bpv__Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable"))
	int32 b0l_____int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable"))
	int32 b0l_____int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_8"))
	float b0l__K2Node_ComponentBoundEvent_Value_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTB_Pawn"))
	ATB_pawn_C__pf625247592* b0l__K2Node_DynamicCast_AsTB_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_7"))
	float b0l__K2Node_ComponentBoundEvent_Value_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_6"))
	float b0l__K2Node_ComponentBoundEvent_Value_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_5"))
	float b0l__K2Node_ComponentBoundEvent_Value_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_4"))
	float b0l__K2Node_ComponentBoundEvent_Value_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_3"))
	float b0l__K2Node_ComponentBoundEvent_Value_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_2"))
	float b0l__K2Node_ComponentBoundEvent_Value_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_1"))
	float b0l__K2Node_ComponentBoundEvent_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value"))
	float b0l__K2Node_ComponentBoundEvent_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<USpinBox_Carema_C__pf530537768*> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	USpinBox_Carema_C__pf530537768* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_1"))
	TArray<float> b0l__K2Node_MakeArray_Array_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	float b0l__CallFunc_Array_Get_Item_1__pf;
	UTab_Camera_C__pf944962347(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Tab_Camera__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tab_Camera__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tab_Camera__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tab_Camera__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tab_Camera__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tab_Camera__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tab_Camera__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tab_Camera__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tab_Camera__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tab_Camera__pf_9(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Camera_SpinBox_Carema_LRange_K2Node_ComponentBoundEvent_17_on_Value_Changed__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Camera_SpinBox_Carema_LRange_K2Node_ComponentBoundEvent_17_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Camera_SpinBox_Carema_ZMax_K2Node_ComponentBoundEvent_16_on_Value_Changed__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Camera_SpinBox_Carema_ZMax_K2Node_ComponentBoundEvent_16_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Camera_SpinBox_Carema_ZMin_K2Node_ComponentBoundEvent_15_on_Value_Changed__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Camera_SpinBox_Carema_ZMin_K2Node_ComponentBoundEvent_15_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Camera_SpinBox_Carema_ZInterp_K2Node_ComponentBoundEvent_14_on_Value_Changed__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Camera_SpinBox_Carema_ZInterp_K2Node_ComponentBoundEvent_14_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Camera_SpinBox_Carema_ZSpeed_K2Node_ComponentBoundEvent_13_on_Value_Changed__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Camera_SpinBox_Carema_ZSpeed_K2Node_ComponentBoundEvent_13_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Camera_SpinBox_Carema_RInterp_K2Node_ComponentBoundEvent_12_on_Value_Changed__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Camera_SpinBox_Carema_RInterp_K2Node_ComponentBoundEvent_12_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Camera_SpinBox_Carema_RSpeed_K2Node_ComponentBoundEvent_11_on_Value_Changed__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Camera_SpinBox_Carema_RSpeed_K2Node_ComponentBoundEvent_11_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Camera_SpinBox_Carema_LInterp_K2Node_ComponentBoundEvent_10_on_Value_Changed__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Camera_SpinBox_Carema_LInterp_K2Node_ComponentBoundEvent_10_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Camera_SpinBox_Carema_LSpeed_K2Node_ComponentBoundEvent_9_on_Value_Changed__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Camera_SpinBox_Carema_LSpeed_K2Node_ComponentBoundEvent_9_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
