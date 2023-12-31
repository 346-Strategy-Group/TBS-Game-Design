#include "NativizedAssets.h"
#include "SpinBox_Vector3D__pf530537768.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/SpinBox.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
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
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
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
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
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
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
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
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
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
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
USpinBox_Vector3D_C__pf530537768::USpinBox_Vector3D_C__pf530537768(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__SpinBox_Value_X__pf = nullptr;
	bpv__SpinBox_Value_Y__pf = nullptr;
	bpv__SpinBox_Value_Z__pf = nullptr;
	bpv__TextBlock_Value__pf = nullptr;
	bpv__Name__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4DCC45514855CA2C762365B754682DCA]\", \"9D8F61544C05E7D83796BFAE5326BB04\", \"Spin Box:\")")	);
	bpv__MinMax_Slider__pf = FVector2D(0.000000, 10.000000);
	bpv__MinMax_Value__pf = FVector2D(0.000000, 10.000000);
	bpv__Value__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__MinMax_FractDigts__pf = FVector2D(0.000000, 0.000000);
	bpv__xxxxxxxxxx__pf6CuoorYNul4uxruvQsIwtUaqF3ucip = true;
	bpv__xx__pfIwtUaq = 1.000000f;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void USpinBox_Vector3D_C__pf530537768::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void USpinBox_Vector3D_C__pf530537768::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(3);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 3);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("SpinBox_Value_Z"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__SpinBox_Vector3D_SpinBox_Value_Z_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("SpinBox_Value_Y"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__SpinBox_Vector2D_SpinBox_Value_Y_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("SpinBox_Value_X"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__SpinBox_Carema_SpinBox_Value_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature"));
	auto __Local__5 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_22"), (EObjectFlags)0x00280008);
	auto& __Local__6 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__5), UPanelWidget::__PPO__Slots() )));
	__Local__6 = TArray<UPanelSlot*> ();
	__Local__6.Reserve(4);
	auto __Local__7 = NewObject<UHorizontalBoxSlot>(__Local__5, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__7->Padding.Left = 5.000000f;
	__Local__7->Padding.Top = 5.000000f;
	__Local__7->Padding.Right = 5.000000f;
	__Local__7->Padding.Bottom = 5.000000f;
	__Local__7->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__7->Parent = __Local__5;
	auto __Local__8 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_Value"), (EObjectFlags)0x00280008);
	__Local__8->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"UMG\", \"TextBlockDefaultValue\", \"Text Block\")")	);
	__Local__8->Font.TypefaceFontName = FName(TEXT("Light"));
	__Local__8->Font.Size = 10;
	__Local__8->Slot = __Local__7;
	__Local__8->bIsVariable = true;
	__Local__7->Content = __Local__8;
	__Local__6.Add(__Local__7);
	auto __Local__9 = NewObject<UHorizontalBoxSlot>(__Local__5, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__9->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__9->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__9->Parent = __Local__5;
	auto __Local__10 = NewObject<UBorder>(__Local__1, TEXT("Border_0"), (EObjectFlags)0x00280008);
	__Local__10->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(1);
	auto __Local__12 = NewObject<UBorderSlot>(__Local__10, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<USpinBox>(__Local__1, TEXT("SpinBox_Value_X"), (EObjectFlags)0x00280008);
	__Local__13->Value = 5.000000f;
	auto& __Local__14 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__13->WidgetStyle.BackgroundBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__14 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__15 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__13->WidgetStyle.HoveredBackgroundBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__15 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__16 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__13->WidgetStyle.ActiveFillBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__16 = FLinearColor(0.029557, 0.029557, 0.029557, 1.000000);
	auto& __Local__17 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__13->WidgetStyle.InactiveFillBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__17 = FLinearColor(0.029557, 0.029557, 0.029557, 1.000000);
	__Local__13->Font.TypefaceFontName = FName(TEXT("Light"));
	__Local__13->Font.Size = 10;
	auto& __Local__18 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__13->ForegroundColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__18 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	static TWeakFieldPtr<FProperty> __Local__20{};
	const FProperty* __Local__19 = __Local__20.Get();
	if (nullptr == __Local__19)
	{
		__Local__19 = (USpinBox::StaticClass())->FindPropertyByName(FName(TEXT("bOverride_MinSliderValue")));
		check(__Local__19);
		__Local__20 = __Local__19;
	}
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((__Local__13), true, 0));
	static TWeakFieldPtr<FProperty> __Local__22{};
	const FProperty* __Local__21 = __Local__22.Get();
	if (nullptr == __Local__21)
	{
		__Local__21 = (USpinBox::StaticClass())->FindPropertyByName(FName(TEXT("bOverride_MaxSliderValue")));
		check(__Local__21);
		__Local__22 = __Local__21;
	}
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__13), true, 0));
	auto& __Local__23 = (*(AccessPrivateProperty<float >((__Local__13), USpinBox::__PPO__MaxSliderValue() )));
	__Local__23 = 10.000000f;
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__6.Add(__Local__9);
	auto __Local__24 = NewObject<UHorizontalBoxSlot>(__Local__5, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__24->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__24->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__24->Parent = __Local__5;
	auto __Local__25 = NewObject<UBorder>(__Local__1, TEXT("Border"), (EObjectFlags)0x00280008);
	__Local__25->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__26 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__25), UPanelWidget::__PPO__Slots() )));
	__Local__26 = TArray<UPanelSlot*> ();
	__Local__26.Reserve(1);
	auto __Local__27 = NewObject<UBorderSlot>(__Local__25, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	__Local__27->Parent = __Local__25;
	auto __Local__28 = NewObject<USpinBox>(__Local__1, TEXT("SpinBox_Value_Y"), (EObjectFlags)0x00280008);
	__Local__28->Value = 5.000000f;
	auto& __Local__29 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->WidgetStyle.BackgroundBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__29 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__30 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->WidgetStyle.HoveredBackgroundBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__30 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->WidgetStyle.ActiveFillBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__31 = FLinearColor(0.029557, 0.029557, 0.029557, 1.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->WidgetStyle.InactiveFillBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__32 = FLinearColor(0.029557, 0.029557, 0.029557, 1.000000);
	__Local__28->Font.TypefaceFontName = FName(TEXT("Light"));
	__Local__28->Font.Size = 10;
	auto& __Local__33 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->ForegroundColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__33 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((__Local__28), true, 0));
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__28), true, 0));
	auto& __Local__34 = (*(AccessPrivateProperty<float >((__Local__28), USpinBox::__PPO__MaxSliderValue() )));
	__Local__34 = 10.000000f;
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__26.Add(__Local__27);
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__6.Add(__Local__24);
	auto __Local__35 = NewObject<UHorizontalBoxSlot>(__Local__5, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__35->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__35->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__35->Parent = __Local__5;
	auto __Local__36 = NewObject<UBorder>(__Local__1, TEXT("Border_1"), (EObjectFlags)0x00280008);
	__Local__36->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__37 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__36), UPanelWidget::__PPO__Slots() )));
	__Local__37 = TArray<UPanelSlot*> ();
	__Local__37.Reserve(1);
	auto __Local__38 = NewObject<UBorderSlot>(__Local__36, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	__Local__38->Parent = __Local__36;
	auto __Local__39 = NewObject<USpinBox>(__Local__1, TEXT("SpinBox_Value_Z"), (EObjectFlags)0x00280008);
	__Local__39->Value = 5.000000f;
	auto& __Local__40 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__39->WidgetStyle.BackgroundBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__40 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__41 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__39->WidgetStyle.HoveredBackgroundBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__41 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__42 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__39->WidgetStyle.ActiveFillBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__42 = FLinearColor(0.029557, 0.029557, 0.029557, 1.000000);
	auto& __Local__43 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__39->WidgetStyle.InactiveFillBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__43 = FLinearColor(0.029557, 0.029557, 0.029557, 1.000000);
	__Local__39->Font.TypefaceFontName = FName(TEXT("Light"));
	__Local__39->Font.Size = 10;
	auto& __Local__44 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__39->ForegroundColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__44 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((__Local__39), true, 0));
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__39), true, 0));
	auto& __Local__45 = (*(AccessPrivateProperty<float >((__Local__39), USpinBox::__PPO__MaxSliderValue() )));
	__Local__45 = 10.000000f;
	__Local__39->Slot = __Local__38;
	__Local__38->Content = __Local__39;
	__Local__37.Add(__Local__38);
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__6.Add(__Local__35);
	__Local__1->RootWidget = __Local__5;
}
PRAGMA_ENABLE_OPTIMIZATION
void USpinBox_Vector3D_C__pf530537768::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__46;
	SlotNames.Append(__Local__46);
}
void USpinBox_Vector3D_C__pf530537768::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__47;
	TArray<FDelegateRuntimeBinding>  __Local__48;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(USpinBox_Vector3D_C__pf530537768::StaticClass())->MiscConvertedSubobjects[0]), __Local__47, __Local__48);
}
void USpinBox_Vector3D_C__pf530537768::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void USpinBox_Vector3D_C__pf530537768::bpf__ExecuteUbergraph_SpinBox_Vector3D__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 18:
			{
				__StateStack.Push(28);
			}
		case 19:
			{
				UKismetMathLibrary::BreakVector2D(bpv__MinMax_Slider__pf, /*out*/ b0l__CallFunc_BreakVector2D_X__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y__pf);
				b0l__K2Node_MakeArray_Array__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__SpinBox_Value_X__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__SpinBox_Value_Y__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__SpinBox_Value_Z__pf;
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array__pf, b0l_____int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->USpinBox::SetMinSliderValue(b0l__CallFunc_BreakVector2D_X__pf);
				}
			}
		case 20:
			{
				UKismetMathLibrary::BreakVector2D(bpv__MinMax_Slider__pf, /*out*/ b0l__CallFunc_BreakVector2D_X__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y__pf);
				b0l__K2Node_MakeArray_Array__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__SpinBox_Value_X__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__SpinBox_Value_Y__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__SpinBox_Value_Z__pf;
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array__pf, b0l_____int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->USpinBox::SetMaxSliderValue(b0l__CallFunc_BreakVector2D_Y__pf);
				}
			}
		case 21:
			{
				UKismetMathLibrary::BreakVector2D(bpv__MinMax_Value__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_1__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_1__pf);
				b0l__K2Node_MakeArray_Array__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__SpinBox_Value_X__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__SpinBox_Value_Y__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__SpinBox_Value_Z__pf;
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array__pf, b0l_____int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->USpinBox::SetMinValue(b0l__CallFunc_BreakVector2D_X_1__pf);
				}
			}
		case 22:
			{
				UKismetMathLibrary::BreakVector2D(bpv__MinMax_Value__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_1__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_1__pf);
				b0l__K2Node_MakeArray_Array__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__SpinBox_Value_X__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__SpinBox_Value_Y__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__SpinBox_Value_Z__pf;
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array__pf, b0l_____int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->USpinBox::SetMaxValue(b0l__CallFunc_BreakVector2D_Y_1__pf);
				}
			}
		case 23:
			{
				bpf__Set_Value__pf(bpv__Value__pf);
			}
		case 24:
			{
				UKismetMathLibrary::BreakVector2D(bpv__MinMax_FractDigts__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_2__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_2__pf);
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_BreakVector2D_X_2__pf);
				b0l__K2Node_MakeArray_Array__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__SpinBox_Value_X__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__SpinBox_Value_Y__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__SpinBox_Value_Z__pf;
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array__pf, b0l_____int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->USpinBox::SetMinFractionalDigits(bpfv__CallFunc_FTrunc_ReturnValue_1__pf);
				}
			}
		case 25:
			{
				UKismetMathLibrary::BreakVector2D(bpv__MinMax_FractDigts__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_2__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_2__pf);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_BreakVector2D_Y_2__pf);
				b0l__K2Node_MakeArray_Array__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__SpinBox_Value_X__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__SpinBox_Value_Y__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__SpinBox_Value_Z__pf;
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array__pf, b0l_____int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->USpinBox::SetMaxFractionalDigits(bpfv__CallFunc_FTrunc_ReturnValue__pf);
				}
			}
		case 26:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__SpinBox_Value_X__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__SpinBox_Value_Y__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__SpinBox_Value_Z__pf;
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array__pf, b0l_____int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->USpinBox::SetAlwaysUsesDeltaSnap(bpv__xxxxxxxxxx__pf6CuoorYNul4uxruvQsIwtUaqF3ucip);
				}
			}
		case 27:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__SpinBox_Value_X__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__SpinBox_Value_Y__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__SpinBox_Value_Z__pf;
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array__pf, b0l_____int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->USpinBox::SetDelta(bpv__xx__pfIwtUaq);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l_____int_Loop_Counter_Variable__pf, 1);
				b0l_____int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 29:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__SpinBox_Value_X__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__SpinBox_Value_Y__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__SpinBox_Value_Z__pf;
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__K2Node_MakeArray_Array__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l_____int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 30:
			{
				b0l_____int_Array_Index_Variable__pf = b0l_____int_Loop_Counter_Variable__pf;
				__CurrentState = 18;
				break;
			}
		case 31:
			{
				b0l_____int_Loop_Counter_Variable__pf = 0;
			}
		case 32:
			{
				b0l_____int_Array_Index_Variable__pf = 0;
				__CurrentState = 29;
				break;
			}
		case 33:
			{
				__CurrentState = 34;
				break;
			}
		case 34:
			{
				if(::IsValid(bpv__TextBlock_Value__pf))
				{
					bpv__TextBlock_Value__pf->SetText(bpv__Name__pf);
				}
				__CurrentState = 31;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void USpinBox_Vector3D_C__pf530537768::bpf__ExecuteUbergraph_SpinBox_Vector3D__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetValue_ReturnValue__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue_1__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
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
				__StateStack.Push(5);
			}
		case 3:
			{
				__StateStack.Push(6);
			}
		case 4:
			{
				if (!b0l_____bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 11;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				b0l_____bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				if (!b0l_____bool_IsClosed_Variable__pf)
				{
					__CurrentState = 7;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				b0l_____bool_IsClosed_Variable__pf = true;
			}
		case 8:
			{
				if (!true)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 9:
			{
				b0l_____bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				b0l_____bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
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
		case 14:
			{
				bpv__on_Value_Changed__pf.Broadcast(bpv__Value__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				__StateStack.Push(16);
				__CurrentState = 3;
				break;
			}
		case 16:
			{
				if (!b0l_____bool_Whether_the_gate_is_currently_open_or_close_Variable__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				if(::IsValid(bpv__SpinBox_Value_X__pf))
				{
					bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__SpinBox_Value_X__pf->USpinBox::GetValue();
				}
				if(::IsValid(bpv__SpinBox_Value_Y__pf))
				{
					bpfv__CallFunc_GetValue_ReturnValue_1__pf = bpv__SpinBox_Value_Y__pf->USpinBox::GetValue();
				}
				if(::IsValid(bpv__SpinBox_Value_Z__pf))
				{
					bpfv__CallFunc_GetValue_ReturnValue_2__pf = bpv__SpinBox_Value_Z__pf->USpinBox::GetValue();
				}
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_GetValue_ReturnValue__pf, bpfv__CallFunc_GetValue_ReturnValue_1__pf, bpfv__CallFunc_GetValue_ReturnValue_2__pf);
				bpv__Value__pf = bpfv__CallFunc_MakeVector_ReturnValue__pf;
				__CurrentState = 14;
				break;
			}
		case 35:
			{
				__CurrentState = 15;
				break;
			}
		case 36:
			{
				__CurrentState = 37;
				break;
			}
		case 37:
			{
				UKismetSystemLibrary::Delay(this, 0.050000, FLatentActionInfo(1, -477473721, TEXT("ExecuteUbergraph_SpinBox_Vector3D_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				__CurrentState = 15;
				break;
			}
		case 39:
			{
				__CurrentState = 15;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void USpinBox_Vector3D_C__pf530537768::bpf__BndEvt__SpinBox_Vector3D_SpinBox_Value_Z_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf)
{
	b0l__K2Node_ComponentBoundEvent_InValue__pf = bpp__InValue__pf;
	bpf__ExecuteUbergraph_SpinBox_Vector3D__pf_1(39);
}
void USpinBox_Vector3D_C__pf530537768::bpf__BndEvt__SpinBox_Vector2D_SpinBox_Value_Y_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf)
{
	b0l__K2Node_ComponentBoundEvent_InValue_1__pf = bpp__InValue__pf;
	bpf__ExecuteUbergraph_SpinBox_Vector3D__pf_1(38);
}
void USpinBox_Vector3D_C__pf530537768::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_SpinBox_Vector3D__pf_1(36);
}
void USpinBox_Vector3D_C__pf530537768::bpf__BndEvt__SpinBox_Carema_SpinBox_Value_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf)
{
	b0l__K2Node_ComponentBoundEvent_InValue_2__pf = bpp__InValue__pf;
	bpf__ExecuteUbergraph_SpinBox_Vector3D__pf_1(35);
}
void USpinBox_Vector3D_C__pf530537768::bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf)
{
	b0l__K2Node_Event_IsDesignTime__pf = bpp__IsDesignTime__pf;
	bpf__ExecuteUbergraph_SpinBox_Vector3D__pf_0(33);
}
void USpinBox_Vector3D_C__pf530537768::bpf__Set_Value__pf(FVector bpp__NewValue__pf)
{
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	bpv__Value__pf = bpp__NewValue__pf;
	UKismetMathLibrary::BreakVector(bpv__Value__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	if(::IsValid(bpv__SpinBox_Value_X__pf))
	{
		bpv__SpinBox_Value_X__pf->USpinBox::SetValue(bpfv__CallFunc_BreakVector_X__pf);
	}
	UKismetMathLibrary::BreakVector(bpv__Value__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	if(::IsValid(bpv__SpinBox_Value_Y__pf))
	{
		bpv__SpinBox_Value_Y__pf->USpinBox::SetValue(bpfv__CallFunc_BreakVector_Y__pf);
	}
	UKismetMathLibrary::BreakVector(bpv__Value__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	if(::IsValid(bpv__SpinBox_Value_Z__pf))
	{
		bpv__SpinBox_Value_Z__pf->USpinBox::SetValue(bpfv__CallFunc_BreakVector_Z__pf);
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void USpinBox_Vector3D_C__pf530537768::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void USpinBox_Vector3D_C__pf530537768::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{122, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.SpinBox 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{26, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__USpinBox_Vector3D_C__pf530537768
{
	FRegisterHelper__USpinBox_Vector3D_C__pf530537768()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/DebugMenu/Widgets/SpinBox_Vector3D"), &USpinBox_Vector3D_C__pf530537768::__StaticDependenciesAssets);
	}
	static FRegisterHelper__USpinBox_Vector3D_C__pf530537768 Instance;
};
FRegisterHelper__USpinBox_Vector3D_C__pf530537768 FRegisterHelper__USpinBox_Vector3D_C__pf530537768::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
