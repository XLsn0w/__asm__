//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSArray, NSURL;

@interface SBManyApplicationsAlertItem : SBAlertItem
{
    NSURL *_url;
    NSArray *_applications;
    CDUnknownBlockType _completion;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSArray *applications; // @synthesize applications=_applications;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)deactivateForButton;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithURL:(id)arg1 applications:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

