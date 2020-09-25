//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NCNotificationViewControllerDelegate-Protocol.h"
#import "NCNotificationViewControllerObserving-Protocol.h"

@class NCNotificationViewController, NSString;
@protocol BSInvalidatable, NCNotificationAlertDestination><NCNotificationViewControllerDelegatePrivate><NCNotificationViewControllerObserving;

@interface SBNotificationLongLookBannerDestination : NSObject <NCNotificationViewControllerDelegate, NCNotificationViewControllerObserving>
{
    NCNotificationViewController *_presentedBanner;
    id <NCNotificationAlertDestination><NCNotificationViewControllerDelegatePrivate><NCNotificationViewControllerObserving> _parentDestination;
    id <BSInvalidatable> _idleTimerDisableAssertion;
}

+ (_Bool)shouldNotificationRequestPresentAsLongLook:(id)arg1;
@property(retain, nonatomic) id <BSInvalidatable> idleTimerDisableAssertion; // @synthesize idleTimerDisableAssertion=_idleTimerDisableAssertion;
@property(nonatomic) __weak id <NCNotificationAlertDestination><NCNotificationViewControllerDelegatePrivate><NCNotificationViewControllerObserving> parentDestination; // @synthesize parentDestination=_parentDestination;
@property(retain, nonatomic) NCNotificationViewController *presentedBanner; // @synthesize presentedBanner=_presentedBanner;
- (void).cxx_destruct;
- (void)notificationViewControllerDidDismiss:(id)arg1;
- (void)notificationViewControllerWillDismiss:(id)arg1;
- (void)notificationViewControllerDidPresent:(id)arg1;
- (void)notificationViewControllerWillPresent:(id)arg1;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setReadyForNotificationRequests;
- (void)_dismissBannerCompleted;
- (id)_delegate;
- (_Bool)_presentedBannerMatchesNotificationRequest:(id)arg1;
- (void)dismissPresentedBannerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postNotificationRequest:(id)arg1 withPresentingViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)canWithdrawNotificationRequest:(id)arg1;
- (_Bool)canModifyNotificationRequest:(id)arg1;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
- (_Bool)shouldReceiveNotificationRequest:(id)arg1;
@property(readonly, nonatomic, getter=isPreventingAutomaticLock) _Bool preventingAutomaticLock;
@property(readonly, nonatomic, getter=isPresentingBanner) _Bool presentingBanner;
- (id)initWithParentDestination:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
