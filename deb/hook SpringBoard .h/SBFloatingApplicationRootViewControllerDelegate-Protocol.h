//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBDeviceApplicationSceneHandle, SBFloatingApplicationRootViewController;

@protocol SBFloatingApplicationRootViewControllerDelegate <NSObject>

@optional
- (void)floatingApplicationRootViewControllerDidCompleteDeviceApplicationSceneHandleSuspendAnimation:(SBFloatingApplicationRootViewController *)arg1;
- (void)floatingApplicationRootViewController:(SBFloatingApplicationRootViewController *)arg1 darkenViewTappedForDeviceApplicationSceneHandle:(SBDeviceApplicationSceneHandle *)arg2;
- (_Bool)floatingApplicationRootViewController:(SBFloatingApplicationRootViewController *)arg1 requiresGrabberTongueOutsideGrabberFreeRegionForDeviceApplicationSceneHandle:(SBDeviceApplicationSceneHandle *)arg2;
- (_Bool)floatingApplicationRootViewController:(SBFloatingApplicationRootViewController *)arg1 requiresGrabberTongueForDeviceApplicationSceneHandle:(SBDeviceApplicationSceneHandle *)arg2;
- (_Bool)floatingApplicationRootViewController:(SBFloatingApplicationRootViewController *)arg1 allowsPresentScreenEdgePanGestureRecognizerForDeviceApplicationSceneHandle:(SBDeviceApplicationSceneHandle *)arg2;
@end
