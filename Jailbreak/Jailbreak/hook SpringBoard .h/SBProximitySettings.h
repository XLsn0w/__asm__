//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBProximitySettings : SBUISettings
{
    double _initialBacklightDebounceDuration;
    double _subsequentBacklightDebounceDuration;
}

+ (id)settingsControllerModule;
@property(nonatomic) double subsequentBacklightDebounceDuration; // @synthesize subsequentBacklightDebounceDuration=_subsequentBacklightDebounceDuration;
@property(nonatomic) double initialBacklightDebounceDuration; // @synthesize initialBacklightDebounceDuration=_initialBacklightDebounceDuration;
- (void)setDefaultValues;

@end

