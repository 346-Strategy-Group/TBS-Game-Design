#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
class UCameraComponent;
class USpringArmComponent;
class USceneComponent;
#include "TB_pawn__pf625247592.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Core/Player/TB_pawn.TB_pawn_C", OverrideNativeName="TB_pawn_C"))
class ATB_pawn_C__pf625247592 : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="SpringArm"))
	USpringArmComponent* bpv__SpringArm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="MAxis Desire", Category="默认", MultiLine="true", OverrideNativeName="MAxis_Desire"))
	float bpv__MAxis_Desire__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location Desire", Category="默认", MultiLine="true", OverrideNativeName="Location_Desire"))
	FVector bpv__Location_Desire__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotation Desire", Category="默认", MultiLine="true", OverrideNativeName="Rotation_Desire"))
	FRotator bpv__Rotation_Desire__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotation Speed", Category="默认", MultiLine="true", OverrideNativeName="Rotation_Speed"))
	float bpv__Rotation_Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location Speed", Category="默认", MultiLine="true", OverrideNativeName="Location_Speed"))
	int32 bpv__Location_Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Zoom Speed", Category="默认", MultiLine="true", OverrideNativeName="Zoom_Speed"))
	int32 bpv__Zoom_Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Min Zoom", Category="默认", MultiLine="true", OverrideNativeName="Min_Zoom"))
	float bpv__Min_Zoom__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Zoom", Category="默认", MultiLine="true", OverrideNativeName="Max_Zoom"))
	float bpv__Max_Zoom__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Zoom Interp", Category="默认", MultiLine="true", OverrideNativeName="Zoom_Interp"))
	float bpv__Zoom_Interp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location Interp", Category="默认", MultiLine="true", OverrideNativeName="Location_Interp"))
	float bpv__Location_Interp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotation Interp", Category="默认", MultiLine="true", OverrideNativeName="Rotation_Interp"))
	float bpv__Rotation_Interp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Location", Category="默认", MultiLine="true", OverrideNativeName="Max_Location"))
	float bpv__Max_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_2"))
	float b0l__K2Node_InputAxisEvent_AxisValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_1"))
	float b0l__K2Node_InputAxisEvent_AxisValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b0l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	ATB_pawn_C__pf625247592(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_TB_pawn__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TB_pawn__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TB_pawn__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TB_pawn__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TB_pawn__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TB_pawn__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TB_pawn__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MyInputAxis_K2Node_InputAxisEvent_0"))
	virtual void bpf__InpAxisEvt_MyInputAxis_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Transverse_dir_InputAxis_K2Node_InputAxisEvent_2"))
	virtual void bpf__InpAxisEvt_Transverse_dir_InputAxis_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Machine_dir_InputAxis_K2Node_InputAxisEvent_1"))
	virtual void bpf__InpAxisEvt_Machine_dir_InputAxis_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Right_Rotate_InputAction_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_Right_Rotate_InputAction_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Left_Rotate_InputAction_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_Left_Rotate_InputAction_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
public:
};
