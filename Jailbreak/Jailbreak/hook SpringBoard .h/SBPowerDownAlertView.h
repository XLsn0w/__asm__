//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBAlertView.h"

@class _SBInternalPowerDownView;
@protocol SBPowerDownAlertViewDelegate;

@interface SBPowerDownAlertView : SBAlertView
{
    _SBInternalPowerDownView *_internalView;
}

- (void).cxx_destruct;
- (void)dismiss;
- (void)layoutForInterfaceOrientation:(long long)arg1;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
@property(nonatomic) __weak id <SBPowerDownAlertViewDelegate> delegate;
- (id)initWithFrame:(struct CGRect)arg1;

@end
