//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_source;

@interface SBDaemonContext : NSObject
{
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSMutableDictionary *_daemonRequests;
    int _pid;
}

- (void).cxx_destruct;
- (id)description;
- (void)removeRequestForKey:(id)arg1;
- (void)addRequest:(id)arg1 forKey:(id)arg2;
- (void)_handleCancelation;
- (id)_newDispatchSourceForPid:(int)arg1 queue:(id)arg2;
- (int)pid;
- (id)initWithPid:(int)arg1 queue:(id)arg2;

@end
