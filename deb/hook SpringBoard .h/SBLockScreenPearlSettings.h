//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUISettings.h"

@class SBBiometricMonitorUI, SBLockScreenBiometricFailureSettings;

@interface SBLockScreenPearlSettings : SBUISettings
{
    SBBiometricMonitorUI *_monitorUI;
    _Bool _pearlDebugUIEnabled;
    SBLockScreenBiometricFailureSettings *_failureSettings;
}

+ (id)settingsControllerModule;
@property(retain, nonatomic) SBLockScreenBiometricFailureSettings *failureSettings; // @synthesize failureSettings=_failureSettings;
@property(nonatomic) _Bool pearlDebugUIEnabled; // @synthesize pearlDebugUIEnabled=_pearlDebugUIEnabled;
- (void).cxx_destruct;
- (void)_updateDebugUI;
- (void)setDefaultValues;

@end
