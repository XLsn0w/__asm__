#import <UIKit/UIKit.h>

@interface _TtCC16MusicApplication23PaletteTabBarController23PaletteVisualEffectView : UIView
@end

@interface CALayer()
-(void)setContinuousCorners:(BOOL)arg1;
@end

%hook _TtCC16MusicApplication23PaletteTabBarController23PaletteVisualEffectView
-(void)didMoveToWindow {
    %orig;
    [self.layer setContinuousCorners:YES];
    self.layer.cornerRadius = 10.0;
}
%end
