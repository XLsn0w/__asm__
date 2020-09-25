//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SBAppBrightnessChangeLogger : NSObject
{
    NSString *_bundleID;
    long long _brightnessLevel;
    NSDate *_eventTimestamp;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDate *eventTimestamp; // @synthesize eventTimestamp=_eventTimestamp;
@property(nonatomic) long long brightnessLevel; // @synthesize brightnessLevel=_brightnessLevel;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)_screenLocked;
- (void)_publishMetrics;
- (void)_publishMetricsIfNeeded;
- (void)noteApp:(id)arg1 setScreenBrightness:(double)arg2;
- (id)init;

@end

