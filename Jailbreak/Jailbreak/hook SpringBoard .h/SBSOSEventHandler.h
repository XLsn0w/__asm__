//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOSManagerClientObserver-Protocol.h"

@class NSString, SOSManager;

@interface SBSOSEventHandler : NSObject <SOSManagerClientObserver>
{
    _Bool _running;
    SOSManager *_sosManager;
}

+ (id)sharedInstance;
@property(readonly, nonatomic, getter=_sosManager) SOSManager *sosManager; // @synthesize sosManager=_sosManager;
@property(nonatomic, getter=_isRunning, setter=_setRunning:) _Bool running; // @synthesize running=_running;
- (void).cxx_destruct;
- (void)didDismissSOSBeforeSOSCall:(long long)arg1;
- (void)run;
@property(readonly, nonatomic, getter=isSOSActive) _Bool SOSActive;
- (void)dealloc;
- (id)_initWithSOSManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

