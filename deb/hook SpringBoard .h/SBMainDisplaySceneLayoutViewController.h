//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBSceneLayoutViewController.h"

@class FBUIApplicationSceneDeactivationAssertion, NSArray, NSMutableSet, SBMainDisplayLayoutState, SBMainDisplaySceneLayoutDropInteractionManager, SBMainDisplaySceneLayoutGestureManager, SBOrientationTransformWrapperView, SBSeparatorView, UIView;

@interface SBMainDisplaySceneLayoutViewController : SBSceneLayoutViewController
{
    SBMainDisplaySceneLayoutGestureManager *_gestureManager;
    SBMainDisplaySceneLayoutDropInteractionManager *_dropInteractionManager;
    NSMutableSet *_pushPopPrimaryElementReasons;
    NSMutableSet *_pushPopSideElementReasons;
    NSMutableSet *_pushPopSeparatorElementReasons;
    _Bool _showsPushInWallpaper;
    FBUIApplicationSceneDeactivationAssertion *_applicationSceneDeactivationAssertion;
    SBOrientationTransformWrapperView *_contentWrapperView;
    UIView *_contentView;
    UIView *_primaryLayoutElementViewContainerView;
    UIView *_sideLayoutElementViewContainerView;
    SBSeparatorView *_separatorView;
    id _keyboardWillChangeFrameObserver;
    double _separatorViewKeyboardMargin;
    _Bool _nubHighlighted;
    _Bool __preventsStatusBarAreaUpdate;
    double _separatorViewAlpha;
}

+ (double)prototypeSettingsAnimationSpringFriction;
+ (double)prototypeSettingsAnimationSpringTension;
@property(nonatomic, setter=_setPreventsStatusBarAreaUpdate:) _Bool _preventsStatusBarAreaUpdate; // @synthesize _preventsStatusBarAreaUpdate=__preventsStatusBarAreaUpdate;
@property(nonatomic, getter=_isNubHighlighted, setter=_setNubHighlighted:) _Bool _nubHighlighted; // @synthesize _nubHighlighted;
@property(nonatomic, setter=_setSeparatorViewAlpha:) double _separatorViewAlpha; // @synthesize _separatorViewAlpha;
- (void).cxx_destruct;
- (struct CGRect)_layoutFrameForLayoutRole:(long long)arg1 spaceConfiguration:(long long)arg2 inBounds:(struct CGRect)arg3;
- (struct CGSize)_layoutSizeForLayoutRole:(long long)arg1 spaceConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3;
- (unsigned int)_convertAnchorEdge:(unsigned int)arg1 toLayoutOrientation:(long long)arg2;
- (unsigned int)_anchorEdgeForLayoutRole:(long long)arg1;
- (struct CGRect)_separatorViewFrame;
- (long long)_contentInterfaceOrientationForLayoutElement:(id)arg1;
- (_Bool)_shouldConsiderHomeScreenAsActive;
- (void)_updateAuxiliaryViews;
- (_Bool)_isLayoutElementViewControllerOccluded:(id)arg1;
- (_Bool)_shouldRotateToLayoutOrientation:(long long)arg1;
- (_Bool)_shouldAdjustViewAffordancesAfterTransition;
- (_Bool)_shouldRepositionViewAfterTransition;
- (_Bool)_shouldDeactivateSceneAndSuppressKeyboard:(id)arg1;
- (_Bool)_layoutStateHasInactiveLayoutElements;
- (void)_doCommonCleanupUponEndingLayoutTransition;
- (void)_beginLayoutStateTransitionWithContext:(id)arg1;
- (id)_layoutElementViewContainerViewForLayoutRole:(long long)arg1;
- (void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3;
- (struct CGRect)referenceFrameForIdentifier:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2;
- (id)_displayConfiguration;
- (id)_applicationSceneLayoutElementControllerForLayoutRole:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *_transitioningAppViewControllers;
@property(readonly, nonatomic) NSArray *appViewControllers;
- (struct CGRect)_updateRectInReferenceCoordinateSpace:(struct CGRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (struct CGPoint)_updatePointInReferenceCoordinateSpace:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (struct CGAffineTransform)_convertTransformFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(struct CGAffineTransform)arg1;
- (struct CGRect)_convertRectFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(struct CGRect)arg1;
- (struct CGPoint)_convertPointFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(struct CGPoint)arg1;
- (struct CGAffineTransform)_convertTransformFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGAffineTransform)arg1;
- (struct CGRect)_convertRectFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGRect)arg1;
- (struct CGPoint)_convertPointFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGPoint)arg1;
- (id)_separatorView;
- (_Bool)_shouldReverseLayoutDirection;
- (void)_popOutWithElementMask:(unsigned long long)arg1 forReason:(id)arg2 animationFactory:(id)arg3;
- (void)_pushInWithElementMask:(unsigned long long)arg1 forReason:(id)arg2 animationFactory:(id)arg3;
- (struct CGRect)_separatorViewReferenceFrameForSpaceConfiguration:(long long)arg1 interfaceOrientation:(long long)arg2;
- (struct CGRect)_referenceFrameForLayoutRole:(long long)arg1 spaceConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3;
- (struct CGRect)_referenceFrameForLayoutElement:(id)arg1 inLayoutState:(id)arg2;
- (unsigned int)_layoutSpaceAnchorEdgeForLayoutRole:(long long)arg1;
- (double)_layoutWidthForLayoutRole:(long long)arg1 inSpaceConfiguration:(long long)arg2;
- (struct CGRect)_layoutFrameForSize:(struct CGSize)arg1 withRole:(long long)arg2 inInterfaceOrientation:(long long)arg3;
- (void)_requireUnpinPanSystemGestureRecognizerFailureForGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) struct CGRect _separatorViewHitTestFrame;
@property(readonly, nonatomic) double _separatorViewWidth;
- (unsigned int)_anchorEdgeForLayoutRole:(long long)arg1 inInterfaceOrientation:(long long)arg2;
- (void)_orderFrontLayoutElementViewControllerForLayoutRole:(long long)arg1;
- (long long)_overrideInterfaceOrientationMechanics;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSceneManager:(id)arg1;
- (id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3;
- (id)_animationWrapperViewForElement:(id)arg1 entity:(id)arg2 layoutState:(id)arg3;
- (void)_rotateAppViewsWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resizeAppViewsWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performJiggleHintAnimationForApplicationSceneHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_rotateAppsAnimationControllerWithTransitionRequest:(id)arg1;
- (id)_resizeAppsAnimationControllerWithTransitionRequest:(id)arg1;
- (id)_jiggleAppAnimationControllerForTransitionRequest:(id)arg1;
- (id)animationControllerForRotatingWithTransitionRequest:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (double)normalizedDismissRightLocation;
- (double)normalizedWideNarrowLocation;
- (double)normalizedHalfHalfLocation;
- (double)normalizedNarrowWideLocation;
- (double)normalizedDismissLeftLocation;

// Remaining properties
@property(readonly, nonatomic) SBMainDisplayLayoutState *_transitioningFromLayoutState; // @dynamic _transitioningFromLayoutState;
@property(readonly, nonatomic) SBMainDisplayLayoutState *_transitioningToLayoutState; // @dynamic _transitioningToLayoutState;
@property(readonly, nonatomic) SBMainDisplayLayoutState *layoutState; // @dynamic layoutState;

@end

