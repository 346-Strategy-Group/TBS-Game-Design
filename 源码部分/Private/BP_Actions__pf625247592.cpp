#include "NativizedAssets.h"
#include "BP_Actions__pf625247592.h"
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
#include "PW_Hero__pf1964576356.h"
#include "BP_Grid__pf3410280870.h"
#include "chesscharacter__pf772598429.h"
#include "Runtime/Engine/Public/Net/NetPushModelHelpers.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/NavigationSystem/Public/NavigationPath.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintMapLibrary.h"
#include "E_TileType__pf886517966.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Actions_C__pf625247592::ABP_Actions_C__pf625247592(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
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
	bpv__Grid__pf = nullptr;
	bpv__Src__pf.X = -1;
	bpv__Src__pf.Y = -1;
	bpv__Dst__pf.X = -1;
	bpv__Dst__pf.Y = -1;
	bpv__PreSrc__pf.X = -1;
	bpv__PreSrc__pf.Y = -1;
	bpv__PreDst__pf.X = -1;
	bpv__PreDst__pf.Y = -1;
	bpv__Hero__pf = nullptr;
	bpv__Index__pf = 2;
	bpv__IsBreak__pf = false;
	bpv__whiteperson1__pf = nullptr;
	bpv__whiteperson2__pf = nullptr;
	bpv__blueperson1__pf = nullptr;
	bpv__blueperson2__pf = nullptr;
	bpv__GridxTilexSize__pfTT = FVector(0.000000, 0.000000, 0.000000);
	bpv__GridxShape__pfT = E__E_Grid_Shape__pf::NewEnumerator0;
	bpv__GridLeftBottomLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	PrimaryActorTick.bCanEverTick = true;
	auto& __Local__2 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__2 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Actions_C__pf625247592::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Actions_C__pf625247592::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/Core/Grid/Utilities/E_TileType.E_TileType")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/Core/Grid/Grid_Shapes/E_Grid_Shape.E_Grid_Shape")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(APW_Hero_C__pf1964576356::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Grid_C__pf3410280870::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Achesscharacter_C__pf772598429::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FS_Tile_Data__pf886517966();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FS_Tile_Data__pf886517966());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__3 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__3);
	__Local__3->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__3->InputKeyDelegateBindings.AddUninitialized(3);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__3->InputKeyDelegateBindings.GetData(), 3);
	auto& __Local__4 = __Local__3->InputKeyDelegateBindings[0];
	__Local__4.InputChord.Key = FKey(TEXT("RightMouseButton"));
	__Local__4.FunctionNameToBind = FName(TEXT("InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2"));
	auto& __Local__5 = __Local__3->InputKeyDelegateBindings[1];
	__Local__5.InputChord.Key = FKey(TEXT("One"));
	__Local__5.FunctionNameToBind = FName(TEXT("InpActEvt_One_K2Node_InputKeyEvent_0"));
	auto& __Local__6 = __Local__3->InputKeyDelegateBindings[2];
	__Local__6.InputChord.Key = FKey(TEXT("LeftMouseButton"));
	__Local__6.FunctionNameToBind = FName(TEXT("InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_0(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	APW_Hero_C__pf1964576356* bpfv__CallFunc_GetActorOfClass_ReturnValue__pf{};
	ABP_Grid_C__pf3410280870* bpfv__CallFunc_GetActorOfClass_ReturnValue_1__pf{};
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	APW_Hero_C__pf1964576356* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 215);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetActorOfClass_ReturnValue_1__pf = CastChecked<ABP_Grid_C__pf3410280870>(UGameplayStatics::GetActorOfClass(this, ABP_Grid_C__pf3410280870::StaticClass()), ECastCheckedType::NullAllowed);
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpv__Grid__pf = bpfv__CallFunc_GetActorOfClass_ReturnValue_1__pf;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 10, FName(TEXT("Grid")));
	bpfv__CallFunc_GetActorOfClass_ReturnValue__pf = CastChecked<APW_Hero_C__pf1964576356>(UGameplayStatics::GetActorOfClass(this, APW_Hero_C__pf1964576356::StaticClass()), ECastCheckedType::NullAllowed);
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	EnableInput(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	b0l__K2Node_MakeStruct_IntPoint_4__pf.X = 1;
	b0l__K2Node_MakeStruct_IntPoint_4__pf.Y = 10;
	if(::IsValid(bpv__Grid__pf))
	{
		bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_4__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
	}
	bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, APW_Hero_C__pf1964576356::StaticClass(), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
	b0l__K2Node_MakeStruct_IntPoint_4__pf.X = 1;
	b0l__K2Node_MakeStruct_IntPoint_4__pf.Y = 10;
	if(::IsValid(bpv__Grid__pf))
	{
		bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_4__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
	}
	bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
	bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<APW_Hero_C__pf1964576356>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
	AActor::FlushNetDormancy();
	bpv__Hero__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 19, FName(TEXT("Hero")));
	if(::IsValid(bpv__Grid__pf))
	{
		FVector  __Local__7 = FVector(0.000000,0.000000,0.000000);
		auto __Local__9 = FIntPoint(EForceInit::ForceInit);
		FIntPoint  __Local__8 = __Local__9;
		E__E_Grid_Shape__pf  __Local__10 = E__E_Grid_Shape__pf::NewEnumerator0;
		bpv__Grid__pf->bpf__SpawnGrid__pf(FVector(45.000000,-150.000000,3.000000), ((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridxTilexSize__pfTT) : (__Local__7)), ((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridxTilexCount__pfTT) : (__Local__8)), ((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridxShape__pfT) : (__Local__10)), false);
	}
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_IntPointIntPoint_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Find_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 12:
			{
				AActor::FlushNetDormancy();
			}
		case 13:
			{
				bpv__Dst__pf = bpv__HoveredTile__pf;
			}
		case 14:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 14, FName(TEXT("Dst")));
			}
		case 15:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__FindxPath__pfT(bpv__Src__pf, bpv__Dst__pf, 0, /*out*/ b0l__CallFunc_Find_Path_IsPassable__pf);
				}
			}
		case 16:
			{
				if (!b0l__CallFunc_Find_Path_IsPassable__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 17:
			{
				b0l_____int_Loop_Counter_Variable__pf = 0;
			}
		case 18:
			{
				b0l_____int_Array_Index_Variable__pf = 0;
			}
		case 19:
			{
				TArray<FIntPoint>  __Local__11 = {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__Path__pf) : (__Local__11)));
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l_____int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 20:
			{
				b0l_____int_Array_Index_Variable__pf = b0l_____int_Loop_Counter_Variable__pf;
			}
		case 21:
			{
				__StateStack.Push(35);
			}
		case 22:
			{
				TArray<FIntPoint>  __Local__12 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__Path__pf) : (__Local__12)), b0l_____int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__CallFunc_Array_Get_Item__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation__pf);
				}
				UKismetSystemLibrary::DrawDebugSphere(this, b0l__CallFunc_LocationBasedOnGridIndex_TransLocation__pf, 100.000000, b0l_____int_Array_Index_Variable__pf, FLinearColor(1.000000,0.000000,0.051075,1.000000), 2.000000, 0.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				AActor::FlushNetDormancy();
			}
		case 24:
			{
				bpv__PreSrc__pf = bpv__Src__pf;
			}
		case 25:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 15, FName(TEXT("PreSrc")));
			}
		case 26:
			{
				AActor::FlushNetDormancy();
			}
		case 27:
			{
				bpv__PreDst__pf = bpv__Dst__pf;
			}
		case 28:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 16, FName(TEXT("PreDst")));
			}
		case 29:
			{
				AActor::FlushNetDormancy();
			}
		case 30:
			{
				b0l__K2Node_MakeStruct_IntPoint_6__pf.X = -1;
				b0l__K2Node_MakeStruct_IntPoint_6__pf.Y = -1;
				bpv__Src__pf = b0l__K2Node_MakeStruct_IntPoint_6__pf;
			}
		case 31:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 13, FName(TEXT("Src")));
			}
		case 32:
			{
				AActor::FlushNetDormancy();
			}
		case 33:
			{
				b0l__K2Node_MakeStruct_IntPoint_5__pf.X = -1;
				b0l__K2Node_MakeStruct_IntPoint_5__pf.Y = -1;
				bpv__Dst__pf = b0l__K2Node_MakeStruct_IntPoint_5__pf;
			}
		case 34:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 14, FName(TEXT("Dst")));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l_____int_Loop_Counter_Variable__pf, 1);
				b0l_____int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 19;
				break;
			}
		case 36:
			{
				AActor::FlushNetDormancy();
			}
		case 37:
			{
				bpv__Src__pf = bpv__HoveredTile__pf;
			}
		case 38:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 13, FName(TEXT("Src")));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 194:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Get_TileState__pf(bpv__HoveredTile__pf, /*out*/ b0l__CallFunc_Get_TileState_States_1__pf);
				}
			}
		case 195:
			{
				b0l_____byte_Variable_10__pf = E__E_TileState__pf::NewEnumerator3;
				bpfv__CallFunc_Array_Find_ReturnValue__pf = FCustomThunkTemplates::Array_Find(b0l__CallFunc_Get_TileState_States_1__pf, b0l_____byte_Variable_10__pf);
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpfv__CallFunc_Array_Find_ReturnValue__pf, 0);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 197;
					break;
				}
			}
		case 196:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Remove_StateFromTile__pf(bpv__HoveredTile__pf, E__E_TileState__pf::NewEnumerator3);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 197:
			{
				b0l__K2Node_MakeStruct_IntPoint_7__pf.X = -1;
				b0l__K2Node_MakeStruct_IntPoint_7__pf.Y = -1;
				bpfv__CallFunc_NotEqual_IntPointIntPoint_ReturnValue__pf = UKismetMathLibrary::NotEqual_IntPointIntPoint(bpv__Src__pf, b0l__K2Node_MakeStruct_IntPoint_7__pf);
				if (!bpfv__CallFunc_NotEqual_IntPointIntPoint_ReturnValue__pf)
				{
					__CurrentState = 199;
					break;
				}
			}
		case 198:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Add_StateToTile__pf(bpv__HoveredTile__pf, E__E_TileState__pf::NewEnumerator3);
				}
				__CurrentState = 12;
				break;
			}
		case 199:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Remove_StateFromTile__pf(bpv__PreSrc__pf, E__E_TileState__pf::NewEnumerator3);
				}
			}
		case 200:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Remove_StateFromTile__pf(bpv__PreDst__pf, E__E_TileState__pf::NewEnumerator3);
				}
			}
		case 201:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Add_StateToTile__pf(bpv__HoveredTile__pf, E__E_TileState__pf::NewEnumerator3);
				}
				__CurrentState = 36;
				break;
			}
		case 256:
			{
				__CurrentState = 194;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_2(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_3__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf{};
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf{};
	Achesscharacter_C__pf772598429* bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf{};
	Achesscharacter_C__pf772598429* bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf{};
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf{};
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_4__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4__pf{};
	Achesscharacter_C__pf772598429* bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf{};
	Achesscharacter_C__pf772598429* bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 151:
			{
				__CurrentState = 152;
				break;
			}
		case 152:
			{
				b0l__K2Node_MakeStruct_IntPoint__pf.X = 1;
				b0l__K2Node_MakeStruct_IntPoint__pf.Y = 0;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_4__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_4__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_Actions_C__pf625247592::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 153:
			{
				b0l__K2Node_MakeStruct_IntPoint__pf.X = 1;
				b0l__K2Node_MakeStruct_IntPoint__pf.Y = 0;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_4__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_4__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf), ECastCheckedType::NullAllowed);
			}
		case 154:
			{
				b0l__K2Node_MakeStruct_IntPoint_1__pf.X = 6;
				b0l__K2Node_MakeStruct_IntPoint_1__pf.Y = 0;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_1__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_5__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_5__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_Actions_C__pf625247592::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 155:
			{
				b0l__K2Node_MakeStruct_IntPoint_1__pf.X = 6;
				b0l__K2Node_MakeStruct_IntPoint_1__pf.Y = 0;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_1__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_5__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_5__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf), ECastCheckedType::NullAllowed);
			}
		case 156:
			{
				b0l__K2Node_MakeStruct_IntPoint_2__pf.X = 7;
				b0l__K2Node_MakeStruct_IntPoint_2__pf.Y = 7;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_2__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_6__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_6__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_Actions_C__pf625247592::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 157:
			{
				b0l__K2Node_MakeStruct_IntPoint_2__pf.X = 7;
				b0l__K2Node_MakeStruct_IntPoint_2__pf.Y = 7;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_2__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_6__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_6__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf), ECastCheckedType::NullAllowed);
			}
		case 158:
			{
				b0l__K2Node_MakeStruct_IntPoint_3__pf.X = 2;
				b0l__K2Node_MakeStruct_IntPoint_3__pf.Y = 7;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_3__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_7__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_4__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_7__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_Actions_C__pf625247592::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_4__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 159:
			{
				b0l__K2Node_MakeStruct_IntPoint_3__pf.X = 2;
				b0l__K2Node_MakeStruct_IntPoint_3__pf.Y = 7;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(b0l__K2Node_MakeStruct_IntPoint_3__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_7__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_4__pf = UKismetMathLibrary::Conv_VectorToTransform(b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_7__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_4__pf), ECastCheckedType::NullAllowed);
			}
		case 160:
			{
				__StateStack.Push(169);
				__StateStack.Push(167);
				__StateStack.Push(163);
				__StateStack.Push(165);
			}
		case 161:
			{
				bpv__whiteperson1__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf;
			}
		case 162:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(1.000000,1.000000,0.000000,1.000000));
				if(::IsValid(bpv__whiteperson1__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson1__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson1__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 163:
			{
				bpv__blueperson1__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf;
			}
		case 164:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(1.000000,0.000000,0.000000,1.000000));
				if(::IsValid(bpv__blueperson1__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson1__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson1__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 165:
			{
				bpv__whiteperson2__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf;
			}
		case 166:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_3__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(0.000000,1.000000,0.000000,1.000000));
				if(::IsValid(bpv__whiteperson2__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson2__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson2__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_3__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 167:
			{
				bpv__blueperson2__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf;
			}
		case 168:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(0.000000,0.000000,1.000000,1.000000));
				if(::IsValid(bpv__blueperson2__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson2__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson2__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 169:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_6__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf, FVector(0.000000,0.000000,0.000000), bpv__blueperson1__pf, 5.000000, false);
			}
		case 170:
			{
				b0l__CallFunc_IsValid_ReturnValue_23__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_6__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_23__pf)
				{
					__CurrentState = 173;
					break;
				}
			}
		case 171:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_3__pf.BindUFunction(this,FName(TEXT("OnSuccess_A4D895DC4BE7014A779671A9629494B4")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_6__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_6__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_3__pf);
				}
			}
		case 172:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_2__pf.BindUFunction(this,FName(TEXT("OnFail_A4D895DC4BE7014A779671A9629494B4")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_6__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_6__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_2__pf);
				}
			}
		case 173:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_7__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf, FVector(0.000000,0.000000,0.000000), bpv__blueperson1__pf, 5.000000, false);
			}
		case 174:
			{
				b0l__CallFunc_IsValid_ReturnValue_22__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_7__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_22__pf)
				{
					__CurrentState = 177;
					break;
				}
			}
		case 175:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_5__pf.BindUFunction(this,FName(TEXT("OnSuccess_9C541319447A6C40F8248AB0DD143749")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_7__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_7__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_5__pf);
				}
			}
		case 176:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_4__pf.BindUFunction(this,FName(TEXT("OnFail_9C541319447A6C40F8248AB0DD143749")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_7__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_7__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_4__pf);
				}
			}
		case 177:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_8__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf, FVector(0.000000,0.000000,0.000000), bpv__whiteperson1__pf, 5.000000, false);
			}
		case 178:
			{
				b0l__CallFunc_IsValid_ReturnValue_25__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_8__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_25__pf)
				{
					__CurrentState = 181;
					break;
				}
			}
		case 179:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_15__pf.BindUFunction(this,FName(TEXT("OnSuccess_715B1AC04917AA7F0C54C0B27FB2BEE7")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_8__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_8__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_15__pf);
				}
			}
		case 180:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_14__pf.BindUFunction(this,FName(TEXT("OnFail_715B1AC04917AA7F0C54C0B27FB2BEE7")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_8__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_8__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_14__pf);
				}
			}
		case 181:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_9__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf, FVector(0.000000,0.000000,0.000000), bpv__whiteperson1__pf, 5.000000, false);
			}
		case 182:
			{
				b0l__CallFunc_IsValid_ReturnValue_24__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_9__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_24__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 183:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_17__pf.BindUFunction(this,FName(TEXT("OnSuccess_20F8F174446B71C6D6EC20AEE0CBB84A")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_9__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_9__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_17__pf);
				}
			}
		case 184:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_16__pf.BindUFunction(this,FName(TEXT("OnFail_20F8F174446B71C6D6EC20AEE0CBB84A")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_9__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_9__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_16__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_7__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_13__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_7__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_8__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_7__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_21__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_15__pf{};
	check(bpp__EntryPoint__pf == 251);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue_7__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_8__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_7__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_7__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_8__pf, bpfv__CallFunc_IsValidClass_ReturnValue_7__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_7__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_13__pf = UKismetSystemLibrary::IsValid(bpv__blueperson2__pf);
	bpfv__CallFunc_IsValid_ReturnValue_21__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson2__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_15__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_13__pf, bpfv__CallFunc_IsValid_ReturnValue_21__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_15__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__blueperson2__pf))
	{
		USkeletalMeshComponent*  __Local__13 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue_7__pf = bpv__blueperson2__pf->bpf__dodamage__pf(bpv__whiteperson2__pf, ((::IsValid(bpv__blueperson2__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson2__pf), ACharacter::__PPO__Mesh() )))) : (__Local__13)));
	}
	bpf__JudgexLife__pfT(bpv__whiteperson2__pf, bpfv__CallFunc_dodamage_ReturnValue_7__pf, /*out*/ b0l__CallFunc_Judge_Life_die_7__pf);
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_6__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_12__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_6__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_6__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_20__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_14__pf{};
	check(bpp__EntryPoint__pf == 246);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue_6__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_6__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_6__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf, bpfv__CallFunc_IsValidClass_ReturnValue_6__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_6__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_12__pf = UKismetSystemLibrary::IsValid(bpv__blueperson1__pf);
	bpfv__CallFunc_IsValid_ReturnValue_20__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson2__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_14__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_12__pf, bpfv__CallFunc_IsValid_ReturnValue_20__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_14__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__blueperson1__pf))
	{
		USkeletalMeshComponent*  __Local__14 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue_6__pf = bpv__blueperson1__pf->bpf__dodamage__pf(bpv__whiteperson2__pf, ((::IsValid(bpv__blueperson1__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson1__pf), ACharacter::__PPO__Mesh() )))) : (__Local__14)));
	}
	bpf__JudgexLife__pfT(bpv__whiteperson2__pf, bpfv__CallFunc_dodamage_ReturnValue_6__pf, /*out*/ b0l__CallFunc_Judge_Life_die_6__pf);
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_5__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_9__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_5__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_5__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_19__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_13__pf{};
	check(bpp__EntryPoint__pf == 236);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue_5__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_5__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_5__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf, bpfv__CallFunc_IsValidClass_ReturnValue_5__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_5__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_9__pf = UKismetSystemLibrary::IsValid(bpv__blueperson2__pf);
	bpfv__CallFunc_IsValid_ReturnValue_19__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson1__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_13__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_9__pf, bpfv__CallFunc_IsValid_ReturnValue_19__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_13__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__blueperson2__pf))
	{
		USkeletalMeshComponent*  __Local__15 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue_5__pf = bpv__blueperson2__pf->bpf__dodamage__pf(bpv__whiteperson1__pf, ((::IsValid(bpv__blueperson2__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson2__pf), ACharacter::__PPO__Mesh() )))) : (__Local__15)));
	}
	bpf__JudgexLife__pfT(bpv__whiteperson1__pf, bpfv__CallFunc_dodamage_ReturnValue_5__pf, /*out*/ b0l__CallFunc_Judge_Life_die_5__pf);
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_6(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_4__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_8__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_4__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_4__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_18__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_12__pf{};
	check(bpp__EntryPoint__pf == 241);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue_4__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_4__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_4__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf, bpfv__CallFunc_IsValidClass_ReturnValue_4__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_4__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_8__pf = UKismetSystemLibrary::IsValid(bpv__blueperson1__pf);
	bpfv__CallFunc_IsValid_ReturnValue_18__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson1__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_12__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_8__pf, bpfv__CallFunc_IsValid_ReturnValue_18__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_12__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__blueperson1__pf))
	{
		USkeletalMeshComponent*  __Local__16 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue_4__pf = bpv__blueperson1__pf->bpf__dodamage__pf(bpv__whiteperson1__pf, ((::IsValid(bpv__blueperson1__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson1__pf), ACharacter::__PPO__Mesh() )))) : (__Local__16)));
	}
	bpf__JudgexLife__pfT(bpv__whiteperson1__pf, bpfv__CallFunc_dodamage_ReturnValue_4__pf, /*out*/ b0l__CallFunc_Judge_Life_die_4__pf);
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_7(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_3__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_5__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_3__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_17__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_11__pf{};
	check(bpp__EntryPoint__pf == 231);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue_3__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_3__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_3__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf, bpfv__CallFunc_IsValidClass_ReturnValue_3__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_3__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_5__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson2__pf);
	bpfv__CallFunc_IsValid_ReturnValue_17__pf = UKismetSystemLibrary::IsValid(bpv__blueperson2__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_11__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_5__pf, bpfv__CallFunc_IsValid_ReturnValue_17__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_11__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__whiteperson2__pf))
	{
		USkeletalMeshComponent*  __Local__17 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue_3__pf = bpv__whiteperson2__pf->bpf__dodamage__pf(bpv__blueperson2__pf, ((::IsValid(bpv__whiteperson2__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson2__pf), ACharacter::__PPO__Mesh() )))) : (__Local__17)));
	}
	bpf__JudgexLife__pfT(bpv__blueperson2__pf, bpfv__CallFunc_dodamage_ReturnValue_3__pf, /*out*/ b0l__CallFunc_Judge_Life_die_3__pf);
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_8(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_4__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_16__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_10__pf{};
	check(bpp__EntryPoint__pf == 226);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue_2__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_2__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf, bpfv__CallFunc_IsValidClass_ReturnValue_2__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_4__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson1__pf);
	bpfv__CallFunc_IsValid_ReturnValue_16__pf = UKismetSystemLibrary::IsValid(bpv__blueperson2__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_10__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_4__pf, bpfv__CallFunc_IsValid_ReturnValue_16__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_10__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__whiteperson1__pf))
	{
		USkeletalMeshComponent*  __Local__18 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue_2__pf = bpv__whiteperson1__pf->bpf__dodamage__pf(bpv__blueperson2__pf, ((::IsValid(bpv__whiteperson1__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson1__pf), ACharacter::__PPO__Mesh() )))) : (__Local__18)));
	}
	bpf__JudgexLife__pfT(bpv__blueperson2__pf, bpfv__CallFunc_dodamage_ReturnValue_2__pf, /*out*/ b0l__CallFunc_Judge_Life_die_2__pf);
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_9(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_3__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_15__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_9__pf{};
	check(bpp__EntryPoint__pf == 216);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue_1__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_1__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf, bpfv__CallFunc_IsValidClass_ReturnValue_1__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_3__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson2__pf);
	bpfv__CallFunc_IsValid_ReturnValue_15__pf = UKismetSystemLibrary::IsValid(bpv__blueperson1__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_9__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_3__pf, bpfv__CallFunc_IsValid_ReturnValue_15__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_9__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__whiteperson2__pf))
	{
		USkeletalMeshComponent*  __Local__19 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue_1__pf = bpv__whiteperson2__pf->bpf__dodamage__pf(bpv__blueperson1__pf, ((::IsValid(bpv__whiteperson2__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson2__pf), ACharacter::__PPO__Mesh() )))) : (__Local__19)));
	}
	bpf__JudgexLife__pfT(bpv__blueperson1__pf, bpfv__CallFunc_dodamage_ReturnValue_1__pf, /*out*/ b0l__CallFunc_Judge_Life_die_1__pf);
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_10(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	float bpfv__CallFunc_dodamage_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_14__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_8__pf{};
	check(bpp__EntryPoint__pf == 221);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValidClass_ReturnValue__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf, bpfv__CallFunc_IsValidClass_ReturnValue__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(bpv__whiteperson1__pf);
	bpfv__CallFunc_IsValid_ReturnValue_14__pf = UKismetSystemLibrary::IsValid(bpv__blueperson1__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_8__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_2__pf, bpfv__CallFunc_IsValid_ReturnValue_14__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_8__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__whiteperson1__pf))
	{
		USkeletalMeshComponent*  __Local__20 = ((USkeletalMeshComponent*)nullptr);
		bpfv__CallFunc_dodamage_ReturnValue__pf = bpv__whiteperson1__pf->bpf__dodamage__pf(bpv__blueperson1__pf, ((::IsValid(bpv__whiteperson1__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson1__pf), ACharacter::__PPO__Mesh() )))) : (__Local__20)));
	}
	bpf__JudgexLife__pfT(bpv__blueperson1__pf, bpfv__CallFunc_dodamage_ReturnValue__pf, /*out*/ b0l__CallFunc_Judge_Life_die__pf);
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_11(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_6__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_6__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_7__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 144:
			{
				__CurrentState = 145;
				break;
			}
		case 145:
			{
				b0l_____byte_Variable_8__pf = b0l__K2Node_CustomEvent_MovementResult_2__pf;
			}
		case 146:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_24__pf.BindUFunction(this,FName(TEXT("b1w2")));
				bpfv__CallFunc_IsValidClass_ReturnValue_6__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
				bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_6__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_6__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_7__pf, bpfv__CallFunc_IsValidClass_ReturnValue_6__pf);
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_7__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_24__pf, 1.000000, bpfv__CallFunc_BooleanAND_ReturnValue_6__pf, 0.000000, 0.000000);
				__CurrentState = -1;
				break;
			}
		case 149:
			{
				__CurrentState = 150;
				break;
			}
		case 150:
			{
				b0l_____byte_Variable_9__pf = b0l__K2Node_CustomEvent_MovementResult__pf;
				__CurrentState = 146;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_12(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_5__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_5__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_6__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 133:
			{
				__CurrentState = 134;
				break;
			}
		case 134:
			{
				b0l_____byte_Variable_7__pf = b0l__K2Node_CustomEvent_MovementResult_5__pf;
			}
		case 135:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_4__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpv__blueperson2__pf, FVector(0.000000,0.000000,0.000000), bpv__whiteperson2__pf, 5.000000, false);
			}
		case 136:
			{
				b0l__CallFunc_IsValid_ReturnValue_11__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_4__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_11__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 137:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_23__pf.BindUFunction(this,FName(TEXT("OnSuccess_CCE9225242AA076065732CB79A8C5E02")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_4__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_4__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_23__pf);
				}
			}
		case 138:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_22__pf.BindUFunction(this,FName(TEXT("OnFail_CCE9225242AA076065732CB79A8C5E02")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_4__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_4__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_22__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 139:
			{
				__CurrentState = 140;
				break;
			}
		case 140:
			{
				b0l_____byte_Variable_7__pf = b0l__K2Node_CustomEvent_MovementResult_4__pf;
			}
		case 141:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_18__pf.BindUFunction(this,FName(TEXT("b2w1")));
				bpfv__CallFunc_IsValidClass_ReturnValue_5__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
				bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_5__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_5__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_6__pf, bpfv__CallFunc_IsValidClass_ReturnValue_5__pf);
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_6__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_18__pf, 1.000000, bpfv__CallFunc_BooleanAND_ReturnValue_5__pf, 0.000000, 0.000000);
				__CurrentState = 135;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_13(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_4__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_4__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_5__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 124:
			{
				__CurrentState = 125;
				break;
			}
		case 125:
			{
				b0l_____byte_Variable_6__pf = b0l__K2Node_CustomEvent_MovementResult_7__pf;
			}
		case 126:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_5__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpv__blueperson1__pf, FVector(0.000000,0.000000,0.000000), bpv__whiteperson2__pf, 5.000000, false);
			}
		case 127:
			{
				b0l__CallFunc_IsValid_ReturnValue_10__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_5__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_10__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 128:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_21__pf.BindUFunction(this,FName(TEXT("OnSuccess_73BB516E493463AE76275EAF93000E8C")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_5__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_5__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_21__pf);
				}
			}
		case 129:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_20__pf.BindUFunction(this,FName(TEXT("OnFail_73BB516E493463AE76275EAF93000E8C")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_5__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_5__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_20__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 130:
			{
				__CurrentState = 131;
				break;
			}
		case 131:
			{
				b0l_____byte_Variable_6__pf = b0l__K2Node_CustomEvent_MovementResult_6__pf;
			}
		case 132:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_19__pf.BindUFunction(this,FName(TEXT("b1w1")));
				bpfv__CallFunc_IsValidClass_ReturnValue_4__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
				bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_4__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_4__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf, bpfv__CallFunc_IsValidClass_ReturnValue_4__pf);
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_5__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_19__pf, 1.000000, bpfv__CallFunc_BooleanAND_ReturnValue_4__pf, 0.000000, 0.000000);
				__CurrentState = 126;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_14(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Find_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 39:
			{
				AActor::FlushNetDormancy();
			}
		case 40:
			{
				bpv__Selected_Tile__pf = bpv__HoveredTile__pf;
			}
		case 41:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 12, FName(TEXT("Selected_Tile")));
			}
		case 42:
			{
				if(::IsValid(bpv__Hero__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpv__Hero__pf->AActor::K2_GetActorLocation();
				}
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Get_TileIndexFromWorldLocation__pf(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, /*out*/ b0l__CallFunc_Get_TileIndexFromWorldLocation_TileIndex__pf);
				}
			}
		case 43:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__FindxPath__pfT(b0l__CallFunc_Get_TileIndexFromWorldLocation_TileIndex__pf, bpv__Selected_Tile__pf, 0, /*out*/ b0l__CallFunc_Find_Path_IsPassable_1__pf);
				}
			}
		case 44:
			{
				AActor::FlushNetDormancy();
			}
		case 45:
			{
				TArray<FIntPoint>  __Local__21 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__Path__pf) : (__Local__21)), 0, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				bpv__PreTile__pf = b0l__CallFunc_Array_Get_Item_2__pf;
			}
		case 46:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 17, FName(TEXT("PreTile")));
			}
		case 47:
			{
				AActor::FlushNetDormancy();
			}
		case 48:
			{
				TArray<FIntPoint>  __Local__22 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__Path__pf) : (__Local__22)), 1, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
				bpv__ToTile__pf = b0l__CallFunc_Array_Get_Item_3__pf;
			}
		case 49:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 18, FName(TEXT("ToTile")));
			}
		case 50:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Add_StateToTile__pf(bpv__ToTile__pf, E__E_TileState__pf::NewEnumerator3);
				}
			}
		case 51:
			{
				bpf__GetRotation__pf(bpv__ToTile__pf, bpv__PreTile__pf, /*out*/ b0l__CallFunc_GetRotation_NewParam__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_GetRotation_NewParam__pf);
				if(::IsValid(bpv__Hero__pf))
				{
					bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf = bpv__Hero__pf->AActor::K2_SetActorRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false);
				}
			}
		case 52:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(bpv__ToTile__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf);
				}
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpv__Hero__pf, b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf, ((AActor*)nullptr), 0.000000, false);
			}
		case 53:
			{
				b0l__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 56;
					break;
				}
			}
		case 54:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_1__pf.BindUFunction(this,FName(TEXT("OnSuccess_620225394F32E4D2F8B2DAB247A41D7B")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_1__pf);
				}
			}
		case 55:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnFail_620225394F32E4D2F8B2DAB247A41D7B")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
			}
		case 56:
			{
				AActor::FlushNetDormancy();
			}
		case 57:
			{
				bpv__PreTile__pf = bpv__ToTile__pf;
			}
		case 58:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 17, FName(TEXT("PreTile")));
			}
		case 59:
			{
				TArray<FIntPoint>  __Local__23 = {};
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__Path__pf) : (__Local__23)));
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Array_Length_ReturnValue_2__pf, 2);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 60:
			{
				AActor::FlushNetDormancy();
			}
		case 61:
			{
				bpv__Index__pf = 2;
			}
		case 62:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 20, FName(TEXT("Index")));
			}
		case 63:
			{
				AActor::FlushNetDormancy();
			}
		case 64:
			{
				bpv__IsBreak__pf = false;
			}
		case 65:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 21, FName(TEXT("IsBreak")));
			}
		case 66:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__IsBreak__pf);
				b0l__K2Node_CreateDelegate_OutputDelegate_27__pf.BindUFunction(this,FName(TEXT("loop1")));
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_27__pf, 0.300000, bpfv__CallFunc_Not_PreBool_ReturnValue__pf, 0.000000, 0.000000);
				__CurrentState = -1;
				break;
			}
		case 188:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Get_TileState__pf(bpv__HoveredTile__pf, /*out*/ b0l__CallFunc_Get_TileState_States__pf);
				}
			}
		case 189:
			{
				b0l_____byte_Variable_11__pf = E__E_TileState__pf::NewEnumerator2;
				bpfv__CallFunc_Array_Find_ReturnValue_1__pf = FCustomThunkTemplates::Array_Find(b0l__CallFunc_Get_TileState_States__pf, b0l_____byte_Variable_11__pf);
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_2__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpfv__CallFunc_Array_Find_ReturnValue_1__pf, 0);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 190;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 190:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Remove_StateFromTile__pf(bpv__Selected_Tile__pf, E__E_TileState__pf::NewEnumerator2);
				}
			}
		case 191:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Add_StateToTile__pf(bpv__HoveredTile__pf, E__E_TileState__pf::NewEnumerator2);
				}
			}
		case 192:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Remove_StateFromTile__pf(bpv__PreTile__pf, E__E_TileState__pf::NewEnumerator3);
				}
			}
		case 193:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Remove_StateFromTile__pf(bpv__ToTile__pf, E__E_TileState__pf::NewEnumerator3);
				}
				__CurrentState = 39;
				break;
			}
		case 210:
			{
				__CurrentState = 211;
				break;
			}
		case 211:
			{
				TMap<FIntPoint,FS_Tile_Data__pf886517966>  __Local__24 = {};
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridTiles__pf) : (__Local__24)), bpv__HoveredTile__pf, /*out*/ b0l__CallFunc_Map_Find_Value__pf);
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(b0l__CallFunc_Map_Find_Value__pf.bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf), static_cast<uint8>(E__E_TileType__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 188;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_15(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 105:
			{
				__CurrentState = 106;
				break;
			}
		case 106:
			{
				b0l_____byte_Variable_3__pf = b0l__K2Node_CustomEvent_MovementResult_13__pf;
			}
		case 107:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpv__whiteperson2__pf, FVector(0.000000,0.000000,0.000000), bpv__blueperson2__pf, 5.000000, false);
			}
		case 108:
			{
				b0l__CallFunc_IsValid_ReturnValue_7__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_7__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 109:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_11__pf.BindUFunction(this,FName(TEXT("OnSuccess_5F03CA134AFFA0336BEA678762893CA4")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_11__pf);
				}
			}
		case 110:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_10__pf.BindUFunction(this,FName(TEXT("OnFail_5F03CA134AFFA0336BEA678762893CA4")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_10__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 111:
			{
				__CurrentState = 112;
				break;
			}
		case 112:
			{
				b0l_____byte_Variable_3__pf = b0l__K2Node_CustomEvent_MovementResult_12__pf;
			}
		case 113:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_6__pf.BindUFunction(this,FName(TEXT("w2b1")));
				bpfv__CallFunc_IsValidClass_ReturnValue_1__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
				bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_1__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf, bpfv__CallFunc_IsValidClass_ReturnValue_1__pf);
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_2__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_6__pf, 1.000000, bpfv__CallFunc_BooleanAND_ReturnValue_1__pf, 0.000000, 0.000000);
				__CurrentState = 107;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_16(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 96:
			{
				__CurrentState = 97;
				break;
			}
		case 97:
			{
				b0l_____byte_Variable_2__pf = b0l__K2Node_CustomEvent_MovementResult_15__pf;
			}
		case 98:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpv__whiteperson1__pf, FVector(0.000000,0.000000,0.000000), bpv__blueperson2__pf, 5.000000, false);
			}
		case 99:
			{
				b0l__CallFunc_IsValid_ReturnValue_6__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_6__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 100:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_9__pf.BindUFunction(this,FName(TEXT("OnSuccess_4B08A4E14BCDE9C8CDD8D4A9E0733909")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_9__pf);
				}
			}
		case 101:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_8__pf.BindUFunction(this,FName(TEXT("OnFail_4B08A4E14BCDE9C8CDD8D4A9E0733909")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_8__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 102:
			{
				__CurrentState = 103;
				break;
			}
		case 103:
			{
				b0l_____byte_Variable_2__pf = b0l__K2Node_CustomEvent_MovementResult_14__pf;
			}
		case 104:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_7__pf.BindUFunction(this,FName(TEXT("w1b1")));
				bpfv__CallFunc_IsValidClass_ReturnValue__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf, bpfv__CallFunc_IsValidClass_ReturnValue__pf);
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_1__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_7__pf, 1.000000, bpfv__CallFunc_BooleanAND_ReturnValue__pf, 0.000000, 0.000000);
				__CurrentState = 98;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_17(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_3__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_4__pf{};
	check(bpp__EntryPoint__pf == 121);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_5__pf = b0l__K2Node_CustomEvent_MovementResult_8__pf;
	b0l__K2Node_CreateDelegate_OutputDelegate_13__pf.BindUFunction(this,FName(TEXT("w2b2")));
	bpfv__CallFunc_IsValidClass_ReturnValue_3__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_3__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_3__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf, bpfv__CallFunc_IsValidClass_ReturnValue_3__pf);
	bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_4__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_13__pf, 1.000000, bpfv__CallFunc_BooleanAND_ReturnValue_3__pf, 0.000000, 0.000000);
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_18(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValidClass_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_2__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_3__pf{};
	check(bpp__EntryPoint__pf == 116);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_4__pf = b0l__K2Node_CustomEvent_MovementResult_10__pf;
	b0l__K2Node_CreateDelegate_OutputDelegate_12__pf.BindUFunction(this,FName(TEXT("w1b2")));
	bpfv__CallFunc_IsValidClass_ReturnValue_2__pf = UKismetSystemLibrary::IsValidClass(Achesscharacter_C__pf772598429::StaticClass());
	bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Judge_Life_die_2__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf, bpfv__CallFunc_IsValidClass_ReturnValue_2__pf);
	bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_3__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate_12__pf, 1.000000, bpfv__CallFunc_BooleanAND_ReturnValue_2__pf, 0.000000, 0.000000);
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_19(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 213);
	// optimized KCST_UnconditionalGoto
	bpf__initialEvent__pf();
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_20(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 203);
	// optimized KCST_UnconditionalGoto
	bpf__updatextilexevent__pfTT();
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_21(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 212);
	// optimized KCST_UnconditionalGoto
	bpf__UpdateTileUnderCursor__pf();
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_22(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 94);
	// optimized KCST_UnconditionalGoto
	bpf__smallHeroMove__pf();
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_23(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 67:
			{
				AActor::FlushNetDormancy();
			}
		case 68:
			{
				TArray<FIntPoint>  __Local__25 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__Path__pf) : (__Local__25)), bpv__Index__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				bpv__ToTile__pf = b0l__CallFunc_Array_Get_Item_1__pf;
			}
		case 69:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 18, FName(TEXT("ToTile")));
			}
		case 70:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Remove_StateFromTile__pf(bpv__PreTile__pf, E__E_TileState__pf::NewEnumerator3);
				}
			}
		case 71:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Add_StateToTile__pf(bpv__ToTile__pf, E__E_TileState__pf::NewEnumerator3);
				}
			}
		case 72:
			{
				bpf__GetRotation__pf(bpv__ToTile__pf, bpv__PreTile__pf, /*out*/ b0l__CallFunc_GetRotation_NewParam_1__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue_1__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_GetRotation_NewParam_1__pf);
				if(::IsValid(bpv__Hero__pf))
				{
					bpfv__CallFunc_K2_SetActorRotation_ReturnValue_1__pf = bpv__Hero__pf->AActor::K2_SetActorRotation(bpfv__CallFunc_MakeRotator_ReturnValue_1__pf, false);
				}
			}
		case 73:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(bpv__ToTile__pf, /*out*/ b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf);
				}
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, bpv__Hero__pf, b0l__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf, ((AActor*)nullptr), 0.000000, false);
			}
		case 74:
			{
				b0l__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 77;
					break;
				}
			}
		case 75:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_26__pf.BindUFunction(this,FName(TEXT("OnSuccess_1EFBB49C40B71788730876A7085169A2")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_26__pf);
				}
			}
		case 76:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_25__pf.BindUFunction(this,FName(TEXT("OnFail_1EFBB49C40B71788730876A7085169A2")));
				if(::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf->OnFail.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_25__pf);
				}
			}
		case 77:
			{
				AActor::FlushNetDormancy();
			}
		case 78:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpv__Index__pf, 1);
				bpv__Index__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
			}
		case 79:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 20, FName(TEXT("Index")));
			}
		case 80:
			{
				AActor::FlushNetDormancy();
			}
		case 81:
			{
				bpv__PreTile__pf = bpv__ToTile__pf;
			}
		case 82:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 17, FName(TEXT("PreTile")));
			}
		case 83:
			{
				TArray<FIntPoint>  __Local__26 = {};
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__Path__pf) : (__Local__26)));
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpv__Index__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 84:
			{
				AActor::FlushNetDormancy();
			}
		case 85:
			{
				bpv__IsBreak__pf = true;
			}
		case 86:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 21, FName(TEXT("IsBreak")));
			}
		case 87:
			{
				AActor::FlushNetDormancy();
			}
		case 88:
			{
				bpv__Index__pf = 0;
			}
		case 89:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 20, FName(TEXT("Index")));
				__CurrentState = -1;
				break;
			}
		case 205:
			{
				__CurrentState = 206;
				break;
			}
		case 206:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__IsBreak__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = 207;
					break;
				}
				__CurrentState = 67;
				break;
			}
		case 207:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Remove_StateFromTile__pf(bpv__PreTile__pf, E__E_TileState__pf::NewEnumerator3);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_24(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 208);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable__pf = b0l__K2Node_CustomEvent_MovementResult_18__pf;
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_25(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 185);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable__pf = b0l__K2Node_CustomEvent_MovementResult_19__pf;
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_26(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 147);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_9__pf = b0l__K2Node_CustomEvent_MovementResult_1__pf;
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_27(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 142);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_8__pf = b0l__K2Node_CustomEvent_MovementResult_3__pf;
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_28(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 119);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_5__pf = b0l__K2Node_CustomEvent_MovementResult_9__pf;
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_29(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 114);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_4__pf = b0l__K2Node_CustomEvent_MovementResult_11__pf;
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_30(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 92);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_1__pf = b0l__K2Node_CustomEvent_MovementResult_16__pf;
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__ExecuteUbergraph_BP_Actions__pf_31(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 90);
	// optimized KCST_UnconditionalGoto
	b0l_____byte_Variable_1__pf = b0l__K2Node_CustomEvent_MovementResult_17__pf;
	return; //KCST_EndOfThread
}
void ABP_Actions_C__pf625247592::bpf__b2w2__pf()
{
	bpf__ExecuteUbergraph_BP_Actions__pf_3(251);
}
void ABP_Actions_C__pf625247592::bpf__b1w2__pf()
{
	bpf__ExecuteUbergraph_BP_Actions__pf_4(246);
}
void ABP_Actions_C__pf625247592::bpf__b1w1__pf()
{
	bpf__ExecuteUbergraph_BP_Actions__pf_6(241);
}
void ABP_Actions_C__pf625247592::bpf__b2w1__pf()
{
	bpf__ExecuteUbergraph_BP_Actions__pf_5(236);
}
void ABP_Actions_C__pf625247592::bpf__w2b2__pf()
{
	bpf__ExecuteUbergraph_BP_Actions__pf_7(231);
}
void ABP_Actions_C__pf625247592::bpf__w1b2__pf()
{
	bpf__ExecuteUbergraph_BP_Actions__pf_8(226);
}
void ABP_Actions_C__pf625247592::bpf__w1b1__pf()
{
	bpf__ExecuteUbergraph_BP_Actions__pf_10(221);
}
void ABP_Actions_C__pf625247592::bpf__w2b1__pf()
{
	bpf__ExecuteUbergraph_BP_Actions__pf_9(216);
}
void ABP_Actions_C__pf625247592::bpf__initialEvent__pf_Implementation()
{
	bpf__ExecuteUbergraph_BP_Actions__pf_0(215);
}
void ABP_Actions_C__pf625247592::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_Actions__pf_19(213);
}
void ABP_Actions_C__pf625247592::bpf__updatextilexevent__pfTT_Implementation()
{
	bpf__ExecuteUbergraph_BP_Actions__pf_21(212);
}
void ABP_Actions_C__pf625247592::bpf__smallHeroMove__pf_Implementation()
{
	bpf__ExecuteUbergraph_BP_Actions__pf_14(210);
}
void ABP_Actions_C__pf625247592::bpf__loop1__pf()
{
	bpf__ExecuteUbergraph_BP_Actions__pf_23(205);
}
void ABP_Actions_C__pf625247592::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_20(203);
}
void ABP_Actions_C__pf625247592::bpf__InpActEvt_One_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_2(151);
}
void ABP_Actions_C__pf625247592::bpf__OnSuccess_CCE9225242AA076065732CB79A8C5E02__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_11(149);
}
void ABP_Actions_C__pf625247592::bpf__OnFail_CCE9225242AA076065732CB79A8C5E02__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_1__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_26(147);
}
void ABP_Actions_C__pf625247592::bpf__OnSuccess_73BB516E493463AE76275EAF93000E8C__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_2__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_11(144);
}
void ABP_Actions_C__pf625247592::bpf__OnFail_73BB516E493463AE76275EAF93000E8C__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_3__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_27(142);
}
void ABP_Actions_C__pf625247592::bpf__OnSuccess_20F8F174446B71C6D6EC20AEE0CBB84A__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_4__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_12(139);
}
void ABP_Actions_C__pf625247592::bpf__OnFail_20F8F174446B71C6D6EC20AEE0CBB84A__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_5__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_12(133);
}
void ABP_Actions_C__pf625247592::bpf__OnSuccess_715B1AC04917AA7F0C54C0B27FB2BEE7__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_6__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_13(130);
}
void ABP_Actions_C__pf625247592::bpf__OnFail_715B1AC04917AA7F0C54C0B27FB2BEE7__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_7__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_13(124);
}
void ABP_Actions_C__pf625247592::bpf__OnSuccess_5F03CA134AFFA0336BEA678762893CA4__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_8__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_17(121);
}
void ABP_Actions_C__pf625247592::bpf__OnFail_5F03CA134AFFA0336BEA678762893CA4__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_9__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_28(119);
}
void ABP_Actions_C__pf625247592::bpf__OnSuccess_4B08A4E14BCDE9C8CDD8D4A9E0733909__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_10__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_18(116);
}
void ABP_Actions_C__pf625247592::bpf__OnFail_4B08A4E14BCDE9C8CDD8D4A9E0733909__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_11__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_29(114);
}
void ABP_Actions_C__pf625247592::bpf__OnSuccess_9C541319447A6C40F8248AB0DD143749__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_12__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_15(111);
}
void ABP_Actions_C__pf625247592::bpf__OnFail_9C541319447A6C40F8248AB0DD143749__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_13__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_15(105);
}
void ABP_Actions_C__pf625247592::bpf__OnSuccess_A4D895DC4BE7014A779671A9629494B4__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_14__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_16(102);
}
void ABP_Actions_C__pf625247592::bpf__OnFail_A4D895DC4BE7014A779671A9629494B4__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_15__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_16(96);
}
void ABP_Actions_C__pf625247592::bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_22(94);
}
void ABP_Actions_C__pf625247592::bpf__OnSuccess_620225394F32E4D2F8B2DAB247A41D7B__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_16__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_30(92);
}
void ABP_Actions_C__pf625247592::bpf__OnFail_620225394F32E4D2F8B2DAB247A41D7B__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_17__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_31(90);
}
void ABP_Actions_C__pf625247592::bpf__OnSuccess_1EFBB49C40B71788730876A7085169A2__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_18__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_24(208);
}
void ABP_Actions_C__pf625247592::bpf__OnFail_1EFBB49C40B71788730876A7085169A2__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult_19__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_25(185);
}
void ABP_Actions_C__pf625247592::bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Actions__pf_1(256);
}
void ABP_Actions_C__pf625247592::bpf__UpdateTileUnderCursor__pf()
{
	FIntPoint bpfv__CallFunc_Get_TileIndexOnCursor_TileIndex__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_NotEqual_IntPointIntPoint_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Get_TileIndexOnCursor__pf(0, /*out*/ bpfv__CallFunc_Get_TileIndexOnCursor_TileIndex__pf);
				}
			}
		case 2:
			{
				bpfv__CallFunc_NotEqual_IntPointIntPoint_ReturnValue__pf = UKismetMathLibrary::NotEqual_IntPointIntPoint(bpfv__CallFunc_Get_TileIndexOnCursor_TileIndex__pf, bpv__HoveredTile__pf);
				if (!bpfv__CallFunc_NotEqual_IntPointIntPoint_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Remove_StateFromTile__pf(bpv__HoveredTile__pf, E__E_TileState__pf::NewEnumerator1);
				}
			}
		case 4:
			{
				AActor::FlushNetDormancy();
			}
		case 5:
			{
				bpv__HoveredTile__pf = bpfv__CallFunc_Get_TileIndexOnCursor_TileIndex__pf;
			}
		case 6:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 11, FName(TEXT("HoveredTile")));
			}
		case 7:
			{
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__Add_StateToTile__pf(bpv__HoveredTile__pf, E__E_TileState__pf::NewEnumerator1);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Actions_C__pf625247592::bpf__GetRotation__pf(FIntPoint bpp__P1__pf, FIntPoint bpp__P2__pf, /*out*/ float& bpp__NewParam__pf)
{
	FIntPoint bpfv__NewLocalVar_0__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint__pf(EForceInit::ForceInit);
	FIntPoint bpfv__CallFunc_Subtract_IntPointIntPoint_ReturnValue__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue__pf{};
	bool bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_1__pf{};
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_2__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_3__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_3__pf{};
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_4__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_5__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_4__pf{};
	bool bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_5__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				E__E_Grid_Shape__pf  __Local__27 = E__E_Grid_Shape__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpv__Grid__pf)) ? (bpv__Grid__pf->bpv__GridxShape__pfT) : (__Local__27))), static_cast<uint8>(E__E_Grid_Shape__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_Subtract_IntPointIntPoint_ReturnValue__pf = UKismetMathLibrary::Subtract_IntPointIntPoint(bpp__P1__pf, bpp__P2__pf);
				bpfv__K2Node_MakeStruct_IntPoint_5__pf.X = 0;
				bpfv__K2Node_MakeStruct_IntPoint_5__pf.Y = 2;
				bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_5__pf = UKismetMathLibrary::Equal_IntPointIntPoint(bpfv__CallFunc_Subtract_IntPointIntPoint_ReturnValue__pf, bpfv__K2Node_MakeStruct_IntPoint_5__pf);
				if (!bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_5__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				bpp__NewParam__pf = 0.000000;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Subtract_IntPointIntPoint_ReturnValue__pf = UKismetMathLibrary::Subtract_IntPointIntPoint(bpp__P1__pf, bpp__P2__pf);
				bpfv__K2Node_MakeStruct_IntPoint_4__pf.X = 1;
				bpfv__K2Node_MakeStruct_IntPoint_4__pf.Y = 1;
				bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_4__pf = UKismetMathLibrary::Equal_IntPointIntPoint(bpfv__CallFunc_Subtract_IntPointIntPoint_ReturnValue__pf, bpfv__K2Node_MakeStruct_IntPoint_4__pf);
				if (!bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_4__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 5:
			{
				bpp__NewParam__pf = -60.000000;
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_Subtract_IntPointIntPoint_ReturnValue__pf = UKismetMathLibrary::Subtract_IntPointIntPoint(bpp__P1__pf, bpp__P2__pf);
				bpfv__K2Node_MakeStruct_IntPoint_3__pf.X = 1;
				bpfv__K2Node_MakeStruct_IntPoint_3__pf.Y = -1;
				bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_3__pf = UKismetMathLibrary::Equal_IntPointIntPoint(bpfv__CallFunc_Subtract_IntPointIntPoint_ReturnValue__pf, bpfv__K2Node_MakeStruct_IntPoint_3__pf);
				if (!bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_3__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 7:
			{
				bpp__NewParam__pf = -120.000000;
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpfv__K2Node_MakeStruct_IntPoint__pf.X = 0;
				bpfv__K2Node_MakeStruct_IntPoint__pf.Y = -2;
				bpfv__CallFunc_Subtract_IntPointIntPoint_ReturnValue__pf = UKismetMathLibrary::Subtract_IntPointIntPoint(bpp__P1__pf, bpp__P2__pf);
				bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue__pf = UKismetMathLibrary::Equal_IntPointIntPoint(bpfv__CallFunc_Subtract_IntPointIntPoint_ReturnValue__pf, bpfv__K2Node_MakeStruct_IntPoint__pf);
				if (!bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 9:
			{
				bpp__NewParam__pf = -180.000000;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Subtract_IntPointIntPoint_ReturnValue__pf = UKismetMathLibrary::Subtract_IntPointIntPoint(bpp__P1__pf, bpp__P2__pf);
				bpfv__K2Node_MakeStruct_IntPoint_1__pf.X = -1;
				bpfv__K2Node_MakeStruct_IntPoint_1__pf.Y = -1;
				bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_1__pf = UKismetMathLibrary::Equal_IntPointIntPoint(bpfv__CallFunc_Subtract_IntPointIntPoint_ReturnValue__pf, bpfv__K2Node_MakeStruct_IntPoint_1__pf);
				if (!bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_1__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 11:
			{
				bpp__NewParam__pf = -240.000000;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Subtract_IntPointIntPoint_ReturnValue__pf = UKismetMathLibrary::Subtract_IntPointIntPoint(bpp__P1__pf, bpp__P2__pf);
				bpfv__K2Node_MakeStruct_IntPoint_2__pf.X = -1;
				bpfv__K2Node_MakeStruct_IntPoint_2__pf.Y = 1;
				bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_2__pf = UKismetMathLibrary::Equal_IntPointIntPoint(bpfv__CallFunc_Subtract_IntPointIntPoint_ReturnValue__pf, bpfv__K2Node_MakeStruct_IntPoint_2__pf);
				if (!bpfv__CallFunc_Equal_IntPointIntPoint_ReturnValue_2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 13:
			{
				bpp__NewParam__pf = -300.000000;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Actions_C__pf625247592::bpf__spawnChara__pf()
{
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_1__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FIntPoint bpfv__K2Node_MakeStruct_IntPoint_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf{};
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf{};
	Achesscharacter_C__pf772598429* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	Achesscharacter_C__pf772598429* bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf{};
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf{};
	Achesscharacter_C__pf772598429* bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf{};
	Achesscharacter_C__pf772598429* bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_MakeStruct_IntPoint_1__pf.X = 1;
				bpfv__K2Node_MakeStruct_IntPoint_1__pf.Y = 1;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(bpfv__K2Node_MakeStruct_IntPoint_1__pf, /*out*/ bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf = UKismetMathLibrary::Conv_VectorToTransform(bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_Actions_C__pf625247592::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 2:
			{
				bpfv__K2Node_MakeStruct_IntPoint_1__pf.X = 1;
				bpfv__K2Node_MakeStruct_IntPoint_1__pf.Y = 1;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(bpfv__K2Node_MakeStruct_IntPoint_1__pf, /*out*/ bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf = UKismetMathLibrary::Conv_VectorToTransform(bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_2__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_2__pf), ECastCheckedType::NullAllowed);
			}
		case 3:
			{
				bpfv__K2Node_MakeStruct_IntPoint_2__pf.X = 7;
				bpfv__K2Node_MakeStruct_IntPoint_2__pf.Y = 1;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(bpfv__K2Node_MakeStruct_IntPoint_2__pf, /*out*/ bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf = UKismetMathLibrary::Conv_VectorToTransform(bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_Actions_C__pf625247592::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 4:
			{
				bpfv__K2Node_MakeStruct_IntPoint_2__pf.X = 7;
				bpfv__K2Node_MakeStruct_IntPoint_2__pf.Y = 1;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(bpfv__K2Node_MakeStruct_IntPoint_2__pf, /*out*/ bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf = UKismetMathLibrary::Conv_VectorToTransform(bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_3__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_3__pf), ECastCheckedType::NullAllowed);
			}
		case 5:
			{
				bpfv__K2Node_MakeStruct_IntPoint_3__pf.X = 7;
				bpfv__K2Node_MakeStruct_IntPoint_3__pf.Y = 1;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(bpfv__K2Node_MakeStruct_IntPoint_3__pf, /*out*/ bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_Actions_C__pf625247592::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 6:
			{
				bpfv__K2Node_MakeStruct_IntPoint_3__pf.X = 7;
				bpfv__K2Node_MakeStruct_IntPoint_3__pf.Y = 1;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(bpfv__K2Node_MakeStruct_IntPoint_3__pf, /*out*/ bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 7:
			{
				bpfv__K2Node_MakeStruct_IntPoint__pf.X = 7;
				bpfv__K2Node_MakeStruct_IntPoint__pf.Y = 7;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(bpfv__K2Node_MakeStruct_IntPoint__pf, /*out*/ bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToTransform(bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_Actions_C__pf625247592::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 8:
			{
				bpfv__K2Node_MakeStruct_IntPoint__pf.X = 7;
				bpfv__K2Node_MakeStruct_IntPoint__pf.Y = 7;
				if(::IsValid(bpv__Grid__pf))
				{
					bpv__Grid__pf->bpf__LocationBasedOnGridIndex__pf(bpfv__K2Node_MakeStruct_IntPoint__pf, /*out*/ bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf);
				}
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToTransform(bpfv__CallFunc_LocationBasedOnGridIndex_TransLocation_1__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<Achesscharacter_C__pf772598429>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue_1__pf), ECastCheckedType::NullAllowed);
			}
		case 9:
			{
				__StateStack.Push(16);
				__StateStack.Push(14);
				__StateStack.Push(12);
			}
		case 10:
			{
				bpv__whiteperson1__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf;
			}
		case 11:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(1.000000,1.000000,0.000000,1.000000));
				if(::IsValid(bpv__whiteperson1__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson1__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson1__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpv__whiteperson2__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf;
			}
		case 13:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(0.000000,1.000000,0.000000,1.000000));
				if(::IsValid(bpv__whiteperson2__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson2__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__whiteperson2__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				bpv__blueperson1__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
			}
		case 15:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_3__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(1.000000,0.000000,0.000000,1.000000));
				if(::IsValid(bpv__blueperson1__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson1__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson1__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_3__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				bpv__blueperson2__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf;
			}
		case 17:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(0.000000,0.000000,1.000000,1.000000));
				if(::IsValid(bpv__blueperson2__pf) && ::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson2__pf), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((bpv__blueperson2__pf), ACharacter::__PPO__Mesh() )))->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Bodycolor")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Actions_C__pf625247592::bpf__LocationBasedOnGridIndex__pf(FIntPoint bpp__Grid_Index__pf, /*out*/ FVector& bpp__TransLocation__pf)
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
void ABP_Actions_C__pf625247592::bpf__JudgexLife__pfT(Achesscharacter_C__pf772598429* bpp__target__pf, float bpp__damage__pf, /*out*/ bool& bpp__die__pf)
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
void ABP_Actions_C__pf625247592::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/AC/friendChess.friendChess_C 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/AC/enemyChess.enemyChess_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Actions_C__pf625247592::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{105, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/AIModule.EPathFollowingResult 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AIModule.OAISimpleDelegate__DelegateSignature 
		{31, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIAsyncTaskBlueprintProxy 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  friendChess_C /Game/AC/friendChess.Default__friendChess_C 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  enemyChess_C /Game/AC/enemyChess.Default__enemyChess_C 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{26, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/UI/M_HPbar.M_HPbar 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/UI/manamet.manamet 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Avatar/Animations/DSword/AM_DSword_Attack_05.AM_DSword_Attack_05 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Avatar/Animations/DSword/AS_DSword_Run_Eqip.AS_DSword_Run_Eqip 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Avatar/Character/Mesh/SK_Mannequin.SK_Mannequin 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Heros/Warrior/AN_Warrior_Walk.AN_Warrior_Walk 
		{152, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Heros/Warrior/AN_Warrior_Hit.AN_Warrior_Hit 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/moveTest/robotTestController.robotTestController_C 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  robotTestController_C /Game/moveTest/robotTestController.Default__robotTestController_C 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Heros/Warrior/AN_Warrior_Death.AN_Warrior_Death 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Heros/Warrior/AN_Warrior_Idle.AN_Warrior_Idle 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Maps/1.1 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstance 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/Blueprints/Core/Grid/Grid_Shapes/DT_Grid_Shape_Data.DT_Grid_Shape_Data 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.FloatingPawnMovement 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Meshes/Grids/SM_Grid_Square.SM_Grid_Square 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Blueprints/Core/Grid/Grid_Shapes/M_Grid_Flat.M_Grid_Flat 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Heros/Warrior/AN_Warrior_Attack.AN_Warrior_Attack 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionEnabled 
		{158, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{159, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.InstancedStaticMeshComponent 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Blueprints/Core/Grid/Grid_Shapes/Square/SM_Grid_SquareFlat.SM_Grid_SquareFlat 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Blueprints/Core/Grid/Grid_Shapes/Square/MI_Grid_Flat_Square.MI_Grid_Flat_Square 
		{161, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Heros/Warrior/SK_Warrior.SK_Warrior 
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{162, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/AIModule.EPathFollowingRequestResult 
		{163, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMesh 
		{155, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{157, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{153, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Art/Heros/Warrior/SK_Warrior_Skeleton.SK_Warrior_Skeleton 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Core/Heros/PW_Hero.PW_Hero_C 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Core/Grid/BP_Grid.BP_Grid_C 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/AC/chesscharacter.chesscharacter_C 
		{118, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Blueprints/Core/Grid/Utilities/S_Tile_Data.S_Tile_Data 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Core/Grid/Utilities/E_TileState.E_TileState 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Core/Grid/Utilities/E_TileType.E_TileType 
		{62, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Core/Grid/Grid_Shapes/E_Grid_Shape.E_Grid_Shape 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_Actions_C__pf625247592
{
	FRegisterHelper__ABP_Actions_C__pf625247592()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/Core/Player/BP_Actions"), &ABP_Actions_C__pf625247592::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Actions_C__pf625247592 Instance;
};
FRegisterHelper__ABP_Actions_C__pf625247592 FRegisterHelper__ABP_Actions_C__pf625247592::Instance;
void ABP_Actions_C__pf625247592::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(ABP_Actions_C__pf625247592, bpv__Grid__pf, FName(TEXT("Grid")));
	DOREPLIFETIME_DIFFNAMES(ABP_Actions_C__pf625247592, bpv__HoveredTile__pf, FName(TEXT("HoveredTile")));
	DOREPLIFETIME_DIFFNAMES(ABP_Actions_C__pf625247592, bpv__Selected_Tile__pf, FName(TEXT("Selected_Tile")));
	DOREPLIFETIME_DIFFNAMES(ABP_Actions_C__pf625247592, bpv__Src__pf, FName(TEXT("Src")));
	DOREPLIFETIME_DIFFNAMES(ABP_Actions_C__pf625247592, bpv__Dst__pf, FName(TEXT("Dst")));
	DOREPLIFETIME_DIFFNAMES(ABP_Actions_C__pf625247592, bpv__PreSrc__pf, FName(TEXT("PreSrc")));
	DOREPLIFETIME_DIFFNAMES(ABP_Actions_C__pf625247592, bpv__PreDst__pf, FName(TEXT("PreDst")));
	DOREPLIFETIME_DIFFNAMES(ABP_Actions_C__pf625247592, bpv__PreTile__pf, FName(TEXT("PreTile")));
	DOREPLIFETIME_DIFFNAMES(ABP_Actions_C__pf625247592, bpv__ToTile__pf, FName(TEXT("ToTile")));
	DOREPLIFETIME_DIFFNAMES(ABP_Actions_C__pf625247592, bpv__Hero__pf, FName(TEXT("Hero")));
	DOREPLIFETIME_DIFFNAMES(ABP_Actions_C__pf625247592, bpv__Index__pf, FName(TEXT("Index")));
	DOREPLIFETIME_DIFFNAMES(ABP_Actions_C__pf625247592, bpv__IsBreak__pf, FName(TEXT("IsBreak")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
