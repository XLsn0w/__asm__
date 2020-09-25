//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBClient;

@interface SBHarmonyController : NSObject
{
    CBClient *_client;
    _Bool _supportsWhitePointAdaptation;
    _Bool _supportsBlueLightReduction;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool supportsBlueLightReduction; // @synthesize supportsBlueLightReduction=_supportsBlueLightReduction;
@property(readonly, nonatomic) _Bool supportsWhitePointAdaptation; // @synthesize supportsWhitePointAdaptation=_supportsWhitePointAdaptation;
- (void).cxx_destruct;
- (id)_adaptationClient;
- (void)transitionFromWhitePointAdaptivityStyleWithStyles:(id)arg1 toWhitePointAdaptivityStyleWithStyles:(id)arg2 fromPercentage:(double)arg3 toPercentage:(double)arg4 animationSettings:(id)arg5;
- (void)setWhitePointAdaptivityStyleWithStyles:(id)arg1 animationSettings:(id)arg2;
- (void)setWhitePointAdaptivityStyle:(long long)arg1 animationSettings:(id)arg2;
@property(nonatomic) long long whitePointAdaptivityStyle;
@property(nonatomic, getter=isWhitePointAdaptationEnabled) _Bool whitePointAdaptationEnabled;
- (id)init;
- (void)setWhitePointAdaptationStrength:(float)arg1 forWhitePointAdaptivityStyle:(long long)arg2;
- (float)whitePointAdaptationStrengthForWhitePointAdaptivityStyle:(long long)arg1;

@end

