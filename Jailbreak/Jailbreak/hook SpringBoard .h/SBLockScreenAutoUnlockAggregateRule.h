//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBAutoUnlockComposableRule.h"

@class SBFUserAuthenticationController, SBSyncController;

@interface SBLockScreenAutoUnlockAggregateRule : SBAutoUnlockComposableRule
{
    SBFUserAuthenticationController *_userAuthenticationController;
    SBSyncController *_syncController;
}

@property(retain, nonatomic, getter=_syncController, setter=_setSyncController:) SBSyncController *syncController; // @synthesize syncController=_syncController;
@property(readonly, nonatomic) SBFUserAuthenticationController *userAuthenticationController; // @synthesize userAuthenticationController=_userAuthenticationController;
- (void).cxx_destruct;
- (_Bool)shouldAutoUnlockForSource:(int)arg1;
- (id)_initWithUserAuthenticationController:(id)arg1 syncController:(id)arg2;
- (id)initWithUserAuthenticationController:(id)arg1;

@end

