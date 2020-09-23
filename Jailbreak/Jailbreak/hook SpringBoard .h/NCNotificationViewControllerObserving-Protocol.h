//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NCNotificationViewController;

@protocol NCNotificationViewControllerObserving <NSObject>

@optional
- (void)longLookDidDismissForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)longLookWillDismissForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)longLookDidPresentForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)longLookWillPresentForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerDidDismiss:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerWillDismiss:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerDidPresent:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerWillPresent:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerDidEndUserInteraction:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerWillBeginUserInteraction:(NCNotificationViewController *)arg1;
@end

