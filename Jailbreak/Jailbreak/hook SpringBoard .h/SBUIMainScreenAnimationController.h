//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUIWorkspaceAnimationController.h"

@class NSSet, SBDeviceApplicationSceneEntity, SBWorkspaceTransitionRequest;

@interface SBUIMainScreenAnimationController : SBUIWorkspaceAnimationController
{
}

- (void)_cleanupAnimation;
- (void)_begin;
- (void)_dismissBannerAnimated:(_Bool)arg1;
- (_Bool)_shouldDismissBanner;
- (void)__startAnimation;
- (_Bool)__wantsInitialProgressStateChange;
- (id)_primaryAppOrAnyAppFromSet:(id)arg1;
- (id)_getTransitionWindow;
@property(readonly, nonatomic) SBDeviceApplicationSceneEntity *fromApplicationSceneEntity;
@property(readonly, nonatomic) SBDeviceApplicationSceneEntity *toApplicationSceneEntity;
@property(readonly, nonatomic) SBWorkspaceTransitionRequest *transitionRequest;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities; // @dynamic fromApplicationSceneEntities;
@property(readonly, copy, nonatomic) NSSet *toApplicationSceneEntities; // @dynamic toApplicationSceneEntities;

@end

