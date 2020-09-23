//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString, NSTimer, SBDashBoardTeachableMomentsContainerView;
@protocol SBDashBoardHomeAffordanceAnimationViewProviding, SBUIBiometricResource;

@interface SBDashBoardTeachableMomentsContainerViewController : SBDashBoardViewControllerBase <CAAnimationDelegate>
{
    _Bool _authenticated;
    _Bool _updateTextLabelOnNextAnimation;
    unsigned long long _animationState;
    id <SBDashBoardHomeAffordanceAnimationViewProviding> _viewProvider;
    id <SBUIBiometricResource> _biometricResource;
    NSTimer *_fireOffAnimationTimer;
    struct CGPoint _homeAffordanceOffset;
}

+ (id)_animationKeyForKeyPath:(id)arg1 iteration:(unsigned long long)arg2 reset:(_Bool)arg3;
+ (void)_addRepeatedAnimationWithProvider:(CDUnknownBlockType)arg1 toLayer:(id)arg2;
@property(nonatomic) _Bool updateTextLabelOnNextAnimation; // @synthesize updateTextLabelOnNextAnimation=_updateTextLabelOnNextAnimation;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(retain, nonatomic) NSTimer *fireOffAnimationTimer; // @synthesize fireOffAnimationTimer=_fireOffAnimationTimer;
@property(retain, nonatomic) id <SBUIBiometricResource> biometricResource; // @synthesize biometricResource=_biometricResource;
@property(nonatomic) __weak id <SBDashBoardHomeAffordanceAnimationViewProviding> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) unsigned long long animationState; // @synthesize animationState=_animationState;
@property(nonatomic) struct CGPoint homeAffordanceOffset; // @synthesize homeAffordanceOffset=_homeAffordanceOffset;
- (void).cxx_destruct;
- (void)_updateTextLabel;
- (void)_updateTextLabelIfNeeded;
- (unsigned long long)currentState;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_addControlCenterGlyphResetAnimation;
- (id)_controlCenterGlyphAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_addControlCenterGlyphAnimation;
- (void)_addControlCenterGrabberResetAnimation;
- (id)_controlCenterGrabberAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (id)_controlCenterGrabberPositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_addControlCenterGrabberAnimation;
- (void)_addTextResetAnimation;
- (id)_textAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (id)_textPositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_addTextAnimation;
- (void)_addHomeAffordanceResetAnimation;
- (id)_homeAffordancePositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_addHomeAffordanceAnimation;
- (void)_removeNormalAnimationsForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_removeResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_addResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (_Bool)_shouldTeachAboutControlCenter;
- (void)_moveUpTimerForFiringAfterDelay:(double)arg1;
- (void)_cancelTimerAndResetAnimation;
- (void)_setupTimerWithDelay:(double)arg1;
- (void)_setupTimer;
@property(readonly, nonatomic) SBDashBoardTeachableMomentsContainerView *teachableMomentsContainerView;
- (void)_updateLegibilitySettings;
- (_Bool)handleEvent:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

