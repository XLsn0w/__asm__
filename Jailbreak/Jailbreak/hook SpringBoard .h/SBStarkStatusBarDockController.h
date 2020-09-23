//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBIconObserver-Protocol.h"
#import "UIStatusBarCarPlayDockDataProviding-Protocol.h"

@class NSArray, NSString, SBApplicationController, SBCarPlayDefaults, SBMediaController, SBStarkStatusBarStateProvider, SBTelephonyManager, TPStatusBarManager;
@protocol SBStarkSessionConfiguring, SBStarkStatusBarIconVisibilityDelegate;

@interface SBStarkStatusBarDockController : NSObject <SBIconObserver, UIStatusBarCarPlayDockDataProviding>
{
    id <SBStarkSessionConfiguring> _configuration;
    SBStarkStatusBarStateProvider *_stateProvider;
    id <SBStarkStatusBarIconVisibilityDelegate> _iconVisibilityDelegate;
    SBMediaController *_mediaController;
    SBTelephonyManager *_telephonyManager;
    SBApplicationController *_applicationController;
    TPStatusBarManager *_statusBarManager;
    NSArray *_orderedBundleIdentifiers;
    NSString *_activeBundleIdentifier;
    NSString *_mostRecentNowPlayingBundleIdentifier;
    NSString *_mostRecentOtherBundleIdentifier;
    NSString *_callDuration;
    SBCarPlayDefaults *_carPlayDefaults;
}

- (void).cxx_destruct;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (_Bool)shouldDisplayBadgeForBundleIdentifier:(id)arg1;
- (id)callDuration;
- (id)bundleIdentifiers;
- (id)activeBundleIdentifier;
- (id)dockImageForBundleIdentifier:(id)arg1 format:(int)arg2 traitCollection:(id)arg3;
- (void)_setOrderedBundleIdentifiers:(id)arg1;
- (id)_generateOrderedBundleIdentifiersWithBundleIdentifiers:(id)arg1;
- (void)_callDurationChanged;
- (id)_activeCarPlayNowPlayingBundleIdentifier;
- (_Bool)_isNowPlayingApplicationForBundleIdentifier:(id)arg1;
- (void)iconModelDidLayout;
- (void)setActiveBundleIdentifer:(id)arg1;
- (void)setIconVisibilityDelegate:(id)arg1;
- (id)initWithConfiguration:(id)arg1 stateProvider:(id)arg2 mediaController:(id)arg3 telephonyManager:(id)arg4 statusBarManager:(id)arg5 applicationController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
