//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBFolderController.h"

#import "SBRootFolderDelegate-Protocol.h"

@class NSString, SBAppStatusBarSettingsAssertion, SBRootFolder, SBRootFolderView, _SBRootFolderDockAnimationViewControllerWindow;

@interface SBRootFolderController : SBFolderController <SBRootFolderDelegate>
{
    _Bool _managesStatusBarWidth;
    _SBRootFolderDockAnimationViewControllerWindow *_dockAnimationWindow;
    SBAppStatusBarSettingsAssertion *_editingStatusBarAssertion;
}

+ (Class)listViewClass;
@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *editingStatusBarAssertion; // @synthesize editingStatusBarAssertion=_editingStatusBarAssertion;
@property(nonatomic) _Bool managesStatusBarWidth; // @synthesize managesStatusBarWidth=_managesStatusBarWidth;
@property(retain, nonatomic) _SBRootFolderDockAnimationViewControllerWindow *dockAnimationWindow; // @synthesize dockAnimationWindow=_dockAnimationWindow;
- (void).cxx_destruct;
- (void)_reduceTransparencyChanged;
- (void)forceUpdateContentOverlayInsetsToContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (_Bool)rootFolder:(id)arg1 shouldAllowBadgingForIcon:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (struct UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1;
- (void)_configureAppStatusBarInsetsForOrientation:(long long)arg1;
- (void)configureAppStatusBarInsets;
- (void)_configureAppStatusBarInsetsAnimated:(_Bool)arg1;
- (void)_configureViewForOrientationWithoutAnimation:(long long)arg1;
- (void)_configureDockViewForOrientationWithoutAnimation:(long long)arg1;
- (void)_configureDockViewForOrientationDuringAnimation:(long long)arg1;
- (_Bool)_dockLayoutReversedForInterfaceOrientation:(long long)arg1;
- (unsigned long long)_dockEdgeForInterfaceOrientation:(long long)arg1;
- (_Bool)_shouldUseDockAnimationWindowForRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)_shouldSlideDockOutDuringRotationFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (_Bool)_isDockSwitchedForOrientation:(long long)arg1;
- (void)doneButtonTriggered:(id)arg1;
- (_Bool)suspendsWallpaperAnimationWhileOpen;
- (void)prepareToTearDown;
- (void)prepareToClose;
- (void)prepareToOpen;
- (_Bool)_listIndexIsVisible:(unsigned long long)arg1;
@property(nonatomic) unsigned long long dockEdge;
- (id)beginModifyingDockOffscreenFractionForReason:(id)arg1;
- (id)dockListView;
- (_Bool)isDisplayingIcon:(id)arg1;
- (void)setIdleText:(id)arg1;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)folderControllers;
@property(retain, nonatomic) SBRootFolder *folder; // @dynamic folder;
- (unsigned long long)_depth;
- (Class)_contentViewClass;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)disablesScrollingWhileIconDragIsDropping;
- (_Bool)canAcceptFolderIconDrags;
- (_Bool)closesAfterDragExits;
- (_Bool)shouldOpenFolderIcon:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (id)view;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) SBRootFolderView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

