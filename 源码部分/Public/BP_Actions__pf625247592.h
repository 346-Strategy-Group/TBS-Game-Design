#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "E_Grid_Shape__pf3764965557.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "E_TileState__pf886517966.h"
#include "S_Tile_Data__pf886517966.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class ABP_Grid_C__pf3410280870;
class APW_Hero_C__pf1964576356;
class Achesscharacter_C__pf772598429;
class UAIAsyncTaskBlueprintProxy;
#include "BP_Actions__pf625247592.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Core/Player/BP_Actions.BP_Actions_C", OverrideNativeName="BP_Actions_C"))
class ABP_Actions_C__pf625247592 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OAISimpleDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type , bpp__MovementResult__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Grid", Category="默认", MultiLine="true", OverrideNativeName="Grid"))
	ABP_Grid_C__pf3410280870* bpv__Grid__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Hovered Tile", Category="默认", MultiLine="true", OverrideNativeName="HoveredTile"))
	FIntPoint bpv__HoveredTile__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Selected Tile", Category="默认", MultiLine="true", OverrideNativeName="Selected_Tile"))
	FIntPoint bpv__Selected_Tile__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Src", Category="默认", MultiLine="true", OverrideNativeName="Src"))
	FIntPoint bpv__Src__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Dst", Category="默认", MultiLine="true", OverrideNativeName="Dst"))
	FIntPoint bpv__Dst__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Pre Src", Category="默认", MultiLine="true", OverrideNativeName="PreSrc"))
	FIntPoint bpv__PreSrc__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Pre Dst", Category="默认", MultiLine="true", OverrideNativeName="PreDst"))
	FIntPoint bpv__PreDst__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Pre Tile", Category="默认", MultiLine="true", OverrideNativeName="PreTile"))
	FIntPoint bpv__PreTile__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="To Tile", Category="默认", MultiLine="true", OverrideNativeName="ToTile"))
	FIntPoint bpv__ToTile__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Hero", Category="默认", MultiLine="true", OverrideNativeName="Hero"))
	APW_Hero_C__pf1964576356* bpv__Hero__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Index", Category="默认", MultiLine="true", OverrideNativeName="Index"))
	int32 bpv__Index__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Is Break", Category="默认", MultiLine="true", OverrideNativeName="IsBreak"))
	bool bpv__IsBreak__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Whiteperson 1", Category="默认", MultiLine="true", OverrideNativeName="whiteperson1"))
	Achesscharacter_C__pf772598429* bpv__whiteperson1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Whiteperson 2", Category="默认", MultiLine="true", OverrideNativeName="whiteperson2"))
	Achesscharacter_C__pf772598429* bpv__whiteperson2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Blueperson 1", Category="默认", MultiLine="true", OverrideNativeName="blueperson1"))
	Achesscharacter_C__pf772598429* bpv__blueperson1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Blueperson 2", Category="默认", MultiLine="true", OverrideNativeName="blueperson2"))
	Achesscharacter_C__pf772598429* bpv__blueperson2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grid Tile Size", Category="默认", MultiLine="true", OverrideNativeName="Grid Tile Size"))
	FVector bpv__GridxTilexSize__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grid Shape", Category="默认", MultiLine="true", OverrideNativeName="Grid Shape"))
	E__E_Grid_Shape__pf bpv__GridxShape__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grid Left Bottom Location", Category="默认", MultiLine="true", OverrideNativeName="GridLeftBottomLocation"))
	FVector bpv__GridLeftBottomLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_17"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_16"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_1"))
	FKey b0l__K2Node_InputKeyEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_15"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_14"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_13"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_12"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_5"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_3"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_6"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_7"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_8"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_11"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_10"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_9"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_4"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_10"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_9"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_8"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_11"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_5"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_12"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_13"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_14"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_7"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_6"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_15"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_6"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_16"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_5"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_4"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_17"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_7"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_18"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_19"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_20"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_3"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_21"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_8"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_22"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_23"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_9"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_24"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_1"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_2"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_3"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_19"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Get_TileState_States"))
	TArray<E__E_TileState__pf> b0l__CallFunc_Get_TileState_States__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Get_TileState_States_1"))
	TArray<E__E_TileState__pf> b0l__CallFunc_Get_TileState_States_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Find_Path_IsPassable"))
	bool b0l__CallFunc_Find_Path_IsPassable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable"))
	int32 b0l_____int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable"))
	int32 b0l_____int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FIntPoint b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_25"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_25__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Get_TileIndexFromWorldLocation_TileIndex"))
	FIntPoint b0l__CallFunc_Get_TileIndexFromWorldLocation_TileIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Find_Path_IsPassable_1"))
	bool b0l__CallFunc_Find_Path_IsPassable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_18"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	FIntPoint b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_1"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	FIntPoint b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_26"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_26__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	FIntPoint b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_2"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_1"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_1"))
	bool b0l__CallFunc_IsValid_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetRotation_NewParam"))
	float b0l__CallFunc_GetRotation_NewParam__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetRotation_NewParam_1"))
	float b0l__CallFunc_GetRotation_NewParam_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Map_Find_Value"))
	FS_Tile_Data__pf886517966 b0l__CallFunc_Map_Find_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_4"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_27"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_27__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_3"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die"))
	bool b0l__CallFunc_Judge_Life_die__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die_1"))
	bool b0l__CallFunc_Judge_Life_die_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die_2"))
	bool b0l__CallFunc_Judge_Life_die_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die_3"))
	bool b0l__CallFunc_Judge_Life_die_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_2"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_6"))
	bool b0l__CallFunc_IsValid_ReturnValue_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_5"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_3"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_7"))
	bool b0l__CallFunc_IsValid_ReturnValue_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_6"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_7"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_10"))
	E__E_TileState__pf b0l_____byte_Variable_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_11"))
	E__E_TileState__pf b0l_____byte_Variable_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die_4"))
	bool b0l__CallFunc_Judge_Life_die_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die_5"))
	bool b0l__CallFunc_Judge_Life_die_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_4"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_5"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_10"))
	bool b0l__CallFunc_IsValid_ReturnValue_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_11"))
	bool b0l__CallFunc_IsValid_ReturnValue_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die_6"))
	bool b0l__CallFunc_Judge_Life_die_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die_7"))
	bool b0l__CallFunc_Judge_Life_die_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_4"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_5"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_6"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_7"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_22"))
	bool b0l__CallFunc_IsValid_ReturnValue_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_23"))
	bool b0l__CallFunc_IsValid_ReturnValue_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_6"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_7"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_8"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_9"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_24"))
	bool b0l__CallFunc_IsValid_ReturnValue_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_25"))
	bool b0l__CallFunc_IsValid_ReturnValue_25__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_2"))
	FKey b0l__K2Node_InputKeyEvent_Key_2__pf;
	ABP_Actions_C__pf625247592(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Actions__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_20(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_21(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_22(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_23(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_24(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_25(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_26(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_27(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_28(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_29(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_30(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Actions__pf_31(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="b2w2"))
	virtual void bpf__b2w2__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="b1w2"))
	virtual void bpf__b1w2__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="b1w1"))
	virtual void bpf__b1w1__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="b2w1"))
	virtual void bpf__b2w1__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="w2b2"))
	virtual void bpf__w2b2__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="w1b2"))
	virtual void bpf__w1b2__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="w1b1"))
	virtual void bpf__w1b1__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="w2b1"))
	virtual void bpf__w2b1__pf();
	UFUNCTION(NetMulticast, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="initialEvent"))
	virtual void bpf__initialEvent__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(NetMulticast, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="update tile event"))
	virtual void bpf__updatextilexevent__pfTT();
	UFUNCTION(NetMulticast, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="smallHeroMove"))
	virtual void bpf__smallHeroMove__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="loop1"))
	virtual void bpf__loop1__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_One_K2Node_InputKeyEvent_0"))
	virtual void bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_CCE9225242AA076065732CB79A8C5E02"))
	virtual void bpf__OnSuccess_CCE9225242AA076065732CB79A8C5E02__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_CCE9225242AA076065732CB79A8C5E02"))
	virtual void bpf__OnFail_CCE9225242AA076065732CB79A8C5E02__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_73BB516E493463AE76275EAF93000E8C"))
	virtual void bpf__OnSuccess_73BB516E493463AE76275EAF93000E8C__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_73BB516E493463AE76275EAF93000E8C"))
	virtual void bpf__OnFail_73BB516E493463AE76275EAF93000E8C__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_20F8F174446B71C6D6EC20AEE0CBB84A"))
	virtual void bpf__OnSuccess_20F8F174446B71C6D6EC20AEE0CBB84A__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_20F8F174446B71C6D6EC20AEE0CBB84A"))
	virtual void bpf__OnFail_20F8F174446B71C6D6EC20AEE0CBB84A__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_715B1AC04917AA7F0C54C0B27FB2BEE7"))
	virtual void bpf__OnSuccess_715B1AC04917AA7F0C54C0B27FB2BEE7__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_715B1AC04917AA7F0C54C0B27FB2BEE7"))
	virtual void bpf__OnFail_715B1AC04917AA7F0C54C0B27FB2BEE7__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_5F03CA134AFFA0336BEA678762893CA4"))
	virtual void bpf__OnSuccess_5F03CA134AFFA0336BEA678762893CA4__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_5F03CA134AFFA0336BEA678762893CA4"))
	virtual void bpf__OnFail_5F03CA134AFFA0336BEA678762893CA4__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_4B08A4E14BCDE9C8CDD8D4A9E0733909"))
	virtual void bpf__OnSuccess_4B08A4E14BCDE9C8CDD8D4A9E0733909__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_4B08A4E14BCDE9C8CDD8D4A9E0733909"))
	virtual void bpf__OnFail_4B08A4E14BCDE9C8CDD8D4A9E0733909__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_9C541319447A6C40F8248AB0DD143749"))
	virtual void bpf__OnSuccess_9C541319447A6C40F8248AB0DD143749__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_9C541319447A6C40F8248AB0DD143749"))
	virtual void bpf__OnFail_9C541319447A6C40F8248AB0DD143749__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_A4D895DC4BE7014A779671A9629494B4"))
	virtual void bpf__OnSuccess_A4D895DC4BE7014A779671A9629494B4__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_A4D895DC4BE7014A779671A9629494B4"))
	virtual void bpf__OnFail_A4D895DC4BE7014A779671A9629494B4__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1"))
	virtual void bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_620225394F32E4D2F8B2DAB247A41D7B"))
	virtual void bpf__OnSuccess_620225394F32E4D2F8B2DAB247A41D7B__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_620225394F32E4D2F8B2DAB247A41D7B"))
	virtual void bpf__OnFail_620225394F32E4D2F8B2DAB247A41D7B__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_1EFBB49C40B71788730876A7085169A2"))
	virtual void bpf__OnSuccess_1EFBB49C40B71788730876A7085169A2__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_1EFBB49C40B71788730876A7085169A2"))
	virtual void bpf__OnFail_1EFBB49C40B71788730876A7085169A2__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2"))
	virtual void bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateTileUnderCursor"))
	virtual void bpf__UpdateTileUnderCursor__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetRotation"))
	virtual void bpf__GetRotation__pf(FIntPoint bpp__P1__pf, FIntPoint bpp__P2__pf, /*out*/ float& bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="spawnChara"))
	virtual void bpf__spawnChara__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LocationBasedOnGridIndex"))
	virtual void bpf__LocationBasedOnGridIndex__pf(FIntPoint bpp__Grid_Index__pf, /*out*/ FVector& bpp__TransLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Judge Life"))
	virtual void bpf__JudgexLife__pfT(Achesscharacter_C__pf772598429* bpp__target__pf, float bpp__damage__pf, /*out*/ bool& bpp__die__pf);
public:
};
