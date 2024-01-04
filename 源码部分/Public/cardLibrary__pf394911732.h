#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
class UObject;
class ABP_Grid_C__pf3410280870;
class Achesscharacter_C__pf772598429;
class UAIAsyncTaskBlueprintProxy;
class UTexture2D;
#include "cardLibrary__pf394911732.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Server/cardLibrary.cardLibrary_C", OverrideNativeName="cardLibrary_C"))
class UcardLibrary_C__pf394911732 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OAISimpleDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type , bpp__MovementResult__pf);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_163", Category="cardLibrary", OverrideNativeName="Button_163"))
	UButton* bpv__Button_163__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_282", Category="cardLibrary", OverrideNativeName="Button_282"))
	UButton* bpv__Button_282__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_422", Category="cardLibrary", OverrideNativeName="Button_422"))
	UButton* bpv__Button_422__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_567", Category="cardLibrary", OverrideNativeName="Button_567"))
	UButton* bpv__Button_567__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_659", Category="cardLibrary", OverrideNativeName="Button_659"))
	UButton* bpv__Button_659__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_219", Category="cardLibrary", OverrideNativeName="Image_219"))
	UImage* bpv__Image_219__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_317", Category="cardLibrary", OverrideNativeName="Image_317"))
	UImage* bpv__Image_317__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_417", Category="cardLibrary", OverrideNativeName="Image_417"))
	UImage* bpv__Image_417__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_524", Category="cardLibrary", OverrideNativeName="Image_524"))
	UImage* bpv__Image_524__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_620", Category="cardLibrary", OverrideNativeName="Image_620"))
	UImage* bpv__Image_620__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="BP Grid Mappp", Category="默认", MultiLine="true", OverrideNativeName="BP_GridMappp"))
	UObject* bpv__BP_GridMappp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="默认", MultiLine="true", OverrideNativeName="NewVar_0"))
	UObject* bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grid", Category="默认", MultiLine="true", OverrideNativeName="grid"))
	ABP_Grid_C__pf3410280870* bpv__grid__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ch 2", Category="默认", MultiLine="true", BlueprintPrivate="true", OverrideNativeName="ch2"))
	Achesscharacter_C__pf772598429* bpv__ch2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Photo Type 1", Category="默认", MultiLine="true", OverrideNativeName="photoType_1"))
	int32 bpv__photoType_1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Photo Type 2", Category="默认", MultiLine="true", OverrideNativeName="photoType_2"))
	int32 bpv__photoType_2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Photo Type 3", Category="默认", MultiLine="true", OverrideNativeName="photoType_3"))
	int32 bpv__photoType_3__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Photo Type 4", Category="默认", MultiLine="true", OverrideNativeName="photoType_4"))
	int32 bpv__photoType_4__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Photo Type 5", Category="默认", MultiLine="true", OverrideNativeName="photoType_5"))
	int32 bpv__photoType_5__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ch 1", Category="默认", MultiLine="true", OverrideNativeName="ch1"))
	Achesscharacter_C__pf772598429* bpv__ch1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ch 2 0", Category="默认", MultiLine="true", BlueprintPrivate="true", OverrideNativeName="ch2_0"))
	Achesscharacter_C__pf772598429* bpv__ch2_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ch 2 1", Category="默认", MultiLine="true", BlueprintPrivate="true", OverrideNativeName="ch2_1"))
	Achesscharacter_C__pf772598429* bpv__ch2_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_3"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_1"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_2"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_3"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_5"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Variable"))
	int32 b0l_____int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Variable_1"))
	int32 b0l_____int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess_1"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess_2"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess_3"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess_4"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_4"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetActorOfClass_ReturnValue_1"))
	Achesscharacter_C__pf772598429* b0l__CallFunc_GetActorOfClass_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_1"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FinishSpawningActor_ReturnValue"))
	Achesscharacter_C__pf772598429* b0l__CallFunc_FinishSpawningActor_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_4"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetActorOfClass_ReturnValue_2"))
	Achesscharacter_C__pf772598429* b0l__CallFunc_GetActorOfClass_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_IntPoint_5"))
	FIntPoint b0l__K2Node_MakeStruct_IntPoint_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_2"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_3"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FinishSpawningActor_ReturnValue_1"))
	Achesscharacter_C__pf772598429* b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FinishSpawningActor_ReturnValue_2"))
	Achesscharacter_C__pf772598429* b0l__CallFunc_FinishSpawningActor_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetActorOfClass_ReturnValue_3"))
	Achesscharacter_C__pf772598429* b0l__CallFunc_GetActorOfClass_ReturnValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_5"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Variable_2"))
	int32 b0l_____int_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_4"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocationBasedOnGridIndex_TransLocation_5"))
	FVector b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_1"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_2"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_1"))
	bool b0l__CallFunc_IsValid_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_2"))
	bool b0l__CallFunc_IsValid_ReturnValue_2__pf;
	UcardLibrary_C__pf394911732(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_cardLibrary__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_cardLibrary__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_cardLibrary__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_cardLibrary__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_cardLibrary__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_cardLibrary__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_cardLibrary__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_cardLibrary__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_cardLibrary__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_cardLibrary__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_cardLibrary__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_cardLibrary__pf_11(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="blue"))
	virtual void bpf__blue__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="red"))
	virtual void bpf__red__pf();
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="huang"))
	virtual void bpf__huang__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__charaterlibrary_Button_659_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__charaterlibrary_Button_659_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__charaterlibrary_Button_567_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__charaterlibrary_Button_567_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__charaterlibrary_Button_422_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__charaterlibrary_Button_422_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__charaterlibrary_Button_163_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__charaterlibrary_Button_163_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__charaterlibrary_Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__charaterlibrary_Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_B39B3A7C432E6E04860C8DBD6AC65AA0"))
	virtual void bpf__OnSuccess_B39B3A7C432E6E04860C8DBD6AC65AA0__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_B39B3A7C432E6E04860C8DBD6AC65AA0"))
	virtual void bpf__OnFail_B39B3A7C432E6E04860C8DBD6AC65AA0__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_6FDCEBE94EA6389D29A78DA673CCD3FF"))
	virtual void bpf__OnSuccess_6FDCEBE94EA6389D29A78DA673CCD3FF__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_6FDCEBE94EA6389D29A78DA673CCD3FF"))
	virtual void bpf__OnFail_6FDCEBE94EA6389D29A78DA673CCD3FF__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_E9185F5F4EB82DCB9441DCA0CB6B47E5"))
	virtual void bpf__OnSuccess_E9185F5F4EB82DCB9441DCA0CB6B47E5__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_E9185F5F4EB82DCB9441DCA0CB6B47E5"))
	virtual void bpf__OnFail_E9185F5F4EB82DCB9441DCA0CB6B47E5__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="randomGivePhoto"))
	virtual void bpf__randomGivePhoto__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="returnTexture"))
	virtual void bpf__returnTexture__pf(int32 bpp__type__pf, /*out*/ UTexture2D*& bpp__p1__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
