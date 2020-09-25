//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCUIModularControlCenterViewControllerDelegate-Protocol.h"

@class CCUIModularControlCenterOverlayViewController;
@protocol UIViewSpringAnimationBehaviorDescribing;

@protocol CCUIModularControlCenterOverlayViewControllerDelegate <CCUIModularControlCenterViewControllerDelegate>
- (id <UIViewSpringAnimationBehaviorDescribing>)reachabilitySpringAnimationBehaviorForControlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1;
- (_Bool)reachabilityOffsetAffectsHeaderForControlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1;
- (double)reachabilityOffsetForControlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1;
- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 wantsHostStatusBarHidden:(_Bool)arg2;

@optional
- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 significantPresentationProgressChange:(double)arg2;
- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 didChangePresentationState:(unsigned long long)arg2;
@end
