#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UCheckBox;
class UComboBoxString;
class UExpandableArea;
class USpinBox_Vector3D_C__pf530537768;
class USpinBox_Carema_C__pf530537768;
class USpinBox_Vector2D_C__pf530537768;
class UTextBlock;
class ABP_Grid_C__pf3410280870;
class ABP_LevelLoading_C__pf951265448;
#include "Tab_Grid__pf944962347.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/DebugMenu/Tabs/Tab_Grid.Tab_Grid_C", OverrideNativeName="Tab_Grid_C"))
class UTab_Grid_C__pf944962347 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CheckBox_Bottom", Category="Tab_Grid", OverrideNativeName="CheckBox_Bottom"))
	UCheckBox* bpv__CheckBox_Bottom__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CheckBox_Bounds", Category="Tab_Grid", OverrideNativeName="CheckBox_Bounds"))
	UCheckBox* bpv__CheckBox_Bounds__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CheckBox_Center", Category="Tab_Grid", OverrideNativeName="CheckBox_Center"))
	UCheckBox* bpv__CheckBox_Center__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CheckBox_HoveredTile", Category="Tab_Grid", OverrideNativeName="CheckBox_HoveredTile"))
	UCheckBox* bpv__CheckBox_HoveredTile__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CheckBox_MouseLocation", Category="Tab_Grid", OverrideNativeName="CheckBox_MouseLocation"))
	UCheckBox* bpv__CheckBox_MouseLocation__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CheckBox_UseEnviroment", Category="Tab_Grid", OverrideNativeName="CheckBox_UseEnviroment"))
	UCheckBox* bpv__CheckBox_UseEnviroment__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ComboBoxString_Environment", Category="Tab_Grid", OverrideNativeName="ComboBoxString_Environment"))
	UComboBoxString* bpv__ComboBoxString_Environment__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ComboBoxString_Grid_Shape", Category="Tab_Grid", OverrideNativeName="ComboBoxString_Grid_Shape"))
	UComboBoxString* bpv__ComboBoxString_Grid_Shape__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="EXArea_Grid", Category="Tab_Grid", OverrideNativeName="EXArea_Grid"))
	UExpandableArea* bpv__EXArea_Grid__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="EXArea_Grid_1", Category="Tab_Grid", OverrideNativeName="EXArea_Grid_1"))
	UExpandableArea* bpv__EXArea_Grid_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="EXArea_Grid_2", Category="Tab_Grid", OverrideNativeName="EXArea_Grid_2"))
	UExpandableArea* bpv__EXArea_Grid_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Location", Category="Tab_Grid", OverrideNativeName="SpinBox_Location"))
	USpinBox_Vector3D_C__pf530537768* bpv__SpinBox_Location__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Offset_From_Ground", Category="Tab_Grid", OverrideNativeName="SpinBox_Offset_From_Ground"))
	USpinBox_Carema_C__pf530537768* bpv__SpinBox_Offset_From_Ground__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Re_Ge_Delay", Category="Tab_Grid", OverrideNativeName="SpinBox_Re_Ge_Delay"))
	USpinBox_Carema_C__pf530537768* bpv__SpinBox_Re_Ge_Delay__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Tile_Count", Category="Tab_Grid", OverrideNativeName="SpinBox_Tile_Count"))
	USpinBox_Vector2D_C__pf530537768* bpv__SpinBox_Tile_Count__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_Tile_Size", Category="Tab_Grid", OverrideNativeName="SpinBox_Tile_Size"))
	USpinBox_Vector3D_C__pf530537768* bpv__SpinBox_Tile_Size__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_Bottom", Category="Tab_Grid", OverrideNativeName="TextBlock_Bottom"))
	UTextBlock* bpv__TextBlock_Bottom__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_Center", Category="Tab_Grid", OverrideNativeName="TextBlock_Center"))
	UTextBlock* bpv__TextBlock_Center__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_HoveredTile", Category="Tab_Grid", OverrideNativeName="TextBlock_HoveredTile"))
	UTextBlock* bpv__TextBlock_HoveredTile__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_MouseLocation", Category="Tab_Grid", OverrideNativeName="TextBlock_MouseLocation"))
	UTextBlock* bpv__TextBlock_MouseLocation__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Grid", Category="默认", MultiLine="true", OverrideNativeName="Grid"))
	ABP_Grid_C__pf3410280870* bpv__Grid__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Selected Shape", Category="默认", MultiLine="true", OverrideNativeName="Selected_Shape"))
	TEnumAsByte<ESelectInfo::Type> bpv__Selected_Shape__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Loading", Category="默认", MultiLine="true", OverrideNativeName="LevelLoading"))
	ABP_LevelLoading_C__pf951265448* bpv__LevelLoading__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bIsChecked"))
	bool b0l__K2Node_ComponentBoundEvent_bIsChecked__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_3"))
	FVector b0l__K2Node_ComponentBoundEvent_Value_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_2"))
	FVector2D b0l__K2Node_ComponentBoundEvent_Value_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_1"))
	FVector b0l__K2Node_ComponentBoundEvent_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SelectedItem_1"))
	FString b0l__K2Node_ComponentBoundEvent_SelectedItem_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SelectionType_1"))
	TEnumAsByte<ESelectInfo::Type> b0l__K2Node_ComponentBoundEvent_SelectionType_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Has_Been_Initd_Variable"))
	bool b0l_____bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SelectedItem"))
	FString b0l__K2Node_ComponentBoundEvent_SelectedItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SelectionType"))
	TEnumAsByte<ESelectInfo::Type> b0l__K2Node_ComponentBoundEvent_SelectionType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_IsClosed_Variable"))
	bool b0l_____bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value"))
	float b0l__K2Node_ComponentBoundEvent_Value__pf;
	UTab_Grid_C__pf944962347(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Tab_Grid__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Tab_Grid_1"))
	void bpf__ExecuteUbergraph_Tab_Grid__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Tab_Grid_2"))
	void bpf__ExecuteUbergraph_Tab_Grid__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tab_Grid__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Grid_CheckBox_UseEnviront_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Grid_CheckBox_UseEnviront_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Grid_SpinBox_Offset_From_Ground_K2Node_ComponentBoundEvent_5_on_Value_Changed__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Grid_SpinBox_Offset_From_Ground_K2Node_ComponentBoundEvent_5_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Grid_ComboBoxString_Environment_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Grid_ComboBoxString_Environment_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature__pf(const FString& bpp__SelectedItem__pf__const, ESelectInfo::Type bpp__SelectionType__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Grid_ComboBoxString_Grid_Shape_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Grid_ComboBoxString_Grid_Shape_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature__pf(const FString& bpp__SelectedItem__pf__const, ESelectInfo::Type bpp__SelectionType__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Grid_SpinBox_Tile_Size_K2Node_ComponentBoundEvent_2_on_Value_Changed__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Grid_SpinBox_Tile_Size_K2Node_ComponentBoundEvent_2_on_Value_Changed__DelegateSignature__pf(FVector bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Grid_SpinBox_Tile_Count_K2Node_ComponentBoundEvent_1_on_Value_Changed__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Grid_SpinBox_Tile_Count_K2Node_ComponentBoundEvent_1_on_Value_Changed__DelegateSignature__pf(FVector2D bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_Grid_SpinBox_Location_K2Node_ComponentBoundEvent_0_on_Value_Changed__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_Grid_SpinBox_Location_K2Node_ComponentBoundEvent_0_on_Value_Changed__DelegateSignature__pf(FVector bpp__Value__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Spawn_Grid"))
	virtual void bpf__Spawn_Grid__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetDefaultValue"))
	virtual void bpf__SetDefaultValue__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DrawDebugLines"))
	virtual void bpf__DrawDebugLines__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
