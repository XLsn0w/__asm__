//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBIconListView.h"

@class UIView;

@interface SBStarkRootIconListView : SBIconListView
{
    struct UIEdgeInsets _insets;
    UIView *_lastFocusedView;
}

+ (unsigned long long)iconColumnsForInterfaceOrientation:(long long)arg1;
+ (unsigned long long)maxVisibleIconRowsInterfaceOrientation:(long long)arg1;
+ (unsigned long long)iconRowsForInterfaceOrientation:(long long)arg1;
+ (unsigned long long)iconColumnsForScreenWidth:(double)arg1;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void).cxx_destruct;
- (long long)iconLocation;
- (double)sideIconInset;
- (double)bottomIconInset;
- (double)topIconInset;
- (Class)baseIconViewClass;

@end

