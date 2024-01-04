#include "NativizedAssets.h"
#include "cardLibrary__pf394911732.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "chesscharacter__pf772598429.h"
#include "BP_Grid__pf3410280870.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
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
#include "Runtime/Engine/Classes/Engine/Font.h"
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
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
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
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/NavigationSystem/Public/NavigationPath.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UcardLibrary_C__pf394911732::UcardLibrary_C__pf394911732(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Button_163__pf = nullptr;
	bpv__Button_282__pf = nullptr;
	bpv__Button_422__pf = nullptr;
	bpv__Button_567__pf = nullptr;
	bpv__Button_659__pf = nullptr;
	bpv__Image_219__pf = nullptr;
	bpv__Image_317__pf = nullptr;
	bpv__Image_417__pf = nullptr;
	bpv__Image_524__pf = nullptr;
	bpv__Image_620__pf = nullptr;
	bpv__BP_GridMappp__pf = nullptr;
	bpv__NewVar_0__pf = nullptr;
	bpv__grid__pf = nullptr;
	bpv__ch2__pf = nullptr;
	bpv__photoType_1__pf = 0;
	bpv__photoType_2__pf = 0;
	bpv__photoType_3__pf = 0;
	bpv__photoType_4__pf = 0;
	bpv__photoType_5__pf = 0;
	bpv__ch1__pf = nullptr;
	bpv__ch2_0__pf = nullptr;
	bpv__ch2_1__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UcardLibrary_C__pf394911732::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UcardLibrary_C__pf394911732::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Grid_C__pf3410280870::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(5);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 5);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Button_659"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__charaterlibrary_Button_659_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Button_567"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__charaterlibrary_Button_567_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Button_422"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__charaterlibrary_Button_422_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Button_163"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__charaterlibrary_Button_163_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Button_282"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__charaterlibrary_Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__7 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(1);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__9->LayoutData.Offsets.Left = -854.324036f;
	__Local__9->LayoutData.Offsets.Top = 259.459473f;
	__Local__9->LayoutData.Offsets.Right = 1621.521484f;
	__Local__9->LayoutData.Offsets.Bottom = 270.240234f;
	__Local__9->LayoutData.Anchors.Minimum = FVector2D(0.515278, 0.500000);
	__Local__9->LayoutData.Anchors.Maximum = FVector2D(0.515278, 0.500000);
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_45"), (EObjectFlags)0x00280008);
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(5);
	auto __Local__12 = NewObject<UHorizontalBoxSlot>(__Local__10, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__12->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UButton>(__Local__1, TEXT("Button_282"), (EObjectFlags)0x00280008);
	auto& __Local__14 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__13), UPanelWidget::__PPO__Slots() )));
	__Local__14 = TArray<UPanelSlot*> ();
	__Local__14.Reserve(1);
	auto __Local__15 = NewObject<UButtonSlot>(__Local__13, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__15->Parent = __Local__13;
	auto __Local__16 = NewObject<UImage>(__Local__1, TEXT("Image_219"), (EObjectFlags)0x00280008);
	__Local__16->Brush.ImageSize = FVector2D(690.000000, 935.000000);
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__14.Add(__Local__15);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__17 = NewObject<UHorizontalBoxSlot>(__Local__10, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__17->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__17->Parent = __Local__10;
	auto __Local__18 = NewObject<UButton>(__Local__1, TEXT("Button_163"), (EObjectFlags)0x00280008);
	auto& __Local__19 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__18), UPanelWidget::__PPO__Slots() )));
	__Local__19 = TArray<UPanelSlot*> ();
	__Local__19.Reserve(1);
	auto __Local__20 = NewObject<UButtonSlot>(__Local__18, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__20->Parent = __Local__18;
	auto __Local__21 = NewObject<UImage>(__Local__1, TEXT("Image_317"), (EObjectFlags)0x00280008);
	__Local__21->Brush.ImageSize = FVector2D(690.000000, 935.000000);
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__19.Add(__Local__20);
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__11.Add(__Local__17);
	auto __Local__22 = NewObject<UHorizontalBoxSlot>(__Local__10, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__22->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__22->Parent = __Local__10;
	auto __Local__23 = NewObject<UButton>(__Local__1, TEXT("Button_422"), (EObjectFlags)0x00280008);
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__23), UPanelWidget::__PPO__Slots() )));
	__Local__24 = TArray<UPanelSlot*> ();
	__Local__24.Reserve(1);
	auto __Local__25 = NewObject<UButtonSlot>(__Local__23, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__25->Parent = __Local__23;
	auto __Local__26 = NewObject<UImage>(__Local__1, TEXT("Image_417"), (EObjectFlags)0x00280008);
	__Local__26->Brush.ImageSize = FVector2D(426.000000, 380.000000);
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__24.Add(__Local__25);
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__11.Add(__Local__22);
	auto __Local__27 = NewObject<UHorizontalBoxSlot>(__Local__10, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__27->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__27->Parent = __Local__10;
	auto __Local__28 = NewObject<UButton>(__Local__1, TEXT("Button_567"), (EObjectFlags)0x00280008);
	auto& __Local__29 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__28), UPanelWidget::__PPO__Slots() )));
	__Local__29 = TArray<UPanelSlot*> ();
	__Local__29.Reserve(1);
	auto __Local__30 = NewObject<UButtonSlot>(__Local__28, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__30->Parent = __Local__28;
	auto __Local__31 = NewObject<UImage>(__Local__1, TEXT("Image_524"), (EObjectFlags)0x00280008);
	__Local__31->Brush.ImageSize = FVector2D(426.000000, 380.000000);
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__29.Add(__Local__30);
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__11.Add(__Local__27);
	auto __Local__32 = NewObject<UHorizontalBoxSlot>(__Local__10, TEXT("HorizontalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__32->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__32->Parent = __Local__10;
	auto __Local__33 = NewObject<UButton>(__Local__1, TEXT("Button_659"), (EObjectFlags)0x00280008);
	auto& __Local__34 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__33), UPanelWidget::__PPO__Slots() )));
	__Local__34 = TArray<UPanelSlot*> ();
	__Local__34.Reserve(1);
	auto __Local__35 = NewObject<UButtonSlot>(__Local__33, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__35->Parent = __Local__33;
	auto __Local__36 = NewObject<UImage>(__Local__1, TEXT("Image_620"), (EObjectFlags)0x00280008);
	__Local__36->Brush.ImageSize = FVector2D(426.000000, 380.000000);
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__34.Add(__Local__35);
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__11.Add(__Local__32);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	__Local__1->RootWidget = __Local__7;
}
PRAGMA_ENABLE_OPTIMIZATION
void UcardLibrary_C__pf394911732::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__37;
	SlotNames.Append(__Local__37);
}
void UcardLibrary_C__pf394911732::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__38;
	TArray<FDelegateRuntimeBinding>  __Local__39;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UcardLibrary_C__pf394911732::StaticClass())->MiscConvertedSubobjects[0]), __Local__38, __Local__39);
}
void UcardLibrary_C__pf394911732::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UcardLibrary_C__pf394911732::bpf__ExecuteUbergraph_cardLibrary__pf_0(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf(EForceInit::ForceInit);
	UClass* bpfv__CallFunc_GetObjectClass_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValidClass_ReturnValue_2__pf{};
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_1__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 25:
			{
				__StateStack.Push(28);
			}
		case 26:
			{
				if (!true)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 27:
			{
				if(::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf))
				{
					USkeletalMeshComponent*  __Local__40 = ((USkeletalMeshComponent*)nullptr);
					bpfv__CallFunc_dodamage_ReturnValue_1__pf = b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpf__dodamage__pf(b0l__CallFunc_GetActorOfClass_ReturnValue_1__pf, ((::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf), ACharacter::__PPO__Mesh() )))) : (__Local__40)));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(b0l_____int_Variable_2__pf, 1);
				b0l_____int_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
			}
		case 29:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_2__pf = UKismetMathLibrary::LessEqual_IntInt(b0l_____int_Variable_2__pf, 1000);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 25;
				break;
			}
		case 64:
			{
				__CurrentState = 65;
				break;
			}
		case 65:
			{
				b0l__K2Node_MakeStruct_IntPoint_5__pf.X = 1;
				b0l__K2Node_MakeStruct_IntPoint_5__pf.Y = 1;
				if(::IsValid(bpv__grid__pf))
				{
					bpv__grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_5__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(UcardLibrary_C__pf394911732::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 66:
			{
				b0l__K2Node_MakeStruct_IntPoint_5__pf.X = 1;
				b0l__K2Node_MakeStruct_IntPoint_5__pf.Y = 1;
				if(::IsValid(bpv__grid__pf))
				{
					bpv__grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_5__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf);
				b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf), ECastCheckedType::NullAllowed);
			}
		case 67:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(1.000000,1.000000,0.000000,1.000000));
				if(::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf);
				}
			}
		case 68:
			{
				b0l__CallFunc_GetActorOfClass_ReturnValue_1__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::GetActorOfClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(UcardLibrary_C__pf394911732::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed)), ECastCheckedType::NullAllowed);
			}
		case 69:
			{
				bpv__ch2__pf = b0l__CallFunc_GetActorOfClass_ReturnValue_1__pf;
			}
		case 70:
			{
				b0l__K2Node_MakeStruct_IntPoint_1__pf.X = 1;
				b0l__K2Node_MakeStruct_IntPoint_1__pf.Y = 1;
				if(::IsValid(bpv__grid__pf))
				{
					bpv__grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_1__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_4__pf);
				}
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf, b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_4__pf, b0l__CallFunc_GetActorOfClass_ReturnValue_1__pf, 5.000000, true);
			}
		case 71:
			{
				b0l__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_2__pf)
				{
					__CurrentState = 74;
					break;
				}
			}
		case 72:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_5__pf.BindUFunction(this,FName(TEXT("OnSuccess_E9185F5F4EB82DCB9441DCA0CB6B47E5")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_5__pf);
				}
			}
		case 73:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_4__pf.BindUFunction(this,FName(TEXT("OnFail_E9185F5F4EB82DCB9441DCA0CB6B47E5")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_4__pf);
				}
			}
		case 74:
			{
				bpfv__CallFunc_GetObjectClass_ReturnValue_2__pf = UGameplayStatics::GetObjectClass(bpv__ch2__pf);
				bpfv__CallFunc_IsValidClass_ReturnValue_2__pf = UKismetSystemLibrary::IsValidClass(bpfv__CallFunc_GetObjectClass_ReturnValue_2__pf);
				if (!bpfv__CallFunc_IsValidClass_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 75:
			{
				b0l_____int_Variable_2__pf = 0;
				__CurrentState = 29;
				break;
			}
		case 85:
			{
				__CurrentState = 86;
				break;
			}
		case 86:
			{
				b0l_____byte_Variable_2__pf = b0l__K2Node_CustomEvent_MovementResult_4__pf;
				__CurrentState = 74;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UcardLibrary_C__pf394911732::bpf__ExecuteUbergraph_cardLibrary__pf_1(int32 bpp__EntryPoint__pf)
{
	UClass* bpfv__CallFunc_GetObjectClass_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValidClass_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 3:
			{
				bpfv__CallFunc_GetObjectClass_ReturnValue__pf = UGameplayStatics::GetObjectClass(bpv__ch2__pf);
				bpfv__CallFunc_IsValidClass_ReturnValue__pf = UKismetSystemLibrary::IsValidClass(bpfv__CallFunc_GetObjectClass_ReturnValue__pf);
				if (!bpfv__CallFunc_IsValidClass_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				b0l_____int_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(b0l_____int_Variable__pf, 1000);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				__StateStack.Push(9);
			}
		case 7:
			{
				if (!true)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					USkeletalMeshComponent*  __Local__41 = ((USkeletalMeshComponent*)nullptr);
					bpfv__CallFunc_dodamage_ReturnValue__pf = b0l__CallFunc_FinishSpawningActor_ReturnValue__pf->bpf__dodamage__pf(b0l__CallFunc_GetActorOfClass_ReturnValue_2__pf, ((::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((b0l__CallFunc_FinishSpawningActor_ReturnValue__pf), ACharacter::__PPO__Mesh() )))) : (__Local__41)));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l_____int_Variable__pf, 1);
				b0l_____int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		case 10:
			{
				__CurrentState = 11;
				break;
			}
		case 11:
			{
				b0l_____byte_Variable__pf = b0l__K2Node_CustomEvent_MovementResult_2__pf;
				__CurrentState = 3;
				break;
			}
		case 76:
			{
				b0l__K2Node_MakeStruct_IntPoint_4__pf.X = 1;
				b0l__K2Node_MakeStruct_IntPoint_4__pf.Y = 1;
				if(::IsValid(bpv__grid__pf))
				{
					bpv__grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_4__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(UcardLibrary_C__pf394911732::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 77:
			{
				b0l__K2Node_MakeStruct_IntPoint_4__pf.X = 1;
				b0l__K2Node_MakeStruct_IntPoint_4__pf.Y = 1;
				if(::IsValid(bpv__grid__pf))
				{
					bpv__grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_4__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf);
				b0l__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 78:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(1.000000,0.223089,0.186603,1.000000));
				if(::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((b0l__CallFunc_FinishSpawningActor_ReturnValue__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((b0l__CallFunc_FinishSpawningActor_ReturnValue__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf);
				}
			}
		case 79:
			{
				b0l__CallFunc_GetActorOfClass_ReturnValue_2__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::GetActorOfClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(UcardLibrary_C__pf394911732::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed)), ECastCheckedType::NullAllowed);
			}
		case 80:
			{
				bpv__ch2__pf = b0l__CallFunc_GetActorOfClass_ReturnValue_2__pf;
			}
		case 81:
			{
				b0l__K2Node_MakeStruct_IntPoint_2__pf.X = 1;
				b0l__K2Node_MakeStruct_IntPoint_2__pf.Y = 1;
				if(::IsValid(bpv__grid__pf))
				{
					bpv__grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_2__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_5__pf);
				}
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, b0l__CallFunc_FinishSpawningActor_ReturnValue__pf, b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_5__pf, b0l__CallFunc_GetActorOfClass_ReturnValue_2__pf, 5.000000, true);
			}
		case 82:
			{
				b0l__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 83:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_1__pf.BindUFunction(this,FName(TEXT("OnSuccess_6FDCEBE94EA6389D29A78DA673CCD3FF")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_1__pf);
				}
			}
		case 84:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnFail_6FDCEBE94EA6389D29A78DA673CCD3FF")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
				__CurrentState = 3;
				break;
			}
		case 87:
			{
				__CurrentState = 76;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UcardLibrary_C__pf394911732::bpf__ExecuteUbergraph_cardLibrary__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 58:
			{
				__CurrentState = 59;
				break;
			}
		case 59:
			{
				if(::IsValid(bpv__Button_659__pf))
				{
					bpv__Button_659__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 60:
			{
				b0l__K2Node_SwitchInteger_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_5__pf, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_4__pf)
				{
					__CurrentState = 63;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_5__pf, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_4__pf)
				{
					__CurrentState = 62;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_5__pf, 2);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_4__pf)
				{
					__CurrentState = 61;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 61:
			{
				bpf__red__pf();
				__CurrentState = -1;
				break;
			}
		case 62:
			{
				bpf__blue__pf();
				__CurrentState = -1;
				break;
			}
		case 63:
			{
				bpf__huang__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UcardLibrary_C__pf394911732::bpf__ExecuteUbergraph_cardLibrary__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 52:
			{
				__CurrentState = 53;
				break;
			}
		case 53:
			{
				if(::IsValid(bpv__Button_567__pf))
				{
					bpv__Button_567__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 54:
			{
				b0l__K2Node_SwitchInteger_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_4__pf, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_3__pf)
				{
					__CurrentState = 57;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_4__pf, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_3__pf)
				{
					__CurrentState = 56;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_4__pf, 2);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_3__pf)
				{
					__CurrentState = 55;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 55:
			{
				bpf__red__pf();
				__CurrentState = -1;
				break;
			}
		case 56:
			{
				bpf__blue__pf();
				__CurrentState = -1;
				break;
			}
		case 57:
			{
				bpf__huang__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UcardLibrary_C__pf394911732::bpf__ExecuteUbergraph_cardLibrary__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 46:
			{
				__CurrentState = 47;
				break;
			}
		case 47:
			{
				if(::IsValid(bpv__Button_422__pf))
				{
					bpv__Button_422__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 48:
			{
				b0l__K2Node_SwitchInteger_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_3__pf, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_2__pf)
				{
					__CurrentState = 51;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_3__pf, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_2__pf)
				{
					__CurrentState = 50;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_3__pf, 2);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_2__pf)
				{
					__CurrentState = 49;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 49:
			{
				bpf__red__pf();
				__CurrentState = -1;
				break;
			}
		case 50:
			{
				bpf__blue__pf();
				__CurrentState = -1;
				break;
			}
		case 51:
			{
				bpf__huang__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UcardLibrary_C__pf394911732::bpf__ExecuteUbergraph_cardLibrary__pf_5(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 40:
			{
				__CurrentState = 41;
				break;
			}
		case 41:
			{
				if(::IsValid(bpv__Button_163__pf))
				{
					bpv__Button_163__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 42:
			{
				b0l__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_2__pf, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 45;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_2__pf, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 44;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_2__pf, 2);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 43;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 43:
			{
				bpf__red__pf();
				__CurrentState = -1;
				break;
			}
		case 44:
			{
				bpf__blue__pf();
				__CurrentState = -1;
				break;
			}
		case 45:
			{
				bpf__huang__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UcardLibrary_C__pf394911732::bpf__ExecuteUbergraph_cardLibrary__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 34:
			{
				__CurrentState = 35;
				break;
			}
		case 35:
			{
				if(::IsValid(bpv__Button_282__pf))
				{
					bpv__Button_282__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 36:
			{
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_1__pf, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 37;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_1__pf, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 38;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__photoType_1__pf, 2);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 39;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 37:
			{
				bpf__huang__pf();
				__CurrentState = -1;
				break;
			}
		case 38:
			{
				bpf__blue__pf();
				__CurrentState = -1;
				break;
			}
		case 39:
			{
				bpf__red__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UcardLibrary_C__pf394911732::bpf__ExecuteUbergraph_cardLibrary__pf_7(int32 bpp__EntryPoint__pf)
{
	UClass* bpfv__CallFunc_GetObjectClass_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValidClass_ReturnValue_1__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_dodamage_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 14:
			{
				bpfv__CallFunc_GetObjectClass_ReturnValue_1__pf = UGameplayStatics::GetObjectClass(bpv__ch2__pf);
				bpfv__CallFunc_IsValidClass_ReturnValue_1__pf = UKismetSystemLibrary::IsValidClass(bpfv__CallFunc_GetObjectClass_ReturnValue_1__pf);
				if (!bpfv__CallFunc_IsValidClass_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				b0l_____int_Variable_1__pf = 0;
			}
		case 16:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_IntInt(b0l_____int_Variable_1__pf, 1000);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				__StateStack.Push(20);
			}
		case 18:
			{
				if (!true)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 19:
			{
				if(::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_2__pf))
				{
					USkeletalMeshComponent*  __Local__42 = ((USkeletalMeshComponent*)nullptr);
					bpfv__CallFunc_dodamage_ReturnValue_2__pf = b0l__CallFunc_FinishSpawningActor_ReturnValue_2__pf->bpf__dodamage__pf(b0l__CallFunc_GetActorOfClass_ReturnValue_3__pf, ((::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_2__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((b0l__CallFunc_FinishSpawningActor_ReturnValue_2__pf), ACharacter::__PPO__Mesh() )))) : (__Local__42)));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(b0l_____int_Variable_1__pf, 1);
				b0l_____int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 16;
				break;
			}
		case 21:
			{
				__CurrentState = 22;
				break;
			}
		case 22:
			{
				b0l_____byte_Variable_1__pf = b0l__K2Node_CustomEvent_MovementResult__pf;
				__CurrentState = 14;
				break;
			}
		case 88:
			{
				b0l__K2Node_MakeStruct_IntPoint__pf.X = 1;
				b0l__K2Node_MakeStruct_IntPoint__pf.Y = 1;
				if(::IsValid(bpv__grid__pf))
				{
					bpv__grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(UcardLibrary_C__pf394911732::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 89:
			{
				b0l__K2Node_MakeStruct_IntPoint__pf.X = 1;
				b0l__K2Node_MakeStruct_IntPoint__pf.Y = 1;
				if(::IsValid(bpv__grid__pf))
				{
					bpv__grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
				b0l__CallFunc_FinishSpawningActor_ReturnValue_2__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf), ECastCheckedType::NullAllowed);
			}
		case 90:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(0.221843,0.334153,1.000000,1.000000));
				if(::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_2__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((b0l__CallFunc_FinishSpawningActor_ReturnValue_2__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((b0l__CallFunc_FinishSpawningActor_ReturnValue_2__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf);
				}
			}
		case 91:
			{
				b0l__CallFunc_GetActorOfClass_ReturnValue_3__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::GetActorOfClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(UcardLibrary_C__pf394911732::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed)), ECastCheckedType::NullAllowed);
			}
		case 92:
			{
				bpv__ch2__pf = b0l__CallFunc_GetActorOfClass_ReturnValue_3__pf;
			}
		case 93:
			{
				b0l__K2Node_MakeStruct_IntPoint_3__pf.X = 1;
				b0l__K2Node_MakeStruct_IntPoint_3__pf.Y = 1;
				if(::IsValid(bpv__grid__pf))
				{
					bpv__grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_3__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation__pf);
				}
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, b0l__CallFunc_FinishSpawningActor_ReturnValue_2__pf, b0l__CallFunc_LocationBasedOnGridIndex_TransLocation__pf, b0l__CallFunc_GetActorOfClass_ReturnValue_3__pf, 5.000000, true);
			}
		case 94:
			{
				b0l__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 95:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_3__pf.BindUFunction(this,FName(TEXT("OnSuccess_B39B3A7C432E6E04860C8DBD6AC65AA0")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_3__pf);
				}
			}
		case 96:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_2__pf.BindUFunction(this,FName(TEXT("OnFail_B39B3A7C432E6E04860C8DBD6AC65AA0")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_2__pf);
				}
				__CurrentState = 14;
				break;
			}
		case 97:
			{
				__CurrentState = 88;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UcardLibrary_C__pf394911732::bpf__ExecuteUbergraph_cardLibrary__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_2__pf = b0l__K2Node_CustomEvent_MovementResult_5__pf;
	return; //KCST_EndOfThread
}
void UcardLibrary_C__pf394911732::bpf__ExecuteUbergraph_cardLibrary__pf_9(int32 bpp__EntryPoint__pf)
{
	ABP_Grid_C__pf3410280870* bpfv__CallFunc_GetActorOfClass_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 30);
	// optimized KCST_UnconditionalGoto
	bpf__randomGivePhoto__pf();
	bpfv__CallFunc_GetActorOfClass_ReturnValue__pf = CastChecked<ABP_Grid_C__pf3410280870>(UGameplayStatics::GetActorOfClass(this, ABP_Grid_C__pf3410280870::StaticClass()), ECastCheckedType::NullAllowed);
	bpv__grid__pf = bpfv__CallFunc_GetActorOfClass_ReturnValue__pf;
	return; //KCST_EndOfThread
}
void UcardLibrary_C__pf394911732::bpf__ExecuteUbergraph_cardLibrary__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 12);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_1__pf = b0l__K2Node_CustomEvent_MovementResult_1__pf;
	return; //KCST_EndOfThread
}
void UcardLibrary_C__pf394911732::bpf__ExecuteUbergraph_cardLibrary__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable__pf = b0l__K2Node_CustomEvent_MovementResult_3__pf;
	return; //KCST_EndOfThread
}
void UcardLibrary_C__pf394911732::bpf__blue__pf()
{
	bpf__ExecuteUbergraph_cardLibrary__pf_7(97);
}
void UcardLibrary_C__pf394911732::bpf__red__pf()
{
	bpf__ExecuteUbergraph_cardLibrary__pf_1(87);
}
void UcardLibrary_C__pf394911732::bpf__huang__pf_Implementation()
{
	bpf__ExecuteUbergraph_cardLibrary__pf_0(64);
}
void UcardLibrary_C__pf394911732::bpf__BndEvt__charaterlibrary_Button_659_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_cardLibrary__pf_2(58);
}
void UcardLibrary_C__pf394911732::bpf__BndEvt__charaterlibrary_Button_567_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_cardLibrary__pf_3(52);
}
void UcardLibrary_C__pf394911732::bpf__BndEvt__charaterlibrary_Button_422_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_cardLibrary__pf_4(46);
}
void UcardLibrary_C__pf394911732::bpf__BndEvt__charaterlibrary_Button_163_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_cardLibrary__pf_5(40);
}
void UcardLibrary_C__pf394911732::bpf__BndEvt__charaterlibrary_Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_cardLibrary__pf_6(34);
}
void UcardLibrary_C__pf394911732::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_cardLibrary__pf_9(30);
}
void UcardLibrary_C__pf394911732::bpf__OnSuccess_B39B3A7C432E6E04860C8DBD6AC65AA0__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_cardLibrary__pf_7(21);
}
void UcardLibrary_C__pf394911732::bpf__OnFail_B39B3A7C432E6E04860C8DBD6AC65AA0__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_1__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_cardLibrary__pf_10(12);
}
void UcardLibrary_C__pf394911732::bpf__OnSuccess_6FDCEBE94EA6389D29A78DA673CCD3FF__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_2__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_cardLibrary__pf_1(10);
}
void UcardLibrary_C__pf394911732::bpf__OnFail_6FDCEBE94EA6389D29A78DA673CCD3FF__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_3__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_cardLibrary__pf_11(1);
}
void UcardLibrary_C__pf394911732::bpf__OnSuccess_E9185F5F4EB82DCB9441DCA0CB6B47E5__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_4__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_cardLibrary__pf_0(85);
}
void UcardLibrary_C__pf394911732::bpf__OnFail_E9185F5F4EB82DCB9441DCA0CB6B47E5__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_5__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_cardLibrary__pf_8(23);
}
void UcardLibrary_C__pf394911732::bpf__randomGivePhoto__pf()
{
	UTexture2D* bpfv__CallFunc_returnTexture_p1__pf{};
	UTexture2D* bpfv__CallFunc_returnTexture_p1_1__pf{};
	UTexture2D* bpfv__CallFunc_returnTexture_p1_2__pf{};
	UTexture2D* bpfv__CallFunc_returnTexture_p1_3__pf{};
	UTexture2D* bpfv__CallFunc_returnTexture_p1_4__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue_4__pf{};
	bpfv__CallFunc_RandomIntegerInRange_ReturnValue_4__pf = UKismetMathLibrary::RandomIntegerInRange(0, 2);
	bpv__photoType_1__pf = bpfv__CallFunc_RandomIntegerInRange_ReturnValue_4__pf;
	bpfv__CallFunc_RandomIntegerInRange_ReturnValue_3__pf = UKismetMathLibrary::RandomIntegerInRange(0, 2);
	bpv__photoType_2__pf = bpfv__CallFunc_RandomIntegerInRange_ReturnValue_3__pf;
	bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf = UKismetMathLibrary::RandomIntegerInRange(0, 2);
	bpv__photoType_3__pf = bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf;
	bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf = UKismetMathLibrary::RandomIntegerInRange(0, 2);
	bpv__photoType_4__pf = bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf;
	bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, 2);
	bpv__photoType_5__pf = bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf;
	bpf__returnTexture__pf(bpv__photoType_1__pf, /*out*/ bpfv__CallFunc_returnTexture_p1_2__pf);
	if(::IsValid(bpv__Image_219__pf))
	{
		bpv__Image_219__pf->SetBrushFromTexture(bpfv__CallFunc_returnTexture_p1_2__pf, false);
	}
	bpf__returnTexture__pf(bpv__photoType_2__pf, /*out*/ bpfv__CallFunc_returnTexture_p1_1__pf);
	if(::IsValid(bpv__Image_317__pf))
	{
		bpv__Image_317__pf->SetBrushFromTexture(bpfv__CallFunc_returnTexture_p1_1__pf, false);
	}
	bpf__returnTexture__pf(bpv__photoType_3__pf, /*out*/ bpfv__CallFunc_returnTexture_p1__pf);
	if(::IsValid(bpv__Image_417__pf))
	{
		bpv__Image_417__pf->SetBrushFromTexture(bpfv__CallFunc_returnTexture_p1__pf, false);
	}
	bpf__returnTexture__pf(bpv__photoType_4__pf, /*out*/ bpfv__CallFunc_returnTexture_p1_3__pf);
	if(::IsValid(bpv__Image_524__pf))
	{
		bpv__Image_524__pf->SetBrushFromTexture(bpfv__CallFunc_returnTexture_p1_3__pf, false);
	}
	bpf__returnTexture__pf(bpv__photoType_5__pf, /*out*/ bpfv__CallFunc_returnTexture_p1_4__pf);
	if(::IsValid(bpv__Image_620__pf))
	{
		bpv__Image_620__pf->SetBrushFromTexture(bpfv__CallFunc_returnTexture_p1_4__pf, false);
	}
}
void UcardLibrary_C__pf394911732::bpf__returnTexture__pf(int32 bpp__type__pf, /*out*/ UTexture2D*& bpp__p1__pf)
{
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__type__pf, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__type__pf, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__type__pf, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpp__p1__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UcardLibrary_C__pf394911732::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpp__p1__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UcardLibrary_C__pf394911732::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpp__p1__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UcardLibrary_C__pf394911732::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void UcardLibrary_C__pf394911732::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/AC/friendChess.friendChess_C 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/AC/enemyChess.enemyChess_C 
		{142, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/photo/佛耶戈.佛耶戈 
		{143, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/photo/卢锡安.卢锡安 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/photo/萨勒芬妮.萨勒芬妮 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UcardLibrary_C__pf394911732::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  enemyChess_C /Game/AC/enemyChess.Default__enemyChess_C 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AIModule.OAISimpleDelegate__DelegateSignature 
		{105, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/AIModule.EPathFollowingResult 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  friendChess_C /Game/AC/friendChess.Default__friendChess_C 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIAsyncTaskBlueprintProxy 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{40, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{26, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Maps/1.1 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstance 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
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
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionEnabled 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.InstancedStaticMeshComponent 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Blueprints/Core/Grid/Grid_Shapes/Square/SM_Grid_SquareFlat.SM_Grid_SquareFlat 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Blueprints/Core/Grid/Grid_Shapes/Square/MI_Grid_Flat_Square.MI_Grid_Flat_Square 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Core/Grid/BP_Grid.BP_Grid_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UcardLibrary_C__pf394911732
{
	FRegisterHelper__UcardLibrary_C__pf394911732()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Server/cardLibrary"), &UcardLibrary_C__pf394911732::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UcardLibrary_C__pf394911732 Instance;
};
FRegisterHelper__UcardLibrary_C__pf394911732 FRegisterHelper__UcardLibrary_C__pf394911732::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
