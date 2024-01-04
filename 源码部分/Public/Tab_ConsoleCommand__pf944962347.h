#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton_ConsoleCommand_C__pf530537768;
class UEditableText;
class UExpandableArea;
#include "Tab_ConsoleCommand__pf944962347.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/DebugMenu/Tabs/Tab_ConsoleCommand.Tab_ConsoleCommand_C", OverrideNativeName="Tab_ConsoleCommand_C"))
class UTab_ConsoleCommand_C__pf944962347 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_ConsoleCommand", Category="Tab_ConsoleCommand", OverrideNativeName="Button_ConsoleCommand"))
	UButton_ConsoleCommand_C__pf530537768* bpv__Button_ConsoleCommand__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_ConsoleCommand_0", Category="Tab_ConsoleCommand", OverrideNativeName="Button_ConsoleCommand_0"))
	UButton_ConsoleCommand_C__pf530537768* bpv__Button_ConsoleCommand_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_ConsoleCommand_1", Category="Tab_ConsoleCommand", OverrideNativeName="Button_ConsoleCommand_1"))
	UButton_ConsoleCommand_C__pf530537768* bpv__Button_ConsoleCommand_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_ConsoleCommand_2", Category="Tab_ConsoleCommand", OverrideNativeName="Button_ConsoleCommand_2"))
	UButton_ConsoleCommand_C__pf530537768* bpv__Button_ConsoleCommand_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_ConsoleCommand_3", Category="Tab_ConsoleCommand", OverrideNativeName="Button_ConsoleCommand_3"))
	UButton_ConsoleCommand_C__pf530537768* bpv__Button_ConsoleCommand_3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_ConsoleCommand_4", Category="Tab_ConsoleCommand", OverrideNativeName="Button_ConsoleCommand_4"))
	UButton_ConsoleCommand_C__pf530537768* bpv__Button_ConsoleCommand_4__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_ConsoleCommand_5", Category="Tab_ConsoleCommand", OverrideNativeName="Button_ConsoleCommand_5"))
	UButton_ConsoleCommand_C__pf530537768* bpv__Button_ConsoleCommand_5__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="EditableText_Console_command", Category="Tab_ConsoleCommand", OverrideNativeName="EditableText_Console_command"))
	UEditableText* bpv__EditableText_Console_command__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="EXArea_Console Command", Category="Tab_ConsoleCommand", OverrideNativeName="EXArea_ConsoleCommand"))
	UExpandableArea* bpv__EXArea_ConsoleCommand__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Text"))
	FText b0l__K2Node_ComponentBoundEvent_Text__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_CommitMethod"))
	TEnumAsByte<ETextCommit::Type> b0l__K2Node_ComponentBoundEvent_CommitMethod__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UTab_ConsoleCommand_C__pf944962347(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Tab_ConsoleCommand__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Tab_ConsoleCommand_EditableText_177_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Tab_ConsoleCommand_EditableText_177_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature__pf(FText const& bpp__Text__pf__const, ETextCommit::Type bpp__CommitMethod__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
