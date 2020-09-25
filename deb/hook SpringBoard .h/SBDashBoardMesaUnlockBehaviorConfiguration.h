//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBLiftToWakeObserver-Protocol.h"

@class NSString, SBDashBoardViewController, SBLiftToWakeController, SBLockScreenSettings, SBUIBiometricResource;
@protocol SBDashBoardMesaUnlockBehaviorConfigurationDelegate;

@interface SBDashBoardMesaUnlockBehaviorConfiguration : NSObject <SBLiftToWakeObserver>
{
    id <SBDashBoardMesaUnlockBehaviorConfigurationDelegate> _delegate;
    SBDashBoardViewController *_dbvc;
    SBLiftToWakeController *_liftToWakeController;
    SBLockScreenSettings *_prototypeSettings;
    SBUIBiometricResource *_biometricResource;
    Class _currentTriggerClass;
}

@property(nonatomic) __weak id <SBDashBoardMesaUnlockBehaviorConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (Class)_expectedTriggerClassIncludingAccessibility:(_Bool)arg1;
- (id)_unlockTriggerWithClass:(Class)arg1;
- (void)_accessibilityOptionsChanged:(id)arg1;
- (void)liftToWakeControllerEnablementDidChange:(id)arg1;
- (void)_evaluateTriggerClass;
- (Class)_currentUnlockTriggerClass;
- (_Bool)_isAccessibilityRestingUnlockPreferenceEnabled;
- (id)newBehaviorForCurrentConfiguration;
- (void)dealloc;
- (id)initWithDashBoardViewController:(id)arg1 liftToWakeController:(id)arg2 biometricResource:(id)arg3 lockScreenPrototypeSettings:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
