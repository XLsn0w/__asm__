//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUISettings.h"

#import "UIViewSpringAnimationBehaviorDescribing-Protocol.h"

@class NSString;

@interface SBFluidBehaviorSettings : SBUISettings <UIViewSpringAnimationBehaviorDescribing>
{
    _Bool _smoothingAndProjectionEnabled;
    long long _behaviorType;
    NSString *_name;
    double _deceleration;
    double _dampingRatio;
    double _response;
    double _retargetImpulse;
    double _trackingDampingRatio;
    double _trackingResponse;
    double _trackingRetargetImpulse;
    double _dampingRatioSmoothing;
    double _responseSmoothing;
    double _trackingDampingRatioSmoothing;
    double _trackingResponseSmoothing;
    double _inertialTargetSmoothingRatio;
    double _inertialProjectionDeceleration;
}

+ (id)_moduleWithSectionTitle:(id)arg1;
+ (id)settingsControllerModule;
@property(nonatomic) double inertialProjectionDeceleration; // @synthesize inertialProjectionDeceleration=_inertialProjectionDeceleration;
@property(nonatomic) double inertialTargetSmoothingRatio; // @synthesize inertialTargetSmoothingRatio=_inertialTargetSmoothingRatio;
@property(nonatomic) double trackingResponseSmoothing; // @synthesize trackingResponseSmoothing=_trackingResponseSmoothing;
@property(nonatomic) double trackingDampingRatioSmoothing; // @synthesize trackingDampingRatioSmoothing=_trackingDampingRatioSmoothing;
@property(nonatomic) double responseSmoothing; // @synthesize responseSmoothing=_responseSmoothing;
@property(nonatomic) double dampingRatioSmoothing; // @synthesize dampingRatioSmoothing=_dampingRatioSmoothing;
@property(nonatomic) _Bool smoothingAndProjectionEnabled; // @synthesize smoothingAndProjectionEnabled=_smoothingAndProjectionEnabled;
@property(nonatomic) double trackingRetargetImpulse; // @synthesize trackingRetargetImpulse=_trackingRetargetImpulse;
@property(nonatomic) double trackingResponse; // @synthesize trackingResponse=_trackingResponse;
@property(nonatomic) double trackingDampingRatio; // @synthesize trackingDampingRatio=_trackingDampingRatio;
@property(nonatomic) double retargetImpulse; // @synthesize retargetImpulse=_retargetImpulse;
@property(nonatomic) double response; // @synthesize response=_response;
@property(nonatomic) double dampingRatio; // @synthesize dampingRatio=_dampingRatio;
@property(nonatomic) double deceleration; // @synthesize deceleration=_deceleration;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long behaviorType; // @synthesize behaviorType=_behaviorType;
- (void).cxx_destruct;
- (double)_effectiveTrackingRetargetImpulse;
- (double)_effectiveTrackingResponse;
- (double)_effectiveTrackingDampingRatio;
- (double)settlingDuration;
- (CDStruct_aa45ca86)parametersForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)setDefaultCriticallyDampedValues;
- (void)setDefaultValues;

@end

