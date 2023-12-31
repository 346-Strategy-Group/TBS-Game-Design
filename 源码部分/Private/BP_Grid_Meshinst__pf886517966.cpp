#include "NativizedAssets.h"
#include "BP_Grid_Meshinst__pf886517966.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
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
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
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
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
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
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
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
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Grid_MeshInst_C__pf886517966::ABP_Grid_MeshInst_C__pf886517966(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__InstancedStaticMesh__pf = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedStaticMesh"));
	RootComponent = bpv__InstancedStaticMesh__pf;
	bpv__InstancedStaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__InstancedStaticMesh__pf->NumCustomDataFloats = 4;
	auto& __Local__0 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__InstancedStaticMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__0 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Grid_MeshInst_C__pf886517966::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__InstancedStaticMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__InstancedStaticMesh__pf->OverrideMaterials.Reserve(1);
	bpv__InstancedStaticMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Grid_MeshInst_C__pf886517966::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	auto& __Local__1 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__InstancedStaticMesh__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__1 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__2 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__InstancedStaticMesh__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__3 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__2), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__3 = TArray<FResponseChannel> ();
	__Local__3.AddUninitialized(9);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__3.GetData(), 9);
	auto& __Local__4 = __Local__3[0];
	__Local__4.Channel = FName(TEXT("WorldStatic"));
	__Local__4.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__5 = __Local__3[1];
	__Local__5.Channel = FName(TEXT("WorldDynamic"));
	__Local__5.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__6 = __Local__3[2];
	__Local__6.Channel = FName(TEXT("Pawn"));
	__Local__6.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__7 = __Local__3[3];
	__Local__7.Channel = FName(TEXT("Visibility"));
	__Local__7.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__8 = __Local__3[4];
	__Local__8.Channel = FName(TEXT("Camera"));
	__Local__8.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__9 = __Local__3[5];
	__Local__9.Channel = FName(TEXT("PhysicsBody"));
	__Local__9.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__10 = __Local__3[6];
	__Local__10.Channel = FName(TEXT("Vehicle"));
	__Local__10.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__11 = __Local__3[7];
	__Local__11.Channel = FName(TEXT("Destructible"));
	__Local__11.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__12 = __Local__3[8];
	__Local__12.Channel = FName(TEXT("Grid"));
	bpv__InstancedStaticMesh__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	static TWeakFieldPtr<FProperty> __Local__14{};
	const FProperty* __Local__13 = __Local__14.Get();
	if (nullptr == __Local__13)
	{
		__Local__13 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__13);
		__Local__14 = __Local__13;
	}
	(((FBoolProperty*)__Local__13)->SetPropertyValue_InContainer((bpv__InstancedStaticMesh__pf), true, 0));
	bpv__InstanceIndexes__pf = TArray<FIntPoint> ();
	bpv__I__pf = 0;
	auto& __Local__15 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__15 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Grid_MeshInst_C__pf886517966::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__InstancedStaticMesh__pf)
	{
		bpv__InstancedStaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Grid_MeshInst_C__pf886517966::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/Core/Grid/Utilities/E_TileState.E_TileState")));
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__16 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__16);
	static TWeakFieldPtr<FProperty> __Local__18{};
	const FProperty* __Local__17 = __Local__18.Get();
	if (nullptr == __Local__17)
	{
		__Local__17 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__17);
		__Local__18 = __Local__17;
	}
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((__Local__16), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Grid_MeshInst_C__pf886517966::bpf__ExecuteUbergraph_BP_Grid_MeshInst__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	AActor::SetActorTickEnabled(false);
	return; // KCST_GotoReturn
}
void ABP_Grid_MeshInst_C__pf886517966::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_Grid_MeshInst__pf_0(2);
}
void ABP_Grid_MeshInst_C__pf886517966::bpf__Instance_Add__pf(FTransform const& bpp__Transform__pf__const, FIntPoint const& bpp__Index__pf__const, /*out*/ TArray<E__E_TileState__pf>& bpp__State__pf)
{
	typedef FTransform  T__Local__19;
	T__Local__19& bpp__Transform__pf = *const_cast<T__Local__19 *>(&bpp__Transform__pf__const);
	typedef FIntPoint  T__Local__20;
	T__Local__20& bpp__Index__pf = *const_cast<T__Local__20 *>(&bpp__Index__pf__const);
	FLinearColor bpfv__CallFunc_Get_ColorFromState_Color__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Get_ColorFromState_IsFilled__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	bool bpfv__CallFunc_SetCustomDataValue_ReturnValue__pf{};
	bool bpfv__CallFunc_SetCustomDataValue_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_AddInstance_ReturnValue__pf{};
	bool bpfv__CallFunc_SetCustomDataValue_ReturnValue_2__pf{};
	bool bpfv__CallFunc_SetCustomDataValue_ReturnValue_3__pf{};
	bpf__Remove_Instance__pf(bpp__Index__pf);
	if(::IsValid(bpv__InstancedStaticMesh__pf))
	{
		bpfv__CallFunc_AddInstance_ReturnValue__pf = bpv__InstancedStaticMesh__pf->AddInstance(bpp__Transform__pf);
	}
	bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__InstanceIndexes__pf, bpp__Index__pf);
	bpv__I__pf = bpfv__CallFunc_Array_Add_ReturnValue__pf;
	bpf__Get_ColorFromState__pf(/*out*/ bpp__State__pf, /*out*/ bpfv__CallFunc_Get_ColorFromState_Color__pf, /*out*/ bpfv__CallFunc_Get_ColorFromState_IsFilled__pf);
	if(::IsValid(bpv__InstancedStaticMesh__pf))
	{
		bpfv__CallFunc_SetCustomDataValue_ReturnValue_3__pf = bpv__InstancedStaticMesh__pf->SetCustomDataValue(bpv__I__pf, 0, bpfv__CallFunc_Get_ColorFromState_Color__pf.R, false);
	}
	if(::IsValid(bpv__InstancedStaticMesh__pf))
	{
		bpfv__CallFunc_SetCustomDataValue_ReturnValue_2__pf = bpv__InstancedStaticMesh__pf->SetCustomDataValue(bpv__I__pf, 1, bpfv__CallFunc_Get_ColorFromState_Color__pf.G, false);
	}
	if(::IsValid(bpv__InstancedStaticMesh__pf))
	{
		bpfv__CallFunc_SetCustomDataValue_ReturnValue_1__pf = bpv__InstancedStaticMesh__pf->SetCustomDataValue(bpv__I__pf, 2, bpfv__CallFunc_Get_ColorFromState_Color__pf.B, false);
	}
	if(::IsValid(bpv__InstancedStaticMesh__pf))
	{
		bpfv__CallFunc_SetCustomDataValue_ReturnValue__pf = bpv__InstancedStaticMesh__pf->SetCustomDataValue(bpv__I__pf, 3, bpfv__CallFunc_Get_ColorFromState_IsFilled__pf, false);
	}
}
void ABP_Grid_MeshInst_C__pf886517966::bpf__Remove_Instance__pf(FIntPoint const& bpp__Index__pf__const)
{
	typedef FIntPoint  T__Local__21;
	T__Local__21& bpp__Index__pf = *const_cast<T__Local__21 *>(&bpp__Index__pf__const);
	bool bpfv__CallFunc_Array_RemoveItem_ReturnValue__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Find_ReturnValue__pf{};
	bool bpfv__CallFunc_RemoveInstance_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(bpv__InstanceIndexes__pf, bpp__Index__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_Array_Find_ReturnValue__pf = FCustomThunkTemplates::Array_Find(bpv__InstanceIndexes__pf, bpp__Index__pf);
				if(::IsValid(bpv__InstancedStaticMesh__pf))
				{
					bpfv__CallFunc_RemoveInstance_ReturnValue__pf = bpv__InstancedStaticMesh__pf->RemoveInstance(bpfv__CallFunc_Array_Find_ReturnValue__pf);
				}
			}
		case 3:
			{
				bpfv__CallFunc_Array_RemoveItem_ReturnValue__pf = FCustomThunkTemplates::Array_RemoveItem(bpv__InstanceIndexes__pf, bpp__Index__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_MeshInst_C__pf886517966::bpf__Clear_Instance__pf()
{
	if(::IsValid(bpv__InstancedStaticMesh__pf))
	{
		bpv__InstancedStaticMesh__pf->ClearInstances();
	}
	FCustomThunkTemplates::Array_Clear(bpv__InstanceIndexes__pf);
}
void ABP_Grid_MeshInst_C__pf886517966::bpf__Initialize_Grid_MeshInstance__pf(UStaticMesh* bpp__Mesh__pf, UMaterialInterface* bpp__Material__pf, FLinearColor bpp__Color__pf, ECollisionEnabled::Type bpp__Collision__pf)
{
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	if(::IsValid(bpv__InstancedStaticMesh__pf))
	{
		bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = bpv__InstancedStaticMesh__pf->SetStaticMesh(bpp__Mesh__pf);
	}
	if(::IsValid(bpv__InstancedStaticMesh__pf))
	{
		bpv__InstancedStaticMesh__pf->SetMaterial(0, bpp__Material__pf);
	}
	bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf = UKismetMathLibrary::Conv_LinearColorToVector(bpp__Color__pf);
	if(::IsValid(bpv__InstancedStaticMesh__pf))
	{
		bpv__InstancedStaticMesh__pf->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Color")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf);
	}
	if(::IsValid(bpv__InstancedStaticMesh__pf))
	{
		bpv__InstancedStaticMesh__pf->SetCollisionEnabled(bpp__Collision__pf);
	}
}
void ABP_Grid_MeshInst_C__pf886517966::bpf__Get_ColorFromState__pf(/*out*/ TArray<E__E_TileState__pf>& bpp__States__pf, /*out*/ FLinearColor& bpp__Color__pf, /*out*/ float& bpp__IsFilled__pf)
{
	E__E_TileState__pf bpfv_____byte_Variable__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FLinearColor bpfv_____struct_Variable__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	FLinearColor bpfv_____struct_Variable_1__pf(EForceInit::ForceInit);
	FLinearColor bpfv_____struct_Variable_2__pf(EForceInit::ForceInit);
	FLinearColor bpfv_____struct_Variable_3__pf(EForceInit::ForceInit);
	int32 bpfv_____int_Array_Index_Variable__pf{};
	int32 bpfv_____int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray<E__E_TileState__pf> bpfv__K2Node_MakeArray_Array__pf{};
	E__E_TileState__pf bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FLinearColor bpfv__K2Node_Select_Default__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpp__States__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpp__Color__pf = FLinearColor(0.000000,0.000000,0.000000,1.000000);
				bpp__IsFilled__pf = 0.000000;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv_____int_Loop_Counter_Variable__pf = 0;
			}
		case 4:
			{
				bpfv_____int_Array_Index_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__K2Node_MakeArray_Array__pf.SetNum(3, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = E__E_TileState__pf::NewEnumerator2;
				bpfv__K2Node_MakeArray_Array__pf[1] = E__E_TileState__pf::NewEnumerator3;
				bpfv__K2Node_MakeArray_Array__pf[2] = E__E_TileState__pf::NewEnumerator1;
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__K2Node_MakeArray_Array__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv_____int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 6:
			{
				bpfv_____int_Array_Index_Variable__pf = bpfv_____int_Loop_Counter_Variable__pf;
			}
		case 7:
			{
				__StateStack.Push(11);
			}
		case 8:
			{
				bpfv__K2Node_MakeArray_Array__pf.SetNum(3, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = E__E_TileState__pf::NewEnumerator2;
				bpfv__K2Node_MakeArray_Array__pf[1] = E__E_TileState__pf::NewEnumerator3;
				bpfv__K2Node_MakeArray_Array__pf[2] = E__E_TileState__pf::NewEnumerator1;
				FCustomThunkTemplates::Array_Get(bpfv__K2Node_MakeArray_Array__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(bpp__States__pf, bpfv__CallFunc_Array_Get_Item__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpfv_____struct_Variable__pf = FLinearColor(0.107006,0.581583,0.637500,1.000000);
				bpfv_____struct_Variable_1__pf = FLinearColor(1.000000,0.356291,0.245833,1.000000);
				bpfv_____struct_Variable_2__pf = FLinearColor(0.966667,0.937968,0.474021,1.000000);
				bpfv_____struct_Variable_3__pf = FLinearColor(0.000000,0.000000,0.000000,1.000000);
				bpfv__K2Node_MakeArray_Array__pf.SetNum(3, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = E__E_TileState__pf::NewEnumerator2;
				bpfv__K2Node_MakeArray_Array__pf[1] = E__E_TileState__pf::NewEnumerator3;
				bpfv__K2Node_MakeArray_Array__pf[2] = E__E_TileState__pf::NewEnumerator1;
				FCustomThunkTemplates::Array_Get(bpfv__K2Node_MakeArray_Array__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv_____byte_Variable__pf = bpfv__CallFunc_Array_Get_Item__pf;
				bpp__Color__pf = TSwitchValue<E__E_TileState__pf , FLinearColor >(bpfv_____byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<E__E_TileState__pf , FLinearColor >(E__E_TileState__pf::NewEnumerator0, bpfv_____struct_Variable_3__pf), TSwitchPair<E__E_TileState__pf , FLinearColor >(E__E_TileState__pf::NewEnumerator1, bpfv_____struct_Variable_2__pf), TSwitchPair<E__E_TileState__pf , FLinearColor >(E__E_TileState__pf::NewEnumerator2, bpfv_____struct_Variable_1__pf), TSwitchPair<E__E_TileState__pf , FLinearColor >(E__E_TileState__pf::NewEnumerator3, bpfv_____struct_Variable__pf));
				bpp__IsFilled__pf = 1.000000;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpp__Color__pf = FLinearColor(0.000000,0.000000,0.000000,1.000000);
				bpp__IsFilled__pf = 0.000000;
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Loop_Counter_Variable__pf, 1);
				bpfv_____int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Grid_MeshInst_C__pf886517966::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Blueprints/Core/Grid/Grid_Shapes/Square/SM_Grid_SquareFlat.SM_Grid_SquareFlat 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Blueprints/Core/Grid/Grid_Shapes/Square/MI_Grid_Flat_Square.MI_Grid_Flat_Square 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Grid_MeshInst_C__pf886517966::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{70, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.InstancedStaticMeshComponent 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionEnabled 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{26, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Core/Grid/Utilities/E_TileState.E_TileState 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_Grid_MeshInst_C__pf886517966
{
	FRegisterHelper__ABP_Grid_MeshInst_C__pf886517966()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/Core/Grid/Utilities/BP_Grid_Meshinst"), &ABP_Grid_MeshInst_C__pf886517966::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Grid_MeshInst_C__pf886517966 Instance;
};
FRegisterHelper__ABP_Grid_MeshInst_C__pf886517966 FRegisterHelper__ABP_Grid_MeshInst_C__pf886517966::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
