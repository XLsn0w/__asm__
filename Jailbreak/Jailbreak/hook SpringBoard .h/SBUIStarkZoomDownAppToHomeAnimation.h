//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUIStarkScreenAnimationController.h"

#import "SBIconAnimatorDelegate-Protocol.h"

@class NSString, SBAlert, SBIconAnimator, UIView;

@interface SBUIStarkZoomDownAppToHomeAnimation : SBUIStarkScreenAnimationController <SBIconAnimatorDelegate>
{
    UIView *_viewToAnimate;
    SBIconAnimator *_iconAnimator;
    SBAlert *_alertImpersonator;
    _Bool _animationFinished;
    _Bool _fromAssistant;
}

- (void).cxx_destruct;
- (void)iconAnimatorWasInvalidated:(id)arg1;
- (void)_noteZoomDidFinish;
- (void)_cleanupHosting;
- (void)_animateZoomWithCompletion:(CDUnknownBlockType)arg1;
- (void)_prepareZoom;
- (double)_animationDelay;
- (void)_setReferenceIconViewHiddenIfAppropriate:(_Bool)arg1;
- (void)_noteDependencyDidInvalidate;
- (id)_viewToAnimate;
- (id)animationSettings;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)dealloc;
- (id)initWithDeactivatingApplicationSceneEntity:(id)arg1 alertImpersonator:(id)arg2 starkScreenController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

