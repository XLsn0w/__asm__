//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BSTransactionObserver-Protocol.h"

@class FBApplicationProcess, FBApplicationUpdateScenesTransaction, FBScene;

@protocol FBApplicationUpdateScenesTransactionObserver <BSTransactionObserver>

@optional
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 didCommitSceneUpdate:(FBScene *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 willCommitSceneUpdate:(FBScene *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 willUpdateScene:(FBScene *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 didCreateScene:(FBScene *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 didLaunchProcess:(FBApplicationProcess *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 willLaunchProcess:(FBApplicationProcess *)arg2;
@end

