//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationZoomUpApp.h"

#import "SBIconAnimatorDelegate-Protocol.h"

@class SBIconAnimator;

@interface SBUIAnimationZoomUpAppFromHome : SBUIAnimationZoomUpApp <SBIconAnimatorDelegate>
{
    SBIconAnimator *_iconAnimator;
}

- (void)iconAnimatorWasInvalidated:(id)arg1;
- (void)cleanupZoom;
- (void)animateZoomWithCompletion:(void(^)(void))arg1;
- (void)prepareZoom;
- (void)dealloc;

@end

