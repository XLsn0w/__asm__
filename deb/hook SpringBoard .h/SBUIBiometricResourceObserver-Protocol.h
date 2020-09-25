//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SBUIBiometricResource;

@protocol SBUIBiometricResourceObserver <NSObject>

@optional
- (void)biometricResource:(id <SBUIBiometricResource>)arg1 matchingEnabledDidChange:(_Bool)arg2;
- (void)biometricResource:(id <SBUIBiometricResource>)arg1 matchingAllowedDidChange:(_Bool)arg2;
- (void)biometricResource:(id <SBUIBiometricResource>)arg1 observeEvent:(unsigned long long)arg2;
@end

