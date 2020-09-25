//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBWindowLayoutStrategy-Protocol.h"

@class NSString;

@interface SBWindowLayoutStrategy : NSObject <SBWindowLayoutStrategy>
{
    _Bool _clip;
}

+ (id)noClipStrategy;
+ (id)clipStrategy;
+ (id)_strategyWithClipping:(_Bool)arg1;
- (_Bool)shouldClipForWindow:(id)arg1;
- (struct CGRect)frameOnScreen:(id)arg1 withInterfaceOrientation:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

