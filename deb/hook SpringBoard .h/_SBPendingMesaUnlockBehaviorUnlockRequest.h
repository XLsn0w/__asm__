//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBAuthenticationFeedback;
@protocol SBBiometricUnlockBehavior;

@interface _SBPendingMesaUnlockBehaviorUnlockRequest : NSObject
{
    id <SBBiometricUnlockBehavior> _behavior;
    id _request;
    SBAuthenticationFeedback *_feedback;
}

@property(readonly, nonatomic) SBAuthenticationFeedback *feedback; // @synthesize feedback=_feedback;
@property(readonly, nonatomic) id request; // @synthesize request=_request;
@property(readonly, nonatomic) id <SBBiometricUnlockBehavior> behavior; // @synthesize behavior=_behavior;
- (void).cxx_destruct;
- (id)initWithBehavior:(id)arg1 request:(id)arg2 feedback:(id)arg3;

@end

