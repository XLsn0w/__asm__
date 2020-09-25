//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBStarkBannerSource.h"

#import "SBAlertItemsControllerObserver-Protocol.h"

@class NSString;

@interface SBStarkAlertItemBannerSource : SBStarkBannerSource <SBAlertItemsControllerObserver>
{
}

- (void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3;
- (void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2;
- (void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

