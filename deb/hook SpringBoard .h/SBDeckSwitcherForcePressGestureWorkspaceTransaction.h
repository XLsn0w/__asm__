//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBFluidSwitcherGestureWorkspaceTransaction.h"

#import "UIInteractionProgressObserver-Protocol.h"

@class NSString, SBAppSwitcherSettings, UIPreviewForceInteractionProgress;

@interface SBDeckSwitcherForcePressGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction <UIInteractionProgressObserver>
{
    UIPreviewForceInteractionProgress *_forceObserver;
    SBAppSwitcherSettings *_switcherSettings;
    _Bool _didPop;
    _Bool _didBeginPanning;
    double _panTranslationThreshold;
    double _panPercent;
    double _forcePercent;
}

@property(readonly, nonatomic) _Bool didBeginPanning; // @synthesize didBeginPanning=_didBeginPanning;
@property(readonly, nonatomic) double forcePercent; // @synthesize forcePercent=_forcePercent;
@property(readonly, nonatomic) double panPercent; // @synthesize panPercent=_panPercent;
@property(readonly, nonatomic) double panTranslationThreshold; // @synthesize panTranslationThreshold=_panTranslationThreshold;
- (void).cxx_destruct;
- (_Bool)_canCommitToSwitcherWithPanPercent:(double)arg1 forceComplete:(_Bool)arg2;
- (double)_projectedTranslationWithVelocity:(struct CGPoint)arg1 initialTranslation:(double)arg2;
- (double)_currentProgressForGesture:(id)arg1;
- (void)_interactionProgressDidUpdate:(id)arg1;
- (void)_gestureDidUpdate:(id)arg1;
- (void)_endGestureNow;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)_finishWithGesture:(id)arg1;
- (void)_updateWithGesture:(id)arg1;
- (void)_beginWithGesture:(id)arg1;
- (_Bool)_requireLiveHomeScreenContentBackdrop;
- (long long)_gestureType;
- (id)initWithTransitionRequest:(id)arg1 fluidSwitcherViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

