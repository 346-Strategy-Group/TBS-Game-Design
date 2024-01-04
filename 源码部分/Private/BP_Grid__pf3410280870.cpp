#include "NativizedAssets.h"
#include "BP_Grid__pf3410280870.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
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
#include "BP_Grid_Visual__pf3410280870.h"
#include "chesscharacter__pf772598429.h"
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
#include "Runtime/Engine/Public/Net/NetPushModelHelpers.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/NavigationSystem/Public/NavigationPath.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintMapLibrary.h"
#include "BFL_Utilities__pf2069076602.h"
#include "BP_Grid_Modifier__pf3410280870.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/DataTableFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "BP_TextChess__pf772598429.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Grid_C__pf3410280870::ABP_Grid_C__pf3410280870(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__ChildActor_GridVisual__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_GridVisual"));
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
	bpv__ChildActor_GridVisual__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_GridVisual__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_GridVisual__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__2 = ABP_Grid_Visual_C__pf3410280870::StaticClass();
	auto& __Local__3 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_GridVisual__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__3 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_Grid_C__pf3410280870::StaticClass())->MiscConvertedSubobjects[0]);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_GridVisual__pf), false, 0));
	bpv__GridxCenterxLocation__pfTT = FVector(0.000000, 0.000000, 1000.000000);
	bpv__GridxTilexSize__pfTT = FVector(200.000000, 200.000000, 100.000000);
	bpv__GridxTilexCount__pfTT.X = 8;
	bpv__GridxTilexCount__pfTT.Y = 8;
	bpv__GridxShape__pfT = E__E_Grid_Shape__pf::NewEnumerator2;
	bpv__GridLeftBottomLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__TilexCount__pfT = FVector2D(0.000000, 0.000000);
	bpv__Radius__pf = 0.000000f;
	bpv__Grid_Map__pf = nullptr;
	bpv__GridVisual__pf = nullptr;
	bpv__GridTiles__pf = {};
	bpv__TileIndexes__pf = TArray<FIntPoint> ();
	bpv__Path__pf = TArray<FIntPoint> ();
	bpv__test_chess__pf = nullptr;
	bpv__xx__pfiJsGHt = nullptr;
	bpv__xx_0__pfiJsGHt = nullptr;
	bpv__blueperson1__pf = nullptr;
	bpv__whiteperson1__pf = nullptr;
	bpv__blueperson2__pf = nullptr;
	bpv__whiteperson2__pf = nullptr;
	auto& __Local__4 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__4 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Grid_C__pf3410280870::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_GridVisual__pf)
	{
		bpv__ChildActor_GridVisual__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Grid_C__pf3410280870::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Grid_Visual_C__pf3410280870::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Achesscharacter_C__pf772598429::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UBFL_Utilities_C__pf2069076602::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Grid_Modifier_C__pf3410280870::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_TextChess_C__pf772598429::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FS_Tile_Data__pf886517966();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FS_Tile_Data__pf886517966());
	extern UScriptStruct* Z_Construct_UScriptStruct_FS_Grid_Shape_Data__pf3764965557();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FS_Grid_Shape_Data__pf3764965557());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	ABP_Grid_Visual_C__pf3410280870::StaticClass()->GetDefaultObject();
	auto __Local__5 = NewObject<ABP_Grid_Visual_C__pf3410280870>(InDynamicClass, ABP_Grid_Visual_C__pf3410280870::StaticClass(), TEXT("ChildActor_GridVisual_GEN_VARIABLE_BP_Grid_Visual_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__5);
	auto& __Local__6 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__5), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__6 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto __Local__7 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__7);
	__Local__7->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__7->InputKeyDelegateBindings.AddUninitialized(1);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__7->InputKeyDelegateBindings.GetData(), 1);
	auto& __Local__8 = __Local__7->InputKeyDelegateBindings[0];
	__Local__8.InputChord.Key = FKey(TEXT("One"));
	__Local__8.FunctionNameToBind = FName(TEXT("InpActEvt_One_K2Node_InputKeyEvent_0"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_0(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	Achesscharacter_C__pf772598429* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf{};
	Achesscharacter_C__pf772598429* bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf{};
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf{};
	Achesscharacter_C__pf772598429* bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf{};
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf{};
	Achesscharacter_C__pf772598429* bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf{};
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_3__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 3:
			{
				AActor::FlushNetDormancy();
			}
		case 4:
			{
				bpv__whiteperson2__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
			}
		case 5:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 27, FName(TEXT("whiteperson2")));
			}
		case 6:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_3__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(0.000000,1.000000,0.000000,1.000000));
				if(::IsValid(bpv__whiteperson2__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson2__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson2__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_3__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				AActor::FlushNetDormancy();
			}
		case 8:
			{
				bpv__whiteperson1__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf;
			}
		case 9:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 26, FName(TEXT("whiteperson1")));
			}
		case 10:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(1.000000,1.000000,0.000000,1.000000));
				if(::IsValid(bpv__whiteperson1__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson1__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson1__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				AActor::FlushNetDormancy();
			}
		case 12:
			{
				bpv__blueperson1__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf;
			}
		case 13:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 25, FName(TEXT("blueperson1")));
			}
		case 14:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(1.000000,0.000000,0.000000,1.000000));
				if(::IsValid(bpv__blueperson1__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson1__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson1__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				b0l__K2Node_MakeStruct_IntPoint__pf.X = 6;
				b0l__K2Node_MakeStruct_IntPoint__pf.Y = 0;
				bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation__pf);
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_Grid_C__pf3410280870::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 22:
			{
				b0l__K2Node_MakeStruct_IntPoint__pf.X = 6;
				b0l__K2Node_MakeStruct_IntPoint__pf.Y = 0;
				bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation__pf);
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 23:
			{
				b0l__K2Node_MakeStruct_IntPoint_1__pf.X = 7;
				b0l__K2Node_MakeStruct_IntPoint_1__pf.Y = 7;
				bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_1__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf);
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_Grid_C__pf3410280870::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 24:
			{
				b0l__K2Node_MakeStruct_IntPoint_1__pf.X = 7;
				b0l__K2Node_MakeStruct_IntPoint_1__pf.Y = 7;
				bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_1__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf);
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf), ECastCheckedType::NullAllowed);
			}
		case 25:
			{
				b0l__K2Node_MakeStruct_IntPoint_2__pf.X = 2;
				b0l__K2Node_MakeStruct_IntPoint_2__pf.Y = 7;
				bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_2__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf);
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_Grid_C__pf3410280870::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 26:
			{
				b0l__K2Node_MakeStruct_IntPoint_2__pf.X = 2;
				b0l__K2Node_MakeStruct_IntPoint_2__pf.Y = 7;
				bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_2__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf);
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf), ECastCheckedType::NullAllowed);
			}
		case 27:
			{
				__StateStack.Push(30);
				__StateStack.Push(28);
				__StateStack.Push(11);
				__StateStack.Push(3);
				__CurrentState = 7;
				break;
			}
		case 28:
			{
				bpv__blueperson2__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf;
			}
		case 29:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(0.000000,0.000000,1.000000,1.000000));
				if(::IsValid(bpv__blueperson2__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson2__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson2__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf, FVector(0.000000,0.000000,0.000000), bpv__blueperson1__pf, 5.000000, false);
			}
		case 31:
			{
				b0l__CallFunc_IsValid_ReturnValue_7__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_7__pf)
				{
					__CurrentState = 34;
					break;
				}
			}
		case 32:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_21__pf.BindUFunction(this,FName(TEXT("OnSuccess_F24D833E4B02246E981ED8A33ABBBE38")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_21__pf);
				}
			}
		case 33:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_22__pf.BindUFunction(this,FName(TEXT("OnFail_F24D833E4B02246E981ED8A33ABBBE38")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_22__pf);
				}
			}
		case 34:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_5__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf, FVector(0.000000,0.000000,0.000000), bpv__blueperson1__pf, 5.000000, false);
			}
		case 35:
			{
				b0l__CallFunc_IsValid_ReturnValue_9__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_5__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_9__pf)
				{
					__CurrentState = 38;
					break;
				}
			}
		case 36:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_1__pf.BindUFunction(this,FName(TEXT("OnSuccess_1E52789040FA80A1C3F0229690933EE4")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_5__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_5__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_1__pf);
				}
			}
		case 37:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnFail_1E52789040FA80A1C3F0229690933EE4")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_5__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_5__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
			}
		case 38:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf, FVector(0.000000,0.000000,0.000000), bpv__whiteperson1__pf, 5.000000, false);
			}
		case 39:
			{
				b0l__CallFunc_IsValid_ReturnValue_6__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_6__pf)
				{
					__CurrentState = 42;
					break;
				}
			}
		case 40:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_11__pf.BindUFunction(this,FName(TEXT("OnSuccess_C8E2C3904C810C8C0ED204A16D8CF224")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_11__pf);
				}
			}
		case 41:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_10__pf.BindUFunction(this,FName(TEXT("OnFail_C8E2C3904C810C8C0ED204A16D8CF224")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_10__pf);
				}
			}
		case 42:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_4__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf, FVector(0.000000,0.000000,0.000000), bpv__whiteperson1__pf, 5.000000, false);
			}
		case 43:
			{
				b0l__CallFunc_IsValid_ReturnValue_8__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_4__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_8__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 44:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_13__pf.BindUFunction(this,FName(TEXT("OnSuccess_F99C41E34CB96AB93BDCB6A1CF83A0E5")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_4__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_4__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_13__pf);
				}
			}
		case 45:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_12__pf.BindUFunction(this,FName(TEXT("OnFail_F99C41E34CB96AB93BDCB6A1CF83A0E5")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_4__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_4__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_12__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 86:
			{
				__CurrentState = 87;
				break;
			}
		case 87:
			{
				b0l__K2Node_MakeStruct_IntPoint_3__pf.X = 1;
				b0l__K2Node_MakeStruct_IntPoint_3__pf.Y = 0;
				bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_3__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_Grid_C__pf3410280870::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 88:
			{
				b0l__K2Node_MakeStruct_IntPoint_3__pf.X = 1;
				b0l__K2Node_MakeStruct_IntPoint_3__pf.Y = 0;
				bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_3__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf), ECastCheckedType::NullAllowed);
				__CurrentState = 21;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_7__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_15__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_7__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_7__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_23__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_15__pf{};
	check(bpp__EntryPoint__pf == 134);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue_7__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_7__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_7__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf, bpfv__CallFunc_IsValidClass_ReturnValue_7__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_7__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_15__pf = UKismetSystemLibrary::IsValid(bpv__blueperson2__pf);
	bpfv__CallFunc_IsValid_ReturnValue_23__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson2__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_15__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_15__pf, bpfv__CallFunc_IsValid_ReturnValue_23__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_15__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__blueperson2__pf))
	{
		USkeletalMeshComponent*  __Local__9 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue_7__pf = bpv__blueperson2__pf->bpf__dodamage__pf(bpv__whiteperson2__pf, ((::IsValid(bpv__blueperson2__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson2__pf), ACharacter::__PPO__Mesh() )))) : (__Local__9)));
	}
	bpf__JudgexLife__pfT(bpv__whiteperson2__pf, bpfv__CallFunc_dodamage_ReturnValue_7__pf, /*out*/ b0l__CallFunc_Judge_Life_die_7__pf);
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_6__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_14__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_6__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_6__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_22__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_14__pf{};
	check(bpp__EntryPoint__pf == 129);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue_6__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_6__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_6__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf, bpfv__CallFunc_IsValidClass_ReturnValue_6__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_6__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_14__pf = UKismetSystemLibrary::IsValid(bpv__blueperson1__pf);
	bpfv__CallFunc_IsValid_ReturnValue_22__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson2__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_14__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_14__pf, bpfv__CallFunc_IsValid_ReturnValue_22__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_14__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__blueperson1__pf))
	{
		USkeletalMeshComponent*  __Local__10 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue_6__pf = bpv__blueperson1__pf->bpf__dodamage__pf(bpv__whiteperson2__pf, ((::IsValid(bpv__blueperson1__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson1__pf), ACharacter::__PPO__Mesh() )))) : (__Local__10)));
	}
	bpf__JudgexLife__pfT(bpv__whiteperson2__pf, bpfv__CallFunc_dodamage_ReturnValue_6__pf, /*out*/ b0l__CallFunc_Judge_Life_die_6__pf);
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_5__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_11__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_5__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_5__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_21__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_13__pf{};
	check(bpp__EntryPoint__pf == 119);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue_5__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_5__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_5__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf, bpfv__CallFunc_IsValidClass_ReturnValue_5__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_5__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_11__pf = UKismetSystemLibrary::IsValid(bpv__blueperson2__pf);
	bpfv__CallFunc_IsValid_ReturnValue_21__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson1__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_13__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_11__pf, bpfv__CallFunc_IsValid_ReturnValue_21__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_13__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__blueperson2__pf))
	{
		USkeletalMeshComponent*  __Local__11 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue_5__pf = bpv__blueperson2__pf->bpf__dodamage__pf(bpv__whiteperson1__pf, ((::IsValid(bpv__blueperson2__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson2__pf), ACharacter::__PPO__Mesh() )))) : (__Local__11)));
	}
	bpf__JudgexLife__pfT(bpv__whiteperson1__pf, bpfv__CallFunc_dodamage_ReturnValue_5__pf, /*out*/ b0l__CallFunc_Judge_Life_die_5__pf);
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_4__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_10__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_4__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_4__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_20__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_12__pf{};
	check(bpp__EntryPoint__pf == 124);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue_4__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_4__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_4__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf, bpfv__CallFunc_IsValidClass_ReturnValue_4__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_4__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_10__pf = UKismetSystemLibrary::IsValid(bpv__blueperson1__pf);
	bpfv__CallFunc_IsValid_ReturnValue_20__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson1__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_12__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_10__pf, bpfv__CallFunc_IsValid_ReturnValue_20__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_12__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__blueperson1__pf))
	{
		USkeletalMeshComponent*  __Local__12 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue_4__pf = bpv__blueperson1__pf->bpf__dodamage__pf(bpv__whiteperson1__pf, ((::IsValid(bpv__blueperson1__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson1__pf), ACharacter::__PPO__Mesh() )))) : (__Local__12)));
	}
	bpf__JudgexLife__pfT(bpv__whiteperson1__pf, bpfv__CallFunc_dodamage_ReturnValue_4__pf, /*out*/ b0l__CallFunc_Judge_Life_die_4__pf);
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_3__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_3__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_3__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_19__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_11__pf{};
	check(bpp__EntryPoint__pf == 114);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue_3__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_3__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_3__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf, bpfv__CallFunc_IsValidClass_ReturnValue_3__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_3__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_3__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson2__pf);
	bpfv__CallFunc_IsValid_ReturnValue_19__pf = UKismetSystemLibrary::IsValid(bpv__blueperson2__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_11__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_3__pf, bpfv__CallFunc_IsValid_ReturnValue_19__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_11__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__whiteperson2__pf))
	{
		USkeletalMeshComponent*  __Local__13 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue_3__pf = bpv__whiteperson2__pf->bpf__dodamage__pf(bpv__blueperson2__pf, ((::IsValid(bpv__whiteperson2__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson2__pf), ACharacter::__PPO__Mesh() )))) : (__Local__13)));
	}
	bpf__JudgexLife__pfT(bpv__blueperson2__pf, bpfv__CallFunc_dodamage_ReturnValue_3__pf, /*out*/ b0l__CallFunc_Judge_Life_die_3__pf);
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_6(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_18__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_10__pf{};
	check(bpp__EntryPoint__pf == 109);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue_2__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_2__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf, bpfv__CallFunc_IsValidClass_ReturnValue_2__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson1__pf);
	bpfv__CallFunc_IsValid_ReturnValue_18__pf = UKismetSystemLibrary::IsValid(bpv__blueperson2__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_10__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_2__pf, bpfv__CallFunc_IsValid_ReturnValue_18__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_10__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__whiteperson1__pf))
	{
		USkeletalMeshComponent*  __Local__14 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue_2__pf = bpv__whiteperson1__pf->bpf__dodamage__pf(bpv__blueperson2__pf, ((::IsValid(bpv__whiteperson1__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson1__pf), ACharacter::__PPO__Mesh() )))) : (__Local__14)));
	}
	bpf__JudgexLife__pfT(bpv__blueperson2__pf, bpfv__CallFunc_dodamage_ReturnValue_2__pf, /*out*/ b0l__CallFunc_Judge_Life_die_2__pf);
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_7(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_17__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_9__pf{};
	check(bpp__EntryPoint__pf == 97);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue_1__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_1__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf, bpfv__CallFunc_IsValidClass_ReturnValue_1__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson2__pf);
	bpfv__CallFunc_IsValid_ReturnValue_17__pf = UKismetSystemLibrary::IsValid(bpv__blueperson1__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_9__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_1__pf, bpfv__CallFunc_IsValid_ReturnValue_17__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_9__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__whiteperson2__pf))
	{
		USkeletalMeshComponent*  __Local__15 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue_1__pf = bpv__whiteperson2__pf->bpf__dodamage__pf(bpv__blueperson1__pf, ((::IsValid(bpv__whiteperson2__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson2__pf), ACharacter::__PPO__Mesh() )))) : (__Local__15)));
	}
	bpf__JudgexLife__pfT(bpv__blueperson1__pf, bpfv__CallFunc_dodamage_ReturnValue_1__pf, /*out*/ b0l__CallFunc_Judge_Life_die_1__pf);
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_8(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_16__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_8__pf{};
	check(bpp__EntryPoint__pf == 102);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_IsValidClass_ReturnValue__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson1__pf);
	bpfv__CallFunc_IsValid_ReturnValue_16__pf = UKismetSystemLibrary::IsValid(bpv__blueperson1__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_8__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue__pf, bpfv__CallFunc_IsValid_ReturnValue_16__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_8__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__whiteperson1__pf))
	{
		USkeletalMeshComponent*  __Local__16 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue__pf = bpv__whiteperson1__pf->bpf__dodamage__pf(bpv__blueperson1__pf, ((::IsValid(bpv__whiteperson1__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson1__pf), ACharacter::__PPO__Mesh() )))) : (__Local__16)));
	}
	bpf__JudgexLife__pfT(bpv__blueperson1__pf, bpfv__CallFunc_dodamage_ReturnValue__pf, /*out*/ b0l__CallFunc_Judge_Life_die__pf);
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_9(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 89);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_Grid_C__pf3410280870::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	EnableInput(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_10(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_6__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_6__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_6__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 79:
			{
				__CurrentState = 80;
				break;
			}
		case 80:
			{
				b0l_____byte_Variable_6__pf = b0l__K2Node_CustomEvent_MovementResult_2__pf;
			}
		case 81:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_20__pf.BindUFunction(this,FName(TEXT("b1w2")));
				bpfv__CallFunc_IsValidClass_ReturnValue_6__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
				bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_6__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_6__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf, bpfv__CallFunc_IsValidClass_ReturnValue_6__pf);
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_6__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_20__pf, 1.000000, bpfv__CallFunc_BooleanAND_ReturnValue_6__pf, 0.000000, 0.000000);
				__CurrentState = -1;
				break;
			}
		case 84:
			{
				__CurrentState = 85;
				break;
			}
		case 85:
			{
				b0l_____byte_Variable_7__pf = b0l__K2Node_CustomEvent_MovementResult__pf;
				__CurrentState = 81;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_11(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_5__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_5__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_5__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 68:
			{
				__CurrentState = 69;
				break;
			}
		case 69:
			{
				b0l_____byte_Variable_5__pf = b0l__K2Node_CustomEvent_MovementResult_5__pf;
			}
		case 70:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_6__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpv__blueperson2__pf, FVector(0.000000,0.000000,0.000000), bpv__whiteperson2__pf, 5.000000, false);
			}
		case 71:
			{
				b0l__CallFunc_IsValid_ReturnValue_13__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_6__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_13__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 72:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_19__pf.BindUFunction(this,FName(TEXT("OnSuccess_D539FED54EAD933A07E07EACFD15CDB7")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_6__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_6__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_19__pf);
				}
			}
		case 73:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_18__pf.BindUFunction(this,FName(TEXT("OnFail_D539FED54EAD933A07E07EACFD15CDB7")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_6__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_6__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_18__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 74:
			{
				__CurrentState = 75;
				break;
			}
		case 75:
			{
				b0l_____byte_Variable_5__pf = b0l__K2Node_CustomEvent_MovementResult_4__pf;
			}
		case 76:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_14__pf.BindUFunction(this,FName(TEXT("b2w1")));
				bpfv__CallFunc_IsValidClass_ReturnValue_5__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
				bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_5__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_5__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf, bpfv__CallFunc_IsValidClass_ReturnValue_5__pf);
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_5__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_14__pf, 1.000000, bpfv__CallFunc_BooleanAND_ReturnValue_5__pf, 0.000000, 0.000000);
				__CurrentState = 70;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_12(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_4__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_4__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_4__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 59:
			{
				__CurrentState = 60;
				break;
			}
		case 60:
			{
				b0l_____byte_Variable_4__pf = b0l__K2Node_CustomEvent_MovementResult_7__pf;
			}
		case 61:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_7__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpv__blueperson1__pf, FVector(0.000000,0.000000,0.000000), bpv__whiteperson2__pf, 5.000000, false);
			}
		case 62:
			{
				b0l__CallFunc_IsValid_ReturnValue_12__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_7__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_12__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 63:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_17__pf.BindUFunction(this,FName(TEXT("OnSuccess_0BE09EC2415F25162CA546B0D1017AE7")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_7__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_7__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_17__pf);
				}
			}
		case 64:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_16__pf.BindUFunction(this,FName(TEXT("OnFail_0BE09EC2415F25162CA546B0D1017AE7")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_7__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_7__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_16__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 65:
			{
				__CurrentState = 66;
				break;
			}
		case 66:
			{
				b0l_____byte_Variable_4__pf = b0l__K2Node_CustomEvent_MovementResult_6__pf;
			}
		case 67:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_15__pf.BindUFunction(this,FName(TEXT("b1w1")));
				bpfv__CallFunc_IsValidClass_ReturnValue_4__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
				bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_4__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_4__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf, bpfv__CallFunc_IsValidClass_ReturnValue_4__pf);
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_4__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_15__pf, 1.000000, bpfv__CallFunc_BooleanAND_ReturnValue_4__pf, 0.000000, 0.000000);
				__CurrentState = 61;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_13(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 15:
			{
				__CurrentState = 16;
				break;
			}
		case 16:
			{
				b0l_____byte_Variable_1__pf = b0l__K2Node_CustomEvent_MovementResult_13__pf;
			}
		case 17:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpv__whiteperson2__pf, FVector(0.000000,0.000000,0.000000), bpv__blueperson2__pf, 5.000000, false);
			}
		case 18:
			{
				b0l__CallFunc_IsValid_ReturnValue_5__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_5__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 19:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_7__pf.BindUFunction(this,FName(TEXT("OnSuccess_BEA92AAF4CD08BD443C5E09B57D1F361")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_7__pf);
				}
			}
		case 20:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_6__pf.BindUFunction(this,FName(TEXT("OnFail_BEA92AAF4CD08BD443C5E09B57D1F361")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_6__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 46:
			{
				__CurrentState = 47;
				break;
			}
		case 47:
			{
				b0l_____byte_Variable_1__pf = b0l__K2Node_CustomEvent_MovementResult_12__pf;
			}
		case 48:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_2__pf.BindUFunction(this,FName(TEXT("w2b1")));
				bpfv__CallFunc_IsValidClass_ReturnValue_1__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_1__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf, bpfv__CallFunc_IsValidClass_ReturnValue_1__pf);
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_1__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_2__pf, 1.000000, bpfv__CallFunc_BooleanAND_ReturnValue_1__pf, 0.000000, 0.000000);
				__CurrentState = 17;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_14(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 90:
			{
				__CurrentState = 91;
				break;
			}
		case 91:
			{
				b0l_____byte_Variable__pf = b0l__K2Node_CustomEvent_MovementResult_14__pf;
			}
		case 92:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_3__pf.BindUFunction(this,FName(TEXT("w1b1")));
				bpfv__CallFunc_IsValidClass_ReturnValue__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_IsValidClass_ReturnValue__pf);
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_3__pf, 1.000000, bpfv__CallFunc_BooleanAND_ReturnValue__pf, 0.000000, 0.000000);
			}
		case 93:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpv__whiteperson1__pf, FVector(0.000000,0.000000,0.000000), bpv__blueperson2__pf, 5.000000, false);
			}
		case 94:
			{
				b0l__CallFunc_IsValid_ReturnValue_4__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 95:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_5__pf.BindUFunction(this,FName(TEXT("OnSuccess_5AC60F1743B56B6A7ECF1B8EF5255AEE")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_5__pf);
				}
			}
		case 96:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_4__pf.BindUFunction(this,FName(TEXT("OnFail_5AC60F1743B56B6A7ECF1B8EF5255AEE")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_4__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 107:
			{
				__CurrentState = 108;
				break;
			}
		case 108:
			{
				b0l_____byte_Variable__pf = b0l__K2Node_CustomEvent_MovementResult_15__pf;
				__CurrentState = 93;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_15(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_3__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_3__pf{};
	check(bpp__EntryPoint__pf == 56);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_3__pf = b0l__K2Node_CustomEvent_MovementResult_8__pf;
	b0l__K2Node_CreateDelegate_OutputDelegate_9__pf.BindUFunction(this,FName(TEXT("w2b2")));
	bpfv__CallFunc_IsValidClass_ReturnValue_3__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_3__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_3__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf, bpfv__CallFunc_IsValidClass_ReturnValue_3__pf);
	bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_3__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_9__pf, 1.000000, bpfv__CallFunc_BooleanAND_ReturnValue_3__pf, 0.000000, 0.000000);
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_16(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_2__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 51);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_2__pf = b0l__K2Node_CustomEvent_MovementResult_10__pf;
	b0l__K2Node_CreateDelegate_OutputDelegate_8__pf.BindUFunction(this,FName(TEXT("w1b2")));
	bpfv__CallFunc_IsValidClass_ReturnValue_2__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_2__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf, bpfv__CallFunc_IsValidClass_ReturnValue_2__pf);
	bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_2__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_8__pf, 1.000000, bpfv__CallFunc_BooleanAND_ReturnValue_2__pf, 0.000000, 0.000000);
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 82);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_7__pf = b0l__K2Node_CustomEvent_MovementResult_1__pf;
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_18(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 77);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_6__pf = b0l__K2Node_CustomEvent_MovementResult_3__pf;
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_19(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 54);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_3__pf = b0l__K2Node_CustomEvent_MovementResult_9__pf;
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__ExecuteUbergraph_BP_Grid__pf_20(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 49);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_2__pf = b0l__K2Node_CustomEvent_MovementResult_11__pf;
	return; //KCST_EndOfThread
}
void ABP_Grid_C__pf3410280870::bpf__b2w2__pf()
{
	bpf__ExecuteUbergraph_BP_Grid__pf_1(134);
}
void ABP_Grid_C__pf3410280870::bpf__b1w2__pf()
{
	bpf__ExecuteUbergraph_BP_Grid__pf_2(129);
}
void ABP_Grid_C__pf3410280870::bpf__b1w1__pf()
{
	bpf__ExecuteUbergraph_BP_Grid__pf_4(124);
}
void ABP_Grid_C__pf3410280870::bpf__b2w1__pf()
{
	bpf__ExecuteUbergraph_BP_Grid__pf_3(119);
}
void ABP_Grid_C__pf3410280870::bpf__w2b2__pf()
{
	bpf__ExecuteUbergraph_BP_Grid__pf_5(114);
}
void ABP_Grid_C__pf3410280870::bpf__w1b2__pf()
{
	bpf__ExecuteUbergraph_BP_Grid__pf_6(109);
}
void ABP_Grid_C__pf3410280870::bpf__w1b1__pf()
{
	bpf__ExecuteUbergraph_BP_Grid__pf_8(102);
}
void ABP_Grid_C__pf3410280870::bpf__w2b1__pf()
{
	bpf__ExecuteUbergraph_BP_Grid__pf_7(97);
}
void ABP_Grid_C__pf3410280870::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_Grid__pf_9(89);
}
void ABP_Grid_C__pf3410280870::bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_0(86);
}
void ABP_Grid_C__pf3410280870::bpf__OnSuccess_D539FED54EAD933A07E07EACFD15CDB7__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_10(84);
}
void ABP_Grid_C__pf3410280870::bpf__OnFail_D539FED54EAD933A07E07EACFD15CDB7__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_1__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_17(82);
}
void ABP_Grid_C__pf3410280870::bpf__OnSuccess_0BE09EC2415F25162CA546B0D1017AE7__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_2__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_10(79);
}
void ABP_Grid_C__pf3410280870::bpf__OnFail_0BE09EC2415F25162CA546B0D1017AE7__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_3__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_18(77);
}
void ABP_Grid_C__pf3410280870::bpf__OnSuccess_F99C41E34CB96AB93BDCB6A1CF83A0E5__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_4__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_11(74);
}
void ABP_Grid_C__pf3410280870::bpf__OnFail_F99C41E34CB96AB93BDCB6A1CF83A0E5__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_5__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_11(68);
}
void ABP_Grid_C__pf3410280870::bpf__OnSuccess_C8E2C3904C810C8C0ED204A16D8CF224__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_6__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_12(65);
}
void ABP_Grid_C__pf3410280870::bpf__OnFail_C8E2C3904C810C8C0ED204A16D8CF224__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_7__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_12(59);
}
void ABP_Grid_C__pf3410280870::bpf__OnSuccess_BEA92AAF4CD08BD443C5E09B57D1F361__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_8__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_15(56);
}
void ABP_Grid_C__pf3410280870::bpf__OnFail_BEA92AAF4CD08BD443C5E09B57D1F361__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_9__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_19(54);
}
void ABP_Grid_C__pf3410280870::bpf__OnSuccess_5AC60F1743B56B6A7ECF1B8EF5255AEE__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_10__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_16(51);
}
void ABP_Grid_C__pf3410280870::bpf__OnFail_5AC60F1743B56B6A7ECF1B8EF5255AEE__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_11__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_20(49);
}
void ABP_Grid_C__pf3410280870::bpf__OnSuccess_1E52789040FA80A1C3F0229690933EE4__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_12__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_13(46);
}
void ABP_Grid_C__pf3410280870::bpf__OnFail_1E52789040FA80A1C3F0229690933EE4__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_13__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_13(15);
}
void ABP_Grid_C__pf3410280870::bpf__OnSuccess_F24D833E4B02246E981ED8A33ABBBE38__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_14__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_14(90);
}
void ABP_Grid_C__pf3410280870::bpf__OnFail_F24D833E4B02246E981ED8A33ABBBE38__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_15__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Grid__pf_14(107);
}
void ABP_Grid_C__pf3410280870::bpf__UserConstructionScript__pf()
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	ABP_Grid_Visual_C__pf3410280870* bpfv__K2Node_DynamicCast_AsBP_Grid_Visual__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AActor::FlushNetDormancy();
	AActor*  __Local__17 = ((AActor*)nullptr);
	bpfv__K2Node_DynamicCast_AsBP_Grid_Visual__pf = Cast<ABP_Grid_Visual_C__pf3410280870>(((::IsValid(bpv__ChildActor_GridVisual__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__ChildActor_GridVisual__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__17)));
	bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Grid_Visual__pf != nullptr);;
	bpv__GridVisual__pf = bpfv__K2Node_DynamicCast_AsBP_Grid_Visual__pf;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 18, FName(TEXT("GridVisual")));
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
	bpf__SpawnGrid__pf(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpv__GridxTilexSize__pfTT, bpv__GridxTilexCount__pfTT, bpv__GridxShape__pfT, true);
}
void ABP_Grid_C__pf3410280870::bpf__SpawnGrid__pf(FVector bpp__CenterLocation__pf, FVector bpp__TileSize__pf, FIntPoint bpp__TileCount__pf, E__E_Grid_Shape__pf bpp__Shape__pf, bool bpp__UseEnvironment__pf)
{
	FIntPoint bpfv__Index__pf(EForceInit::ForceInit);
	FTransform bpfv__TileTransform__pf{};
	int32 bpfv__Y__pf{};
	int32 bpfv__X__pf{};
	int32 bpfv_____int_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue__pf{};
	int32 bpfv_____int_Variable_1__pf{};
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	FS_Tile_Data__pf886517966 bpfv__K2Node_MakeStruct_S_Tile_Data__pf{};
	int32 bpfv_____int_Variable_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_TraceForGround_OutLocation__pf(EForceInit::ForceInit);
	E__E_TileType__pf bpfv__CallFunc_TraceForGround_TileType__pf{};
	bool bpfv__CallFunc_Is_Int_Even_Is_Even__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	int32 bpfv__CallFunc_SelectInt_ReturnValue__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	FS_Tile_Data__pf886517966 bpfv__K2Node_MakeStruct_S_Tile_Data_1__pf{};
	int32 bpfv_____int_Variable_3__pf{};
	bool bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf{};
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_RotationBasedOnGridIndex_Rptation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Cal_Center_BottomLeftLocation_CenterLocation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Cal_Center_BottomLeftLocation_BottomLeftLocation__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint__pf(EForceInit::ForceInit);
	FS_Grid_Shape_Data__pf3764965557 bpfv__CallFunc_GetShapeRowData_ReturnValue__pf{};
	FVector bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				AActor::FlushNetDormancy();
			}
		case 2:
			{
				bpv__GridxCenterxLocation__pfTT = bpp__CenterLocation__pf;
			}
		case 3:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 10, FName(TEXT("Grid Center Location")));
			}
		case 4:
			{
				AActor::FlushNetDormancy();
			}
		case 5:
			{
				bpv__GridxTilexSize__pfTT = bpp__TileSize__pf;
			}
		case 6:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 11, FName(TEXT("Grid Tile Size")));
			}
		case 7:
			{
				AActor::FlushNetDormancy();
			}
		case 8:
			{
				bpv__GridxShape__pfT = bpp__Shape__pf;
			}
		case 9:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 13, FName(TEXT("Grid Shape")));
			}
		case 10:
			{
				AActor::FlushNetDormancy();
			}
		case 11:
			{
				bpv__GridxTilexCount__pfTT = bpp__TileCount__pf;
			}
		case 12:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 12, FName(TEXT("Grid Tile Count")));
			}
		case 13:
			{
				bpf__DeletexGrid__pfT();
			}
		case 14:
			{
				if(::IsValid(bpv__GridVisual__pf))
				{
					bpv__GridVisual__pf->bpf__InitializeGridVisual__pf(this);
				}
			}
		case 15:
			{
				bpf__Cal_CenterxBottomLeftLocation__pfN(/*out*/ bpfv__CallFunc_Cal_Center_BottomLeftLocation_CenterLocation__pf, /*out*/ bpfv__CallFunc_Cal_Center_BottomLeftLocation_BottomLeftLocation__pf);
			}
		case 16:
			{
				AActor::FlushNetDormancy();
			}
		case 17:
			{
				bpv__GridxCenterxLocation__pfTT = bpfv__CallFunc_Cal_Center_BottomLeftLocation_CenterLocation__pf;
			}
		case 18:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 10, FName(TEXT("Grid Center Location")));
			}
		case 19:
			{
				AActor::FlushNetDormancy();
			}
		case 20:
			{
				bpv__GridLeftBottomLocation__pf = bpfv__CallFunc_Cal_Center_BottomLeftLocation_BottomLeftLocation__pf;
			}
		case 21:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 14, FName(TEXT("GridLeftBottomLocation")));
			}
		case 22:
			{
				bpfv_____int_Variable__pf = 0;
			}
		case 23:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Subtract_IntInt(bpv__GridxTilexCount__pfTT.X, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_2__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv_____int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 24:
			{
				__StateStack.Push(38);
			}
		case 25:
			{
				bpfv__X__pf = bpfv_____int_Variable__pf;
			}
		case 26:
			{
				bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GridxShape__pfT), static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator2));
				if (!bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 39;
					break;
				}
			}
		case 27:
			{
				bpfv_____int_Variable_1__pf = 0;
			}
		case 28:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpv__GridxTilexCount__pfTT.Y, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv_____int_Variable_1__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 29:
			{
				__StateStack.Push(47);
			}
		case 30:
			{
				bpfv__Y__pf = bpfv_____int_Variable_1__pf;
			}
		case 31:
			{
				bpfv__K2Node_MakeStruct_IntPoint__pf.X = bpfv__X__pf;
				bpfv__K2Node_MakeStruct_IntPoint__pf.Y = bpfv__Y__pf;
				bpfv__Index__pf = bpfv__K2Node_MakeStruct_IntPoint__pf;
			}
		case 32:
			{
				bpf__LocationBasedOnGridIndex__pf(bpfv__Index__pf, /*out*/ bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation__pf);
				bpf__RotationBasedOnGridIndex__pf(bpfv__Index__pf, /*out*/ bpfv__CallFunc_RotationBasedOnGridIndex_Rptation__pf);
				bpfv__CallFunc_GetShapeRowData_ReturnValue__pf = bpf__GetShapeRowData__pf();
				bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf = UKismetMathLibrary::Divide_VectorVector(bpv__GridxTilexSize__pfTT, bpfv__CallFunc_GetShapeRowData_ReturnValue__pf.bpv__MeshSize_2_150601254BFFA36F23D953B2A548FBD8__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation__pf, bpfv__CallFunc_RotationBasedOnGridIndex_Rptation__pf, bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf);
				bpfv__TileTransform__pf = bpfv__CallFunc_MakeTransform_ReturnValue_1__pf;
			}
		case 33:
			{
				if (!bpp__UseEnvironment__pf)
				{
					__CurrentState = 48;
					break;
				}
			}
		case 34:
			{
				UKismetMathLibrary::BreakTransform(bpfv__TileTransform__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				bpf__TraceForGround__pf(bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_TraceForGround_OutLocation__pf, /*out*/ bpfv__CallFunc_TraceForGround_TileType__pf);
			}
		case 35:
			{
				UKismetMathLibrary::BreakTransform(bpfv__TileTransform__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_TraceForGround_OutLocation__pf, bpfv__CallFunc_BreakTransform_Rotation__pf, bpfv__CallFunc_BreakTransform_Scale__pf);
				bpfv__K2Node_MakeStruct_S_Tile_Data_1__pf.bpv__Index_4_8B807B2E4D9C2A5077F8F3993D8978A5__pf = bpfv__Index__pf;
				bpfv__K2Node_MakeStruct_S_Tile_Data_1__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf = bpfv__CallFunc_TraceForGround_TileType__pf;
				bpfv__K2Node_MakeStruct_S_Tile_Data_1__pf.bpv__Transform_8_5DA78643471C62D3691412BB7714ED33__pf = bpfv__CallFunc_MakeTransform_ReturnValue__pf;
				const UScriptStruct* __Local__19 = CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("IntPoint"), TEXT("/Script/CoreUObject")));
				uint8* __Local__20 = (uint8*)FMemory_Alloca(__Local__19->GetStructureSize());
				__Local__19->InitializeStruct(__Local__20);
				FIntPoint& __Local__18 = *reinterpret_cast<FIntPoint*>(__Local__20);
				__Local__18.X = -1;
				__Local__18.Y = -1;
				bpfv__K2Node_MakeStruct_S_Tile_Data_1__pf.bpv__PreNode_15_3FBA7FBF4B9A4160A7E8CB9C9229155D__pf = __Local__18;
				bpf__Add_Grid_Tile__pf(bpfv__K2Node_MakeStruct_S_Tile_Data_1__pf);
			}
		case 36:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_TraceForGround_TileType__pf), static_cast<uint8>(E__E_TileType__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 37:
			{
				bpfv__CallFunc_Array_AddUnique_ReturnValue_1__pf = FCustomThunkTemplates::Array_AddUnique(bpv__TileIndexes__pf, bpfv__Index__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Variable__pf, 1);
				bpfv_____int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 23;
				break;
			}
		case 39:
			{
				UBFL_Utilities_C__pf2069076602::bpf__Is_Int_Even__pf(bpfv__X__pf, this, /*out*/ bpfv__CallFunc_Is_Int_Even_Is_Even__pf);
				bpfv__CallFunc_SelectInt_ReturnValue__pf = UKismetMathLibrary::SelectInt(0, 1, bpfv__CallFunc_Is_Int_Even_Is_Even__pf);
				bpfv_____int_Variable_2__pf = bpfv__CallFunc_SelectInt_ReturnValue__pf;
			}
		case 40:
			{
				bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpv__GridxTilexCount__pfTT.Y, 2);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv_____int_Variable_2__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 41:
			{
				__StateStack.Push(46);
			}
		case 42:
			{
				bpfv__Y__pf = bpfv_____int_Variable_2__pf;
			}
		case 43:
			{
				__CurrentState = 44;
				break;
			}
		case 44:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Variable_2__pf, 1);
				bpfv_____int_Variable_3__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
			}
		case 45:
			{
				bpfv_____int_Variable_2__pf = bpfv_____int_Variable_3__pf;
				__CurrentState = 31;
				break;
			}
		case 46:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Variable_2__pf, 1);
				bpfv_____int_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
				__CurrentState = 40;
				break;
			}
		case 47:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Variable_1__pf, 1);
				bpfv_____int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 28;
				break;
			}
		case 48:
			{
				bpfv__K2Node_MakeStruct_S_Tile_Data__pf.bpv__Index_4_8B807B2E4D9C2A5077F8F3993D8978A5__pf = bpfv__Index__pf;
				bpfv__K2Node_MakeStruct_S_Tile_Data__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf = E__E_TileType__pf::NewEnumerator1;
				bpfv__K2Node_MakeStruct_S_Tile_Data__pf.bpv__Transform_8_5DA78643471C62D3691412BB7714ED33__pf = bpfv__TileTransform__pf;
				const UScriptStruct* __Local__22 = CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("IntPoint"), TEXT("/Script/CoreUObject")));
				uint8* __Local__23 = (uint8*)FMemory_Alloca(__Local__22->GetStructureSize());
				__Local__22->InitializeStruct(__Local__23);
				FIntPoint& __Local__21 = *reinterpret_cast<FIntPoint*>(__Local__23);
				__Local__21.X = -1;
				__Local__21.Y = -1;
				bpfv__K2Node_MakeStruct_S_Tile_Data__pf.bpv__PreNode_15_3FBA7FBF4B9A4160A7E8CB9C9229155D__pf = __Local__21;
				bpf__Add_Grid_Tile__pf(bpfv__K2Node_MakeStruct_S_Tile_Data__pf);
			}
		case 49:
			{
				bpfv__CallFunc_Array_AddUnique_ReturnValue__pf = FCustomThunkTemplates::Array_AddUnique(bpv__TileIndexes__pf, bpfv__Index__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
FS_Grid_Shape_Data__pf3764965557  ABP_Grid_C__pf3410280870::bpf__GetShapeRowData__pf()
{
	FS_Grid_Shape_Data__pf3764965557 bpp__ReturnValue__pf{};
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FName bpfv__CallFunc_Conv_StringToName_ReturnValue__pf{};
	FS_Grid_Shape_Data__pf3764965557 bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf{};
	bool bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(ABP_Grid_C__pf3410280870::StaticClass())->ReferencedConvertedFields[2]), static_cast<uint8>(bpv__GridxShape__pfT));
				bpfv__CallFunc_Conv_StringToName_ReturnValue__pf = UKismetStringLibrary::Conv_StringToName(bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf);
				bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf = FCustomThunkTemplates::GetDataTableRowFromName(CastChecked<UDataTable>(CastChecked<UDynamicClass>(ABP_Grid_C__pf3410280870::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_StringToName_ReturnValue__pf, /*out*/ bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf);
			}
		case 2:
			{
				if (!bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				bpp__ReturnValue__pf = bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(ABP_Grid_C__pf3410280870::StaticClass())->ReferencedConvertedFields[2]), static_cast<uint8>(bpv__GridxShape__pfT));
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Error -cannot find row-")), bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
void ABP_Grid_C__pf3410280870::bpf__DeletexGrid__pfT()
{
	FCustomThunkTemplates::Array_Clear(bpv__TileIndexes__pf);
	FCustomThunkTemplates::Map_Clear(bpv__GridTiles__pf);
	if(::IsValid(bpv__GridVisual__pf))
	{
		bpv__GridVisual__pf->bpf__DestoryGridVisual__pf();
	}
}
void ABP_Grid_C__pf3410280870::bpf__Cal_CenterxBottomLeftLocation__pfN(/*out*/ FVector& bpp__CenterLocation__pf, /*out*/ FVector& bpp__BottomLeftLocation__pf)
{
	FVector bpfv__Center__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_SnapVecToVec_Return__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_SnapVecToVec_Return_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_SnapVecToVec_Return_2__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	FVector2D bpfv__CallFunc_Subtract_Vector2DVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Is_Int_Even_Is_Even__pf{};
	FVector bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_SnapVecToVec_Return_3__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Is_Int_Even_Is_Even_1__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_SelectFloat_ReturnValue_1__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_SnapVecToVec_Return_4__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Subtract_Vector2DVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Divide_Vector2DFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Center__pf = FVector(0.000000,0.000000,0.000000);
			}
		case 2:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GridxShape__pfT), static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GridxShape__pfT), static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GridxShape__pfT), static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				UBFL_Utilities_C__pf2069076602::bpf__SnapVecToVec__pf(bpv__GridxCenterxLocation__pfTT, bpv__GridxTilexSize__pfTT, this, /*out*/ bpfv__CallFunc_SnapVecToVec_Return_4__pf);
				bpfv__Center__pf = bpfv__CallFunc_SnapVecToVec_Return_4__pf;
			}
		case 4:
			{
				UBFL_Utilities_C__pf2069076602::bpf__Is_Int_Even__pf(bpv__GridxTilexCount__pfTT.Y, this, /*out*/ bpfv__CallFunc_Is_Int_Even_Is_Even__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(0.000000, 1.000000, bpfv__CallFunc_Is_Int_Even_Is_Even__pf);
				UBFL_Utilities_C__pf2069076602::bpf__Is_Int_Even__pf(bpv__GridxTilexCount__pfTT.X, this, /*out*/ bpfv__CallFunc_Is_Int_Even_Is_Even_1__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue_1__pf = UKismetMathLibrary::SelectFloat(0.000000, 1.000000, bpfv__CallFunc_Is_Int_Even_Is_Even_1__pf);
				bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_SelectFloat_ReturnValue_1__pf, bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_2__pf = UKismetMathLibrary::Conv_VectorToVector2D(bpv__GridxTilexSize__pfTT);
				bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue_2__pf = UKismetMathLibrary::Conv_IntPointToVector2D(bpv__GridxTilexCount__pfTT);
				bpfv__CallFunc_Subtract_Vector2DVector2D_ReturnValue_1__pf = UKismetMathLibrary::Subtract_Vector2DVector2D(bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue_2__pf, bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf);
				bpfv__CallFunc_Divide_Vector2DFloat_ReturnValue__pf = UKismetMathLibrary::Divide_Vector2DFloat(bpfv__CallFunc_Subtract_Vector2DVector2D_ReturnValue_1__pf, 2.000000);
				bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue_2__pf = UKismetMathLibrary::Multiply_Vector2DVector2D(bpfv__CallFunc_Divide_Vector2DFloat_ReturnValue__pf, bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_2__pf);
				bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue_2__pf = UKismetMathLibrary::Conv_Vector2DToVector(bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue_2__pf, 0.000000);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__Center__pf, bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue_2__pf);
				bpp__CenterLocation__pf = bpfv__Center__pf;
				bpp__BottomLeftLocation__pf = bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorVector(bpv__GridxTilexSize__pfTT, FVector(1.500000,1.000000,1.000000));
				UBFL_Utilities_C__pf2069076602::bpf__SnapVecToVec__pf(bpv__GridxCenterxLocation__pfTT, bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf, this, /*out*/ bpfv__CallFunc_SnapVecToVec_Return__pf);
				bpfv__Center__pf = bpfv__CallFunc_SnapVecToVec_Return__pf;
			}
		case 6:
			{
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpv__GridxTilexSize__pfTT, FVector(1.500000,1.000000,1.000000));
				bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToVector2D(bpv__GridxTilexSize__pfTT);
				bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue__pf = UKismetMathLibrary::Conv_IntPointToVector2D(bpv__GridxTilexCount__pfTT);
				bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue__pf = UKismetMathLibrary::Divide_Vector2DVector2D(bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue__pf, FVector2D(3.000000,2.000000));
				bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue__pf = UKismetMathLibrary::Multiply_Vector2DVector2D(bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue__pf, bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue__pf);
				bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue__pf = UKismetMathLibrary::Conv_Vector2DToVector(bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue__pf, 0.000000);
				UBFL_Utilities_C__pf2069076602::bpf__SnapVecToVec__pf(bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf, this, /*out*/ bpfv__CallFunc_SnapVecToVec_Return_1__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__Center__pf, bpfv__CallFunc_SnapVecToVec_Return_1__pf);
				bpp__CenterLocation__pf = bpfv__Center__pf;
				bpp__BottomLeftLocation__pf = bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue_3__pf = UKismetMathLibrary::Multiply_VectorVector(bpv__GridxTilexSize__pfTT, FVector(2.000000,1.000000,1.000000));
				UBFL_Utilities_C__pf2069076602::bpf__SnapVecToVec__pf(bpv__GridxCenterxLocation__pfTT, bpfv__CallFunc_Multiply_VectorVector_ReturnValue_3__pf, this, /*out*/ bpfv__CallFunc_SnapVecToVec_Return_2__pf);
				bpfv__Center__pf = bpfv__CallFunc_SnapVecToVec_Return_2__pf;
			}
		case 8:
			{
				bpfv__CallFunc_MakeVector2D_ReturnValue__pf = UKismetMathLibrary::MakeVector2D(1.000000, 1.000000);
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Multiply_VectorVector(bpv__GridxTilexSize__pfTT, FVector(2.000000,1.000000,1.000000));
				bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToVector2D(bpv__GridxTilexSize__pfTT);
				bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue_1__pf = UKismetMathLibrary::Conv_IntPointToVector2D(bpv__GridxTilexCount__pfTT);
				bpfv__CallFunc_Subtract_Vector2DVector2D_ReturnValue__pf = UKismetMathLibrary::Subtract_Vector2DVector2D(bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue_1__pf, bpfv__CallFunc_MakeVector2D_ReturnValue__pf);
				bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue_1__pf = UKismetMathLibrary::Divide_Vector2DVector2D(bpfv__CallFunc_Subtract_Vector2DVector2D_ReturnValue__pf, FVector2D(2.000000,4.000000));
				bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue_1__pf = UKismetMathLibrary::Multiply_Vector2DVector2D(bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue_1__pf, bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue_1__pf = UKismetMathLibrary::Conv_Vector2DToVector(bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue_1__pf, 0.000000);
				UBFL_Utilities_C__pf2069076602::bpf__SnapVecToVec__pf(bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue_1__pf, bpfv__CallFunc_Multiply_VectorVector_ReturnValue_2__pf, this, /*out*/ bpfv__CallFunc_SnapVecToVec_Return_3__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__Center__pf, bpfv__CallFunc_SnapVecToVec_Return_3__pf);
				bpp__CenterLocation__pf = bpfv__Center__pf;
				bpp__BottomLeftLocation__pf = bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__RotationBasedOnGridIndex__pf(FIntPoint bpp__GridIndex__pf, /*out*/ FRotator& bpp__Rptation__pf)
{
	bool bpfv__CallFunc_Is_Int_Even_Is_Even__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Is_Int_Even_Is_Even_1__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__GridxShape__pfT), static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator3));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				UBFL_Utilities_C__pf2069076602::bpf__Is_Int_Even__pf(bpp__GridIndex__pf.Y, this, /*out*/ bpfv__CallFunc_Is_Int_Even_Is_Even__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(180.000000, 0.000000, bpfv__CallFunc_Is_Int_Even_Is_Even__pf);
				UBFL_Utilities_C__pf2069076602::bpf__Is_Int_Even__pf(bpp__GridIndex__pf.X, this, /*out*/ bpfv__CallFunc_Is_Int_Even_Is_Even_1__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue_1__pf = UKismetMathLibrary::SelectFloat(180.000000, 0.000000, bpfv__CallFunc_Is_Int_Even_Is_Even_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_SelectFloat_ReturnValue__pf, bpfv__CallFunc_SelectFloat_ReturnValue_1__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpp__Rptation__pf = bpfv__CallFunc_MakeRotator_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpp__Rptation__pf = FRotator(0.000000,0.000000,0.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__LocationBasedOnGridIndex__pf(FIntPoint bpp__Grid_Index__pf, /*out*/ FVector& bpp__TransLocation__pf)
{
	E__E_Grid_Shape__pf bpfv_____byte_Variable__pf{};
	FVector2D bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv_____struct_Variable__pf(EForceInit::ForceInit);
	FVector2D bpfv_____struct_Variable_1__pf(EForceInit::ForceInit);
	FVector2D bpfv_____struct_Variable_2__pf(EForceInit::ForceInit);
	FVector2D bpfv_____struct_Variable_3__pf(EForceInit::ForceInit);
	FVector2D bpfv__K2Node_Select_Default__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue__pf = UKismetMathLibrary::Conv_IntPointToVector2D(bpp__Grid_Index__pf);
	bpfv_____struct_Variable__pf = FVector2D(1.000000,0.500000);
	bpfv_____struct_Variable_1__pf = FVector2D(0.750000,0.500000);
	bpfv_____struct_Variable_2__pf = FVector2D(1.000000,1.000000);
	bpfv_____struct_Variable_3__pf = FVector2D(0.000000,0.000000);
	bpfv_____byte_Variable__pf = bpv__GridxShape__pfT;
	bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue__pf = UKismetMathLibrary::Multiply_Vector2DVector2D(bpfv__CallFunc_Conv_IntPointToVector2D_ReturnValue__pf, TSwitchValue<E__E_Grid_Shape__pf , FVector2D >(bpfv_____byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<E__E_Grid_Shape__pf , FVector2D >(E__E_Grid_Shape__pf::NewEnumerator0, bpfv_____struct_Variable_3__pf), TSwitchPair<E__E_Grid_Shape__pf , FVector2D >(E__E_Grid_Shape__pf::NewEnumerator1, bpfv_____struct_Variable_2__pf), TSwitchPair<E__E_Grid_Shape__pf , FVector2D >(E__E_Grid_Shape__pf::NewEnumerator2, bpfv_____struct_Variable_1__pf), TSwitchPair<E__E_Grid_Shape__pf , FVector2D >(E__E_Grid_Shape__pf::NewEnumerator3, bpfv_____struct_Variable__pf)));
	bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue__pf = UKismetMathLibrary::Conv_Vector2DToVector(bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue__pf, 0.000000);
	bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpv__GridxTilexSize__pfTT, bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue__pf);
	bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__GridLeftBottomLocation__pf, bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf);
	bpp__TransLocation__pf = bpfv__CallFunc_Add_VectorVector_ReturnValue__pf;
}
void ABP_Grid_C__pf3410280870::bpf__TraceForGround__pf(FVector bpp__InLocation__pf, /*out*/ FVector& bpp__OutLocation__pf, /*out*/ E__E_TileType__pf& bpp__TileType__pf)
{
	float bpfv__Ret_Z__pf{};
	E__E_TileType__pf bpfv__Ret_Type__pf{};
	TArray<AActor*> bpfv_____object_Variable__pf{};
	int32 bpfv_____int_Array_Index_Variable__pf{};
	int32 bpfv_____int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X_2__pf{};
	float bpfv__CallFunc_BreakVector_Y_2__pf{};
	float bpfv__CallFunc_BreakVector_Z_2__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	TArray<FHitResult> bpfv__CallFunc_SphereTraceMulti_OutHits__pf{};
	bool bpfv__CallFunc_SphereTraceMulti_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	float bpfv__CallFunc_BreakHitResult_Distance__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_ElementIndex__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	ABP_Grid_Modifier_C__pf3410280870* bpfv__K2Node_DynamicCast_AsBP_Grid_Modifier__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	float bpfv__CallFunc_BreakVector_X_3__pf{};
	float bpfv__CallFunc_BreakVector_Y_3__pf{};
	float bpfv__CallFunc_BreakVector_Z_3__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_GridSnap_Float_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Ret_Type__pf = E__E_TileType__pf::NewEnumerator0;
			}
		case 2:
			{
				bpfv__Ret_Z__pf = 0.000000;
			}
		case 3:
			{
				AActor::FlushNetDormancy();
			}
		case 4:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__GridxShape__pfT), static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator3));
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(5.000000, 3.000000, bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpv__GridxTilexSize__pfTT, /*out*/ bpfv__CallFunc_BreakVector_X_2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_2__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_BreakVector_X_2__pf, bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				bpv__Radius__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf;
			}
		case 5:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 16, FName(TEXT("Radius")));
			}
		case 6:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpp__InLocation__pf, FVector(0.000000,0.000000,1000.000000));
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpp__InLocation__pf, FVector(0.000000,0.000000,1000.000000));
				(bpfv__CallFunc_SphereTraceMulti_OutHits__pf).Reset();
				bpfv__CallFunc_SphereTraceMulti_ReturnValue__pf = UKismetSystemLibrary::SphereTraceMulti(this, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf, bpv__Radius__pf, ETraceTypeQuery::TraceTypeQuery3, false, bpfv_____object_Variable__pf, EDrawDebugTrace::None, /*out*/ bpfv__CallFunc_SphereTraceMulti_OutHits__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 7:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_SphereTraceMulti_OutHits__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 8:
			{
				bpfv__Ret_Type__pf = E__E_TileType__pf::NewEnumerator1;
			}
		case 9:
			{
				bpfv_____int_Loop_Counter_Variable__pf = 0;
			}
		case 10:
			{
				bpfv_____int_Array_Index_Variable__pf = 0;
			}
		case 11:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_SphereTraceMulti_OutHits__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv_____int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 12:
			{
				bpfv_____int_Array_Index_Variable__pf = bpfv_____int_Loop_Counter_Variable__pf;
			}
		case 13:
			{
				__StateStack.Push(19);
			}
		case 14:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_SphereTraceMulti_OutHits__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ElementIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__K2Node_DynamicCast_AsBP_Grid_Modifier__pf = Cast<ABP_Grid_Modifier_C__pf3410280870>(bpfv__CallFunc_BreakHitResult_HitActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Grid_Modifier__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				E__E_TileType__pf  __Local__24 = E__E_TileType__pf::NewEnumerator0;
				bpfv__Ret_Type__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsBP_Grid_Modifier__pf)) ? (bpfv__K2Node_DynamicCast_AsBP_Grid_Modifier__pf->bpv__Type__pf) : (__Local__24));
			}
		case 16:
			{
				UKismetMathLibrary::BreakVector(bpv__GridxTilexSize__pfTT, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_SphereTraceMulti_OutHits__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ElementIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakVector_X_3__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_3__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_3__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_BreakVector_Z_3__pf, bpv__Radius__pf);
				bpfv__CallFunc_GridSnap_Float_ReturnValue__pf = UKismetMathLibrary::GridSnap_Float(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__Ret_Z__pf = bpfv__CallFunc_GridSnap_Float_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				bpp__OutLocation__pf = bpp__InLocation__pf;
				bpp__TileType__pf = E__E_TileType__pf::NewEnumerator0;
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				UKismetMathLibrary::BreakVector(bpp__InLocation__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X_1__pf, bpfv__CallFunc_BreakVector_Y_1__pf, bpfv__Ret_Z__pf);
				bpp__OutLocation__pf = bpfv__CallFunc_MakeVector_ReturnValue__pf;
				bpp__TileType__pf = bpfv__Ret_Type__pf;
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Loop_Counter_Variable__pf, 1);
				bpfv_____int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 11;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__Add_Grid_Tile__pf(FS_Tile_Data__pf886517966 bpp__Data__pf)
{
	FCustomThunkTemplates::Map_Add(bpv__GridTiles__pf, bpp__Data__pf.bpv__Index_4_8B807B2E4D9C2A5077F8F3993D8978A5__pf, bpp__Data__pf);
	if(::IsValid(bpv__GridVisual__pf))
	{
		bpv__GridVisual__pf->bpf__Update_Tile_Visual__pf(bpp__Data__pf);
	}
}
void ABP_Grid_C__pf3410280870::bpf__Get_MouseLocationOnGrid__pf(int32 bpp__PlayerIndex__pf, /*out*/ FVector& bpp__Location__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	FVector bpfv__CallFunc_DeprojectMousePositionToWorld_WorldLocation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_DeprojectMousePositionToWorld_WorldDirection__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_DeprojectMousePositionToWorld_ReturnValue__pf{};
	FPlane bpfv__CallFunc_MakePlaneFromPointAndNormal_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf{};
	bool bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_LinePlaneIntersection_T__pf{};
	FVector bpfv__CallFunc_LinePlaneIntersection_Intersection__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LinePlaneIntersection_ReturnValue__pf{};
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	float bpfv__CallFunc_BreakHitResult_Distance__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_ElementIndex__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, bpp__PlayerIndex__pf);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery4, true, /*out*/ bpfv__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
				}
				if (!bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, bpp__PlayerIndex__pf);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery4, true, /*out*/ bpfv__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
				}
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ElementIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpp__Location__pf = bpfv__CallFunc_BreakHitResult_Location__pf;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, bpp__PlayerIndex__pf);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_DeprojectMousePositionToWorld_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::DeprojectMousePositionToWorld(/*out*/ bpfv__CallFunc_DeprojectMousePositionToWorld_WorldLocation__pf, /*out*/ bpfv__CallFunc_DeprojectMousePositionToWorld_WorldDirection__pf);
				}
				bpfv__CallFunc_MakePlaneFromPointAndNormal_ReturnValue__pf = UKismetMathLibrary::MakePlaneFromPointAndNormal(bpv__GridxCenterxLocation__pfTT, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_DeprojectMousePositionToWorld_WorldDirection__pf, 999999.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_DeprojectMousePositionToWorld_WorldLocation__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpfv__CallFunc_LinePlaneIntersection_ReturnValue__pf = UKismetMathLibrary::LinePlaneIntersection(bpfv__CallFunc_DeprojectMousePositionToWorld_WorldLocation__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, bpfv__CallFunc_MakePlaneFromPointAndNormal_ReturnValue__pf, /*out*/ bpfv__CallFunc_LinePlaneIntersection_T__pf, /*out*/ bpfv__CallFunc_LinePlaneIntersection_Intersection__pf);
				if (!bpfv__CallFunc_LinePlaneIntersection_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, bpp__PlayerIndex__pf);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_DeprojectMousePositionToWorld_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::DeprojectMousePositionToWorld(/*out*/ bpfv__CallFunc_DeprojectMousePositionToWorld_WorldLocation__pf, /*out*/ bpfv__CallFunc_DeprojectMousePositionToWorld_WorldDirection__pf);
				}
				bpfv__CallFunc_MakePlaneFromPointAndNormal_ReturnValue__pf = UKismetMathLibrary::MakePlaneFromPointAndNormal(bpv__GridxCenterxLocation__pfTT, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_DeprojectMousePositionToWorld_WorldDirection__pf, 999999.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_DeprojectMousePositionToWorld_WorldLocation__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpfv__CallFunc_LinePlaneIntersection_ReturnValue__pf = UKismetMathLibrary::LinePlaneIntersection(bpfv__CallFunc_DeprojectMousePositionToWorld_WorldLocation__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, bpfv__CallFunc_MakePlaneFromPointAndNormal_ReturnValue__pf, /*out*/ bpfv__CallFunc_LinePlaneIntersection_T__pf, /*out*/ bpfv__CallFunc_LinePlaneIntersection_Intersection__pf);
				bpp__Location__pf = bpfv__CallFunc_LinePlaneIntersection_Intersection__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpp__Location__pf = FVector(-9999.000000,-9999.000000,-9999.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__Get_TileIndexFromWorldLocation__pf(FVector bpp__Location__pf, /*out*/ FIntPoint& bpp__TileIndex__pf)
{
	FVector2D bpfv__TempIndex__pf(EForceInit::ForceInit);
	FVector2D bpfv__SnappedLocationOnGrid__pf(EForceInit::ForceInit);
	FVector bpfv__LocationOnGrid__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector2D_X__pf{};
	float bpfv__CallFunc_BreakVector2D_Y__pf{};
	float bpfv__CallFunc_BreakVector2D_X_1__pf{};
	float bpfv__CallFunc_BreakVector2D_Y_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_FFloor_ReturnValue__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_3__pf{};
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_1__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector2D_X_2__pf{};
	float bpfv__CallFunc_BreakVector2D_Y_2__pf{};
	bool bpfv__CallFunc_Is_Float_Even_Is_Even__pf{};
	FVector2D bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_SnapVecToVec_Return__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	FIntPoint bpfv__CallFunc_Conv_Vector2DToIntPoint_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_SnapVecToVec_Return_1__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue_2__pf(EForceInit::ForceInit);
	FIntPoint bpfv__CallFunc_Conv_Vector2DToIntPoint_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_SnapVecToVec_Return_2__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_5__pf(EForceInit::ForceInit);
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocationOnGrid__pf = FVector(0.000000,0.000000,0.000000);
			}
		case 2:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpp__Location__pf, bpv__GridLeftBottomLocation__pf);
				bpfv__LocationOnGrid__pf = bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf;
			}
		case 3:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GridxShape__pfT), static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GridxShape__pfT), static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GridxShape__pfT), static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GridxShape__pfT), static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 12;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__K2Node_MakeStruct_IntPoint__pf.X = -999;
				bpfv__K2Node_MakeStruct_IntPoint__pf.Y = -999;
				bpp__TileIndex__pf = bpfv__K2Node_MakeStruct_IntPoint__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				UBFL_Utilities_C__pf2069076602::bpf__SnapVecToVec__pf(bpfv__LocationOnGrid__pf, bpv__GridxTilexSize__pfTT, this, /*out*/ bpfv__CallFunc_SnapVecToVec_Return_2__pf);
				bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_5__pf = UKismetMathLibrary::Conv_VectorToVector2D(bpfv__CallFunc_SnapVecToVec_Return_2__pf);
				bpfv__SnappedLocationOnGrid__pf = bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_5__pf;
			}
		case 6:
			{
				bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_3__pf = UKismetMathLibrary::Conv_VectorToVector2D(bpv__GridxTilexSize__pfTT);
				bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue_2__pf = UKismetMathLibrary::Divide_Vector2DVector2D(bpfv__SnappedLocationOnGrid__pf, bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_3__pf);
				bpfv__CallFunc_Conv_Vector2DToIntPoint_ReturnValue_1__pf = UKismetMathLibrary::Conv_Vector2DToIntPoint(bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue_2__pf);
				bpp__TileIndex__pf = bpfv__CallFunc_Conv_Vector2DToIntPoint_ReturnValue_1__pf;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpv__GridxTilexSize__pfTT, FVector(0.750000,0.250000,1.000000));
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorVector(bpfv__LocationOnGrid__pf, FVector(1.000000,2.000000,1.000000));
				UBFL_Utilities_C__pf2069076602::bpf__SnapVecToVec__pf(bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf, bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf, this, /*out*/ bpfv__CallFunc_SnapVecToVec_Return__pf);
				bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_2__pf = UKismetMathLibrary::Conv_VectorToVector2D(bpfv__CallFunc_SnapVecToVec_Return__pf);
				bpfv__SnappedLocationOnGrid__pf = bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_2__pf;
			}
		case 8:
			{
				bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToVector2D(bpv__GridxTilexSize__pfTT);
				bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue__pf = UKismetMathLibrary::Multiply_Vector2DVector2D(bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue__pf, FVector2D(0.750000,1.000000));
				bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue__pf = UKismetMathLibrary::Divide_Vector2DVector2D(bpfv__SnappedLocationOnGrid__pf, bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue__pf);
				bpfv__TempIndex__pf = bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue__pf;
			}
		case 9:
			{
				UKismetMathLibrary::BreakVector2D(bpfv__TempIndex__pf, /*out*/ bpfv__CallFunc_BreakVector2D_X_2__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y_2__pf);
				UBFL_Utilities_C__pf2069076602::bpf__Is_Float_Even__pf(bpfv__CallFunc_BreakVector2D_X_2__pf, this, /*out*/ bpfv__CallFunc_Is_Float_Even_Is_Even__pf);
				if (!bpfv__CallFunc_Is_Float_Even_Is_Even__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 10:
			{
				UKismetMathLibrary::BreakVector2D(bpfv__TempIndex__pf, /*out*/ bpfv__CallFunc_BreakVector2D_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y_1__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_BreakVector2D_Y_1__pf, 2.000000);
				bpfv__CallFunc_Round_ReturnValue__pf = UKismetMathLibrary::Round(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Round_ReturnValue__pf, 2.000000);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf);
				bpfv__CallFunc_FTrunc_ReturnValue_2__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_BreakVector2D_X_1__pf);
				bpfv__K2Node_MakeStruct_IntPoint_1__pf.X = bpfv__CallFunc_FTrunc_ReturnValue_2__pf;
				bpfv__K2Node_MakeStruct_IntPoint_1__pf.Y = bpfv__CallFunc_FTrunc_ReturnValue__pf;
				bpp__TileIndex__pf = bpfv__K2Node_MakeStruct_IntPoint_1__pf;
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				UKismetMathLibrary::BreakVector2D(bpfv__TempIndex__pf, /*out*/ bpfv__CallFunc_BreakVector2D_X__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_BreakVector2D_Y__pf, 2.000000);
				bpfv__CallFunc_FFloor_ReturnValue__pf = UKismetMathLibrary::FFloor(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_FFloor_ReturnValue__pf, 2.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, 1.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_FTrunc_ReturnValue_3__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_BreakVector2D_X__pf);
				bpfv__K2Node_MakeStruct_IntPoint_2__pf.X = bpfv__CallFunc_FTrunc_ReturnValue_3__pf;
				bpfv__K2Node_MakeStruct_IntPoint_2__pf.Y = bpfv__CallFunc_FTrunc_ReturnValue_1__pf;
				bpp__TileIndex__pf = bpfv__K2Node_MakeStruct_IntPoint_2__pf;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf = UKismetMathLibrary::Divide_VectorVector(bpv__GridxTilexSize__pfTT, FVector(1.000000,2.000000,1.000000));
				UBFL_Utilities_C__pf2069076602::bpf__SnapVecToVec__pf(bpfv__LocationOnGrid__pf, bpfv__CallFunc_Divide_VectorVector_ReturnValue__pf, this, /*out*/ bpfv__CallFunc_SnapVecToVec_Return_1__pf);
				bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_4__pf = UKismetMathLibrary::Conv_VectorToVector2D(bpfv__CallFunc_SnapVecToVec_Return_1__pf);
				bpfv__SnappedLocationOnGrid__pf = bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_4__pf;
			}
		case 13:
			{
				bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToVector2D(bpv__GridxTilexSize__pfTT);
				bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue_1__pf = UKismetMathLibrary::Divide_Vector2DVector2D(bpfv__SnappedLocationOnGrid__pf, bpfv__CallFunc_Conv_VectorToVector2D_ReturnValue_1__pf);
				bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue_1__pf = UKismetMathLibrary::Multiply_Vector2DVector2D(bpfv__CallFunc_Divide_Vector2DVector2D_ReturnValue_1__pf, FVector2D(1.000000,2.000000));
				bpfv__CallFunc_Conv_Vector2DToIntPoint_ReturnValue__pf = UKismetMathLibrary::Conv_Vector2DToIntPoint(bpfv__CallFunc_Multiply_Vector2DVector2D_ReturnValue_1__pf);
				bpp__TileIndex__pf = bpfv__CallFunc_Conv_Vector2DToIntPoint_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__Get_TileIndexOnCursor__pf(int32 bpp__PlayerIndex__pf, /*out*/ FIntPoint& bpp__TileIndex__pf)
{
	FVector bpfv__CallFunc_Get_MouseLocationOnGrid_Location__pf(EForceInit::ForceInit);
	FIntPoint bpfv__CallFunc_Get_TileIndexFromWorldLocation_TileIndex__pf(EForceInit::ForceInit);
	bpf__Get_MouseLocationOnGrid__pf(bpp__PlayerIndex__pf, /*out*/ bpfv__CallFunc_Get_MouseLocationOnGrid_Location__pf);
	bpf__Get_TileIndexFromWorldLocation__pf(bpfv__CallFunc_Get_MouseLocationOnGrid_Location__pf, /*out*/ bpfv__CallFunc_Get_TileIndexFromWorldLocation_TileIndex__pf);
	bpp__TileIndex__pf = bpfv__CallFunc_Get_TileIndexFromWorldLocation_TileIndex__pf;
}
void ABP_Grid_C__pf3410280870::bpf__Add_StateToTile__pf(FIntPoint bpp__Index__pf, E__E_TileState__pf bpp__State__pf)
{
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpp__Index__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				if (!bpfv__CallFunc_Map_Find_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				AActor::FlushNetDormancy();
			}
		case 3:
			{
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpp__Index__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				bpv__Data__pf = bpfv__CallFunc_Map_Find_Value__pf;
			}
		case 4:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 19, FName(TEXT("Data")));
			}
		case 5:
			{
				bpfv__CallFunc_Array_AddUnique_ReturnValue__pf = FCustomThunkTemplates::Array_AddUnique(bpv__Data__pf.bpv__States_12_119DF8DE488DA3062762FD9A7AB87EC4__pf, bpp__State__pf);
			}
		case 6:
			{
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpfv__CallFunc_Array_AddUnique_ReturnValue__pf, 0);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				FCustomThunkTemplates::Map_Add(bpv__GridTiles__pf, bpv__Data__pf.bpv__Index_4_8B807B2E4D9C2A5077F8F3993D8978A5__pf, bpv__Data__pf);
			}
		case 8:
			{
				if(::IsValid(bpv__GridVisual__pf))
				{
					bpv__GridVisual__pf->bpf__Update_Tile_Visual__pf(bpv__Data__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__Remove_StateFromTile__pf(FIntPoint bpp__Index__pf, E__E_TileState__pf bpp__State__pf)
{
	bool bpfv__CallFunc_Array_RemoveItem_ReturnValue__pf{};
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpp__Index__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				if (!bpfv__CallFunc_Map_Find_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				AActor::FlushNetDormancy();
			}
		case 3:
			{
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpp__Index__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				bpv__Data__pf = bpfv__CallFunc_Map_Find_Value__pf;
			}
		case 4:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 19, FName(TEXT("Data")));
			}
		case 5:
			{
				bpfv__CallFunc_Array_RemoveItem_ReturnValue__pf = FCustomThunkTemplates::Array_RemoveItem(bpv__Data__pf.bpv__States_12_119DF8DE488DA3062762FD9A7AB87EC4__pf, bpp__State__pf);
			}
		case 6:
			{
				if (!bpfv__CallFunc_Array_RemoveItem_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				FCustomThunkTemplates::Map_Add(bpv__GridTiles__pf, bpv__Data__pf.bpv__Index_4_8B807B2E4D9C2A5077F8F3993D8978A5__pf, bpv__Data__pf);
			}
		case 8:
			{
				if(::IsValid(bpv__GridVisual__pf))
				{
					bpv__GridVisual__pf->bpf__Update_Tile_Visual__pf(bpv__Data__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__Get_TileState__pf(FIntPoint bpp__Index__pf, /*out*/ TArray<E__E_TileState__pf>& bpp__States__pf)
{
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpp__Index__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				if (!bpfv__CallFunc_Map_Find_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				AActor::FlushNetDormancy();
			}
		case 3:
			{
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpp__Index__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				bpv__Data__pf = bpfv__CallFunc_Map_Find_Value__pf;
			}
		case 4:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 19, FName(TEXT("Data")));
			}
		case 5:
			{
				bpp__States__pf = bpv__Data__pf.bpv__States_12_119DF8DE488DA3062762FD9A7AB87EC4__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__Get_Neighbor__pf(FIntPoint bpp__Index__pf, /*out*/ TArray<FIntPoint>& bpp__Neighbors__pf)
{
	TArray<FIntPoint> bpfv__H__pf{};
	TArray<FIntPoint> bpfv__Temp__pf{};
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_1__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_2__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_3__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_4__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_5__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_6__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_7__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_8__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_9__pf(EForceInit::ForceInit);
	int32 bpfv_____int_Loop_Counter_Variable__pf{};
	int32 bpfv_____int_Array_Index_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv_____int_Array_Index_Variable_1__pf{};
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_10__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_11__pf(EForceInit::ForceInit);
	int32 bpfv_____int_Loop_Counter_Variable_1__pf{};
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_12__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv_____int_Loop_Counter_Variable_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	int32 bpfv_____int_Array_Index_Variable_2__pf{};
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_13__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_14__pf(EForceInit::ForceInit);
	int32 bpfv_____int_Loop_Counter_Variable_3__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue__pf(EForceInit::ForceInit);
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf{};
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Is_Int_Even_Is_Even__pf{};
	TArray<FIntPoint> bpfv__K2Node_MakeArray_Array__pf{};
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_15__pf(EForceInit::ForceInit);
	int32 bpfv_____int_Array_Index_Variable_3__pf{};
	FIntPoint bpfv__CallFunc_Array_Get_Item__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	FIntPoint bpfv__CallFunc_Array_Get_Item_1__pf(EForceInit::ForceInit);
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_3__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue_1__pf{};
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value_1__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue_1__pf{};
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_4__pf(EForceInit::ForceInit);
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_5__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf{};
	TArray<FIntPoint> bpfv__K2Node_MakeArray_Array_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	FIntPoint bpfv__CallFunc_Array_Get_Item_2__pf(EForceInit::ForceInit);
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_6__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue_2__pf{};
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value_2__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue_2__pf{};
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_7__pf(EForceInit::ForceInit);
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_8__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_2__pf{};
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_9__pf(EForceInit::ForceInit);
	TArray<FIntPoint> bpfv__K2Node_MakeArray_Array_2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	FIntPoint bpfv__CallFunc_Array_Get_Item_3__pf(EForceInit::ForceInit);
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_10__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue_3__pf{};
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value_3__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue_3__pf{};
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_11__pf(EForceInit::ForceInit);
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_12__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_3__pf{};
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_13__pf(EForceInit::ForceInit);
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_14__pf(EForceInit::ForceInit);
	FIntPoint bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_15__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Length_ReturnValue_3__pf{};
	TArray<FIntPoint> bpfv__K2Node_MakeArray_Array_3__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GridxShape__pfT), static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GridxShape__pfT), static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 12;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__GridxShape__pfT), static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 23;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 2:
			{
				bpfv__K2Node_MakeStruct_IntPoint__pf.X = 1;
				bpfv__K2Node_MakeStruct_IntPoint__pf.Y = 0;
				bpfv__K2Node_MakeStruct_IntPoint_1__pf.X = 0;
				bpfv__K2Node_MakeStruct_IntPoint_1__pf.Y = -1;
				bpfv__K2Node_MakeStruct_IntPoint_2__pf.X = -1;
				bpfv__K2Node_MakeStruct_IntPoint_2__pf.Y = 0;
				bpfv__K2Node_MakeStruct_IntPoint_3__pf.X = 0;
				bpfv__K2Node_MakeStruct_IntPoint_3__pf.Y = 1;
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_6__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint__pf);
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_7__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_1__pf);
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_8__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_2__pf);
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_9__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_3__pf);
				bpfv__K2Node_MakeArray_Array_2__pf.SetNum(4, true);
				bpfv__K2Node_MakeArray_Array_2__pf[0] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_9__pf;
				bpfv__K2Node_MakeArray_Array_2__pf[1] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_8__pf;
				bpfv__K2Node_MakeArray_Array_2__pf[2] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_7__pf;
				bpfv__K2Node_MakeArray_Array_2__pf[3] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_6__pf;
				bpfv__Temp__pf = bpfv__K2Node_MakeArray_Array_2__pf;
			}
		case 3:
			{
				bpfv_____int_Loop_Counter_Variable_3__pf = 0;
			}
		case 4:
			{
				bpfv_____int_Array_Index_Variable_1__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpfv__Temp__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(bpfv_____int_Loop_Counter_Variable_3__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 6:
			{
				bpfv_____int_Array_Index_Variable_1__pf = bpfv_____int_Loop_Counter_Variable_3__pf;
			}
		case 7:
			{
				__StateStack.Push(46);
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpfv__Temp__pf, bpfv_____int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_2__pf);
				bpfv__CallFunc_Map_Find_ReturnValue_2__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpfv__CallFunc_Array_Get_Item_2__pf, /*out*/ bpfv__CallFunc_Map_Find_Value_2__pf);
				if (!bpfv__CallFunc_Map_Find_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpfv__Temp__pf, bpfv_____int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_2__pf);
				bpfv__CallFunc_Map_Find_ReturnValue_2__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpfv__CallFunc_Array_Get_Item_2__pf, /*out*/ bpfv__CallFunc_Map_Find_Value_2__pf);
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_2__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_Map_Find_Value_2__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf), static_cast<uint8>(E__E_TileType__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(bpfv__Temp__pf, bpfv_____int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_2__pf);
				bpfv__CallFunc_Array_Add_ReturnValue_2__pf = FCustomThunkTemplates::Array_Add(bpfv__H__pf, bpfv__CallFunc_Array_Get_Item_2__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpp__Neighbors__pf = bpfv__H__pf;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__K2Node_MakeStruct_IntPoint_4__pf.X = 1;
				bpfv__K2Node_MakeStruct_IntPoint_4__pf.Y = 1;
				bpfv__K2Node_MakeStruct_IntPoint_5__pf.X = 1;
				bpfv__K2Node_MakeStruct_IntPoint_5__pf.Y = -1;
				bpfv__K2Node_MakeStruct_IntPoint_6__pf.X = 0;
				bpfv__K2Node_MakeStruct_IntPoint_6__pf.Y = -2;
				bpfv__K2Node_MakeStruct_IntPoint_7__pf.X = -1;
				bpfv__K2Node_MakeStruct_IntPoint_7__pf.Y = -1;
				bpfv__K2Node_MakeStruct_IntPoint_8__pf.X = -1;
				bpfv__K2Node_MakeStruct_IntPoint_8__pf.Y = 1;
				bpfv__K2Node_MakeStruct_IntPoint_9__pf.X = 0;
				bpfv__K2Node_MakeStruct_IntPoint_9__pf.Y = 2;
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_10__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_4__pf);
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_11__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_5__pf);
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_12__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_6__pf);
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_13__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_7__pf);
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_14__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_8__pf);
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_15__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_9__pf);
				bpfv__K2Node_MakeArray_Array_3__pf.SetNum(6, true);
				bpfv__K2Node_MakeArray_Array_3__pf[0] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_15__pf;
				bpfv__K2Node_MakeArray_Array_3__pf[1] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_14__pf;
				bpfv__K2Node_MakeArray_Array_3__pf[2] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_13__pf;
				bpfv__K2Node_MakeArray_Array_3__pf[3] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_12__pf;
				bpfv__K2Node_MakeArray_Array_3__pf[4] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_11__pf;
				bpfv__K2Node_MakeArray_Array_3__pf[5] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_10__pf;
				bpfv__Temp__pf = bpfv__K2Node_MakeArray_Array_3__pf;
			}
		case 13:
			{
				bpfv_____int_Loop_Counter_Variable_2__pf = 0;
			}
		case 14:
			{
				bpfv_____int_Array_Index_Variable_2__pf = 0;
			}
		case 15:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_3__pf = FCustomThunkTemplates::Array_Length(bpfv__Temp__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Less_IntInt(bpfv_____int_Loop_Counter_Variable_2__pf, bpfv__CallFunc_Array_Length_ReturnValue_3__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf)
				{
					__CurrentState = 22;
					break;
				}
			}
		case 16:
			{
				bpfv_____int_Array_Index_Variable_2__pf = bpfv_____int_Loop_Counter_Variable_2__pf;
			}
		case 17:
			{
				__StateStack.Push(21);
			}
		case 18:
			{
				FCustomThunkTemplates::Array_Get(bpfv__Temp__pf, bpfv_____int_Array_Index_Variable_2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_Map_Find_ReturnValue_3__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpfv__CallFunc_Array_Get_Item_3__pf, /*out*/ bpfv__CallFunc_Map_Find_Value_3__pf);
				if (!bpfv__CallFunc_Map_Find_ReturnValue_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 19:
			{
				FCustomThunkTemplates::Array_Get(bpfv__Temp__pf, bpfv_____int_Array_Index_Variable_2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_Map_Find_ReturnValue_3__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpfv__CallFunc_Array_Get_Item_3__pf, /*out*/ bpfv__CallFunc_Map_Find_Value_3__pf);
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_3__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_Map_Find_Value_3__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf), static_cast<uint8>(E__E_TileType__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 20:
			{
				FCustomThunkTemplates::Array_Get(bpfv__Temp__pf, bpfv_____int_Array_Index_Variable_2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_Array_Add_ReturnValue_3__pf = FCustomThunkTemplates::Array_Add(bpfv__H__pf, bpfv__CallFunc_Array_Get_Item_3__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Loop_Counter_Variable_2__pf, 1);
				bpfv_____int_Loop_Counter_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
				__CurrentState = 15;
				break;
			}
		case 22:
			{
				bpp__Neighbors__pf = bpfv__H__pf;
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Add_IntInt(bpp__Index__pf.X, bpp__Index__pf.Y);
				UBFL_Utilities_C__pf2069076602::bpf__Is_Int_Even__pf(bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf, this, /*out*/ bpfv__CallFunc_Is_Int_Even_Is_Even__pf);
				if (!bpfv__CallFunc_Is_Int_Even_Is_Even__pf)
				{
					__CurrentState = 35;
					break;
				}
			}
		case 24:
			{
				bpfv__K2Node_MakeStruct_IntPoint_13__pf.X = 0;
				bpfv__K2Node_MakeStruct_IntPoint_13__pf.Y = 1;
				bpfv__K2Node_MakeStruct_IntPoint_14__pf.X = 0;
				bpfv__K2Node_MakeStruct_IntPoint_14__pf.Y = -1;
				bpfv__K2Node_MakeStruct_IntPoint_15__pf.X = -1;
				bpfv__K2Node_MakeStruct_IntPoint_15__pf.Y = 0;
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_3__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_15__pf);
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_4__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_14__pf);
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_5__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_13__pf);
				bpfv__K2Node_MakeArray_Array_1__pf.SetNum(3, true);
				bpfv__K2Node_MakeArray_Array_1__pf[0] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_5__pf;
				bpfv__K2Node_MakeArray_Array_1__pf[1] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_4__pf;
				bpfv__K2Node_MakeArray_Array_1__pf[2] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_3__pf;
				bpfv__Temp__pf = bpfv__K2Node_MakeArray_Array_1__pf;
			}
		case 25:
			{
				bpfv_____int_Loop_Counter_Variable_1__pf = 0;
			}
		case 26:
			{
				bpfv_____int_Array_Index_Variable__pf = 0;
			}
		case 27:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__Temp__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv_____int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 34;
					break;
				}
			}
		case 28:
			{
				bpfv_____int_Array_Index_Variable__pf = bpfv_____int_Loop_Counter_Variable_1__pf;
			}
		case 29:
			{
				__StateStack.Push(33);
			}
		case 30:
			{
				FCustomThunkTemplates::Array_Get(bpfv__Temp__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Map_Find_ReturnValue_1__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpfv__CallFunc_Array_Get_Item_1__pf, /*out*/ bpfv__CallFunc_Map_Find_Value_1__pf);
				if (!bpfv__CallFunc_Map_Find_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 31:
			{
				FCustomThunkTemplates::Array_Get(bpfv__Temp__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Map_Find_ReturnValue_1__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpfv__CallFunc_Array_Get_Item_1__pf, /*out*/ bpfv__CallFunc_Map_Find_Value_1__pf);
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_Map_Find_Value_1__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf), static_cast<uint8>(E__E_TileType__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 32:
			{
				FCustomThunkTemplates::Array_Get(bpfv__Temp__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Array_Add_ReturnValue_1__pf = FCustomThunkTemplates::Array_Add(bpfv__H__pf, bpfv__CallFunc_Array_Get_Item_1__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Loop_Counter_Variable_1__pf, 1);
				bpfv_____int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 27;
				break;
			}
		case 34:
			{
				bpp__Neighbors__pf = bpfv__H__pf;
				__CurrentState = -1;
				break;
			}
		case 35:
			{
				bpfv__K2Node_MakeStruct_IntPoint_10__pf.X = 0;
				bpfv__K2Node_MakeStruct_IntPoint_10__pf.Y = 1;
				bpfv__K2Node_MakeStruct_IntPoint_11__pf.X = 0;
				bpfv__K2Node_MakeStruct_IntPoint_11__pf.Y = -1;
				bpfv__K2Node_MakeStruct_IntPoint_12__pf.X = 1;
				bpfv__K2Node_MakeStruct_IntPoint_12__pf.Y = 0;
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_12__pf);
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_1__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_11__pf);
				bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_2__pf = UKismetMathLibrary::Add_IntPointIntPoint(bpp__Index__pf, bpfv__K2Node_MakeStruct_IntPoint_10__pf);
				bpfv__K2Node_MakeArray_Array__pf.SetNum(3, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_2__pf;
				bpfv__K2Node_MakeArray_Array__pf[1] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue_1__pf;
				bpfv__K2Node_MakeArray_Array__pf[2] = bpfv__CallFunc_Add_IntPointIntPoint_ReturnValue__pf;
				bpfv__Temp__pf = bpfv__K2Node_MakeArray_Array__pf;
			}
		case 36:
			{
				bpfv_____int_Loop_Counter_Variable__pf = 0;
			}
		case 37:
			{
				bpfv_____int_Array_Index_Variable_3__pf = 0;
			}
		case 38:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__Temp__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv_____int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 45;
					break;
				}
			}
		case 39:
			{
				bpfv_____int_Array_Index_Variable_3__pf = bpfv_____int_Loop_Counter_Variable__pf;
			}
		case 40:
			{
				__StateStack.Push(44);
			}
		case 41:
			{
				FCustomThunkTemplates::Array_Get(bpfv__Temp__pf, bpfv_____int_Array_Index_Variable_3__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				if (!bpfv__CallFunc_Map_Find_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 42:
			{
				FCustomThunkTemplates::Array_Get(bpfv__Temp__pf, bpfv_____int_Array_Index_Variable_3__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_Map_Find_Value__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf), static_cast<uint8>(E__E_TileType__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 43:
			{
				FCustomThunkTemplates::Array_Get(bpfv__Temp__pf, bpfv_____int_Array_Index_Variable_3__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpfv__H__pf, bpfv__CallFunc_Array_Get_Item__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 44:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Loop_Counter_Variable__pf, 1);
				bpfv_____int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 38;
				break;
			}
		case 45:
			{
				bpp__Neighbors__pf = bpfv__H__pf;
				__CurrentState = -1;
				break;
			}
		case 46:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Loop_Counter_Variable_3__pf, 1);
				bpfv_____int_Loop_Counter_Variable_3__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
				__CurrentState = 5;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__FindxPath__pfT(FIntPoint bpp__Src__pf, FIntPoint bpp__Dst__pf, int32 bpp__StopSteps__pf, /*out*/ bool& bpp__IsPassable__pf)
{
	bool bpfv__IsBreak__pf{};
	FS_Tile_Data__pf886517966 bpfv__NodeData__pf{};
	FIntPoint bpfv__Neighbor__pf(EForceInit::ForceInit);
	FIntPoint bpfv__TempNode__pf(EForceInit::ForceInit);
	FIntPoint bpfv__ToNode__pf(EForceInit::ForceInit);
	FIntPoint bpfv__FromNode__pf(EForceInit::ForceInit);
	TArray<FIntPoint> bpfv__Neighbors__pf{};
	bool bpfv__IsFinded__pf{};
	TArray<FIntPoint> bpfv__CloseList__pf{};
	TArray<FIntPoint> bpfv__OpenList__pf{};
	FIntPoint bpfv__CurrentNode__pf(EForceInit::ForceInit);
	TArray<FIntPoint> bpfv__DstNeighbors__pf{};
	int32 bpfv_____int_Array_Index_Variable__pf{};
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_IntPointIntPoint_ReturnValue__pf{};
	int32 bpfv_____int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_IntPointIntPoint_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf{};
	FIntPoint bpfv__CallFunc_Array_Get_Item__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value_1__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue_1__pf{};
	FS_Tile_Data__pf886517966 bpfv__K2Node_MakeStruct_S_Tile_Data__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value_2__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue_1__pf{};
	FS_Tile_Data__pf886517966 bpfv__K2Node_MakeStruct_S_Tile_Data_1__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	TArray<FIntPoint> bpfv__CallFunc_Get_NeighborsInSteps_Neighbors__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue_3__pf{};
	FIntPoint bpfv__CallFunc_Array_Get_Item_1__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray<FIntPoint> bpfv__CallFunc_Get_Neighbor_Neighbors__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Array_RemoveItem_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_3__pf{};
	bool bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value_3__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue_3__pf{};
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value_4__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue_4__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				FCustomThunkTemplates::Array_Clear(bpv__Path__pf);
			}
		case 2:
			{
				bpf__Refresh_Pre__pf();
			}
		case 3:
			{
				bpfv__FromNode__pf = bpp__Src__pf;
			}
		case 4:
			{
				bpfv__ToNode__pf = bpp__Dst__pf;
			}
		case 5:
			{
				bpfv__CallFunc_NotEqual_IntPointIntPoint_ReturnValue__pf = UKismetMathLibrary::NotEqual_IntPointIntPoint(bpfv__FromNode__pf, bpfv__ToNode__pf);
				if (!bpfv__CallFunc_NotEqual_IntPointIntPoint_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 6:
			{
				bpfv__CallFunc_Map_Find_ReturnValue_3__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpp__Dst__pf, /*out*/ bpfv__CallFunc_Map_Find_Value_3__pf);
				bpfv__CallFunc_Map_Find_ReturnValue_4__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpp__Src__pf, /*out*/ bpfv__CallFunc_Map_Find_Value_4__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Map_Find_ReturnValue_4__pf, bpfv__CallFunc_Map_Find_ReturnValue_3__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 7:
			{
				bpfv__CallFunc_Map_Find_ReturnValue_3__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpp__Dst__pf, /*out*/ bpfv__CallFunc_Map_Find_Value_3__pf);
				bpfv__CallFunc_Map_Find_ReturnValue_4__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpp__Src__pf, /*out*/ bpfv__CallFunc_Map_Find_Value_4__pf);
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_Map_Find_Value_3__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf), static_cast<uint8>(E__E_TileType__pf::NewEnumerator1));
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_Map_Find_Value_4__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf), static_cast<uint8>(E__E_TileType__pf::NewEnumerator1));
				bpfv__CallFunc_BooleanAND_ReturnValue_2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf, bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_2__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 8:
			{
				bpf__Get_NeighborsInSteps__pf(bpfv__ToNode__pf, bpp__StopSteps__pf, /*out*/ bpfv__CallFunc_Get_NeighborsInSteps_Neighbors__pf);
				bpfv__DstNeighbors__pf = bpfv__CallFunc_Get_NeighborsInSteps_Neighbors__pf;
			}
		case 9:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__DstNeighbors__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue_1__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 10:
			{
				bpp__IsPassable__pf = false;
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				bpp__IsPassable__pf = false;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpp__IsPassable__pf = false;
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				bpp__IsPassable__pf = false;
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_Array_Contains_ReturnValue_2__pf = FCustomThunkTemplates::Array_Contains(bpfv__DstNeighbors__pf, bpfv__FromNode__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue_2__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 15:
			{
				bpp__IsPassable__pf = true;
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				bpfv__CurrentNode__pf = bpfv__FromNode__pf;
			}
		case 17:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_3__pf = FCustomThunkTemplates::Array_Add(bpfv__OpenList__pf, bpfv__CurrentNode__pf);
			}
		case 18:
			{
				bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf = UKismetMathLibrary::EqualEqual_BoolBool(bpfv__IsBreak__pf, false);
				bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_BoolBool(bpfv__IsFinded__pf, false);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue_1__pf, bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 39;
					break;
				}
			}
		case 19:
			{
				__StateStack.Push(18);
			}
		case 20:
			{
				bpfv__CallFunc_Array_RemoveItem_ReturnValue__pf = FCustomThunkTemplates::Array_RemoveItem(bpfv__OpenList__pf, bpfv__CurrentNode__pf);
			}
		case 21:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_2__pf = FCustomThunkTemplates::Array_Add(bpfv__CloseList__pf, bpfv__CurrentNode__pf);
			}
		case 22:
			{
				bpf__Get_Neighbor__pf(bpfv__CurrentNode__pf, /*out*/ bpfv__CallFunc_Get_Neighbor_Neighbors__pf);
				bpfv__Neighbors__pf = bpfv__CallFunc_Get_Neighbor_Neighbors__pf;
			}
		case 23:
			{
				bpfv_____int_Loop_Counter_Variable__pf = 0;
			}
		case 24:
			{
				bpfv_____int_Array_Index_Variable__pf = 0;
			}
		case 25:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpfv__Neighbors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv_____int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 36;
					break;
				}
			}
		case 26:
			{
				bpfv_____int_Array_Index_Variable__pf = bpfv_____int_Loop_Counter_Variable__pf;
			}
		case 27:
			{
				__StateStack.Push(35);
			}
		case 28:
			{
				FCustomThunkTemplates::Array_Get(bpfv__Neighbors__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__Neighbor__pf = bpfv__CallFunc_Array_Get_Item_1__pf;
			}
		case 29:
			{
				bpfv__CallFunc_Array_Contains_ReturnValue_3__pf = FCustomThunkTemplates::Array_Contains(bpfv__DstNeighbors__pf, bpfv__Neighbor__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue_3__pf)
				{
					__CurrentState = 34;
					break;
				}
			}
		case 30:
			{
				bpfv__IsFinded__pf = true;
			}
		case 31:
			{
				bpfv__ToNode__pf = bpfv__Neighbor__pf;
			}
		case 32:
			{
				bpfv__CallFunc_Map_Find_ReturnValue_2__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpfv__Neighbor__pf, /*out*/ bpfv__CallFunc_Map_Find_Value_2__pf);
				bpfv__NodeData__pf = bpfv__CallFunc_Map_Find_Value_2__pf;
			}
		case 33:
			{
				bpfv__K2Node_MakeStruct_S_Tile_Data_1__pf.bpv__Index_4_8B807B2E4D9C2A5077F8F3993D8978A5__pf = bpfv__NodeData__pf.bpv__Index_4_8B807B2E4D9C2A5077F8F3993D8978A5__pf;
				bpfv__K2Node_MakeStruct_S_Tile_Data_1__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf = bpfv__NodeData__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf;
				bpfv__K2Node_MakeStruct_S_Tile_Data_1__pf.bpv__Transform_8_5DA78643471C62D3691412BB7714ED33__pf = bpfv__NodeData__pf.bpv__Transform_8_5DA78643471C62D3691412BB7714ED33__pf;
				bpfv__K2Node_MakeStruct_S_Tile_Data_1__pf.bpv__States_12_119DF8DE488DA3062762FD9A7AB87EC4__pf = bpfv__NodeData__pf.bpv__States_12_119DF8DE488DA3062762FD9A7AB87EC4__pf;
				bpfv__K2Node_MakeStruct_S_Tile_Data_1__pf.bpv__PreNode_15_3FBA7FBF4B9A4160A7E8CB9C9229155D__pf = bpfv__CurrentNode__pf;
				FCustomThunkTemplates::Map_Add(bpv__GridTiles__pf, bpfv__Neighbor__pf, bpfv__K2Node_MakeStruct_S_Tile_Data_1__pf);
			}
		case 34:
			{
				bpfv__CallFunc_Array_Contains_ReturnValue_1__pf = FCustomThunkTemplates::Array_Contains(bpfv__CloseList__pf, bpfv__Neighbor__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue_1__pf)
				{
					__CurrentState = 51;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Loop_Counter_Variable__pf, 1);
				bpfv_____int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 25;
				break;
			}
		case 36:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__OpenList__pf);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 0);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 38;
					break;
				}
			}
		case 37:
			{
				bpfv__IsBreak__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				FCustomThunkTemplates::Array_Get(bpfv__OpenList__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CurrentNode__pf = bpfv__CallFunc_Array_Get_Item__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 39:
			{
				FCustomThunkTemplates::Array_Clear(bpfv__OpenList__pf);
			}
		case 40:
			{
				FCustomThunkTemplates::Array_Clear(bpfv__CloseList__pf);
			}
		case 41:
			{
				if (!bpfv__IsFinded__pf)
				{
					__CurrentState = 50;
					break;
				}
			}
		case 42:
			{
				bpfv__TempNode__pf = bpfv__ToNode__pf;
			}
		case 43:
			{
				bpfv__CallFunc_NotEqual_IntPointIntPoint_ReturnValue_1__pf = UKismetMathLibrary::NotEqual_IntPointIntPoint(bpfv__TempNode__pf, bpfv__FromNode__pf);
				if (!bpfv__CallFunc_NotEqual_IntPointIntPoint_ReturnValue_1__pf)
				{
					__CurrentState = 47;
					break;
				}
			}
		case 44:
			{
				__StateStack.Push(43);
			}
		case 45:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__Path__pf, bpfv__TempNode__pf);
			}
		case 46:
			{
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpfv__TempNode__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				bpfv__TempNode__pf = bpfv__CallFunc_Map_Find_Value__pf.bpv__PreNode_15_3FBA7FBF4B9A4160A7E8CB9C9229155D__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 47:
			{
				bpfv__CallFunc_Array_AddUnique_ReturnValue__pf = FCustomThunkTemplates::Array_AddUnique(bpv__Path__pf, bpp__Src__pf);
			}
		case 48:
			{
				FCustomThunkTemplates::Array_Reverse(bpv__Path__pf);
			}
		case 49:
			{
				bpp__IsPassable__pf = true;
				__CurrentState = -1;
				break;
			}
		case 50:
			{
				bpp__IsPassable__pf = false;
				__CurrentState = -1;
				break;
			}
		case 51:
			{
				bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(bpfv__OpenList__pf, bpfv__Neighbor__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue__pf)
				{
					__CurrentState = 52;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 52:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_1__pf = FCustomThunkTemplates::Array_Add(bpfv__OpenList__pf, bpfv__Neighbor__pf);
			}
		case 53:
			{
				bpfv__CallFunc_Map_Find_ReturnValue_1__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpfv__Neighbor__pf, /*out*/ bpfv__CallFunc_Map_Find_Value_1__pf);
				bpfv__NodeData__pf = bpfv__CallFunc_Map_Find_Value_1__pf;
			}
		case 54:
			{
				bpfv__K2Node_MakeStruct_S_Tile_Data__pf.bpv__Index_4_8B807B2E4D9C2A5077F8F3993D8978A5__pf = bpfv__NodeData__pf.bpv__Index_4_8B807B2E4D9C2A5077F8F3993D8978A5__pf;
				bpfv__K2Node_MakeStruct_S_Tile_Data__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf = bpfv__NodeData__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf;
				bpfv__K2Node_MakeStruct_S_Tile_Data__pf.bpv__Transform_8_5DA78643471C62D3691412BB7714ED33__pf = bpfv__NodeData__pf.bpv__Transform_8_5DA78643471C62D3691412BB7714ED33__pf;
				bpfv__K2Node_MakeStruct_S_Tile_Data__pf.bpv__States_12_119DF8DE488DA3062762FD9A7AB87EC4__pf = bpfv__NodeData__pf.bpv__States_12_119DF8DE488DA3062762FD9A7AB87EC4__pf;
				bpfv__K2Node_MakeStruct_S_Tile_Data__pf.bpv__PreNode_15_3FBA7FBF4B9A4160A7E8CB9C9229155D__pf = bpfv__CurrentNode__pf;
				FCustomThunkTemplates::Map_Add(bpv__GridTiles__pf, bpfv__Neighbor__pf, bpfv__K2Node_MakeStruct_S_Tile_Data__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__Refresh_Pre__pf()
{
	int32 bpfv_____int_Array_Index_Variable__pf{};
	int32 bpfv_____int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FIntPoint bpfv__CallFunc_Array_Get_Item__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FS_Tile_Data__pf886517966 bpfv__K2Node_MakeStruct_S_Tile_Data__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv_____int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv_____int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__TileIndexes__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv_____int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv_____int_Array_Index_Variable__pf = bpfv_____int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(7);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__TileIndexes__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				bpfv__K2Node_MakeStruct_S_Tile_Data__pf.bpv__Index_4_8B807B2E4D9C2A5077F8F3993D8978A5__pf = bpfv__CallFunc_Map_Find_Value__pf.bpv__Index_4_8B807B2E4D9C2A5077F8F3993D8978A5__pf;
				bpfv__K2Node_MakeStruct_S_Tile_Data__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf = bpfv__CallFunc_Map_Find_Value__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf;
				bpfv__K2Node_MakeStruct_S_Tile_Data__pf.bpv__Transform_8_5DA78643471C62D3691412BB7714ED33__pf = bpfv__CallFunc_Map_Find_Value__pf.bpv__Transform_8_5DA78643471C62D3691412BB7714ED33__pf;
				bpfv__K2Node_MakeStruct_S_Tile_Data__pf.bpv__States_12_119DF8DE488DA3062762FD9A7AB87EC4__pf = bpfv__CallFunc_Map_Find_Value__pf.bpv__States_12_119DF8DE488DA3062762FD9A7AB87EC4__pf;
				const UScriptStruct* __Local__26 = CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("IntPoint"), TEXT("/Script/CoreUObject")));
				uint8* __Local__27 = (uint8*)FMemory_Alloca(__Local__26->GetStructureSize());
				__Local__26->InitializeStruct(__Local__27);
				FIntPoint& __Local__25 = *reinterpret_cast<FIntPoint*>(__Local__27);
				__Local__25.X = -1;
				__Local__25.Y = -1;
				bpfv__K2Node_MakeStruct_S_Tile_Data__pf.bpv__PreNode_15_3FBA7FBF4B9A4160A7E8CB9C9229155D__pf = __Local__25;
				FCustomThunkTemplates::Map_Add(bpv__GridTiles__pf, bpfv__CallFunc_Array_Get_Item__pf, bpfv__K2Node_MakeStruct_S_Tile_Data__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Loop_Counter_Variable__pf, 1);
				bpfv_____int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__Get_NeighborsInSteps__pf(FIntPoint bpp__InTile__pf, int32 bpp__StopSteps__pf, /*out*/ TArray<FIntPoint>& bpp__Neighbors__pf)
{
	FIntPoint bpfv__TTnode__pf(EForceInit::ForceInit);
	TArray<FIntPoint> bpfv__TNeighbors__pf{};
	FIntPoint bpfv__Tnode__pf(EForceInit::ForceInit);
	TArray<FIntPoint> bpfv__FindList__pf{};
	TArray<FIntPoint> bpfv__NextList__pf{};
	TArray<FIntPoint> bpfv__CurrentList__pf{};
	int32 bpfv__Steps__pf{};
	int32 bpfv_____int_Array_Index_Variable__pf{};
	int32 bpfv_____int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv_____int_Array_Index_Variable_1__pf{};
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue_1__pf{};
	FS_Tile_Data__pf886517966 bpfv__CallFunc_Map_Find_Value__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	FIntPoint bpfv__CallFunc_Array_Get_Item__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	TArray<FIntPoint> bpfv__CallFunc_Get_Neighbor_Neighbors__pf{};
	FIntPoint bpfv__CallFunc_Array_Get_Item_1__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	int32 bpfv_____int_Loop_Counter_Variable_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue_3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Steps__pf = bpp__StopSteps__pf;
			}
		case 2:
			{
				bpfv__CallFunc_Array_AddUnique_ReturnValue_3__pf = FCustomThunkTemplates::Array_AddUnique(bpfv__NextList__pf, bpp__InTile__pf);
			}
		case 3:
			{
				bpfv__CallFunc_Array_AddUnique_ReturnValue_2__pf = FCustomThunkTemplates::Array_AddUnique(bpfv__FindList__pf, bpp__InTile__pf);
			}
		case 4:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__Steps__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 22;
					break;
				}
			}
		case 5:
			{
				__StateStack.Push(4);
			}
		case 6:
			{
				bpfv__CurrentList__pf = bpfv__NextList__pf;
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Clear(bpfv__NextList__pf);
			}
		case 8:
			{
				bpfv_____int_Loop_Counter_Variable__pf = 0;
			}
		case 9:
			{
				bpfv_____int_Array_Index_Variable_1__pf = 0;
			}
		case 10:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__CurrentList__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv_____int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 11:
			{
				bpfv_____int_Array_Index_Variable_1__pf = bpfv_____int_Loop_Counter_Variable__pf;
			}
		case 12:
			{
				__StateStack.Push(24);
			}
		case 13:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CurrentList__pf, bpfv_____int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__Tnode__pf = bpfv__CallFunc_Array_Get_Item_1__pf;
			}
		case 14:
			{
				bpf__Get_Neighbor__pf(bpfv__Tnode__pf, /*out*/ bpfv__CallFunc_Get_Neighbor_Neighbors__pf);
				bpfv__TNeighbors__pf = bpfv__CallFunc_Get_Neighbor_Neighbors__pf;
			}
		case 15:
			{
				bpfv_____int_Loop_Counter_Variable_1__pf = 0;
			}
		case 16:
			{
				bpfv_____int_Array_Index_Variable__pf = 0;
			}
		case 17:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__TNeighbors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv_____int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 18:
			{
				bpfv_____int_Array_Index_Variable__pf = bpfv_____int_Loop_Counter_Variable_1__pf;
			}
		case 19:
			{
				__StateStack.Push(25);
			}
		case 20:
			{
				FCustomThunkTemplates::Array_Get(bpfv__TNeighbors__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__TTnode__pf = bpfv__CallFunc_Array_Get_Item__pf;
			}
		case 21:
			{
				bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(bpfv__FindList__pf, bpfv__TTnode__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue__pf)
				{
					__CurrentState = 26;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				bpp__Neighbors__pf = bpfv__FindList__pf;
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__Steps__pf, 1);
				bpfv__Steps__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Loop_Counter_Variable__pf, 1);
				bpfv_____int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 10;
				break;
			}
		case 25:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Loop_Counter_Variable_1__pf, 1);
				bpfv_____int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 17;
				break;
			}
		case 26:
			{
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpfv__TTnode__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				if (!bpfv__CallFunc_Map_Find_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 27:
			{
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(bpv__GridTiles__pf, bpfv__TTnode__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_Map_Find_Value__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf), static_cast<uint8>(E__E_TileType__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 28:
			{
				bpfv__CallFunc_Array_AddUnique_ReturnValue_1__pf = FCustomThunkTemplates::Array_AddUnique(bpfv__FindList__pf, bpfv__TTnode__pf);
			}
		case 29:
			{
				bpfv__CallFunc_Array_AddUnique_ReturnValue__pf = FCustomThunkTemplates::Array_AddUnique(bpfv__NextList__pf, bpfv__TTnode__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Grid_C__pf3410280870::bpf__JudgexLife__pfT(Achesscharacter_C__pf772598429* bpp__target__pf, float bpp__damage__pf, /*out*/ bool& bpp__die__pf)
{
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_FMax_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpp__target__pf))
				{
					bpp__target__pf->AActor::FlushNetDormancy();
				}
			}
		case 2:
			{
				float  __Local__28 = 0.000000;
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(((::IsValid(bpp__target__pf)) ? (bpp__target__pf->bpv__health__pf) : (__Local__28)), bpp__damage__pf);
				bpfv__CallFunc_FMax_ReturnValue__pf = UKismetMathLibrary::FMax(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 0.000000);
				if(::IsValid(bpp__target__pf))
				{
					bpp__target__pf->bpv__health__pf = bpfv__CallFunc_FMax_ReturnValue__pf;
				}
			}
		case 3:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(bpp__target__pf, 23, FName(TEXT("health")));
			}
		case 4:
			{
				float  __Local__29 = 0.000000;
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(((::IsValid(bpp__target__pf)) ? (bpp__target__pf->bpv__health__pf) : (__Local__29)), 0.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpp__target__pf))
				{
					bpp__target__pf->K2_DestroyActor();
				}
			}
		case 6:
			{
				bpp__die__pf = true;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpp__die__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Grid_C__pf3410280870::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/AC/friendChess.friendChess_C 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/AC/enemyChess.enemyChess_C 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /Game/Maps/1.1 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DataTable /Game/Blueprints/Core/Grid/Grid_Shapes/DT_Grid_Shape_Data.DT_Grid_Shape_Data 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Grid_C__pf3410280870::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{104, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ChildActorComponent 
		{105, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/AIModule.EPathFollowingResult 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/AIModule.OAISimpleDelegate__DelegateSignature 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  friendChess_C /Game/AC/friendChess.Default__friendChess_C 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  enemyChess_C /Game/AC/enemyChess.Default__enemyChess_C 
		{31, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/InputCore.Key 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIAsyncTaskBlueprintProxy 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerController 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameplayStatics 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Character 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MeshComponent 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMesh 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MaterialInstance 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{26, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Avatar/Animations/DSword/AS_DSword_Run_Eqip.AS_DSword_Run_Eqip 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Avatar/Character/Mesh/SK_Mannequin.SK_Mannequin 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.FloatingPawnMovement 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DamageType 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Controller 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Pawn 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/moveTest/robotTestController.robotTestController_C 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  robotTestController_C /Game/moveTest/robotTestController.Default__robotTestController_C 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Art/Meshes/Grids/SM_Grid_Square.SM_Grid_Square 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Blueprints/Core/Grid/Grid_Shapes/M_Grid_Flat.M_Grid_Flat 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetComponent 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/UI/M_HPbar.M_HPbar 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/UI/manamet.manamet 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimMontage /Game/Avatar/Animations/DSword/AM_DSword_Attack_05.AM_DSword_Attack_05 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIController 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.InstancedStaticMeshComponent 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Blueprints/Core/Grid/Grid_Shapes/Square/SM_Grid_SquareFlat.SM_Grid_SquareFlat 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/Blueprints/Core/Grid/Grid_Shapes/Square/MI_Grid_Flat_Square.MI_Grid_Flat_Square 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MaterialInterface 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.ECollisionEnabled 
		{114, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Core/Grid/BP_Grid_Visual.BP_Grid_Visual_C 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/AC/chesscharacter.chesscharacter_C 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Core/Utilites/BFL_Utilities.BFL_Utilities_C 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Core/Grid/BP_Grid_Modifier.BP_Grid_Modifier_C 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/AC/BP_TextChess.BP_TextChess_C 
		{118, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Blueprints/Core/Grid/Utilities/S_Tile_Data.S_Tile_Data 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Blueprints/Core/Grid/Grid_Shapes/S_Grid_Shape_Data.S_Grid_Shape_Data 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Core/Grid/Utilities/E_TileType.E_TileType 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Core/Grid/Utilities/E_TileState.E_TileState 
		{62, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Core/Grid/Grid_Shapes/E_Grid_Shape.E_Grid_Shape 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_Grid_C__pf3410280870
{
	FRegisterHelper__ABP_Grid_C__pf3410280870()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/Core/Grid/BP_Grid"), &ABP_Grid_C__pf3410280870::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Grid_C__pf3410280870 Instance;
};
FRegisterHelper__ABP_Grid_C__pf3410280870 FRegisterHelper__ABP_Grid_C__pf3410280870::Instance;
void ABP_Grid_C__pf3410280870::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__GridxCenterxLocation__pfTT, FName(TEXT("Grid Center Location")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__GridxTilexSize__pfTT, FName(TEXT("Grid Tile Size")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__GridxTilexCount__pfTT, FName(TEXT("Grid Tile Count")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__GridxShape__pfT, FName(TEXT("Grid Shape")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__GridLeftBottomLocation__pf, FName(TEXT("GridLeftBottomLocation")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__TilexCount__pfT, FName(TEXT("Tile Count")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__Radius__pf, FName(TEXT("Radius")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__Grid_Map__pf, FName(TEXT("Grid_Map")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__GridVisual__pf, FName(TEXT("GridVisual")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__Data__pf, FName(TEXT("Data")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__TileIndexes__pf, FName(TEXT("TileIndexes")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__Path__pf, FName(TEXT("Path")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__Src__pf, FName(TEXT("Src")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__test_chess__pf, FName(TEXT("test_chess")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__xx__pfiJsGHt, FName(TEXT("目标")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__blueperson1__pf, FName(TEXT("blueperson1")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__whiteperson1__pf, FName(TEXT("whiteperson1")));
	DOREPLIFETIME_DIFFNAMES(ABP_Grid_C__pf3410280870, bpv__whiteperson2__pf, FName(TEXT("whiteperson2")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
