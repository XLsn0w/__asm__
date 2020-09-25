//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBWindowSelfHostWrapper;

@interface SBMainAlertHostedAccessoryWrapper : NSObject
{
    _Bool _canAppearUnderAlert;
    _Bool _shouldRestoreFirstResponder;
    id _hostedAccessory;
    SBWindowSelfHostWrapper *_windowHostWrapper;
}

@property(nonatomic) _Bool shouldRestoreFirstResponder; // @synthesize shouldRestoreFirstResponder=_shouldRestoreFirstResponder;
@property(nonatomic) _Bool canAppearUnderAlert; // @synthesize canAppearUnderAlert=_canAppearUnderAlert;
@property(retain, nonatomic) SBWindowSelfHostWrapper *windowHostWrapper; // @synthesize windowHostWrapper=_windowHostWrapper;
@property(nonatomic) __weak id hostedAccessory; // @synthesize hostedAccessory=_hostedAccessory;
- (void).cxx_destruct;
- (void)stopHosting;
- (void)startHosting;

@end

