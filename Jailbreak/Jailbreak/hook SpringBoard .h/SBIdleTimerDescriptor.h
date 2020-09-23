//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SBIdleTimerDescriptor : NSObject <BSDescriptionProviding, NSCopying>
{
    long long _timerMode;
    double _sampleInterval;
    double _warnInterval;
    double _totalInterval;
    double _quickUnwarnInterval;
}

@property(nonatomic) double quickUnwarnInterval; // @synthesize quickUnwarnInterval=_quickUnwarnInterval;
@property(nonatomic) double totalInterval; // @synthesize totalInterval=_totalInterval;
@property(nonatomic) double warnInterval; // @synthesize warnInterval=_warnInterval;
@property(nonatomic) double sampleInterval; // @synthesize sampleInterval=_sampleInterval;
@property(nonatomic) long long timerMode; // @synthesize timerMode=_timerMode;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool shouldExpireAfterWarn;
@property(readonly, nonatomic) _Bool shouldWarn;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimerMode:(long long)arg1 warnInterval:(double)arg2 totalInterval:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

