#include "NativizedAssets.h"
#include "Tab_Camera__pf944962347.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/ExpandableArea.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "SpinBox_Carema__pf530537768.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
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
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "TB_pawn__pf625247592.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UTab_Camera_C__pf944962347::UTab_Camera_C__pf944962347(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__EXArea_ConsoleCommand__pf = nullptr;
	bpv__ExpandableArea_250__pf = nullptr;
	bpv__SpinBox_Carema_LInterp__pf = nullptr;
	bpv__SpinBox_Carema_LRange__pf = nullptr;
	bpv__SpinBox_Carema_LSpeed__pf = nullptr;
	bpv__SpinBox_Carema_RInterp__pf = nullptr;
	bpv__SpinBox_Carema_RSpeed__pf = nullptr;
	bpv__SpinBox_Carema_ZInterp__pf = nullptr;
	bpv__SpinBox_Carema_ZMax__pf = nullptr;
	bpv__SpinBox_Carema_ZMin__pf = nullptr;
	bpv__SpinBox_Carema_ZSpeed__pf = nullptr;
	bpv__Pawn__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UTab_Camera_C__pf944962347::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UTab_Camera_C__pf944962347::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ATB_pawn_C__pf625247592::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USpinBox_Carema_C__pf530537768::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(9);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 9);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("SpinBox_Carema_LRange"));
	__Local__2.DelegatePropertyName = FName(TEXT("on_Value_Changed"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Camera_SpinBox_Carema_LRange_K2Node_ComponentBoundEvent_17_on_Value_Changed__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("SpinBox_Carema_ZMax"));
	__Local__3.DelegatePropertyName = FName(TEXT("on_Value_Changed"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Camera_SpinBox_Carema_ZMax_K2Node_ComponentBoundEvent_16_on_Value_Changed__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("SpinBox_Carema_ZMin"));
	__Local__4.DelegatePropertyName = FName(TEXT("on_Value_Changed"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Camera_SpinBox_Carema_ZMin_K2Node_ComponentBoundEvent_15_on_Value_Changed__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("SpinBox_Carema_ZInterp"));
	__Local__5.DelegatePropertyName = FName(TEXT("on_Value_Changed"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Camera_SpinBox_Carema_ZInterp_K2Node_ComponentBoundEvent_14_on_Value_Changed__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("SpinBox_Carema_ZSpeed"));
	__Local__6.DelegatePropertyName = FName(TEXT("on_Value_Changed"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Camera_SpinBox_Carema_ZSpeed_K2Node_ComponentBoundEvent_13_on_Value_Changed__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("SpinBox_Carema_RInterp"));
	__Local__7.DelegatePropertyName = FName(TEXT("on_Value_Changed"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Camera_SpinBox_Carema_RInterp_K2Node_ComponentBoundEvent_12_on_Value_Changed__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("SpinBox_Carema_RSpeed"));
	__Local__8.DelegatePropertyName = FName(TEXT("on_Value_Changed"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Camera_SpinBox_Carema_RSpeed_K2Node_ComponentBoundEvent_11_on_Value_Changed__DelegateSignature"));
	auto& __Local__9 = __Local__0->ComponentDelegateBindings[7];
	__Local__9.ComponentPropertyName = FName(TEXT("SpinBox_Carema_LInterp"));
	__Local__9.DelegatePropertyName = FName(TEXT("on_Value_Changed"));
	__Local__9.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Camera_SpinBox_Carema_LInterp_K2Node_ComponentBoundEvent_10_on_Value_Changed__DelegateSignature"));
	auto& __Local__10 = __Local__0->ComponentDelegateBindings[8];
	__Local__10.ComponentPropertyName = FName(TEXT("SpinBox_Carema_LSpeed"));
	__Local__10.DelegatePropertyName = FName(TEXT("on_Value_Changed"));
	__Local__10.FunctionNameToBind = FName(TEXT("BndEvt__Tab_Camera_SpinBox_Carema_LSpeed_K2Node_ComponentBoundEvent_9_on_Value_Changed__DelegateSignature"));
	auto __Local__11 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_0"), (EObjectFlags)0x00280008);
	auto& __Local__12 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__11), UPanelWidget::__PPO__Slots() )));
	__Local__12 = TArray<UPanelSlot*> ();
	__Local__12.Reserve(1);
	auto __Local__13 = NewObject<UVerticalBoxSlot>(__Local__11, TEXT("VerticalBoxSlot_15"), (EObjectFlags)0x00280008);
	__Local__13->Parent = __Local__11;
	auto __Local__14 = NewObject<UBorder>(__Local__1, TEXT("Border_1"), (EObjectFlags)0x00280008);
	__Local__14->Padding.Left = 5.000000f;
	__Local__14->Padding.Top = 5.000000f;
	__Local__14->Padding.Right = 5.000000f;
	__Local__14->Padding.Bottom = 5.000000f;
	__Local__14->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__14->DesiredSizeScale = FVector2D(1.800000, 1.000000);
	auto& __Local__15 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__14), UPanelWidget::__PPO__Slots() )));
	__Local__15 = TArray<UPanelSlot*> ();
	__Local__15.Reserve(1);
	auto __Local__16 = NewObject<UBorderSlot>(__Local__14, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	auto& __Local__17 = (*(AccessPrivateProperty<FMargin >((__Local__16), UBorderSlot::__PPO__Padding() )));
	__Local__17.Left = 5.000000f;
	__Local__17.Top = 5.000000f;
	__Local__17.Right = 5.000000f;
	__Local__17.Bottom = 5.000000f;
	__Local__16->Parent = __Local__14;
	auto __Local__18 = NewObject<UExpandableArea>(__Local__1, TEXT("EXArea_ConsoleCommand"), (EObjectFlags)0x00280008);
	__Local__18->bIsExpanded = true;
	auto& __Local__19 = (*(AccessPrivateProperty<UWidget* >((__Local__18), UExpandableArea::__PPO__HeaderContent() )));
	auto __Local__20 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_71"), (EObjectFlags)0x00280008);
	__Local__20->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"B1E5EAA547A982DD077D43B8D9DCADA4\", \"Camera Setting\")")	);
	auto& __Local__21 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__20->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__21 = FLinearColor(0.208333, 0.208333, 0.208333, 1.000000);
	__Local__20->Font.Size = 20;
	__Local__19 = __Local__20;
	auto& __Local__22 = (*(AccessPrivateProperty<UWidget* >((__Local__18), UExpandableArea::__PPO__BodyContent() )));
	auto __Local__23 = NewObject<UBorder>(__Local__1, TEXT("Border_0"), (EObjectFlags)0x00280008);
	__Local__23->Padding.Left = 5.000000f;
	__Local__23->Padding.Top = 5.000000f;
	__Local__23->Padding.Right = 5.000000f;
	__Local__23->Padding.Bottom = 5.000000f;
	__Local__23->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__23), UPanelWidget::__PPO__Slots() )));
	__Local__24 = TArray<UPanelSlot*> ();
	__Local__24.Reserve(1);
	auto __Local__25 = NewObject<UBorderSlot>(__Local__23, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	auto& __Local__26 = (*(AccessPrivateProperty<FMargin >((__Local__25), UBorderSlot::__PPO__Padding() )));
	__Local__26.Left = 5.000000f;
	__Local__26.Top = 5.000000f;
	__Local__26.Right = 5.000000f;
	__Local__26.Bottom = 5.000000f;
	__Local__25->Parent = __Local__23;
	auto __Local__27 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_114"), (EObjectFlags)0x00280008);
	auto& __Local__28 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__27), UPanelWidget::__PPO__Slots() )));
	__Local__28 = TArray<UPanelSlot*> ();
	__Local__28.Reserve(13);
	auto __Local__29 = NewObject<UVerticalBoxSlot>(__Local__27, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__29->Parent = __Local__27;
	auto __Local__30 = NewObject<UExpandableArea>(__Local__1, TEXT("ExpandableArea_250"), (EObjectFlags)0x00280008);
	__Local__30->bIsExpanded = true;
	auto& __Local__31 = (*(AccessPrivateProperty<UWidget* >((__Local__30), UExpandableArea::__PPO__HeaderContent() )));
	auto __Local__32 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_532"), (EObjectFlags)0x00280008);
	__Local__32->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"C84DE3D1446ED588F78F29BE035127FA\", \"\u64cd\u4f5c\u65b9\u6cd5\")")	);
	auto& __Local__33 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__32->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__33 = FLinearColor(0.208637, 0.208637, 0.208637, 1.000000);
	__Local__32->Font.Size = 13;
	__Local__31 = __Local__32;
	auto& __Local__34 = (*(AccessPrivateProperty<UWidget* >((__Local__30), UExpandableArea::__PPO__BodyContent() )));
	auto __Local__35 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_2"), (EObjectFlags)0x00280008);
	auto& __Local__36 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__35), UPanelWidget::__PPO__Slots() )));
	__Local__36 = TArray<UPanelSlot*> ();
	__Local__36.Reserve(3);
	auto __Local__37 = NewObject<UVerticalBoxSlot>(__Local__35, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__37->Parent = __Local__35;
	auto __Local__38 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__38->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"8C94D3B145C2B38C24B29980C99855B7\", \"\u5de6\u8f6c/\u53f3\u8f6c\uff1aQ/E\")")	);
	auto& __Local__39 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__38->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__39 = FLinearColor(0.208637, 0.208637, 0.208637, 1.000000);
	__Local__38->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__38->Font.Size = 10;
	__Local__38->Slot = __Local__37;
	__Local__37->Content = __Local__38;
	__Local__36.Add(__Local__37);
	auto __Local__40 = NewObject<UVerticalBoxSlot>(__Local__35, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__40->Parent = __Local__35;
	auto __Local__41 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__41->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"0F64DF4A4C8DAF3CFA9817BAC8F618BB\", \"\u524d\u540e\u5de6\u53f3\uff1aW/S/A/D\u6216\u65b9\u5411\u952e\")")	);
	auto& __Local__42 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__41->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__42 = FLinearColor(0.208637, 0.208637, 0.208637, 1.000000);
	__Local__41->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__41->Font.Size = 10;
	__Local__41->Slot = __Local__40;
	__Local__40->Content = __Local__41;
	__Local__36.Add(__Local__40);
	auto __Local__43 = NewObject<UVerticalBoxSlot>(__Local__35, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__43->Parent = __Local__35;
	auto __Local__44 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__44->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"891043494AB9B9F984A885A6E82AB79B\", \"\u955c\u5934\u7f29\u653e\uff1a\u9f20\u6807\u6eda\u8f6e\")")	);
	auto& __Local__45 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__44->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__45 = FLinearColor(0.208637, 0.208637, 0.208637, 1.000000);
	__Local__44->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__44->Font.Size = 10;
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__36.Add(__Local__43);
	__Local__34 = __Local__35;
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__28.Add(__Local__29);
	auto __Local__46 = NewObject<UVerticalBoxSlot>(__Local__27, TEXT("VerticalBoxSlot_9"), (EObjectFlags)0x00280008);
	__Local__46->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__46->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__46->Parent = __Local__27;
	auto __Local__47 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_95"), (EObjectFlags)0x00280008);
	__Local__47->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"23B77CFF4A3CB7AABC333BA2564877F4\", \"\u4f4d\u7f6e\")")	);
	__Local__47->Font.Size = 10;
	__Local__47->Font.LetterSpacing = 2500;
	__Local__47->Slot = __Local__46;
	__Local__46->Content = __Local__47;
	__Local__28.Add(__Local__46);
	auto __Local__48 = NewObject<UVerticalBoxSlot>(__Local__27, TEXT("VerticalBoxSlot_10"), (EObjectFlags)0x00280008);
	__Local__48->Parent = __Local__27;
	auto __Local__49 = NewObject<USpinBox_Carema_C__pf530537768>(__Local__1, TEXT("SpinBox_Carema_LSpeed"), (EObjectFlags)0x00280008);
	__Local__49->bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"6077127F469D47133DC2FBAF16EE3707\", \"\u79fb\u52a8\u901f\u5ea6\uff1a\")")	);
	__Local__49->bpv__MinMax_Slider__pf = FVector2D(0.000000, 50.000000);
	__Local__49->bpv__MinMax_Value__pf = FVector2D(0.000000, 1000.000000);
	__Local__49->bpv__Value__pf = 20.000000f;
	__Local__49->Slot = __Local__48;
	__Local__48->Content = __Local__49;
	__Local__28.Add(__Local__48);
	auto __Local__50 = NewObject<UVerticalBoxSlot>(__Local__27, TEXT("VerticalBoxSlot_11"), (EObjectFlags)0x00280008);
	__Local__50->Parent = __Local__27;
	auto __Local__51 = NewObject<USpinBox_Carema_C__pf530537768>(__Local__1, TEXT("SpinBox_Carema_LRange"), (EObjectFlags)0x00280008);
	__Local__51->bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"40C1E30546146442CA4FA8BCDBED6CB6\", \"\u6700\u5927\u8303\u56f4\uff1a\")")	);
	__Local__51->bpv__MinMax_Slider__pf = FVector2D(0.000000, 5000.000000);
	__Local__51->bpv__MinMax_Value__pf = FVector2D(200.000000, 10000.000000);
	__Local__51->bpv__Value__pf = 1500.000000f;
	__Local__51->bpv__MinMax_FractDigts__pf = FVector2D(2.000000, 2.000000);
	__Local__51->bpv__xx__pfIwtUaq = 100.000000f;
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__28.Add(__Local__50);
	auto __Local__52 = NewObject<UVerticalBoxSlot>(__Local__27, TEXT("VerticalBoxSlot_12"), (EObjectFlags)0x00280008);
	__Local__52->Parent = __Local__27;
	auto __Local__53 = NewObject<USpinBox_Carema_C__pf530537768>(__Local__1, TEXT("SpinBox_Carema_LInterp"), (EObjectFlags)0x00280008);
	__Local__53->bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"FC3A3882434A4FDF8F2344AF5B488623\", \"Interp\uff1a\")")	);
	__Local__53->bpv__MinMax_Value__pf = FVector2D(0.000000, 1000.000000);
	__Local__53->bpv__MinMax_FractDigts__pf = FVector2D(2.000000, 2.000000);
	__Local__53->bpv__xx__pfIwtUaq = 0.100000f;
	__Local__53->Slot = __Local__52;
	__Local__52->Content = __Local__53;
	__Local__28.Add(__Local__52);
	auto __Local__54 = NewObject<UVerticalBoxSlot>(__Local__27, TEXT("VerticalBoxSlot_13"), (EObjectFlags)0x00280008);
	__Local__54->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__54->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__54->Parent = __Local__27;
	auto __Local__55 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_173"), (EObjectFlags)0x00280008);
	__Local__55->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"76A6ABC14DD8C5F7C28A93BD0D8F8E3B\", \"\u65cb\u8f6c\")")	);
	__Local__55->Font.Size = 10;
	__Local__55->Font.LetterSpacing = 2500;
	__Local__55->Slot = __Local__54;
	__Local__54->Content = __Local__55;
	__Local__28.Add(__Local__54);
	auto __Local__56 = NewObject<UVerticalBoxSlot>(__Local__27, TEXT("VerticalBoxSlot_14"), (EObjectFlags)0x00280008);
	__Local__56->Parent = __Local__27;
	auto __Local__57 = NewObject<USpinBox_Carema_C__pf530537768>(__Local__1, TEXT("SpinBox_Carema_RSpeed"), (EObjectFlags)0x00280008);
	__Local__57->bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"E238741B4DF81176098E299E1AFEFCBE\", \"\u65cb\u8f6c\u89d2\u5ea6\uff1a\")")	);
	__Local__57->bpv__MinMax_Slider__pf = FVector2D(15.000000, 90.000000);
	__Local__57->bpv__MinMax_Value__pf = FVector2D(0.000000, 90.000000);
	__Local__57->bpv__Value__pf = 45.000000f;
	__Local__57->bpv__xx__pfIwtUaq = 15.000000f;
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__28.Add(__Local__56);
	auto __Local__58 = NewObject<UVerticalBoxSlot>(__Local__27, TEXT("VerticalBoxSlot_15"), (EObjectFlags)0x00280008);
	__Local__58->Parent = __Local__27;
	auto __Local__59 = NewObject<USpinBox_Carema_C__pf530537768>(__Local__1, TEXT("SpinBox_Carema_RInterp"), (EObjectFlags)0x00280008);
	__Local__59->bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"56A195434F013E638AAF70843E2D2ACE\", \"Interp\uff1a\")")	);
	__Local__59->bpv__MinMax_Value__pf = FVector2D(0.000000, 1000.000000);
	__Local__59->bpv__MinMax_FractDigts__pf = FVector2D(2.000000, 2.000000);
	__Local__59->bpv__xx__pfIwtUaq = 0.100000f;
	__Local__59->Slot = __Local__58;
	__Local__58->Content = __Local__59;
	__Local__28.Add(__Local__58);
	auto __Local__60 = NewObject<UVerticalBoxSlot>(__Local__27, TEXT("VerticalBoxSlot_16"), (EObjectFlags)0x00280008);
	__Local__60->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__60->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__60->Parent = __Local__27;
	auto __Local__61 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_370"), (EObjectFlags)0x00280008);
	__Local__61->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"5BB5B26D4C1A2D05A720A1B4B81ABC78\", \"\u89c6\u91ce\")")	);
	__Local__61->Font.Size = 10;
	__Local__61->Font.LetterSpacing = 2500;
	__Local__61->Slot = __Local__60;
	__Local__60->Content = __Local__61;
	__Local__28.Add(__Local__60);
	auto __Local__62 = NewObject<UVerticalBoxSlot>(__Local__27, TEXT("VerticalBoxSlot_17"), (EObjectFlags)0x00280008);
	__Local__62->Parent = __Local__27;
	auto __Local__63 = NewObject<USpinBox_Carema_C__pf530537768>(__Local__1, TEXT("SpinBox_Carema_ZSpeed"), (EObjectFlags)0x00280008);
	__Local__63->bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"72A5DAC1438F0DED4CA2CBABF8CC4E08\", \"\u7f29\u653e\u901f\u5ea6\uff1a\")")	);
	__Local__63->bpv__MinMax_Slider__pf = FVector2D(0.000000, 200.000000);
	__Local__63->bpv__MinMax_Value__pf = FVector2D(0.000000, 1000.000000);
	__Local__63->bpv__Value__pf = 50.000000f;
	__Local__63->bpv__xx__pfIwtUaq = 5.000000f;
	__Local__63->Slot = __Local__62;
	__Local__62->Content = __Local__63;
	__Local__28.Add(__Local__62);
	auto __Local__64 = NewObject<UVerticalBoxSlot>(__Local__27, TEXT("VerticalBoxSlot_18"), (EObjectFlags)0x00280008);
	__Local__64->Parent = __Local__27;
	auto __Local__65 = NewObject<USpinBox_Carema_C__pf530537768>(__Local__1, TEXT("SpinBox_Carema_ZInterp"), (EObjectFlags)0x00280008);
	__Local__65->bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"5E47C6B14A9C2DB5634E7CA0E5602424\", \"Interp\uff1a\")")	);
	__Local__65->bpv__MinMax_Slider__pf = FVector2D(0.000000, 5.000000);
	__Local__65->bpv__Value__pf = 2.000000f;
	__Local__65->bpv__MinMax_FractDigts__pf = FVector2D(2.000000, 2.000000);
	__Local__65->bpv__xx__pfIwtUaq = 0.100000f;
	__Local__65->Slot = __Local__64;
	__Local__64->Content = __Local__65;
	__Local__28.Add(__Local__64);
	auto __Local__66 = NewObject<UVerticalBoxSlot>(__Local__27, TEXT("VerticalBoxSlot_19"), (EObjectFlags)0x00280008);
	__Local__66->Parent = __Local__27;
	auto __Local__67 = NewObject<USpinBox_Carema_C__pf530537768>(__Local__1, TEXT("SpinBox_Carema_ZMin"), (EObjectFlags)0x00280008);
	__Local__67->bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"DEE7718A45E86631C644AB8AD97067A7\", \"\u6700\u5c0f\u89c6\u91ce\uff1a\")")	);
	__Local__67->bpv__MinMax_Slider__pf = FVector2D(0.000000, 500.000000);
	__Local__67->bpv__MinMax_Value__pf = FVector2D(100.000000, 500.000000);
	__Local__67->bpv__Value__pf = 200.000000f;
	__Local__67->bpv__xx__pfIwtUaq = 10.000000f;
	__Local__67->Slot = __Local__66;
	__Local__66->Content = __Local__67;
	__Local__28.Add(__Local__66);
	auto __Local__68 = NewObject<UVerticalBoxSlot>(__Local__27, TEXT("VerticalBoxSlot_20"), (EObjectFlags)0x00280008);
	__Local__68->Parent = __Local__27;
	auto __Local__69 = NewObject<USpinBox_Carema_C__pf530537768>(__Local__1, TEXT("SpinBox_Carema_ZMax"), (EObjectFlags)0x00280008);
	__Local__69->bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CDA6081F42A8B6CCC5FDB69E4ADDAE10]\", \"39A124A9476182F1859ED7B28599D566\", \"\u6700\u5927\u89c6\u91ce\uff1a\")")	);
	__Local__69->bpv__MinMax_Slider__pf = FVector2D(0.000000, 5000.000000);
	__Local__69->bpv__MinMax_Value__pf = FVector2D(500.000000, 10000.000000);
	__Local__69->bpv__Value__pf = 3000.000000f;
	__Local__69->bpv__xx__pfIwtUaq = 100.000000f;
	__Local__69->Slot = __Local__68;
	__Local__68->Content = __Local__69;
	__Local__28.Add(__Local__68);
	__Local__27->Slot = __Local__25;
	__Local__25->Content = __Local__27;
	__Local__24.Add(__Local__25);
	__Local__22 = __Local__23;
	__Local__18->Slot = __Local__16;
	__Local__18->bOverride_Cursor = true;
	__Local__18->Cursor = EMouseCursor::Type::Hand;
	__Local__16->Content = __Local__18;
	__Local__15.Add(__Local__16);
	__Local__14->Slot = __Local__13;
	__Local__13->Content = __Local__14;
	__Local__12.Add(__Local__13);
	__Local__1->RootWidget = __Local__11;
}
PRAGMA_ENABLE_OPTIMIZATION
void UTab_Camera_C__pf944962347::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__70;
	SlotNames.Append(__Local__70);
}
void UTab_Camera_C__pf944962347::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__71;
	TArray<FDelegateRuntimeBinding>  __Local__72;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UTab_Camera_C__pf944962347::StaticClass())->MiscConvertedSubobjects[0]), __Local__71, __Local__72);
}
void UTab_Camera_C__pf944962347::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UTab_Camera_C__pf944962347::bpf__ExecuteUbergraph_Tab_Camera__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	APawn* bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(3);
			}
		case 2:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(9, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__SpinBox_Carema_LSpeed__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__SpinBox_Carema_LInterp__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__SpinBox_Carema_LRange__pf;
				b0l__K2Node_MakeArray_Array__pf[3] = bpv__SpinBox_Carema_RSpeed__pf;
				b0l__K2Node_MakeArray_Array__pf[4] = bpv__SpinBox_Carema_RInterp__pf;
				b0l__K2Node_MakeArray_Array__pf[5] = bpv__SpinBox_Carema_ZSpeed__pf;
				b0l__K2Node_MakeArray_Array__pf[6] = bpv__SpinBox_Carema_ZInterp__pf;
				b0l__K2Node_MakeArray_Array__pf[7] = bpv__SpinBox_Carema_ZMin__pf;
				b0l__K2Node_MakeArray_Array__pf[8] = bpv__SpinBox_Carema_ZMax__pf;
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array__pf, b0l_____int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				int32  __Local__73 = 0;
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(((::IsValid(bpv__Pawn__pf)) ? (bpv__Pawn__pf->bpv__Zoom_Speed__pf) : (__Local__73)));
				int32  __Local__74 = 0;
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf = UKismetMathLibrary::Conv_IntToFloat(((::IsValid(bpv__Pawn__pf)) ? (bpv__Pawn__pf->bpv__Location_Speed__pf) : (__Local__74)));
				b0l__K2Node_MakeArray_Array_1__pf.SetNum(9, true);
				b0l__K2Node_MakeArray_Array_1__pf[0] = bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf;
				float  __Local__75 = 0.000000;
				b0l__K2Node_MakeArray_Array_1__pf[1] = ((::IsValid(bpv__Pawn__pf)) ? (bpv__Pawn__pf->bpv__Location_Interp__pf) : (__Local__75));
				float  __Local__76 = 0.000000;
				b0l__K2Node_MakeArray_Array_1__pf[2] = ((::IsValid(bpv__Pawn__pf)) ? (bpv__Pawn__pf->bpv__Max_Location__pf) : (__Local__76));
				float  __Local__77 = 0.000000;
				b0l__K2Node_MakeArray_Array_1__pf[3] = ((::IsValid(bpv__Pawn__pf)) ? (bpv__Pawn__pf->bpv__Rotation_Speed__pf) : (__Local__77));
				float  __Local__78 = 0.000000;
				b0l__K2Node_MakeArray_Array_1__pf[4] = ((::IsValid(bpv__Pawn__pf)) ? (bpv__Pawn__pf->bpv__Rotation_Interp__pf) : (__Local__78));
				b0l__K2Node_MakeArray_Array_1__pf[5] = bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf;
				float  __Local__79 = 0.000000;
				b0l__K2Node_MakeArray_Array_1__pf[6] = ((::IsValid(bpv__Pawn__pf)) ? (bpv__Pawn__pf->bpv__Zoom_Interp__pf) : (__Local__79));
				float  __Local__80 = 0.000000;
				b0l__K2Node_MakeArray_Array_1__pf[7] = ((::IsValid(bpv__Pawn__pf)) ? (bpv__Pawn__pf->bpv__Min_Zoom__pf) : (__Local__80));
				float  __Local__81 = 0.000000;
				b0l__K2Node_MakeArray_Array_1__pf[8] = ((::IsValid(bpv__Pawn__pf)) ? (bpv__Pawn__pf->bpv__Max_Zoom__pf) : (__Local__81));
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array_1__pf, b0l_____int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->bpf__Set_Value__pf(b0l__CallFunc_Array_Get_Item_1__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l_____int_Loop_Counter_Variable__pf, 1);
				b0l_____int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 4:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(9, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__SpinBox_Carema_LSpeed__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__SpinBox_Carema_LInterp__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__SpinBox_Carema_LRange__pf;
				b0l__K2Node_MakeArray_Array__pf[3] = bpv__SpinBox_Carema_RSpeed__pf;
				b0l__K2Node_MakeArray_Array__pf[4] = bpv__SpinBox_Carema_RInterp__pf;
				b0l__K2Node_MakeArray_Array__pf[5] = bpv__SpinBox_Carema_ZSpeed__pf;
				b0l__K2Node_MakeArray_Array__pf[6] = bpv__SpinBox_Carema_ZInterp__pf;
				b0l__K2Node_MakeArray_Array__pf[7] = bpv__SpinBox_Carema_ZMin__pf;
				b0l__K2Node_MakeArray_Array__pf[8] = bpv__SpinBox_Carema_ZMax__pf;
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__K2Node_MakeArray_Array__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l_____int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				b0l_____int_Array_Index_Variable__pf = b0l_____int_Loop_Counter_Variable__pf;
				__CurrentState = 1;
				break;
			}
		case 6:
			{
				b0l_____int_Loop_Counter_Variable__pf = 0;
			}
		case 7:
			{
				b0l_____int_Array_Index_Variable__pf = 0;
				__CurrentState = 4;
				break;
			}
		case 8:
			{
				__CurrentState = 9;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf = UGameplayStatics::GetPlayerPawn(this, 0);
				b0l__K2Node_DynamicCast_AsTB_Pawn__pf = Cast<ATB_pawn_C__pf625247592>(bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsTB_Pawn__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				bpv__Pawn__pf = b0l__K2Node_DynamicCast_AsTB_Pawn__pf;
				__CurrentState = 6;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UTab_Camera_C__pf944962347::bpf__ExecuteUbergraph_Tab_Camera__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Pawn__pf))
	{
		bpv__Pawn__pf->bpv__Max_Location__pf = b0l__K2Node_ComponentBoundEvent_Value__pf;
	}
	return; //KCST_EndOfThread
}
void UTab_Camera_C__pf944962347::bpf__ExecuteUbergraph_Tab_Camera__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 25);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Pawn__pf))
	{
		bpv__Pawn__pf->bpv__Max_Zoom__pf = b0l__K2Node_ComponentBoundEvent_Value_1__pf;
	}
	return; //KCST_EndOfThread
}
void UTab_Camera_C__pf944962347::bpf__ExecuteUbergraph_Tab_Camera__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Pawn__pf))
	{
		bpv__Pawn__pf->bpv__Min_Zoom__pf = b0l__K2Node_ComponentBoundEvent_Value_2__pf;
	}
	return; //KCST_EndOfThread
}
void UTab_Camera_C__pf944962347::bpf__ExecuteUbergraph_Tab_Camera__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Pawn__pf))
	{
		bpv__Pawn__pf->bpv__Rotation_Interp__pf = b0l__K2Node_ComponentBoundEvent_Value_3__pf;
	}
	return; //KCST_EndOfThread
}
void UTab_Camera_C__pf944962347::bpf__ExecuteUbergraph_Tab_Camera__pf_5(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_FTrunc_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(b0l__K2Node_ComponentBoundEvent_Value_4__pf);
	if(::IsValid(bpv__Pawn__pf))
	{
		bpv__Pawn__pf->bpv__Zoom_Speed__pf = bpfv__CallFunc_FTrunc_ReturnValue_1__pf;
	}
	return; //KCST_EndOfThread
}
void UTab_Camera_C__pf944962347::bpf__ExecuteUbergraph_Tab_Camera__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 17);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Pawn__pf))
	{
		bpv__Pawn__pf->bpv__Rotation_Interp__pf = b0l__K2Node_ComponentBoundEvent_Value_5__pf;
	}
	return; //KCST_EndOfThread
}
void UTab_Camera_C__pf944962347::bpf__ExecuteUbergraph_Tab_Camera__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Pawn__pf))
	{
		bpv__Pawn__pf->bpv__Rotation_Speed__pf = b0l__K2Node_ComponentBoundEvent_Value_6__pf;
	}
	return; //KCST_EndOfThread
}
void UTab_Camera_C__pf944962347::bpf__ExecuteUbergraph_Tab_Camera__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 13);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Pawn__pf))
	{
		bpv__Pawn__pf->bpv__Location_Interp__pf = b0l__K2Node_ComponentBoundEvent_Value_7__pf;
	}
	return; //KCST_EndOfThread
}
void UTab_Camera_C__pf944962347::bpf__ExecuteUbergraph_Tab_Camera__pf_9(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__K2Node_ComponentBoundEvent_Value_8__pf);
	if(::IsValid(bpv__Pawn__pf))
	{
		bpv__Pawn__pf->bpv__Location_Speed__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
	}
	return; //KCST_EndOfThread
}
void UTab_Camera_C__pf944962347::bpf__BndEvt__Tab_Camera_SpinBox_Carema_LRange_K2Node_ComponentBoundEvent_17_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_Tab_Camera__pf_1(27);
}
void UTab_Camera_C__pf944962347::bpf__BndEvt__Tab_Camera_SpinBox_Carema_ZMax_K2Node_ComponentBoundEvent_16_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value_1__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_Tab_Camera__pf_2(25);
}
void UTab_Camera_C__pf944962347::bpf__BndEvt__Tab_Camera_SpinBox_Carema_ZMin_K2Node_ComponentBoundEvent_15_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value_2__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_Tab_Camera__pf_3(23);
}
void UTab_Camera_C__pf944962347::bpf__BndEvt__Tab_Camera_SpinBox_Carema_ZInterp_K2Node_ComponentBoundEvent_14_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value_3__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_Tab_Camera__pf_4(21);
}
void UTab_Camera_C__pf944962347::bpf__BndEvt__Tab_Camera_SpinBox_Carema_ZSpeed_K2Node_ComponentBoundEvent_13_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value_4__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_Tab_Camera__pf_5(19);
}
void UTab_Camera_C__pf944962347::bpf__BndEvt__Tab_Camera_SpinBox_Carema_RInterp_K2Node_ComponentBoundEvent_12_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value_5__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_Tab_Camera__pf_6(17);
}
void UTab_Camera_C__pf944962347::bpf__BndEvt__Tab_Camera_SpinBox_Carema_RSpeed_K2Node_ComponentBoundEvent_11_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value_6__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_Tab_Camera__pf_7(15);
}
void UTab_Camera_C__pf944962347::bpf__BndEvt__Tab_Camera_SpinBox_Carema_LInterp_K2Node_ComponentBoundEvent_10_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value_7__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_Tab_Camera__pf_8(13);
}
void UTab_Camera_C__pf944962347::bpf__BndEvt__Tab_Camera_SpinBox_Carema_LSpeed_K2Node_ComponentBoundEvent_9_on_Value_Changed__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value_8__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_Tab_Camera__pf_9(11);
}
void UTab_Camera_C__pf944962347::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Tab_Camera__pf_0(8);
}
PRAGMA_DISABLE_OPTIMIZATION
void UTab_Camera_C__pf944962347::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UTab_Camera_C__pf944962347::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{26, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{127, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ExpandableArea 
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.SpinBox 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Core/Player/TB_pawn.TB_pawn_C 
		{129, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Blueprints/DebugMenu/Widgets/SpinBox_Carema.SpinBox_Carema_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UTab_Camera_C__pf944962347
{
	FRegisterHelper__UTab_Camera_C__pf944962347()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/DebugMenu/Tabs/Tab_Camera"), &UTab_Camera_C__pf944962347::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UTab_Camera_C__pf944962347 Instance;
};
FRegisterHelper__UTab_Camera_C__pf944962347 FRegisterHelper__UTab_Camera_C__pf944962347::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
