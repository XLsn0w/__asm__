//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MediaControlsPanelViewController;

@protocol MediaControlsPanelViewControllerDelegate <NSObject>

@optional
- (void)mediaControlsPanelViewController:(MediaControlsPanelViewController *)arg1 didToggleRoutingPicker:(_Bool)arg2;
- (void)mediaControlsPanelViewController:(MediaControlsPanelViewController *)arg1 didReceiveInteractionEvent:(id)arg2;
- (void)didDismissMediaControlsPanelViewController:(MediaControlsPanelViewController *)arg1;
@end
