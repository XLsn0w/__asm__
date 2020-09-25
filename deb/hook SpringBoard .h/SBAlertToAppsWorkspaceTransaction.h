//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBToAppsWorkspaceTransaction.h"

#import "SBAlertManagerObserver-Protocol.h"

@class NSString, SBAlertChangeTransaction, SBAutoPiPWorkspaceTransaction, SBUIAnimationController, SBWorkspaceAlert, SBWorkspaceAlertTransitionContext;

@interface SBAlertToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction <SBAlertManagerObserver>
{
    SBWorkspaceAlertTransitionContext *_alertTransitionContext;
    SBWorkspaceAlert *_alert;
    SBAlertChangeTransaction *_alertChangeTransaction;
    SBUIAnimationController *_animation;
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
    _Bool _preventAlertDeactivationForAnimationStart;
    _Bool _preventAlertDeactivationForAnimationCompletion;
    _Bool _preventAlertDeactivationForAnimationLegacy;
    _Bool _createdAnimation;
    _Bool _animateActivation;
    _Bool _goingToSpringBoard;
    _Bool _goingToCoverSheet;
    _Bool _goingToSwitcher;
    _Bool _activatingFromAssistant;
    _Bool _fadeAssistant;
    _Bool _waitingForAppActivation;
    int _pidToAutoPIP;
    _Bool _automaticallyPippingInCallAlert;
    _Bool _deactivateAfterNextLaunch;
}

@property(nonatomic) _Bool deactivateAfterNextLaunch; // @synthesize deactivateAfterNextLaunch=_deactivateAfterNextLaunch;
@property(readonly, nonatomic) SBWorkspaceAlert *alert; // @synthesize alert=_alert;
- (void).cxx_destruct;
- (void)_cleanUpAfterAnimation;
- (void)_deactivateAlertIfNecessary;
- (void)_alertAnimationComplete:(id)arg1;
- (id)_animationToApplications;
- (id)_animationToSpringBoard;
- (_Bool)_shouldAnimateTransition;
- (void)_doLegacyAlertAnimationWatchingThatNobodyWantsToSupportAnymoreInThisTransactionTodayPleaseGetRidOfMeSometimePlease;
- (void)_prepareApplicationsForActivationAnimated:(_Bool)arg1;
- (void)_activateApplications:(_Bool)arg1;
- (void)_animationDidFinish;
- (void)_animationDidRevealApplication;
- (void)_animationWillBegin:(_Bool)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (void)_performPreAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_hasPreAnimationTasks;
- (void)_endTransition;
- (id)_setupAnimation;
- (void)_clearAnimation;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_beginTransition;
- (void)_synchronizeWithSceneUpdates;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
- (void)activateApplications;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (void)_didComplete;
- (_Bool)_canBeInterrupted;
- (void)_begin;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

