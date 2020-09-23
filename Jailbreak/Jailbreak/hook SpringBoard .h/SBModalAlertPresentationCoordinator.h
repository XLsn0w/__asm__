//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, SBModalAlertPresenter;
@protocol BSInvalidatable, SBModalAlertPresentationCoordinatorDelegate;

@interface SBModalAlertPresentationCoordinator : NSObject
{
    id <SBModalAlertPresentationCoordinatorDelegate> _delegate;
    NSMutableSet *_activeModalAlertPresenters;
    SBModalAlertPresenter *_springBoardModalAlertPresenter;
    id <BSInvalidatable> _hideApplicationModalAlertsAssertionWhileSBModalAlertsActive;
}

@property(retain, nonatomic, getter=_getSpringBoardPresenter, setter=_setSpringBoardPresenter:) SBModalAlertPresenter *springBoardPresenter; // @synthesize springBoardPresenter=_springBoardModalAlertPresenter;
@property(nonatomic) __weak id <SBModalAlertPresentationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_hideApplicationModalAlertsWithFence:(_Bool)arg1;
- (void)_showApplicationModalAlertsWithFence:(_Bool)arg1;
- (id)_fencingTransitionContext:(_Bool)arg1;
- (void)_setNotifyStateThatSpringBoardIsShowingAMiniAlert:(_Bool)arg1;
- (void)_noteSpringBoardModalAlertStateChanged:(_Bool)arg1;
- (void)_removeModalAlertPresenter:(id)arg1;
- (void)_addModalAlertPresenterIfNecessary:(id)arg1;
- (id)hideApplicationModalAlertsForReason:(id)arg1;
@property(readonly, nonatomic, getter=canShowApplicationModalAlerts) _Bool canShowApplicationModalAlerts; // @dynamic canShowApplicationModalAlerts;
@property(readonly, nonatomic, getter=isShowingSystemModalAlert) _Bool showingSystemModalAlert; // @dynamic showingSystemModalAlert;
@property(readonly, nonatomic, getter=isShowingModalAlert) _Bool showingModalAlert; // @dynamic showingModalAlert;
- (id)init;

@end

