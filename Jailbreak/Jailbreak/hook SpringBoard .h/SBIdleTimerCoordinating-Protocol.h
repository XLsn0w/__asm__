//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SBIdleTimerDescriptor;
@protocol SBIdleTimer, SBIdleTimerProviding;

@protocol SBIdleTimerCoordinating <NSObject>
- (id <SBIdleTimer>)idleTimerProvider:(id <SBIdleTimerProviding>)arg1 didProposeDescriptor:(SBIdleTimerDescriptor *)arg2 forReason:(NSString *)arg3;
@end
