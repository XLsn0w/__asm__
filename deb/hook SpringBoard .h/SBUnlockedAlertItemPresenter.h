//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBAlertItemPresenter-Protocol.h"

@class NSString, SBSharedModalAlertItemPresenter;

@interface SBUnlockedAlertItemPresenter : NSObject <SBAlertItemPresenter>
{
    SBSharedModalAlertItemPresenter *_modalAlertPresenter;
}

- (void).cxx_destruct;
- (void)dismissAlertItem:(id)arg1 animated:(_Bool)arg2;
- (void)presentAlertItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)canPresentMultipleAlertItemsSimultaneously;
- (id)initWithSharedModalAlertItemPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

