//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBStarkBannerItem.h"

@class BBBulletin, BBObserver, SBUISound;

@interface SBStarkBulletinBannerItem : SBStarkBannerItem
{
    BBBulletin *_bulletin;
    SBUISound *_sound;
    unsigned long long _feed;
    BBObserver *_observer;
}

@property(retain, nonatomic) BBObserver *observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)_requestDismissItemBulletin;
- (id)_uiBannerActionForBBAction:(id)arg1 context:(id)arg2;
- (_Bool)_supportsSubActions;
- (id)subActions;
- (id)subActionLabels;
- (_Bool)shouldShowModalSubActions;
- (id)bbAllActions;
- (id)bbSupplementaryActions;
- (id)_bbDismissAppearance;
- (id)_bbDismissAction;
- (id)sound;
- (id)sourceDate;
- (CDUnknownBlockType)action;
- (_Bool)matchesContext:(id)arg1;
- (long long)defaultActionType;
- (id)categoryImage;
- (id)message;
- (id)subTitle;
- (id)title;
- (id)appName;
- (id)_subTitle;
- (id)_title;
- (void)updateBulletinToInstance:(id)arg1;
- (id)initWithBulletin:(id)arg1 feed:(unsigned long long)arg2 configuration:(id)arg3;
- (id)initWithConfiguration:(id)arg1;

@end

