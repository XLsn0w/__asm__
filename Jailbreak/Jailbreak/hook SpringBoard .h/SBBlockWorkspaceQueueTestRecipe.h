//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBTestRecipe-Protocol.h"

@class FBWorkspaceEventQueueLock, NSString, NSTimer;

@interface SBBlockWorkspaceQueueTestRecipe : NSObject <SBTestRecipe>
{
    NSTimer *_blockTimer;
    FBWorkspaceEventQueueLock *_queueLock;
}

+ (id)title;
@property(retain, nonatomic) FBWorkspaceEventQueueLock *queueLock; // @synthesize queueLock=_queueLock;
@property(retain, nonatomic) NSTimer *blockTimer; // @synthesize blockTimer=_blockTimer;
- (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (void)blockTimerDidFire:(id)arg1;
- (void)handleVolumeIncrease;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

