//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBAppLayout;

@interface SBSwitcherInsertionRemovalLayoutParameters : NSObject
{
    SBAppLayout *_appLayout;
    unsigned long long _targetVisibilityState;
}

@property(readonly, nonatomic) unsigned long long targetVisibilityState; // @synthesize targetVisibilityState=_targetVisibilityState;
@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (void).cxx_destruct;
- (id)initWithAppLayout:(id)arg1 targetVisibilityState:(unsigned long long)arg2;

@end

