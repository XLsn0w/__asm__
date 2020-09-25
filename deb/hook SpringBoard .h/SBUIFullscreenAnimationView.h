//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol SBUIFullscreenAnimationViewDelegate;

@interface SBUIFullscreenAnimationView : UIView
{
    id <SBUIFullscreenAnimationViewDelegate> _delegate;
    _Bool _animating;
}

@property(readonly, nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) __weak id <SBUIFullscreenAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyDelegateThatAnimationIsDone;
- (void)_notifyDelegateAnimationBeganWithDuration:(double)arg1 delay:(double)arg2;
- (void)_animationEnded;
- (void)_animationBegan;
- (void)endTransition;
- (void)beginTransition;
- (void)setToView:(id)arg1;
- (void)setFromView:(id)arg1;

@end

