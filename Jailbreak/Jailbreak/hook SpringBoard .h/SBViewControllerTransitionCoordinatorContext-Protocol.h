//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBViewControllerTransitionRestartedReporting-Protocol.h"
#import "UIViewControllerTransitionCoordinatorContext-Protocol.h"

@class BSUIAnimationFactory;

@protocol SBViewControllerTransitionCoordinatorContext <UIViewControllerTransitionCoordinatorContext, SBViewControllerTransitionRestartedReporting>
- (_Bool)wasPreviousPhaseInteractive;
- (unsigned long long)transitionAnimationOptions;
- (BSUIAnimationFactory *)transitionAnimationFactory;
@end

