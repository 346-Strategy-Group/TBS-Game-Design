#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListByEnum.h"
#include "E_HeroAnimationWarrior__pf1448998623.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "BPI_HeroAnimation__pf1448998623.h"
#include "ABP_Warrior__pf3701246335.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Art/Heros/Warrior/ABP_Warrior.ABP_Warrior_C", OverrideNativeName="ABP_Warrior_C"))
class UABP_Warrior_C__pf3701246335 : public UAnimInstance, public IBPI_HeroAnimation_C
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_5"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_4"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_3"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_2"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByEnum"))
	FAnimNode_BlendListByEnum bpv__AnimGraphNode_BlendListByEnum__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_1"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Animation State", Category="默认", MultiLine="true", OverrideNativeName="AnimationState"))
	E__E_HeroAnimationWarrior__pf bpv__AnimationState__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_States"))
	E__E_HeroAnimationWarrior__pf b0l__K2Node_Event_States__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UABP_Warrior_C__pf3701246335(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_5();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_4();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_3();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_2();
	void __InitAnimNode__AnimGraphNode_BlendListByEnum();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_1();
	void __InitAnimNode__AnimGraphNode_SequencePlayer();
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_ABP_Warrior_0"))
	void bpf__ExecuteUbergraph_ABP_Warrior__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Warrior__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Warrior__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Warrior__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Warrior__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Warrior__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Warrior__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Warrior__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="Respawn"))
	virtual void bpf__Respawn__pf();
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="Dealth"))
	virtual void bpf__Dealth__pf();
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="Hit"))
	virtual void bpf__Hit__pf();
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="Attack"))
	virtual void bpf__Attack__pf();
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="Walk"))
	virtual void bpf__Walk__pf();
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="Idle"))
	virtual void bpf__Idle__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="SetHeroAnimationStates"))
	virtual void bpf__SetHeroAnimationStates__pf(E__E_HeroAnimationWarrior__pf bpp__States__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Warrior_AnimGraphNode_BlendListByEnum_EBB031E34BBEB0EAF5484FAD1CD70F13"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Warrior_AnimGraphNode_BlendListByEnum_EBB031E34BBEB0EAF5484FAD1CD70F13__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
