#include "NativizedAssets.h"
#include "Tab_Grid__pf944962347.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/ExpandableArea.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/ComboBoxString.h"
#include "SpinBox_Carema__pf530537768.h"
#include "SpinBox_Vector3D__pf530537768.h"
#include "SpinBox_Vector2D__pf530537768.h"
#include "Runtime/UMG/Public/Components/CheckBox.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "BP_Grid__pf3410280870.h"
#include "BP_LevelLoading__pf951265448.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/AudioMixer/Public/Quartz/QuartzSubsystem.h"
#include "Runtime/Engine/Public/Subsystems/WorldSubsystem.h"
#include "Runtime/Engine/Public/Subsystems/Subsystem.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "BP_Grid_Visual__pf3410280870.h"
#include "S_Tile_Data__pf886517966.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintMapLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "E_Grid_Shape__pf3764965557.h"
#include "E_TileType__pf886517966.h"
#include "E_TileState__pf886517966.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UTab_Grid_C__pf944962347::UTab_Grid_C__pf944962347(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__CheckBox_Bottom__pf = nullptr;
	bpv__CheckBox_Bounds__pf = nullptr;
	bpv__CheckBox_Center__pf = nullptr;
	bpv__CheckBox_HoveredTile__pf = nullptr;
	bpv__CheckBox_MouseLocation__pf = nullptr;
	bpv__CheckBox_UseEnviroment__pf = nullptr;
	bpv__ComboBoxString_Environment__pf = nullptr;
	bpv__ComboBoxString_Grid_Shape__pf = nullptr;
	bpv__EXArea_Grid__pf = nullptr;
	bpv__EXArea_Grid_1__pf = nullptr;
	bpv__EXArea_Grid_2__pf = nullptr;
	bpv__SpinBox_Location__pf = nullptr;
	bpv__SpinBox_Offset_From_Ground__pf = nullptr;
	bpv__SpinBox_Re_Ge_Delay__pf = nullptr;
	bpv__SpinBox_Tile_Count__pf = nullptr;
	bpv__SpinBox_Tile_Size__pf = nullptr;
	bpv__TextBlock_Bottom__pf = nullptr;
	bpv__TextBlock_Center__pf = nullptr;
	bpv__TextBlock_HoveredTile__pf = nullptr;
	bpv__TextBlock_MouseLocation__pf = nullptr;
	bpv__Grid__pf = nullptr;
	bpv__Selected_Shape__pf = ESelectInfo::Type::OnKeyPress;
	bpv__LevelLoading__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UTab_Grid_C__pf944962347::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UTab_Grid_C__pf944962347::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/Core/Grid/Utilities/E_TileType.E_TileType")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/Core/Grid/Utilities/E_TileState.E_TileState")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/Core/Grid/Grid_Shapes/E_Grid_Shape.E_Grid_Shape")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Grid_C__pf3410280870::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_LevelLoading_C__pf951265448::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USpinBox_Carema_C__pf530537768::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Grid_Visual_C__pf3410280870::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USpinBox_Vector3D_C__pf530537768::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USpinBox_Vector2D_C__pf530537768::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FS_Tile_Data__pf886517966();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FS_Tile_Data__pf886517966());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(7);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 7);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("CheckBox_UseEnviroment"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnCheckStateChanged"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Grid_CheckBox_UseEnviront_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("SpinBox_Offset_From_Ground"));
	__Local__3.DelegatePropertyName = FName(TEXT("on_Value_Changed"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Grid_SpinBox_Offset_From_Ground_K2Node_ComponentBoundEvent_5_on_Value_Changed__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("ComboBoxString_Environment"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnSelectionChanged"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Grid_ComboBoxString_Environment_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("ComboBoxString_Grid_Shape"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnSelectionChanged"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Grid_ComboBoxString_Grid_Shape_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("SpinBox_Tile_Size"));
	__Local__6.DelegatePropertyName = FName(TEXT("on_Value_Changed"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Grid_SpinBox_Tile_Size_K2Node_ComponentBoundEvent_2_on_Value_Changed__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("SpinBox_Tile_Count"));
	__Local__7.DelegatePropertyName = FName(TEXT("on_Value_Changed"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Grid_SpinBox_Tile_Count_K2Node_ComponentBoundEvent_1_on_Value_Changed__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("SpinBox_Location"));
	__Local__8.DelegatePropertyName = FName(TEXT("on_Value_Changed"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Grid_SpinBox_Location_K2Node_ComponentBoundEvent_0_on_Value_Changed__DelegateSignature"));
	auto __Local__9 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_0"), (EObjectFlags)0x00280008);
	auto& __Local__10 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__9), UPanelWidget::__PPO__Slots() )));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(3);
	auto __Local__11 = NewObject<UVerticalBoxSlot>(__Local__9, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<UBorder>(__Local__1, TEXT("Border_5"), (EObjectFlags)0x00280008);
	__Local__12->Padding.Left = 5.000000f;
	__Local__12->Padding.Top = 5.000000f;
	__Local__12->Padding.Right = 5.000000f;
	__Local__12->Padding.Bottom = 5.000000f;
	__Local__12->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(1);
	auto __Local__14 = NewObject<UBorderSlot>(__Local__12, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	auto& __Local__15 = (*(AccessPrivateProperty<FMargin >((__Local__14), UBorderSlot::__PPO__Padding() )));
	__Local__15.Left = 5.000000f;
	__Local__15.Top = 5.000000f;
	__Local__15.Right = 5.000000f;
	__Local__15.Bottom = 5.000000f;
	__Local__14->Parent = __Local__12;
	auto __Local__16 = NewObject<UExpandableArea>(__Local__1, TEXT("EXArea_Grid_2"), (EObjectFlags)0x00280008);
	__Local__16->bIsExpanded = true;
	auto& __Local__17 = (*(AccessPrivateProperty<UWidget* >((__Local__16), UExpandableArea::__PPO__HeaderContent() )));
	auto __Local__18 = NewObject<UBorder>(__Local__1, TEXT("Border_6"), (EObjectFlags)0x00280008);
	__Local__18->BrushColor = FLinearColor(0.048172, 0.048172, 0.048172, 1.000000);
	auto& __Local__19 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__18), UPanelWidget::__PPO__Slots() )));
	__Local__19 = TArray<UPanelSlot*> ();
	__Local__19.Reserve(1);
	auto __Local__20 = NewObject<UBorderSlot>(__Local__18, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	__Local__20->Parent = __Local__18;
	auto __Local__21 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_3"), (EObjectFlags)0x00280008);
	__Local__21->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"30B5637B4BF96994D194CE81CA15EA85\", \"Environment\")")	);
	auto& __Local__22 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__21->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__22 = FLinearColor(0.233333, 0.233333, 0.233333, 1.000000);
	__Local__21->Font.Size = 20;
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__19.Add(__Local__20);
	__Local__17 = __Local__18;
	auto& __Local__23 = (*(AccessPrivateProperty<UWidget* >((__Local__16), UExpandableArea::__PPO__BodyContent() )));
	auto __Local__24 = NewObject<UBorder>(__Local__1, TEXT("Border_7"), (EObjectFlags)0x00280008);
	__Local__24->Padding.Left = 5.000000f;
	__Local__24->Padding.Top = 5.000000f;
	__Local__24->Padding.Right = 5.000000f;
	__Local__24->Padding.Bottom = 5.000000f;
	__Local__24->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__25 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__24), UPanelWidget::__PPO__Slots() )));
	__Local__25 = TArray<UPanelSlot*> ();
	__Local__25.Reserve(1);
	auto __Local__26 = NewObject<UBorderSlot>(__Local__24, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	auto& __Local__27 = (*(AccessPrivateProperty<FMargin >((__Local__26), UBorderSlot::__PPO__Padding() )));
	__Local__27.Left = 5.000000f;
	__Local__27.Top = 5.000000f;
	__Local__27.Right = 5.000000f;
	__Local__27.Bottom = 5.000000f;
	__Local__26->Parent = __Local__24;
	auto __Local__28 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_1"), (EObjectFlags)0x00280008);
	auto& __Local__29 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__28), UPanelWidget::__PPO__Slots() )));
	__Local__29 = TArray<UPanelSlot*> ();
	__Local__29.Reserve(1);
	auto __Local__30 = NewObject<UVerticalBoxSlot>(__Local__28, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__30->Parent = __Local__28;
	auto __Local__31 = NewObject<UComboBoxString>(__Local__1, TEXT("ComboBoxString_Environment"), (EObjectFlags)0x00280008);
	auto& __Local__32 = (*(AccessPrivateProperty<TArray<FString> >((__Local__31), UComboBoxString::__PPO__DefaultOptions() )));
	__Local__32 = TArray<FString> ();
	__Local__32.Reserve(4);
	__Local__32.Add(FString(TEXT("None")));
	__Local__32.Add(FString(TEXT("L_Square")));
	__Local__32.Add(FString(TEXT("L_Hexagon")));
	__Local__32.Add(FString(TEXT("L_Triangle")));
	auto& __Local__33 = (*(AccessPrivateProperty<FString >((__Local__31), UComboBoxString::__PPO__SelectedOption() )));
	__Local__33 = FString(TEXT("L_Square"));
	auto& __Local__34 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__31->WidgetStyle.ComboButtonStyle.ButtonStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__34 = FLinearColor(0.112500, 0.112500, 0.112500, 1.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__31->WidgetStyle.ComboButtonStyle.ButtonStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__35 = FLinearColor(0.454167, 0.454167, 0.454167, 1.000000);
	__Local__31->Font.Size = 10;
	auto& __Local__36 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__31->ForegroundColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__36 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__29.Add(__Local__30);
	__Local__28->Slot = __Local__26;
	__Local__26->Content = __Local__28;
	__Local__25.Add(__Local__26);
	__Local__23 = __Local__24;
	__Local__16->Slot = __Local__14;
	__Local__16->bOverride_Cursor = true;
	__Local__16->Cursor = EMouseCursor::Type::Hand;
	__Local__14->Content = __Local__16;
	__Local__13.Add(__Local__14);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	auto __Local__37 = NewObject<UVerticalBoxSlot>(__Local__9, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__37->Parent = __Local__9;
	auto __Local__38 = NewObject<UBorder>(__Local__1, TEXT("Border_1"), (EObjectFlags)0x00280008);
	__Local__38->Padding.Left = 5.000000f;
	__Local__38->Padding.Top = 5.000000f;
	__Local__38->Padding.Right = 5.000000f;
	__Local__38->Padding.Bottom = 5.000000f;
	__Local__38->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__39 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__38), UPanelWidget::__PPO__Slots() )));
	__Local__39 = TArray<UPanelSlot*> ();
	__Local__39.Reserve(1);
	auto __Local__40 = NewObject<UBorderSlot>(__Local__38, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	auto& __Local__41 = (*(AccessPrivateProperty<FMargin >((__Local__40), UBorderSlot::__PPO__Padding() )));
	__Local__41.Left = 5.000000f;
	__Local__41.Top = 5.000000f;
	__Local__41.Right = 5.000000f;
	__Local__41.Bottom = 5.000000f;
	__Local__40->Parent = __Local__38;
	auto __Local__42 = NewObject<UExpandableArea>(__Local__1, TEXT("EXArea_Grid"), (EObjectFlags)0x00280008);
	__Local__42->bIsExpanded = true;
	auto& __Local__43 = (*(AccessPrivateProperty<UWidget* >((__Local__42), UExpandableArea::__PPO__HeaderContent() )));
	auto __Local__44 = NewObject<UBorder>(__Local__1, TEXT("Border_2"), (EObjectFlags)0x00280008);
	__Local__44->BrushColor = FLinearColor(0.048172, 0.048172, 0.048172, 1.000000);
	auto& __Local__45 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__44), UPanelWidget::__PPO__Slots() )));
	__Local__45 = TArray<UPanelSlot*> ();
	__Local__45.Reserve(1);
	auto __Local__46 = NewObject<UBorderSlot>(__Local__44, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	__Local__46->Parent = __Local__44;
	auto __Local__47 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_93"), (EObjectFlags)0x00280008);
	__Local__47->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"3D0F8AB64D0D7FD9A3B2298583952C56\", \"Grid Generation\")")	);
	auto& __Local__48 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__47->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__48 = FLinearColor(0.233333, 0.233333, 0.233333, 1.000000);
	__Local__47->Font.Size = 20;
	__Local__47->Slot = __Local__46;
	__Local__46->Content = __Local__47;
	__Local__45.Add(__Local__46);
	__Local__43 = __Local__44;
	auto& __Local__49 = (*(AccessPrivateProperty<UWidget* >((__Local__42), UExpandableArea::__PPO__BodyContent() )));
	auto __Local__50 = NewObject<UBorder>(__Local__1, TEXT("Border_0"), (EObjectFlags)0x00280008);
	__Local__50->Padding.Left = 5.000000f;
	__Local__50->Padding.Top = 5.000000f;
	__Local__50->Padding.Right = 5.000000f;
	__Local__50->Padding.Bottom = 5.000000f;
	__Local__50->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__51 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__50), UPanelWidget::__PPO__Slots() )));
	__Local__51 = TArray<UPanelSlot*> ();
	__Local__51.Reserve(1);
	auto __Local__52 = NewObject<UBorderSlot>(__Local__50, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	auto& __Local__53 = (*(AccessPrivateProperty<FMargin >((__Local__52), UBorderSlot::__PPO__Padding() )));
	__Local__53.Left = 5.000000f;
	__Local__53.Top = 5.000000f;
	__Local__53.Right = 5.000000f;
	__Local__53.Bottom = 5.000000f;
	__Local__52->Parent = __Local__50;
	auto __Local__54 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_114"), (EObjectFlags)0x00280008);
	auto& __Local__55 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__54), UPanelWidget::__PPO__Slots() )));
	__Local__55 = TArray<UPanelSlot*> ();
	__Local__55.Reserve(7);
	auto __Local__56 = NewObject<UVerticalBoxSlot>(__Local__54, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__56->Parent = __Local__54;
	auto __Local__57 = NewObject<UComboBoxString>(__Local__1, TEXT("ComboBoxString_Grid_Shape"), (EObjectFlags)0x00280008);
	auto& __Local__58 = (*(AccessPrivateProperty<TArray<FString> >((__Local__57), UComboBoxString::__PPO__DefaultOptions() )));
	__Local__58 = TArray<FString> ();
	__Local__58.Reserve(4);
	__Local__58.Add(FString(TEXT("None")));
	__Local__58.Add(FString(TEXT("Square")));
	__Local__58.Add(FString(TEXT("Hexagon")));
	__Local__58.Add(FString(TEXT("Triangle")));
	auto& __Local__59 = (*(AccessPrivateProperty<FString >((__Local__57), UComboBoxString::__PPO__SelectedOption() )));
	__Local__59 = FString(TEXT("Square"));
	auto& __Local__60 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__57->WidgetStyle.ComboButtonStyle.ButtonStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__60 = FLinearColor(0.112500, 0.112500, 0.112500, 1.000000);
	auto& __Local__61 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__57->WidgetStyle.ComboButtonStyle.ButtonStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__61 = FLinearColor(0.454167, 0.454167, 0.454167, 1.000000);
	__Local__57->Font.Size = 10;
	auto& __Local__62 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__57->ForegroundColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__62 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__55.Add(__Local__56);
	auto __Local__63 = NewObject<UVerticalBoxSlot>(__Local__54, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__63->Parent = __Local__54;
	auto __Local__64 = NewObject<USpinBox_Carema_C__pf530537768>(__Local__1, TEXT("SpinBox_Re_Ge_Delay"), (EObjectFlags)0x00280008);
	__Local__64->bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"D057500847B54C0A0B96C1875DDC84CE\", \"\u518d\u751f\u5ef6\u8fdf\uff1a\")")	);
	__Local__64->bpv__MinMax_Slider__pf = FVector2D(0.000000, 0.500000);
	__Local__64->bpv__MinMax_Value__pf = FVector2D(0.000000, 0.500000);
	__Local__64->bpv__Value__pf = 0.050000f;
	__Local__64->bpv__MinMax_FractDigts__pf = FVector2D(2.000000, 2.000000);
	__Local__64->bpv__xxxxxxxxxx__pf6CuoorYNul4uxruvQsIwtUaqF3ucip = false;
	__Local__64->bpv__xx__pfIwtUaq = 0.010000f;
	__Local__64->Slot = __Local__63;
	__Local__63->Content = __Local__64;
	__Local__55.Add(__Local__63);
	auto __Local__65 = NewObject<UVerticalBoxSlot>(__Local__54, TEXT("VerticalBoxSlot_8"), (EObjectFlags)0x00280008);
	__Local__65->Parent = __Local__54;
	auto __Local__66 = NewObject<USpinBox_Vector3D_C__pf530537768>(__Local__1, TEXT("SpinBox_Location"), (EObjectFlags)0x00280008);
	__Local__66->bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"19C2921D46699BBF58D1C3AFF8B79ECC\", \"\u4f4d\u7f6e\uff1a        \")")	);
	__Local__66->bpv__MinMax_Slider__pf = FVector2D(-1000.000000, 1000.000000);
	__Local__66->bpv__MinMax_Value__pf = FVector2D(-1000.000000, 1000.000000);
	__Local__66->bpv__MinMax_FractDigts__pf = FVector2D(1.000000, 1.000000);
	__Local__66->bpv__xx__pfIwtUaq = 10.000000f;
	__Local__66->Slot = __Local__65;
	__Local__65->Content = __Local__66;
	__Local__55.Add(__Local__65);
	auto __Local__67 = NewObject<UVerticalBoxSlot>(__Local__54, TEXT("VerticalBoxSlot_9"), (EObjectFlags)0x00280008);
	__Local__67->Parent = __Local__54;
	auto __Local__68 = NewObject<USpinBox_Vector2D_C__pf530537768>(__Local__1, TEXT("SpinBox_Tile_Count"), (EObjectFlags)0x00280008);
	__Local__68->bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"7621CAD84B59199B211516A5328432B4\", \"\u7f51\u683c\u6570\u91cf\uff1a\")")	);
	__Local__68->bpv__MinMax_Slider__pf = FVector2D(0.000000, 50.000000);
	__Local__68->bpv__MinMax_Value__pf = FVector2D(2.000000, 50.000000);
	__Local__68->bpv__Value__pf = FVector2D(20.000000, 20.000000);
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__55.Add(__Local__67);
	auto __Local__69 = NewObject<UVerticalBoxSlot>(__Local__54, TEXT("VerticalBoxSlot_10"), (EObjectFlags)0x00280008);
	__Local__69->Parent = __Local__54;
	auto __Local__70 = NewObject<USpinBox_Vector3D_C__pf530537768>(__Local__1, TEXT("SpinBox_Tile_Size"), (EObjectFlags)0x00280008);
	__Local__70->bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"03A165AC41FF071C430036B9285656F1\", \"\u7f51\u683c\u5927\u5c0f\uff1a\")")	);
	__Local__70->bpv__MinMax_Slider__pf = FVector2D(0.000000, 1000.000000);
	__Local__70->bpv__MinMax_Value__pf = FVector2D(50.000000, 400.000000);
	__Local__70->bpv__Value__pf = FVector(200.000000, 200.000000, 50.000000);
	__Local__70->bpv__xx__pfIwtUaq = 10.000000f;
	__Local__70->Slot = __Local__69;
	__Local__69->Content = __Local__70;
	__Local__55.Add(__Local__69);
	auto __Local__71 = NewObject<UVerticalBoxSlot>(__Local__54, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__71->Parent = __Local__54;
	auto __Local__72 = NewObject<USpinBox_Carema_C__pf530537768>(__Local__1, TEXT("SpinBox_Offset_From_Ground"), (EObjectFlags)0x00280008);
	__Local__72->bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"184344804EB65C5DADF119A88D1459BC\", \"\u4e0e\u5730\u9762\u7684\u8ddd\u79bb\uff1a\")")	);
	__Local__72->bpv__Value__pf = 2.000000f;
	__Local__72->bpv__MinMax_FractDigts__pf = FVector2D(1.000000, 1.000000);
	__Local__72->Slot = __Local__71;
	__Local__71->Content = __Local__72;
	__Local__55.Add(__Local__71);
	auto __Local__73 = NewObject<UVerticalBoxSlot>(__Local__54, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__73->Parent = __Local__54;
	auto __Local__74 = NewObject<UCheckBox>(__Local__1, TEXT("CheckBox_UseEnviroment"), (EObjectFlags)0x00280008);
	__Local__74->CheckedState = ECheckBoxState::Checked;
	auto& __Local__75 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__74), UPanelWidget::__PPO__Slots() )));
	__Local__75 = TArray<UPanelSlot*> ();
	__Local__75.Reserve(1);
	auto __Local__76 = NewObject<UPanelSlot>(__Local__74, TEXT("PanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__76->Parent = __Local__74;
	auto __Local__77 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_4"), (EObjectFlags)0x00280008);
	__Local__77->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"3676EBBC405D923484C148A7A6E9267B\", \"\u662f\u5426\u6839\u636e\u73af\u5883\u751f\u6210\u7f51\u683c\")")	);
	__Local__77->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__77->Font.Size = 10;
	__Local__77->Slot = __Local__76;
	__Local__76->Content = __Local__77;
	__Local__75.Add(__Local__76);
	__Local__74->Slot = __Local__73;
	__Local__73->Content = __Local__74;
	__Local__55.Add(__Local__73);
	__Local__54->Slot = __Local__52;
	__Local__52->Content = __Local__54;
	__Local__51.Add(__Local__52);
	__Local__49 = __Local__50;
	__Local__42->Slot = __Local__40;
	__Local__42->bOverride_Cursor = true;
	__Local__42->Cursor = EMouseCursor::Type::Hand;
	__Local__40->Content = __Local__42;
	__Local__39.Add(__Local__40);
	__Local__38->Slot = __Local__37;
	__Local__37->Content = __Local__38;
	__Local__10.Add(__Local__37);
	auto __Local__78 = NewObject<UVerticalBoxSlot>(__Local__9, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__78->Parent = __Local__9;
	auto __Local__79 = NewObject<UBorder>(__Local__1, TEXT("Border"), (EObjectFlags)0x00280008);
	__Local__79->Padding.Left = 5.000000f;
	__Local__79->Padding.Top = 5.000000f;
	__Local__79->Padding.Right = 5.000000f;
	__Local__79->Padding.Bottom = 5.000000f;
	__Local__79->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__80 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__79), UPanelWidget::__PPO__Slots() )));
	__Local__80 = TArray<UPanelSlot*> ();
	__Local__80.Reserve(1);
	auto __Local__81 = NewObject<UBorderSlot>(__Local__79, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	auto& __Local__82 = (*(AccessPrivateProperty<FMargin >((__Local__81), UBorderSlot::__PPO__Padding() )));
	__Local__82.Left = 5.000000f;
	__Local__82.Top = 5.000000f;
	__Local__82.Right = 5.000000f;
	__Local__82.Bottom = 5.000000f;
	__Local__81->Parent = __Local__79;
	auto __Local__83 = NewObject<UExpandableArea>(__Local__1, TEXT("EXArea_Grid_1"), (EObjectFlags)0x00280008);
	__Local__83->bIsExpanded = true;
	auto& __Local__84 = (*(AccessPrivateProperty<UWidget* >((__Local__83), UExpandableArea::__PPO__HeaderContent() )));
	auto __Local__85 = NewObject<UBorder>(__Local__1, TEXT("Border_3"), (EObjectFlags)0x00280008);
	__Local__85->BrushColor = FLinearColor(0.048172, 0.048172, 0.048172, 1.000000);
	auto& __Local__86 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__85), UPanelWidget::__PPO__Slots() )));
	__Local__86 = TArray<UPanelSlot*> ();
	__Local__86.Reserve(1);
	auto __Local__87 = NewObject<UBorderSlot>(__Local__85, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	__Local__87->Parent = __Local__85;
	auto __Local__88 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__88->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"36AE989E4A5A389581E5AFA0F65BCE8F\", \"Debug\")")	);
	auto& __Local__89 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__88->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__89 = FLinearColor(0.233333, 0.233333, 0.233333, 1.000000);
	__Local__88->Font.Size = 20;
	__Local__88->Slot = __Local__87;
	__Local__87->Content = __Local__88;
	__Local__86.Add(__Local__87);
	__Local__84 = __Local__85;
	auto& __Local__90 = (*(AccessPrivateProperty<UWidget* >((__Local__83), UExpandableArea::__PPO__BodyContent() )));
	auto __Local__91 = NewObject<UBorder>(__Local__1, TEXT("Border_4"), (EObjectFlags)0x00280008);
	__Local__91->Padding.Left = 5.000000f;
	__Local__91->Padding.Top = 5.000000f;
	__Local__91->Padding.Right = 5.000000f;
	__Local__91->Padding.Bottom = 5.000000f;
	__Local__91->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__92 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__91), UPanelWidget::__PPO__Slots() )));
	__Local__92 = TArray<UPanelSlot*> ();
	__Local__92.Reserve(1);
	auto __Local__93 = NewObject<UBorderSlot>(__Local__91, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	auto& __Local__94 = (*(AccessPrivateProperty<FMargin >((__Local__93), UBorderSlot::__PPO__Padding() )));
	__Local__94.Left = 5.000000f;
	__Local__94.Top = 5.000000f;
	__Local__94.Right = 5.000000f;
	__Local__94.Bottom = 5.000000f;
	__Local__93->Parent = __Local__91;
	auto __Local__95 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox"), (EObjectFlags)0x00280008);
	auto& __Local__96 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__95), UPanelWidget::__PPO__Slots() )));
	__Local__96 = TArray<UPanelSlot*> ();
	__Local__96.Reserve(6);
	auto __Local__97 = NewObject<UVerticalBoxSlot>(__Local__95, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__97->Parent = __Local__95;
	auto __Local__98 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_129"), (EObjectFlags)0x00280008);
	__Local__98->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"57705ED548CB5322C8E779A961F67D03\", \"Draw Lines:\")")	);
	__Local__98->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__98->Font.Size = 10;
	__Local__98->Slot = __Local__97;
	__Local__97->Content = __Local__98;
	__Local__96.Add(__Local__97);
	auto __Local__99 = NewObject<UVerticalBoxSlot>(__Local__95, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__99->Parent = __Local__95;
	auto __Local__100 = NewObject<UCheckBox>(__Local__1, TEXT("CheckBox_Bounds"), (EObjectFlags)0x00280008);
	auto& __Local__101 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__100), UPanelWidget::__PPO__Slots() )));
	__Local__101 = TArray<UPanelSlot*> ();
	__Local__101.Reserve(1);
	auto __Local__102 = NewObject<UPanelSlot>(__Local__100, TEXT("PanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__102->Parent = __Local__100;
	auto __Local__103 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_333"), (EObjectFlags)0x00280008);
	__Local__103->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"D75D63A74B7667F0880F09B3726DB1EF\", \"Bounds\")")	);
	__Local__103->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__103->Font.Size = 10;
	__Local__103->Slot = __Local__102;
	__Local__102->Content = __Local__103;
	__Local__101.Add(__Local__102);
	__Local__100->Slot = __Local__99;
	__Local__99->Content = __Local__100;
	__Local__96.Add(__Local__99);
	auto __Local__104 = NewObject<UVerticalBoxSlot>(__Local__95, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__104->Padding.Right = 50.000000f;
	__Local__104->Parent = __Local__95;
	auto __Local__105 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_0"), (EObjectFlags)0x00280008);
	auto& __Local__106 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__105), UPanelWidget::__PPO__Slots() )));
	__Local__106 = TArray<UPanelSlot*> ();
	__Local__106.Reserve(2);
	auto __Local__107 = NewObject<UHorizontalBoxSlot>(__Local__105, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__107->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__107->Parent = __Local__105;
	auto __Local__108 = NewObject<UCheckBox>(__Local__1, TEXT("CheckBox_Center"), (EObjectFlags)0x00280008);
	auto& __Local__109 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__108), UPanelWidget::__PPO__Slots() )));
	__Local__109 = TArray<UPanelSlot*> ();
	__Local__109.Reserve(1);
	auto __Local__110 = NewObject<UPanelSlot>(__Local__108, TEXT("PanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__110->Parent = __Local__108;
	auto __Local__111 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__111->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"E0CE16C746D2507BD3E28C890C3EB83E\", \"Center:\")")	);
	__Local__111->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__111->Font.Size = 10;
	__Local__111->Slot = __Local__110;
	__Local__110->Content = __Local__111;
	__Local__109.Add(__Local__110);
	__Local__108->Slot = __Local__107;
	__Local__107->Content = __Local__108;
	__Local__106.Add(__Local__107);
	auto __Local__112 = NewObject<UHorizontalBoxSlot>(__Local__105, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__112->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__112->Parent = __Local__105;
	auto __Local__113 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_Center"), (EObjectFlags)0x00280008);
	__Local__113->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"UMG\", \"TextBlockDefaultValue\", \"Text Block\")")	);
	__Local__113->Font.Size = 10;
	__Local__113->Slot = __Local__112;
	__Local__113->bIsVariable = true;
	__Local__112->Content = __Local__113;
	__Local__106.Add(__Local__112);
	__Local__105->Slot = __Local__104;
	__Local__104->Content = __Local__105;
	__Local__96.Add(__Local__104);
	auto __Local__114 = NewObject<UVerticalBoxSlot>(__Local__95, TEXT("VerticalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__114->Padding.Right = 50.000000f;
	__Local__114->Parent = __Local__95;
	auto __Local__115 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox"), (EObjectFlags)0x00280008);
	auto& __Local__116 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__115), UPanelWidget::__PPO__Slots() )));
	__Local__116 = TArray<UPanelSlot*> ();
	__Local__116.Reserve(2);
	auto __Local__117 = NewObject<UHorizontalBoxSlot>(__Local__115, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__117->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__117->Parent = __Local__115;
	auto __Local__118 = NewObject<UCheckBox>(__Local__1, TEXT("CheckBox_Bottom"), (EObjectFlags)0x00280008);
	auto& __Local__119 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__118), UPanelWidget::__PPO__Slots() )));
	__Local__119 = TArray<UPanelSlot*> ();
	__Local__119.Reserve(1);
	auto __Local__120 = NewObject<UPanelSlot>(__Local__118, TEXT("PanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__120->Parent = __Local__118;
	auto __Local__121 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__121->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"E5D71D2E49FCE7610F0CD6AEA1E32F3D\", \"Bottom:\")")	);
	__Local__121->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__121->Font.Size = 10;
	__Local__121->Slot = __Local__120;
	__Local__120->Content = __Local__121;
	__Local__119.Add(__Local__120);
	__Local__118->Slot = __Local__117;
	__Local__117->Content = __Local__118;
	__Local__116.Add(__Local__117);
	auto __Local__122 = NewObject<UHorizontalBoxSlot>(__Local__115, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__122->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__122->Parent = __Local__115;
	auto __Local__123 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_Bottom"), (EObjectFlags)0x00280008);
	__Local__123->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"1B97865D4422C6BDBD43958EEBAB5232\", \"x-9999 y-9999 z-9999\")")	);
	__Local__123->Font.Size = 10;
	__Local__123->Slot = __Local__122;
	__Local__123->bIsVariable = true;
	__Local__122->Content = __Local__123;
	__Local__116.Add(__Local__122);
	__Local__115->Slot = __Local__114;
	__Local__114->Content = __Local__115;
	__Local__96.Add(__Local__114);
	auto __Local__124 = NewObject<UVerticalBoxSlot>(__Local__95, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__124->Padding.Right = 50.000000f;
	__Local__124->Parent = __Local__95;
	auto __Local__125 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_1"), (EObjectFlags)0x00280008);
	auto& __Local__126 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__125), UPanelWidget::__PPO__Slots() )));
	__Local__126 = TArray<UPanelSlot*> ();
	__Local__126.Reserve(2);
	auto __Local__127 = NewObject<UHorizontalBoxSlot>(__Local__125, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__127->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__127->Parent = __Local__125;
	auto __Local__128 = NewObject<UCheckBox>(__Local__1, TEXT("CheckBox_MouseLocation"), (EObjectFlags)0x00280008);
	auto& __Local__129 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__128), UPanelWidget::__PPO__Slots() )));
	__Local__129 = TArray<UPanelSlot*> ();
	__Local__129.Reserve(1);
	auto __Local__130 = NewObject<UPanelSlot>(__Local__128, TEXT("PanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__130->Parent = __Local__128;
	auto __Local__131 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_5"), (EObjectFlags)0x00280008);
	__Local__131->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"E981529343EC4A05602B42B4386DB062\", \"\u9f20\u6807\u5750\u6807:\")")	);
	__Local__131->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__131->Font.Size = 10;
	__Local__131->Slot = __Local__130;
	__Local__130->Content = __Local__131;
	__Local__129.Add(__Local__130);
	__Local__128->Slot = __Local__127;
	__Local__127->Content = __Local__128;
	__Local__126.Add(__Local__127);
	auto __Local__132 = NewObject<UHorizontalBoxSlot>(__Local__125, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__132->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__132->Parent = __Local__125;
	auto __Local__133 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_MouseLocation"), (EObjectFlags)0x00280008);
	__Local__133->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"1B97865D4422C6BDBD43958EEBAB5232\", \"x-9999 y-9999 z-9999\")")	);
	__Local__133->Font.Size = 10;
	__Local__133->Slot = __Local__132;
	__Local__133->bIsVariable = true;
	__Local__132->Content = __Local__133;
	__Local__126.Add(__Local__132);
	__Local__125->Slot = __Local__124;
	__Local__124->Content = __Local__125;
	__Local__96.Add(__Local__124);
	auto __Local__134 = NewObject<UVerticalBoxSlot>(__Local__95, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__134->Padding.Right = 50.000000f;
	__Local__134->Parent = __Local__95;
	auto __Local__135 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_2"), (EObjectFlags)0x00280008);
	auto& __Local__136 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__135), UPanelWidget::__PPO__Slots() )));
	__Local__136 = TArray<UPanelSlot*> ();
	__Local__136.Reserve(2);
	auto __Local__137 = NewObject<UHorizontalBoxSlot>(__Local__135, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__137->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__137->Parent = __Local__135;
	auto __Local__138 = NewObject<UCheckBox>(__Local__1, TEXT("CheckBox_HoveredTile"), (EObjectFlags)0x00280008);
	auto& __Local__139 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__138), UPanelWidget::__PPO__Slots() )));
	__Local__139 = TArray<UPanelSlot*> ();
	__Local__139.Reserve(1);
	auto __Local__140 = NewObject<UPanelSlot>(__Local__138, TEXT("PanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__140->Parent = __Local__138;
	auto __Local__141 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_6"), (EObjectFlags)0x00280008);
	__Local__141->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"8ACE3DFD4E3239A71AB2D9972785434E\", \"\u7816\u5757\u5750\u6807:\")")	);
	__Local__141->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__141->Font.Size = 10;
	__Local__141->Slot = __Local__140;
	__Local__140->Content = __Local__141;
	__Local__139.Add(__Local__140);
	__Local__138->Slot = __Local__137;
	__Local__137->Content = __Local__138;
	__Local__136.Add(__Local__137);
	auto __Local__142 = NewObject<UHorizontalBoxSlot>(__Local__135, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__142->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__142->Parent = __Local__135;
	auto __Local__143 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_HoveredTile"), (EObjectFlags)0x00280008);
	__Local__143->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[BCF22A5E4329F3EDE8B66EA00B22C3C2]\", \"349769FF4F7AC7EDE8917A970CCC30FE\", \"x-9999 y-9999\")")	);
	__Local__143->Font.Size = 10;
	__Local__143->Slot = __Local__142;
	__Local__143->bIsVariable = true;
	__Local__142->Content = __Local__143;
	__Local__136.Add(__Local__142);
	__Local__135->Slot = __Local__134;
	__Local__134->Content = __Local__135;
	__Local__96.Add(__Local__134);
	__Local__95->Slot = __Local__93;
	__Local__93->Content = __Local__95;
	__Local__92.Add(__Local__93);
	__Local__90 = __Local__91;
	__Local__83->Slot = __Local__81;
	__Local__83->bOverride_Cursor = true;
	__Local__83->Cursor = EMouseCursor::Type::Hand;
	__Local__81->Content = __Local__83;
	__Local__80.Add(__Local__81);
	__Local__79->Slot = __Local__78;
	__Local__78->Content = __Local__79;
	__Local__10.Add(__Local__78);
	__Local__1->RootWidget = __Local__9;
}
PRAGMA_ENABLE_OPTIMIZATION
void UTab_Grid_C__pf944962347::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__144;
	SlotNames.Append(__Local__144);
}
void UTab_Grid_C__pf944962347::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__145;
	TArray<FDelegateRuntimeBinding>  __Local__146;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UTab_Grid_C__pf944962347::StaticClass())->MiscConvertedSubobjects[0]), __Local__145, __Local__146);
}
void UTab_Grid_C__pf944962347::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UTab_Grid_C__pf944962347::bpf__ExecuteUbergraph_Tab_Grid__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 30);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Grid__pf) && ::IsValid(bpv__Grid__pf->bpv__GridVisual__pf))
	{
		bpv__Grid__pf->bpv__GridVisual__pf->bpf__SetOffestFromGround__pf(b0l__K2Node_ComponentBoundEvent_Value__pf);
	}
	return; //KCST_EndOfThread
}
void UTab_Grid_C__pf944962347::bpf__ExecuteUbergraph_Tab_Grid__pf_1(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				__StateStack.Push(4);
			}
		case 3:
			{
				if (!b0l_____bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 11;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				if (!b0l_____bool_IsClosed_Variable__pf)
				{
					__CurrentState = 5;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				b0l_____bool_IsClosed_Variable__pf = true;
			}
		case 6:
			{
				float  __Local__147 = 0.000000;
				UKismetSystemLibrary::Delay(this, ((::IsValid(bpv__SpinBox_Re_Ge_Delay__pf)) ? (bpv__SpinBox_Re_Ge_Delay__pf->bpv__Value__pf) : (__Local__147)), FLatentActionInfo(7, 1720654960, TEXT("ExecuteUbergraph_Tab_Grid_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				__CurrentState = 8;
				break;
			}
		case 8:
			{
				bpf__Spawn_Grid__pf();
			}
		case 9:
			{
				b0l_____bool_IsClosed_Variable__pf = false;
			}
		case 10:
			{
				b0l_____bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				b0l_____bool_Has_Been_Initd_Variable__pf = true;
			}
		case 12:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				b0l_____bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				__CurrentState = 2;
				break;
			}
		case 25:
			{
				__CurrentState = 2;
				break;
			}
		case 26:
			{
				__CurrentState = 2;
				break;
			}
		case 27:
			{
				__CurrentState = 2;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UTab_Grid_C__pf944962347::bpf__ExecuteUbergraph_Tab_Grid__pf_2(int32 bpp__EntryPoint__pf)
{
	ABP_Grid_C__pf3410280870* bpfv__CallFunc_GetActorOfClass_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf{};
	ABP_LevelLoading_C__pf951265448* bpfv__CallFunc_GetActorOfClass_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 14:
			{
				__CurrentState = 15;
				break;
			}
		case 15:
			{
				bpf__Spawn_Grid__pf();
			}
		case 16:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("DrawDebugLines")));
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate__pf, 0.100000, true, 0.000000, 0.000000);
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				__CurrentState = 18;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_GetActorOfClass_ReturnValue__pf = CastChecked<ABP_Grid_C__pf3410280870>(UGameplayStatics::GetActorOfClass(this, ABP_Grid_C__pf3410280870::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 19:
			{
				bpv__Grid__pf = bpfv__CallFunc_GetActorOfClass_ReturnValue__pf;
			}
		case 20:
			{
				bpfv__CallFunc_GetActorOfClass_ReturnValue_1__pf = CastChecked<ABP_LevelLoading_C__pf951265448>(UGameplayStatics::GetActorOfClass(this, ABP_LevelLoading_C__pf951265448::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 21:
			{
				bpv__LevelLoading__pf = bpfv__CallFunc_GetActorOfClass_ReturnValue_1__pf;
			}
		case 22:
			{
				bpf__SetDefaultValue__pf();
			}
		case 23:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(14, 486968424, TEXT("ExecuteUbergraph_Tab_Grid_2"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UTab_Grid_C__pf944962347::bpf__ExecuteUbergraph_Tab_Grid__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 28);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__LevelLoading__pf))
	{
		bpv__LevelLoading__pf->bpf__Load_Level__pf(b0l__K2Node_ComponentBoundEvent_SelectedItem__pf, false);
	}
	return; //KCST_EndOfThread
}
void UTab_Grid_C__pf944962347::bpf__BndEvt__Tab_Grid_CheckBox_UseEnviront_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf)
{
	b0l__K2Node_ComponentBoundEvent_bIsChecked__pf = bpp__bIsChecked__pf;
	bpf__ExecuteUbergraph_Tab_Grid__pf_1(1);
}
void UTab_Grid_C__pf944962347::bpf__BndEvt__Tab_Grid_SpinBox_Offset_From_Ground_K2Node_ComponentBoundEvent_5_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_Tab_Grid__pf_0(30);
}
void UTab_Grid_C__pf944962347::bpf__BndEvt__Tab_Grid_ComboBoxString_Environment_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature__pf(const FString& bpp__SelectedItem__pf__const, ESelectInfo::Type bpp__SelectionType__pf)
{
	typedef FString  T__Local__150;
	T__Local__150& bpp__SelectedItem__pf = *const_cast<T__Local__150 *>(&bpp__SelectedItem__pf__const);
	b0l__K2Node_ComponentBoundEvent_SelectedItem__pf = bpp__SelectedItem__pf;
	b0l__K2Node_ComponentBoundEvent_SelectionType__pf = bpp__SelectionType__pf;
	bpf__ExecuteUbergraph_Tab_Grid__pf_3(28);
}
void UTab_Grid_C__pf944962347::bpf__BndEvt__Tab_Grid_ComboBoxString_Grid_Shape_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature__pf(const FString& bpp__SelectedItem__pf__const, ESelectInfo::Type bpp__SelectionType__pf)
{
	typedef FString  T__Local__151;
	T__Local__151& bpp__SelectedItem__pf = *const_cast<T__Local__151 *>(&bpp__SelectedItem__pf__const);
	b0l__K2Node_ComponentBoundEvent_SelectedItem_1__pf = bpp__SelectedItem__pf;
	b0l__K2Node_ComponentBoundEvent_SelectionType_1__pf = bpp__SelectionType__pf;
	bpf__ExecuteUbergraph_Tab_Grid__pf_1(27);
}
void UTab_Grid_C__pf944962347::bpf__BndEvt__Tab_Grid_SpinBox_Tile_Size_K2Node_ComponentBoundEvent_2_on_Value_Changed__DelegateSignature__pf(FVector bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value_1__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_Tab_Grid__pf_1(26);
}
void UTab_Grid_C__pf944962347::bpf__BndEvt__Tab_Grid_SpinBox_Tile_Count_K2Node_ComponentBoundEvent_1_on_Value_Changed__DelegateSignature__pf(FVector2D bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value_2__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_Tab_Grid__pf_1(25);
}
void UTab_Grid_C__pf944962347::bpf__BndEvt__Tab_Grid_SpinBox_Location_K2Node_ComponentBoundEvent_0_on_Value_Changed__DelegateSignature__pf(FVector bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value_3__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_Tab_Grid__pf_1(24);
}
void UTab_Grid_C__pf944962347::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Tab_Grid__pf_2(17);
}
void UTab_Grid_C__pf944962347::bpf__Spawn_Grid__pf()
{
	bool bpfv__CallFunc_IsChecked_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetSelectedIndex_ReturnValue__pf{};
	uint8 bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue__pf{};
	FIntPoint bpfv__CallFunc_Conv_Vector2DToIntPoint_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__ComboBoxString_Grid_Shape__pf))
				{
					bpfv__CallFunc_GetSelectedIndex_ReturnValue__pf = bpv__ComboBoxString_Grid_Shape__pf->UComboBoxString::GetSelectedIndex();
				}
				bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf = UKismetMathLibrary::Conv_IntToByte(bpfv__CallFunc_GetSelectedIndex_ReturnValue__pf);
				bpfv__CallFunc_GetValidValue_ReturnValue__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UTab_Grid_C__pf944962347::StaticClass())->ReferencedConvertedFields[2]), bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf);
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(bpfv__CallFunc_GetValidValue_ReturnValue__pf, static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator0));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__DeletexGrid__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				if(::IsValid(bpv__CheckBox_UseEnviroment__pf))
				{
					bpfv__CallFunc_IsChecked_ReturnValue__pf = bpv__CheckBox_UseEnviroment__pf->UCheckBox::IsChecked();
				}
				if(::IsValid(bpv__ComboBoxString_Grid_Shape__pf))
				{
					bpfv__CallFunc_GetSelectedIndex_ReturnValue__pf = bpv__ComboBoxString_Grid_Shape__pf->UComboBoxString::GetSelectedIndex();
				}
				bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf = UKismetMathLibrary::Conv_IntToByte(bpfv__CallFunc_GetSelectedIndex_ReturnValue__pf);
				bpfv__CallFunc_GetValidValue_ReturnValue__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UTab_Grid_C__pf944962347::StaticClass())->ReferencedConvertedFields[2]), bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf);
				FVector2D  __Local__152 = FVector2D(0.000000,0.000000);
				bpfv__CallFunc_Conv_Vector2DToIntPoint_ReturnValue__pf = UKismetMathLibrary::Conv_Vector2DToIntPoint(((::IsValid(bpv__SpinBox_Tile_Count__pf)) ? (bpv__SpinBox_Tile_Count__pf->bpv__Value__pf) : (__Local__152)));
				if(::IsValid(bpv__Grid__pf))
				{
					FVector  __Local__153 = FVector(0.000000,0.000000,0.000000);
					FVector  __Local__154 = FVector(0.000000,0.000000,0.000000);
					bpv__Grid__pf->bpf__SpawnGrid__pf(((::IsValid(bpv__SpinBox_Location__pf)) ? (bpv__SpinBox_Location__pf->bpv__Value__pf) : (__Local__153)), ((::IsValid(bpv__SpinBox_Tile_Size__pf)) ? (bpv__SpinBox_Tile_Size__pf->bpv__Value__pf) : (__Local__154)), bpfv__CallFunc_Conv_Vector2DToIntPoint_ReturnValue__pf, static_cast<E__E_Grid_Shape__pf>(bpfv__CallFunc_GetValidValue_ReturnValue__pf), bpfv__CallFunc_IsChecked_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UTab_Grid_C__pf944962347::bpf__SetDefaultValue__pf()
{
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue__pf(EForceInit::ForceInit);
	if(::IsValid(bpv__SpinBox_Location__pf))
	{
		FVector  __Local__155 = FVector(0.000000,0.000000,0.000000);
		bpv__SpinBox_Location__pf->bpf__Set_Value__pf(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridxCenterxLocation__pfTT) : (__Local__155)));
	}
	auto __Local__157 = FIntPoint(EForceInit::ForceInit);
	FIntPoint  __Local__156 = __Local__157;
	bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue__pf = UKismetMathLibrary::Conv_IntPointToVector2D(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridxTilexCount__pfTT) : (__Local__156)));
	if(::IsValid(bpv__SpinBox_Tile_Count__pf))
	{
		bpv__SpinBox_Tile_Count__pf->bpf__Set_Value__pf(bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue__pf);
	}
	if(::IsValid(bpv__SpinBox_Tile_Size__pf))
	{
		FVector  __Local__158 = FVector(0.000000,0.000000,0.000000);
		bpv__SpinBox_Tile_Size__pf->bpf__Set_Value__pf(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridxTilexSize__pfTT) : (__Local__158)));
	}
	E__E_Grid_Shape__pf  __Local__159 = E__E_Grid_Shape__pf::NewEnumerator0;
	bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(UTab_Grid_C__pf944962347::StaticClass())->ReferencedConvertedFields[2]), static_cast<uint8>(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridxShape__pfT) : (__Local__159))));
	if(::IsValid(bpv__ComboBoxString_Grid_Shape__pf))
	{
		bpv__ComboBoxString_Grid_Shape__pf->UComboBoxString::SetSelectedOption(bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf);
	}
	if(::IsValid(bpv__ComboBoxString_Environment__pf))
	{
		FString  __Local__160 = FString(TEXT(""));
		bpv__ComboBoxString_Environment__pf->UComboBoxString::SetSelectedOption(((::IsValid(bpv__LevelLoading__pf)) ? (bpv__LevelLoading__pf->bpv__Level__pf) : (__Local__160)));
	}
	if(::IsValid(bpv__SpinBox_Offset_From_Ground__pf))
	{
		float  __Local__161 = 0.000000;
		bpv__SpinBox_Offset_From_Ground__pf->bpf__Set_Value__pf(((::IsValid(bpv__Grid__pf) && ::IsValid(bpv__Grid__pf->bpv__GridVisual__pf)) ? (bpv__Grid__pf->bpv__GridVisual__pf->bpv__OffestFromGround__pf) : (__Local__161)));
	}
}
void UTab_Grid_C__pf944962347::bpf__DrawDebugLines__pf()
{
	bool bpfv__CallFunc_IsChecked_ReturnValue__pf{};
	FIntPoint bpfv__CallFunc_Get_TileIndexOnCursor_TileIndex__pf(EForceInit::ForceInit);
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntPointToString_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsChecked_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_Get_MouseLocationOnGrid_Location__pf(EForceInit::ForceInit);
	FText bpfv__CallFunc_Conv_VectorToText_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_VectorToText_ReturnValue_1__pf{};
	FText bpfv__CallFunc_Conv_VectorToText_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsChecked_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsChecked_ReturnValue_3__pf{};
	bool bpfv__CallFunc_IsChecked_ReturnValue_4__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(8);
			}
		case 2:
			{
				FVector  __Local__162 = FVector(0.000000,0.000000,0.000000);
				bpfv__CallFunc_Conv_VectorToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_VectorToText(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridxCenterxLocation__pfTT) : (__Local__162)));
				if(::IsValid(bpv__TextBlock_Center__pf))
				{
					bpv__TextBlock_Center__pf->SetText(bpfv__CallFunc_Conv_VectorToText_ReturnValue_1__pf);
				}
			}
		case 3:
			{
				FVector  __Local__163 = FVector(0.000000,0.000000,0.000000);
				bpfv__CallFunc_Conv_VectorToText_ReturnValue_2__pf = UKismetTextLibrary::Conv_VectorToText(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridLeftBottomLocation__pf) : (__Local__163)));
				if(::IsValid(bpv__TextBlock_Bottom__pf))
				{
					bpv__TextBlock_Bottom__pf->SetText(bpfv__CallFunc_Conv_VectorToText_ReturnValue_2__pf);
				}
			}
		case 4:
			{
				__StateStack.Push(20);
				__StateStack.Push(18);
			}
		case 5:
			{
				if(::IsValid(bpv__CheckBox_Center__pf))
				{
					bpfv__CallFunc_IsChecked_ReturnValue_4__pf = bpv__CheckBox_Center__pf->UCheckBox::IsChecked();
				}
				if (!bpfv__CallFunc_IsChecked_ReturnValue_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				FVector  __Local__164 = FVector(0.000000,0.000000,0.000000);
				UKismetSystemLibrary::DrawDebugSphere(this, ((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridxCenterxLocation__pfTT) : (__Local__164)), 100.000000, 3, FLinearColor(0.000000,0.948571,1.000000,1.000000), 0.100000, 10.000000);
			}
		case 7:
			{
				FVector  __Local__165 = FVector(0.000000,0.000000,0.000000);
				UKismetSystemLibrary::DrawDebugSphere(this, ((::IsValid(bpv__SpinBox_Location__pf)) ? (bpv__SpinBox_Location__pf->bpv__Value__pf) : (__Local__165)), 100.000000, 3, FLinearColor(1.000000,0.103195,0.023521,1.000000), 0.100000, 10.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				__StateStack.Push(13);
			}
		case 9:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Get_MouseLocationOnGrid__pf(0, /*out*/ bpfv__CallFunc_Get_MouseLocationOnGrid_Location__pf);
				}
			}
		case 10:
			{
				bpfv__CallFunc_Conv_VectorToText_ReturnValue__pf = UKismetTextLibrary::Conv_VectorToText(bpfv__CallFunc_Get_MouseLocationOnGrid_Location__pf);
				if(::IsValid(bpv__TextBlock_MouseLocation__pf))
				{
					bpv__TextBlock_MouseLocation__pf->SetText(bpfv__CallFunc_Conv_VectorToText_ReturnValue__pf);
				}
			}
		case 11:
			{
				if(::IsValid(bpv__CheckBox_MouseLocation__pf))
				{
					bpfv__CallFunc_IsChecked_ReturnValue_1__pf = bpv__CheckBox_MouseLocation__pf->UCheckBox::IsChecked();
				}
				if (!bpfv__CallFunc_IsChecked_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				UKismetSystemLibrary::DrawDebugSphere(this, bpfv__CallFunc_Get_MouseLocationOnGrid_Location__pf, 15.000000, 5, FLinearColor(1.000000,0.863902,0.000000,1.000000), 0.100000, 5.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Get_TileIndexOnCursor__pf(0, /*out*/ bpfv__CallFunc_Get_TileIndexOnCursor_TileIndex__pf);
				}
			}
		case 14:
			{
				bpfv__CallFunc_Conv_IntPointToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntPointToString(bpfv__CallFunc_Get_TileIndexOnCursor_TileIndex__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Conv_IntPointToString_ReturnValue__pf);
				if(::IsValid(bpv__TextBlock_HoveredTile__pf))
				{
					bpv__TextBlock_HoveredTile__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 15:
			{
				if(::IsValid(bpv__CheckBox_HoveredTile__pf))
				{
					bpfv__CallFunc_IsChecked_ReturnValue__pf = bpv__CheckBox_HoveredTile__pf->UCheckBox::IsChecked();
				}
				if (!bpfv__CallFunc_IsChecked_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				TMap<FIntPoint,FS_Tile_Data__pf886517966>  __Local__166 = {};
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridTiles__pf) : (__Local__166)), bpfv__CallFunc_Get_TileIndexOnCursor_TileIndex__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				if (!bpfv__CallFunc_Map_Find_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				TMap<FIntPoint,FS_Tile_Data__pf886517966>  __Local__167 = {};
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridTiles__pf) : (__Local__167)), bpfv__CallFunc_Get_TileIndexOnCursor_TileIndex__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_Map_Find_Value__pf.bpv__Transform_8_5DA78643471C62D3691412BB7714ED33__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				UKismetSystemLibrary::DrawDebugBox(this, bpfv__CallFunc_BreakTransform_Location__pf, FVector(35.000000,35.000000,5.000000), FLinearColor(0.500000,0.000000,0.455740,1.000000), FRotator(0.000000,0.000000,0.000000), 0.100000, 5.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				if(::IsValid(bpv__CheckBox_Bottom__pf))
				{
					bpfv__CallFunc_IsChecked_ReturnValue_3__pf = bpv__CheckBox_Bottom__pf->UCheckBox::IsChecked();
				}
				if (!bpfv__CallFunc_IsChecked_ReturnValue_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 19:
			{
				FVector  __Local__168 = FVector(0.000000,0.000000,0.000000);
				UKismetSystemLibrary::DrawDebugSphere(this, ((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridLeftBottomLocation__pf) : (__Local__168)), 100.000000, 3, FLinearColor(0.023290,1.000000,0.000000,1.000000), 0.100000, 10.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				if(::IsValid(bpv__CheckBox_Bounds__pf))
				{
					bpfv__CallFunc_IsChecked_ReturnValue_2__pf = bpv__CheckBox_Bounds__pf->UCheckBox::IsChecked();
				}
				if (!bpfv__CallFunc_IsChecked_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 21:
			{
				FVector  __Local__169 = FVector(0.000000,0.000000,0.000000);
				FVector  __Local__170 = FVector(0.000000,0.000000,0.000000);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridxCenterxLocation__pfTT) : (__Local__169)), ((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridLeftBottomLocation__pf) : (__Local__170)));
				FVector  __Local__171 = FVector(0.000000,0.000000,0.000000);
				UKismetSystemLibrary::DrawDebugBox(this, ((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridxCenterxLocation__pfTT) : (__Local__171)), bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf, FLinearColor(0.908333,0.734578,0.000000,1.000000), FRotator(0.000000,0.000000,0.000000), 0.100000, 10.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void UTab_Grid_C__pf944962347::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UTab_Grid_C__pf944962347::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{124, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESelectInfo 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{125, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CheckBox 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{126, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ComboBoxString 
		{26, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{127, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ExpandableArea 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.SpinBox 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstance 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/AIModule.EPathFollowingResult 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AIModule.OAISimpleDelegate__DelegateSignature 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/AC/friendChess.friendChess_C 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  friendChess_C /Game/AC/friendChess.Default__friendChess_C 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/AC/enemyChess.enemyChess_C 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  enemyChess_C /Game/AC/enemyChess.Default__enemyChess_C 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIAsyncTaskBlueprintProxy 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Maps/1.1 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/Blueprints/Core/Grid/Grid_Shapes/DT_Grid_Shape_Data.DT_Grid_Shape_Data 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Avatar/Animations/DSword/AS_DSword_Run_Eqip.AS_DSword_Run_Eqip 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Avatar/Character/Mesh/SK_Mannequin.SK_Mannequin 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.FloatingPawnMovement 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/moveTest/robotTestController.robotTestController_C 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  robotTestController_C /Game/moveTest/robotTestController.Default__robotTestController_C 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Meshes/Grids/SM_Grid_Square.SM_Grid_Square 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Blueprints/Core/Grid/Grid_Shapes/M_Grid_Flat.M_Grid_Flat 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/UI/M_HPbar.M_HPbar 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/UI/manamet.manamet 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Avatar/Animations/DSword/AM_DSword_Attack_05.AM_DSword_Attack_05 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionEnabled 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LevelStreaming 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.InstancedStaticMeshComponent 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Blueprints/Core/Grid/Grid_Shapes/Square/SM_Grid_SquareFlat.SM_Grid_SquareFlat 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Blueprints/Core/Grid/Grid_Shapes/Square/MI_Grid_Flat_Square.MI_Grid_Flat_Square 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Core/Grid/BP_Grid.BP_Grid_C 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Core/LevelLoading/BP_LevelLoading.BP_LevelLoading_C 
		{129, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Blueprints/DebugMenu/Widgets/SpinBox_Carema.SpinBox_Carema_C 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Core/Grid/BP_Grid_Visual.BP_Grid_Visual_C 
		{130, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Blueprints/DebugMenu/Widgets/SpinBox_Vector3D.SpinBox_Vector3D_C 
		{131, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Blueprints/DebugMenu/Widgets/SpinBox_Vector2D.SpinBox_Vector2D_C 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Blueprints/Core/Grid/Utilities/S_Tile_Data.S_Tile_Data 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Core/Grid/Utilities/E_TileType.E_TileType 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Core/Grid/Utilities/E_TileState.E_TileState 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Core/Grid/Grid_Shapes/E_Grid_Shape.E_Grid_Shape 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UTab_Grid_C__pf944962347
{
	FRegisterHelper__UTab_Grid_C__pf944962347()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/DebugMenu/Tabs/Tab_Grid"), &UTab_Grid_C__pf944962347::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UTab_Grid_C__pf944962347 Instance;
};
FRegisterHelper__UTab_Grid_C__pf944962347 FRegisterHelper__UTab_Grid_C__pf944962347::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
