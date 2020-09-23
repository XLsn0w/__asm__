//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SBUILegibility-Protocol.h"

@class NSArray, NSString, SBUILegibilityLabel, _UILegibilitySettings;

@interface SBLockScreenDeviceInformationTextView : UIView <SBUILegibility>
{
    _UILegibilitySettings *_legibilitySettings;
    double _strength;
    UIView *_containerView;
    NSString *_supervisionText;
    SBUILegibilityLabel *_supervisionLabel;
    NSArray *_deviceInformationText;
    SBUILegibilityLabel *_deviceInformationLabel;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(copy, nonatomic) NSArray *deviceInformationText; // @synthesize deviceInformationText=_deviceInformationText;
@property(copy, nonatomic) NSString *supervisionText; // @synthesize supervisionText=_supervisionText;
- (void).cxx_destruct;
- (double)_deviceInformationParagraphSpacing;
- (double)_deviceInformationLabelFontLeading;
- (void)_updateDeviceInformationLabel;
- (void)_updateSupervisionLabel;
- (id)_labelFont;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

