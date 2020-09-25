//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SBBiometricMonitorDataSource;

@protocol SBBiometricMonitorObserver <NSObject>

@optional
- (void)biometricMonitorDataSourcePresenceDetectionEnded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionFailed:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionStarted:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingEnded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingSucceeded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingFailed:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingStarted:(id <SBBiometricMonitorDataSource>)arg1;
@end
