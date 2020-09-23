//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBAlertManager.h"

#import "SBHomeGestureParticipantDelegate-Protocol.h"
#import "SBRemoteAlertAdapterStyleObserver-Protocol.h"

@class NSMapTable, NSMutableDictionary, NSString, SBDisableActiveInterfaceOrientationChangeAssertion, SBHomeGestureArbiter, SBHomeGestureParticipant;

@interface SBMainAlertManager : SBAlertManager <SBHomeGestureParticipantDelegate, SBRemoteAlertAdapterStyleObserver>
{
    NSMapTable *_alertToHostedAccessoryWrappersMap;
    NSMapTable *_alertToNonHostedAccessoryWrappersMap;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableOrientationChangeAssertion;
    NSString *_orientationLockOverrideReason;
    NSMutableDictionary *_mesaAutoUnlockingDisabledAssertions;
    _Bool _externalActivationInProgress;
    _Bool _externalDeactivationInProgress;
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBHomeGestureParticipant *_homeGestureParticipant;
}

@property(retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // @synthesize homeGestureParticipant=_homeGestureParticipant;
@property(retain, nonatomic) SBHomeGestureArbiter *homeGestureArbiter; // @synthesize homeGestureArbiter=_homeGestureArbiter;
- (void).cxx_destruct;
- (void)remoteAlertDidChangeDismissalAnimationStyle:(id)arg1;
- (void)alertDidChangeOrientationEventsEnabled:(id)arg1;
- (void)alertDidUpdateShouldPendAlertItemsWhileActivate:(id)arg1;
- (void)_assistantVisibilityDidChange:(id)arg1;
- (void)_controlCenterDidDeactivate:(id)arg1;
- (void)_coverSheetDidDeactivate:(id)arg1;
- (void)_notificationCenterDidDeactivate:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (_Bool)_topAlertWantsSwitcherGesture;
- (void)_propagateHomeGestureOwnershipToAlerts;
- (void)_updateHomeGestureParticipant;
- (void)_releaseOrientationLockOverrideIfPossibleForAlert:(id)arg1;
- (void)_releaseOrientationLockOverride;
- (void)_acquireOrientationLockOverrideIfNeededForAlert:(id)arg1;
- (void)_updateOrientationLockingForAlertDidChangeOrientationEventsEnabled:(id)arg1;
- (void)_updateOrientationLockingForAlertDeactivation:(id)arg1;
- (void)_updateOrientationLockingForAlertActivation:(id)arg1;
- (void)_disablePortraitOrientationLock;
- (void)_enablePortraitOrientationLock;
- (_Bool)_needsPortraitOrientationLockForAlert:(id)arg1;
- (id)_reasonForAlert:(id)arg1;
- (void)_relinquishMesaAutoUnlockingDisabledAssertionForAlert:(id)arg1;
- (void)_acquireMesaAutoUnlockingDisableAssertionForAlert:(id)arg1;
- (void)_migrateWrappersInMap:(id)arg1 fromAlert:(id)arg2 withIndex:(unsigned long long)arg3;
- (void)_migrateWrappersFromAlert:(id)arg1 withIndex:(unsigned long long)arg2;
- (_Bool)_anyAlertHasHostViewForRequester:(id)arg1;
- (void)_removeHostedAccessoryViewsForRequester:(id)arg1;
- (void)_stopHostingAccessoryWindowsForDeactivatingAlert:(id)arg1;
- (void)_startHostingAccessoryWindowsForActivatingAlert:(id)arg1;
- (void)_hostAccessoryWindowsForActivatingAlert:(id)arg1;
- (_Bool)_anyAlertHasNonHostWrapperForRequester:(id)arg1;
- (void)_removeNonHostedAccessoryWindowsForRequester:(id)arg1;
- (void)_notifyAccessoryWindowsForDeactivatingAlert:(id)arg1;
- (void)_notifyAccessoryWindowsForActivatingAlert:(id)arg1;
- (void)_collectAccessoryWindowsForActivatingAlert:(id)arg1;
- (void)_noteFinishedWithAlert:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_noteAlertWillDismiss:(id)arg1;
- (void)_deactivate:(id)arg1;
- (void)_activate:(id)arg1;
- (_Bool)_canAutorotate;
- (void)_noteWillDisplayAlert:(id)arg1;
- (_Bool)deactivate:(id)arg1;
- (void)activate:(id)arg1;
- (void)disablePortraitOrientationLockIfPossibleForAlert:(id)arg1;
- (id)hostedAccessoryWrappersForAlert:(id)arg1;
- (_Bool)isHostingAccessory:(id)arg1;
- (void)hideHostedAccessoryViewsForAlert:(id)arg1;
- (void)dealloc;
- (id)initWithScreen:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

