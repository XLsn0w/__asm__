//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem
{
    NSString *_title;
    NSString *_body;
}

- (void).cxx_destruct;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)dismissButtonText;
- (void)performUnlockAction;
- (id)bodyText;
- (id)title;
- (void)setBodyText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 body:(id)arg2;

@end

