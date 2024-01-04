#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "E_Grid_Shape__pf3764965557.h"
#include "S_Tile_Data__pf886517966.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "E_TileState__pf886517966.h"
#include "E_TileType__pf886517966.h"
#include "S_Grid_Shape_Data__pf3764965557.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UChildActorComponent;
class USceneComponent;
class UObject;
class ABP_Grid_Visual_C__pf3410280870;
class ABP_TextChess_C__pf772598429;
class ABP_Grid_C__pf3410280870;
class USkeletalMeshComponent;
class Achesscharacter_C__pf772598429;
class UAIAsyncTaskBlueprintProxy;
#include "BP_Grid__pf3410280870.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Core/Grid/BP_Grid.BP_Grid_C", OverrideNativeName="BP_Grid_C"))
class ABP_Grid_C__pf3410280870 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OAISimpleDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type , bpp__MovementResult__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="ChildActor_GridVisual"))
	UChildActorComponent* bpv__ChildActor_GridVisual__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Grid Center Location", Category="默认", MultiLine="true", OverrideNativeName="Grid Center Location"))
	FVector bpv__GridxCenterxLocation__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Grid Tile Size", Category="默认", MultiLine="true", OverrideNativeName="Grid Tile Size"))
	FVector bpv__GridxTilexSize__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Grid Tile Count", Category="默认", MultiLine="true", OverrideNativeName="Grid Tile Count"))
	FIntPoint bpv__GridxTilexCount__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Grid Shape", Category="默认", MultiLine="true", OverrideNativeName="Grid Shape"))
	E__E_Grid_Shape__pf bpv__GridxShape__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Grid Left Bottom Location", Category="默认", MultiLine="true", OverrideNativeName="GridLeftBottomLocation"))
	FVector bpv__GridLeftBottomLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Tile Count", Category="默认", MultiLine="true", OverrideNativeName="Tile Count"))
	FVector2D bpv__TilexCount__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Radius", Category="默认", MultiLine="true", OverrideNativeName="Radius"))
	float bpv__Radius__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Grid Map", Category="默认", MultiLine="true", OverrideNativeName="Grid_Map"))
	UObject* bpv__Grid_Map__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Grid Visual", Category="默认", MultiLine="true", OverrideNativeName="GridVisual"))
	ABP_Grid_Visual_C__pf3410280870* bpv__GridVisual__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grid Tiles", Category="默认", MultiLine="true", OverrideNativeName="GridTiles"))
	TMap<FIntPoint,FS_Tile_Data__pf886517966> bpv__GridTiles__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Data", Category="默认", MultiLine="true", OverrideNativeName="Data"))
	FS_Tile_Data__pf886517966 bpv__Data__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Tile Indexes", Category="默认", MultiLine="true", tooltip="存储normal型的地块索引", OverrideNativeName="TileIndexes"))
	TArray<FIntPoint> bpv__TileIndexes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Path", Category="默认", MultiLine="true", OverrideNativeName="Path"))
	TArray<FIntPoint> bpv__Path__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Src", Category="默认", MultiLine="true", OverrideNativeName="Src"))
	FIntPoint bpv__Src__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Test Chess", Category="默认", MultiLine="true", OverrideNativeName="test_chess"))
	ABP_TextChess_C__pf772598429* bpv__test_chess__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="目标", Category="默认", MultiLine="true", OverrideNativeName="目标"))
	ABP_Grid_C__pf3410280870* bpv__xx__pfiJsGHt;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="目标 0", Category="默认", MultiLine="true", OverrideNativeName="目标_0"))
	USkeletalMeshComponent* bpv__xx_0__pfiJsGHt;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Blueperson 1", Category="默认", MultiLine="true", OverrideNativeName="blueperson1"))
	Achesscharacter_C__pf772598429* bpv__blueperson1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Whiteperson 1", Category="默认", MultiLine="true", OverrideNativeName="whiteperson1"))
	Achesscharacter_C__pf772598429* bpv__whiteperson1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Blueperson 2", Category="默认", MultiLine="true", OverrideNativeName="blueperson2"))
	Achesscharacter_C__pf772598429* bpv__blueperson2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Whiteperson 2", Category="默认", MultiLine="true", OverrideNativeName="whiteperson2"))
	Achesscharacter_C__pf772598429* bpv__whiteperson2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_13"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_12"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_11"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_10"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_5"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_6"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_9"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_8"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_7"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_3"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_8"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_1"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_9"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_1"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_10"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_7"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_11"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_6"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_4"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_2"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_2"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_12"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_5"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_4"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_13"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_5"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_14"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_15"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_16"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_3"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_17"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_6"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_18"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_19"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_7"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_20"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_14"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_21"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die"))
	bool b0l__CallFunc_Judge_Life_die__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die_1"))
	bool b0l__CallFunc_Judge_Life_die_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_15"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die_2"))
	bool b0l__CallFunc_Judge_Life_die_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die_3"))
	bool b0l__CallFunc_Judge_Life_die_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_4"))
	bool b0l__CallFunc_IsValid_ReturnValue_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_1"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_22"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_5"))
	bool b0l__CallFunc_IsValid_ReturnValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_3"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_3"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_2"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_3"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_6"))
	bool b0l__CallFunc_IsValid_ReturnValue_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_7"))
	bool b0l__CallFunc_IsValid_ReturnValue_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_4"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_8"))
	bool b0l__CallFunc_IsValid_ReturnValue_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_5"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_9"))
	bool b0l__CallFunc_IsValid_ReturnValue_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die_4"))
	bool b0l__CallFunc_Judge_Life_die_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die_5"))
	bool b0l__CallFunc_Judge_Life_die_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_6"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_7"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_12"))
	bool b0l__CallFunc_IsValid_ReturnValue_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_13"))
	bool b0l__CallFunc_IsValid_ReturnValue_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die_6"))
	bool b0l__CallFunc_Judge_Life_die_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Judge_Life_die_7"))
	bool b0l__CallFunc_Judge_Life_die_7__pf;
	ABP_Grid_C__pf3410280870(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Grid__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Grid__pf_20(int32 bpp__EntryPoint__pf);
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
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_One_K2Node_InputKeyEvent_0"))
	virtual void bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_D539FED54EAD933A07E07EACFD15CDB7"))
	virtual void bpf__OnSuccess_D539FED54EAD933A07E07EACFD15CDB7__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_D539FED54EAD933A07E07EACFD15CDB7"))
	virtual void bpf__OnFail_D539FED54EAD933A07E07EACFD15CDB7__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_0BE09EC2415F25162CA546B0D1017AE7"))
	virtual void bpf__OnSuccess_0BE09EC2415F25162CA546B0D1017AE7__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_0BE09EC2415F25162CA546B0D1017AE7"))
	virtual void bpf__OnFail_0BE09EC2415F25162CA546B0D1017AE7__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_F99C41E34CB96AB93BDCB6A1CF83A0E5"))
	virtual void bpf__OnSuccess_F99C41E34CB96AB93BDCB6A1CF83A0E5__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_F99C41E34CB96AB93BDCB6A1CF83A0E5"))
	virtual void bpf__OnFail_F99C41E34CB96AB93BDCB6A1CF83A0E5__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_C8E2C3904C810C8C0ED204A16D8CF224"))
	virtual void bpf__OnSuccess_C8E2C3904C810C8C0ED204A16D8CF224__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_C8E2C3904C810C8C0ED204A16D8CF224"))
	virtual void bpf__OnFail_C8E2C3904C810C8C0ED204A16D8CF224__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_BEA92AAF4CD08BD443C5E09B57D1F361"))
	virtual void bpf__OnSuccess_BEA92AAF4CD08BD443C5E09B57D1F361__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_BEA92AAF4CD08BD443C5E09B57D1F361"))
	virtual void bpf__OnFail_BEA92AAF4CD08BD443C5E09B57D1F361__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_5AC60F1743B56B6A7ECF1B8EF5255AEE"))
	virtual void bpf__OnSuccess_5AC60F1743B56B6A7ECF1B8EF5255AEE__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_5AC60F1743B56B6A7ECF1B8EF5255AEE"))
	virtual void bpf__OnFail_5AC60F1743B56B6A7ECF1B8EF5255AEE__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_1E52789040FA80A1C3F0229690933EE4"))
	virtual void bpf__OnSuccess_1E52789040FA80A1C3F0229690933EE4__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_1E52789040FA80A1C3F0229690933EE4"))
	virtual void bpf__OnFail_1E52789040FA80A1C3F0229690933EE4__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_F24D833E4B02246E981ED8A33ABBBE38"))
	virtual void bpf__OnSuccess_F24D833E4B02246E981ED8A33ABBBE38__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_F24D833E4B02246E981ED8A33ABBBE38"))
	virtual void bpf__OnFail_F24D833E4B02246E981ED8A33ABBBE38__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnGrid"))
	virtual void bpf__SpawnGrid__pf(FVector bpp__CenterLocation__pf, FVector bpp__TileSize__pf, FIntPoint bpp__TileCount__pf, E__E_Grid_Shape__pf bpp__Shape__pf, bool bpp__UseEnvironment__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetShapeRowData"))
	virtual FS_Grid_Shape_Data__pf3764965557  bpf__GetShapeRowData__pf();
	UFUNCTION(BlueprintCallable, meta=(Tooltip="DeleteGrid", Category, OverrideNativeName="Delete Grid"))
	virtual void bpf__DeletexGrid__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Cal_Center&BottomLeftLocation"))
	virtual void bpf__Cal_CenterxBottomLeftLocation__pfN(/*out*/ FVector& bpp__CenterLocation__pf, /*out*/ FVector& bpp__BottomLeftLocation__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="RotationBasedOnGridIndex"))
	virtual void bpf__RotationBasedOnGridIndex__pf(FIntPoint bpp__GridIndex__pf, /*out*/ FRotator& bpp__Rptation__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="LocationBasedOnGridIndex"))
	virtual void bpf__LocationBasedOnGridIndex__pf(FIntPoint bpp__Grid_Index__pf, /*out*/ FVector& bpp__TransLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TraceForGround"))
	virtual void bpf__TraceForGround__pf(FVector bpp__InLocation__pf, /*out*/ FVector& bpp__OutLocation__pf, /*out*/ E__E_TileType__pf& bpp__TileType__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Add_Grid_Tile"))
	virtual void bpf__Add_Grid_Tile__pf(FS_Tile_Data__pf886517966 bpp__Data__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Get_MouseLocationOnGrid"))
	virtual void bpf__Get_MouseLocationOnGrid__pf(int32 bpp__PlayerIndex__pf, /*out*/ FVector& bpp__Location__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Get_TileIndexFromWorldLocation"))
	virtual void bpf__Get_TileIndexFromWorldLocation__pf(FVector bpp__Location__pf, /*out*/ FIntPoint& bpp__TileIndex__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Get_TileIndexOnCursor"))
	virtual void bpf__Get_TileIndexOnCursor__pf(int32 bpp__PlayerIndex__pf, /*out*/ FIntPoint& bpp__TileIndex__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Add_StateToTile"))
	virtual void bpf__Add_StateToTile__pf(FIntPoint bpp__Index__pf, E__E_TileState__pf bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Remove_StateFromTile"))
	virtual void bpf__Remove_StateFromTile__pf(FIntPoint bpp__Index__pf, E__E_TileState__pf bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Get_TileState"))
	virtual void bpf__Get_TileState__pf(FIntPoint bpp__Index__pf, /*out*/ TArray<E__E_TileState__pf>& bpp__States__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_Neighbor"))
	virtual void bpf__Get_Neighbor__pf(FIntPoint bpp__Index__pf, /*out*/ TArray<FIntPoint>& bpp__Neighbors__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Find Path"))
	virtual void bpf__FindxPath__pfT(FIntPoint bpp__Src__pf, FIntPoint bpp__Dst__pf, int32 bpp__StopSteps__pf, /*out*/ bool& bpp__IsPassable__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Refresh_Pre"))
	virtual void bpf__Refresh_Pre__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_NeighborsInSteps"))
	virtual void bpf__Get_NeighborsInSteps__pf(FIntPoint bpp__InTile__pf, int32 bpp__StopSteps__pf, /*out*/ TArray<FIntPoint>& bpp__Neighbors__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="默认", OverrideNativeName="Judge Life"))
	virtual void bpf__JudgexLife__pfT(Achesscharacter_C__pf772598429* bpp__target__pf, float bpp__damage__pf, /*out*/ bool& bpp__die__pf);
public:
};
