//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDashBoardParticipating-Protocol.h"
#import "SBNotificationExtensionVisibilityProviding-Protocol.h"
#import "SBNotificationLongLookPresenting-Protocol.h"

@class NCCoalescedNotification, NCNotificationRequest, NCNotificationSectionSettings;
@protocol SBDashBoardNotificationDispatcher;

@protocol SBDashBoardNotificationDestination <SBDashBoardParticipating, SBNotificationExtensionVisibilityProviding, SBNotificationLongLookPresenting>
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher;
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1;
- (void)withdrawNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (void)updateNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (void)postNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
@end
