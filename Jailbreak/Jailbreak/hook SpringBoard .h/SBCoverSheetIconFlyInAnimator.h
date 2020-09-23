//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBCenterIconZoomAnimator.h"

#import "_UISettingsKeyObserver-Protocol.h"

@class CAMediaTimingFunction, NSString, UIViewFloatAnimatableProperty;

@interface SBCoverSheetIconFlyInAnimator : SBCenterIconZoomAnimator <_UISettingsKeyObserver>
{
    double _baselineDistance;
    double _effectMultiplier;
    double _distanceExponent;
    UIViewFloatAnimatableProperty *_fractionAnimatableProperty;
    CAMediaTimingFunction *_timingFunction;
}

@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *fractionAnimatableProperty; // @synthesize fractionAnimatableProperty=_fractionAnimatableProperty;
- (void).cxx_destruct;
- (double)_dockOffscreenFractionForFraction:(double)arg1;
- (double)_labelAlphaForFraction:(double)arg1;
- (void)_updateFractionProgressForPresentationValue:(_Bool)arg1;
- (void)_createFractionAnimatableProperty;
- (void)_updateWithSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)_functionWithProgress:(double)arg1 distance:(double)arg2;
- (double)_zPositionForIcon:(id)arg1 center:(struct CGPoint)arg2 andFraction:(double)arg3;
- (void)_setAnimationFraction:(double)arg1 withCenter:(struct CGPoint)arg2;
- (id)initWithFolderController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

