//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBTransaction.h"

@class SBStarkScreenController;

@interface SBWaitForCarNowPlayingActiveTransaction : SBTransaction
{
    SBStarkScreenController *_screenController;
    double _timeout;
}

- (void).cxx_destruct;
- (void)_begin;
- (id)initWithScreenController:(id)arg1 timeout:(double)arg2;

@end

