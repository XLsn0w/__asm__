//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class SBIconBlurryBackgroundView, SBIconColorSettings, UIImageView, UIView;

@interface SBHomeScreenButton : UIButton
{
    SBIconBlurryBackgroundView *_backgroundView;
    UIView *_whiteTintView;
    UIImageView *_xColorBurnView;
    UIImageView *_xPlusDView;
    UIView *_highlightView;
    SBIconColorSettings *_colorSettings;
    struct CGPoint _wallpaperRelativeCenter;
}

+ (struct UIEdgeInsets)backgroundInsets;
+ (id)colorBurnContentImage;
+ (id)defaultContentImage;
@property(nonatomic) struct CGPoint wallpaperRelativeCenter; // @synthesize wallpaperRelativeCenter=_wallpaperRelativeCenter;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSuppressesBlurryBackgroundChanges:(_Bool)arg1;
- (void)setLegibilityStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

