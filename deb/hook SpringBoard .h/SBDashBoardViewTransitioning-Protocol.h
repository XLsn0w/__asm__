//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDashBoardParticipating-Protocol.h"

@protocol SBDashBoardViewTransitionSource;

@protocol SBDashBoardViewTransitioning <SBDashBoardParticipating>
- (void)transitionSource:(id <SBDashBoardViewTransitionSource>)arg1 didEndWithContext:(CDStruct_7238a68f)arg2;
- (void)transitionSource:(id <SBDashBoardViewTransitionSource>)arg1 didUpdateTransitionWithContext:(CDStruct_7238a68f)arg2;
- (void)transitionSource:(id <SBDashBoardViewTransitionSource>)arg1 willBeginWithType:(long long)arg2;
@end

