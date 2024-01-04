#include "NativizedAssets.h"
#include "BP_SimpleWaterVolume__pf3292395140.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
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
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
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
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
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
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/Components/PostProcessComponent.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PostProcessVolume.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_SimpleWaterVolume_C__pf3292395140::ABP_SimpleWaterVolume_C__pf3292395140(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__WaterSurface__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WaterSurface"));
	bpv__WaterVolume__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WaterVolume"));
	bpv__PPV_Underwater__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("PPV_Underwater"));
	bpv__PP_Underwater__pf = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PP_Underwater"));
	bpv__WaterCaustics__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("WaterCaustics"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__DefaultSceneRoot__pf), false, 0));
	bpv__WaterSurface__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WaterSurface__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__WaterSurface__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_SimpleWaterVolume_C__pf3292395140::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__WaterSurface__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__WaterSurface__pf->OverrideMaterials.Reserve(1);
	bpv__WaterSurface__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_SimpleWaterVolume_C__pf3292395140::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__WaterSurface__pf->CastShadow = false;
	bpv__WaterSurface__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__WaterSurface__pf), true, 0));
	bpv__WaterVolume__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WaterVolume__pf->AttachToComponent(bpv__WaterSurface__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__3 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__WaterVolume__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__3 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_SimpleWaterVolume_C__pf3292395140::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__WaterVolume__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__WaterVolume__pf->OverrideMaterials.Reserve(1);
	bpv__WaterVolume__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_SimpleWaterVolume_C__pf3292395140::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__WaterVolume__pf->CastShadow = false;
	bpv__WaterVolume__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__WaterVolume__pf->bHiddenInGame = true;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__WaterVolume__pf), true, 0));
	bpv__PPV_Underwater__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PPV_Underwater__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__4 = (*(AccessPrivateProperty<FVector >((bpv__PPV_Underwater__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__4 = FVector(50.000000, 50.000000, 50.000000);
	bpv__PPV_Underwater__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__PPV_Underwater__pf->ShapeColor = FColor(0, 223, 201, 255);
	bpv__PPV_Underwater__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__PPV_Underwater__pf), true, 0));
	bpv__PP_Underwater__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PP_Underwater__pf->AttachToComponent(bpv__PPV_Underwater__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PP_Underwater__pf->BlendRadius = 0.000000f;
	bpv__PP_Underwater__pf->bUnbound = false;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__PP_Underwater__pf), false, 0));
	bpv__WaterCaustics__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WaterCaustics__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__5 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__WaterCaustics__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__5 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_SimpleWaterVolume_C__pf3292395140::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__WaterCaustics__pf->FadeScreenSize = 0.100000f;
	bpv__WaterCaustics__pf->DecalSize = FVector(50.000000, 50.000000, 50.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__WaterCaustics__pf), false, 0));
	bpv__Extent__pf = FVector(100.000000, 100.000000, 0.000000);
	bpv__Depth__pf = 500.000000f;
	bpv__DMI_Water__pf = nullptr;
	bpv__DMI_Underwater__pf = nullptr;
	bpv__DMI_Caustics__pf = nullptr;
	bpv__WaterMaterial__pf = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_SimpleWaterVolume_C__pf3292395140::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__AbsorptionColor__pf = FLinearColor(1.000000, 0.600000, 0.600000, 1.000000);
	bpv__ScatteringColor__pf = FLinearColor(0.061903, 0.532550, 0.848958, 1.000000);
	bpv__WaterScattering__pf = 0.100000f;
	bpv__NearClipPlane__pf = 10.000000f;
	bpv__RenderUnderwater__pf = true;
	bpv__UnderwaterMaterial__pf = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_SimpleWaterVolume_C__pf3292395140::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__FogTint__pf = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__UnderWaterFogDensity__pf = 1536.000000f;
	bpv__NumOfWaves__pf = 3;
	bpv__WaveOpacity__pf = 0.350000f;
	bpv__WaveDistance__pf = 150.000000f;
	bpv__WaveSpeed__pf = 0.500000f;
	bpv__EnableCaustics__pf = true;
	bpv__CausticsMaterial__pf = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_SimpleWaterVolume_C__pf3292395140::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__CausticsIntensity__pf = 0.500000f;
	bpv__CausticsTillingSize__pf = 2048.000000f;
	bpv__WaterColorDarkness__pf = 5.000000f;
	bpv__WaterTillingSize__pf = 2.000000f;
	bpv__NormalIntensity__pf = 0.200000f;
	bpv__CausticsDistortionSpeed__pf = 0.330000f;
	bpv__DMI_Volume__pf = nullptr;
	PrimaryActorTick.bStartWithTickEnabled = false;
	auto& __Local__6 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__6 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_SimpleWaterVolume_C__pf3292395140::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WaterSurface__pf)
	{
		bpv__WaterSurface__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WaterVolume__pf)
	{
		bpv__WaterVolume__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PPV_Underwater__pf)
	{
		bpv__PPV_Underwater__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PP_Underwater__pf)
	{
		bpv__PP_Underwater__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WaterCaustics__pf)
	{
		bpv__WaterCaustics__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_SimpleWaterVolume_C__pf3292395140::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_SimpleWaterVolume_C__pf3292395140::bpf__UserConstructionScript__pf()
{
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_BreakColor_R__pf{};
	float bpfv__CallFunc_BreakColor_G__pf{};
	float bpfv__CallFunc_BreakColor_B__pf{};
	float bpfv__CallFunc_BreakColor_A__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue_2__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue_3__pf{};
	FLinearColor bpfv__CallFunc_MakeColor_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Multiply_LinearColorFloat_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_RGBToHSV_H__pf{};
	float bpfv__CallFunc_RGBToHSV_S__pf{};
	float bpfv__CallFunc_RGBToHSV_V__pf{};
	float bpfv__CallFunc_RGBToHSV_A__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf{};
	FLinearColor bpfv__CallFunc_HSVToRGB_ReturnValue__pf(EForceInit::ForceInit);
	FWeightedBlendable bpfv__K2Node_MakeStruct_WeightedBlendable__pf{};
	TArray<FWeightedBlendable> bpfv__K2Node_MakeArray_Array__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FWeightedBlendables bpfv__K2Node_MakeStruct_WeightedBlendables__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FPostProcessSettings bpfv__K2Node_MakeStruct_PostProcessSettings__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_3__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_4__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_5__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	float bpfv__CallFunc_BreakVector_X_2__pf{};
	float bpfv__CallFunc_BreakVector_Y_2__pf{};
	float bpfv__CallFunc_BreakVector_Z_2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X_3__pf{};
	float bpfv__CallFunc_BreakVector_Y_3__pf{};
	float bpfv__CallFunc_BreakVector_Z_3__pf{};
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X_4__pf{};
	float bpfv__CallFunc_BreakVector_Y_4__pf{};
	float bpfv__CallFunc_BreakVector_Z_4__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_4__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X_5__pf{};
	float bpfv__CallFunc_BreakVector_Y_5__pf{};
	float bpfv__CallFunc_BreakVector_Z_5__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_5__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf = UKismetMathLibrary::Divide_VectorVector(bpv__Extent__pf, FVector(100.000000,100.000000,1.000000));
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X_3__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_3__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_3__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_3__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X_3__pf, bpfv__CallFunc_BreakVector_Y_3__pf, 1.000000);
				if(::IsValid(bpv__WaterSurface__pf))
				{
					bpv__WaterSurface__pf->USceneComponent::SetRelativeScale3D(bpfv__CallFunc_MakeVector_ReturnValue_3__pf);
				}
			}
		case 2:
			{
				bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf = UKismetMathLibrary::Divide_VectorVector(bpv__Extent__pf, FVector(100.000000,100.000000,1.000000));
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf, FVector(50.000000,50.000000,0.000000));
				if(::IsValid(bpv__WaterSurface__pf))
				{
					bpv__WaterSurface__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf, false);
				}
			}
		case 3:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_5__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__Depth__pf, 100.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_5__pf, 1.250000);
				bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf = UKismetMathLibrary::Divide_VectorVector(bpv__Extent__pf, FVector(100.000000,100.000000,1.000000));
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X_2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_2__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_2__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X_2__pf, bpfv__CallFunc_BreakVector_Y_2__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				if(::IsValid(bpv__PPV_Underwater__pf))
				{
					bpv__PPV_Underwater__pf->USceneComponent::SetRelativeScale3D(bpfv__CallFunc_MakeVector_ReturnValue_2__pf);
				}
			}
		case 4:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_4__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__Depth__pf, -2.500000);
				bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf = UKismetMathLibrary::Divide_VectorVector(bpv__Extent__pf, FVector(100.000000,100.000000,1.000000));
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf, FVector(50.000000,50.000000,0.000000));
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X_5__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_5__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_5__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_5__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X_5__pf, bpfv__CallFunc_BreakVector_Y_5__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_4__pf);
				if(::IsValid(bpv__PPV_Underwater__pf))
				{
					bpv__PPV_Underwater__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue_5__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_2__pf, false);
				}
			}
		case 5:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__Depth__pf, 100.000000);
				bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf = UKismetMathLibrary::Divide_VectorVector(bpv__Extent__pf, FVector(100.000000,100.000000,1.000000));
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X_1__pf, bpfv__CallFunc_BreakVector_Y_1__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf);
				if(::IsValid(bpv__WaterCaustics__pf))
				{
					bpv__WaterCaustics__pf->USceneComponent::SetRelativeScale3D(bpfv__CallFunc_MakeVector_ReturnValue_1__pf);
				}
			}
		case 6:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__Depth__pf, -2.000000);
				bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf = UKismetMathLibrary::Divide_VectorVector(bpv__Extent__pf, FVector(100.000000,100.000000,1.000000));
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf, FVector(50.000000,50.000000,0.000000));
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X_4__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_4__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_4__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_4__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X_4__pf, bpfv__CallFunc_BreakVector_Y_4__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf);
				if(::IsValid(bpv__WaterCaustics__pf))
				{
					bpv__WaterCaustics__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue_4__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
				}
			}
		case 7:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__Depth__pf, 100.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(1.000000, 1.000000, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				if(::IsValid(bpv__WaterVolume__pf))
				{
					bpv__WaterVolume__pf->USceneComponent::SetRelativeScale3D(bpfv__CallFunc_MakeVector_ReturnValue__pf);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__WaterSurface__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_3__pf = bpv__WaterSurface__pf->CreateDynamicMaterialInstance(0, bpv__WaterMaterial__pf, FName(TEXT("None")));
				}
			}
		case 9:
			{
				bpv__DMI_Water__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_3__pf;
			}
		case 10:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__CausticsMaterial__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 11:
			{
				bpv__DMI_Caustics__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf;
			}
		case 12:
			{
				if(::IsValid(bpv__WaterCaustics__pf))
				{
					bpv__WaterCaustics__pf->UDecalComponent::SetDecalMaterial(bpv__DMI_Caustics__pf);
				}
			}
		case 13:
			{
				if(::IsValid(bpv__WaterVolume__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__WaterVolume__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_SimpleWaterVolume_C__pf3292395140::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 14:
			{
				bpv__DMI_Volume__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
			}
		case 15:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__UnderwaterMaterial__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 16:
			{
				bpv__DMI_Underwater__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf;
			}
		case 17:
			{
				if(::IsValid(bpv__DMI_Underwater__pf))
				{
					bpv__DMI_Underwater__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("NearClipPlane")), bpv__NearClipPlane__pf);
				}
			}
		case 18:
			{
				if(::IsValid(bpv__WaterSurface__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__WaterSurface__pf->USceneComponent::K2_GetComponentLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				if(::IsValid(bpv__DMI_Caustics__pf))
				{
					bpv__DMI_Caustics__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Water Z Level")), bpfv__CallFunc_BreakVector_Z__pf);
				}
				if(::IsValid(bpv__DMI_Underwater__pf))
				{
					bpv__DMI_Underwater__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Water Z Level")), bpfv__CallFunc_BreakVector_Z__pf);
				}
			}
		case 19:
			{
				bpfv__K2Node_MakeStruct_WeightedBlendable__pf.Weight = 1.000000;
				bpfv__K2Node_MakeStruct_WeightedBlendable__pf.Object = bpv__DMI_Underwater__pf;
				bpfv__K2Node_MakeArray_Array__pf.SetNum(1, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = bpfv__K2Node_MakeStruct_WeightedBlendable__pf;
				bpfv__K2Node_MakeStruct_WeightedBlendables__pf.Array = bpfv__K2Node_MakeArray_Array__pf;
				bpfv__K2Node_MakeStruct_PostProcessSettings__pf.WeightedBlendables = bpfv__K2Node_MakeStruct_WeightedBlendables__pf;
				if(::IsValid(bpv__PP_Underwater__pf))
				{
					bpv__PP_Underwater__pf->Settings = bpfv__K2Node_MakeStruct_PostProcessSettings__pf;
				}
			}
		case 20:
			{
				if(::IsValid(bpv__DMI_Water__pf))
				{
					bpv__DMI_Water__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("WaterAbsorptionValue")), bpv__AbsorptionColor__pf);
				}
			}
		case 21:
			{
				if(::IsValid(bpv__DMI_Water__pf))
				{
					bpv__DMI_Water__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("WaterScatteringColor")), bpv__ScatteringColor__pf);
				}
			}
		case 22:
			{
				if(::IsValid(bpv__DMI_Water__pf))
				{
					bpv__DMI_Water__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("WaterScattering")), bpv__WaterScattering__pf);
				}
			}
		case 23:
			{
				if(::IsValid(bpv__DMI_Water__pf))
				{
					bpv__DMI_Water__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("WaterDarkness")), bpv__WaterColorDarkness__pf);
				}
			}
		case 24:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__WaveSpeed__pf, -1.000000);
				if(::IsValid(bpv__DMI_Water__pf))
				{
					bpv__DMI_Water__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("ShoreWaveSpeed")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf);
				}
			}
		case 25:
			{
				if(::IsValid(bpv__DMI_Water__pf))
				{
					bpv__DMI_Water__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Shore - Speed")), bpv__WaveSpeed__pf);
				}
			}
		case 26:
			{
				if(::IsValid(bpv__DMI_Water__pf))
				{
					bpv__DMI_Water__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("WaveDistance")), bpv__WaveDistance__pf);
				}
			}
		case 27:
			{
				if(::IsValid(bpv__DMI_Water__pf))
				{
					bpv__DMI_Water__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Shore - Distance")), bpv__WaveDistance__pf);
				}
			}
		case 28:
			{
				if(::IsValid(bpv__DMI_Water__pf))
				{
					bpv__DMI_Water__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("WaveOpacity")), bpv__WaveOpacity__pf);
				}
			}
		case 29:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__NumOfWaves__pf);
				if(::IsValid(bpv__DMI_Water__pf))
				{
					bpv__DMI_Water__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("NumOfWaves")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				}
			}
		case 30:
			{
				if(::IsValid(bpv__DMI_Water__pf))
				{
					bpv__DMI_Water__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("NormalIntensity")), bpv__NormalIntensity__pf);
				}
			}
		case 31:
			{
				if(::IsValid(bpv__DMI_Water__pf))
				{
					bpv__DMI_Water__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("WaterWavesScale")), bpv__WaterTillingSize__pf);
				}
			}
		case 32:
			{
				if(::IsValid(bpv__PP_Underwater__pf))
				{
					bpv__PP_Underwater__pf->bEnabled = bpv__RenderUnderwater__pf;
				}
			}
		case 33:
			{
				bool  __Local__7 = false;
				if (!((::IsValid(bpv__PP_Underwater__pf)) ? ((bpv__PP_Underwater__pf->bEnabled != 0)) : (__Local__7)))
				{
					__CurrentState = 38;
					break;
				}
			}
		case 34:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__WaterScattering__pf, 0.500000);
				bpfv__CallFunc_Multiply_LinearColorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_LinearColorFloat(bpv__ScatteringColor__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf);
				if(::IsValid(bpv__DMI_Underwater__pf))
				{
					bpv__DMI_Underwater__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("FogColor")), bpfv__CallFunc_Multiply_LinearColorFloat_ReturnValue__pf);
				}
				if(::IsValid(bpv__DMI_Volume__pf))
				{
					bpv__DMI_Volume__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("FogColor")), bpfv__CallFunc_Multiply_LinearColorFloat_ReturnValue__pf);
				}
			}
		case 35:
			{
				UKismetMathLibrary::BreakColor(bpv__AbsorptionColor__pf, /*out*/ bpfv__CallFunc_BreakColor_R__pf, /*out*/ bpfv__CallFunc_BreakColor_G__pf, /*out*/ bpfv__CallFunc_BreakColor_B__pf, /*out*/ bpfv__CallFunc_BreakColor_A__pf);
				bpfv__CallFunc_MapRangeClamped_ReturnValue_1__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_BreakColor_B__pf, 0.000000, 1.000000, 1.000000, 0.000000);
				bpfv__CallFunc_MapRangeClamped_ReturnValue_2__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_BreakColor_G__pf, 0.000000, 1.000000, 1.000000, 0.000000);
				bpfv__CallFunc_MapRangeClamped_ReturnValue_3__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_BreakColor_R__pf, 0.000000, 1.000000, 1.000000, 0.000000);
				bpfv__CallFunc_MakeColor_ReturnValue__pf = UKismetMathLibrary::MakeColor(bpfv__CallFunc_MapRangeClamped_ReturnValue_3__pf, bpfv__CallFunc_MapRangeClamped_ReturnValue_2__pf, bpfv__CallFunc_MapRangeClamped_ReturnValue_1__pf, 1.000000);
				UKismetMathLibrary::RGBToHSV(bpfv__CallFunc_MakeColor_ReturnValue__pf, /*out*/ bpfv__CallFunc_RGBToHSV_H__pf, /*out*/ bpfv__CallFunc_RGBToHSV_S__pf, /*out*/ bpfv__CallFunc_RGBToHSV_V__pf, /*out*/ bpfv__CallFunc_RGBToHSV_A__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_RGBToHSV_S__pf, 0.660000);
				bpfv__CallFunc_HSVToRGB_ReturnValue__pf = UKismetMathLibrary::HSVToRGB(bpfv__CallFunc_RGBToHSV_H__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpfv__CallFunc_RGBToHSV_V__pf, bpfv__CallFunc_RGBToHSV_A__pf);
				if(::IsValid(bpv__DMI_Underwater__pf))
				{
					bpv__DMI_Underwater__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Tint")), bpfv__CallFunc_HSVToRGB_ReturnValue__pf);
				}
				if(::IsValid(bpv__DMI_Volume__pf))
				{
					bpv__DMI_Volume__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Tint")), bpfv__CallFunc_HSVToRGB_ReturnValue__pf);
				}
			}
		case 36:
			{
				if(::IsValid(bpv__DMI_Underwater__pf))
				{
					bpv__DMI_Underwater__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("FogTint")), bpv__FogTint__pf);
				}
				if(::IsValid(bpv__DMI_Volume__pf))
				{
					bpv__DMI_Volume__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("FogTint")), bpv__FogTint__pf);
				}
			}
		case 37:
			{
				if(::IsValid(bpv__DMI_Underwater__pf))
				{
					bpv__DMI_Underwater__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("FogStart")), bpv__UnderWaterFogDensity__pf);
				}
				if(::IsValid(bpv__DMI_Volume__pf))
				{
					bpv__DMI_Volume__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("FogStart")), bpv__UnderWaterFogDensity__pf);
				}
			}
		case 38:
			{
				if(::IsValid(bpv__WaterCaustics__pf))
				{
					bpv__WaterCaustics__pf->USceneComponent::SetVisibility(bpv__EnableCaustics__pf, false);
				}
			}
		case 39:
			{
				if (!bpv__EnableCaustics__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 40:
			{
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpv__CausticsIntensity__pf, 1.000000, bpv__CausticsIntensity__pf);
				if(::IsValid(bpv__DMI_Caustics__pf))
				{
					bpv__DMI_Caustics__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("CausticsIntensity")), bpfv__CallFunc_FClamp_ReturnValue__pf);
				}
			}
		case 41:
			{
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpv__CausticsIntensity__pf, 0.000000, 1.000000, 0.000000, 1.000000);
				if(::IsValid(bpv__DMI_Caustics__pf))
				{
					bpv__DMI_Caustics__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("CausticsOpacity")), bpfv__CallFunc_MapRangeClamped_ReturnValue__pf);
				}
			}
		case 42:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__WaterTillingSize__pf, 2.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__CausticsTillingSize__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
				if(::IsValid(bpv__DMI_Caustics__pf))
				{
					bpv__DMI_Caustics__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("CausticsTilling")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				}
			}
		case 43:
			{
				if(::IsValid(bpv__DMI_Caustics__pf))
				{
					bpv__DMI_Caustics__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("CausticsDistortionSpeed")), bpv__CausticsDistortionSpeed__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_SimpleWaterVolume_C__pf3292395140::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/LUSH_StylizedEnvironmentSet/Water/Meshes/SM_WaterSurface.SM_WaterSurface 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/LUSH_StylizedEnvironmentSet/Water/Materials/MI_Water_01_WavesEnabled.MI_Water_01_WavesEnabled 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/LUSH_StylizedEnvironmentSet/Water/Meshes/SM_WaterVolume.SM_WaterVolume 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/LUSH_StylizedEnvironmentSet/Water/Materials/M_WaterVolume_Preview.M_WaterVolume_Preview 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/LUSH_StylizedEnvironmentSet/Water/Materials/M_D_Caustics.M_D_Caustics 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/LUSH_StylizedEnvironmentSet/Water/Materials/M_PP_Underwater.M_PP_Underwater 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_SimpleWaterVolume_C__pf3292395140::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{175, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{176, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PostProcessComponent 
		{177, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DecalComponent 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.WeightedBlendable 
		{179, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.WeightedBlendables 
		{180, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PostProcessSettings 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{181, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_SimpleWaterVolume_C__pf3292395140
{
	FRegisterHelper__ABP_SimpleWaterVolume_C__pf3292395140()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/LUSH_StylizedEnvironmentSet/Water/BP_SimpleWaterVolume"), &ABP_SimpleWaterVolume_C__pf3292395140::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_SimpleWaterVolume_C__pf3292395140 Instance;
};
FRegisterHelper__ABP_SimpleWaterVolume_C__pf3292395140 FRegisterHelper__ABP_SimpleWaterVolume_C__pf3292395140::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
