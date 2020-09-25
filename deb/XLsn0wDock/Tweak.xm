#import <SpringBoard/SpringBoard.h>
#import <UIKit/UIKit.h>

@interface SBGrabberTongue : NSObject
-(UIGestureRecognizer *)edgePullGestureRecognizer;
@end

@interface SBFloatingDockRootViewController : UIViewController
// @property (nonatomic, retain) SBFloatingDockRootViewController *viewController;
@property (nonatomic,retain) SBGrabberTongue * grabberTongue;
-(UIGestureRecognizer *)screenEdgePanGestureRecognizer;
-(void)_beginPresentationTransition;
-(void)setPresentationProgress:(double)arg1 animated:(BOOL)arg111 interactive:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)searchGesture:(id)arg1 completedShowing:(BOOL)arg2 ;
@end

@interface SBFloatingDockController : NSObject
@property (nonatomic, retain) SBFloatingDockRootViewController *viewController;
@end

/* %hook SBFloatingDockRootViewController

%end */

%hook SBFloatingDockController

-(BOOL)floatingDockRootViewControllerShouldBeginScreenEdgeGestureRecognizer:(UIGestureRecognizer *)arg1 {
    return %orig;
}

+ (BOOL)isFloatingDockSupported {
    return YES;
}

- (BOOL)_systemGestureManagerAllowsFloatingDockGesture {
  if([[[self.viewController grabberTongue] edgePullGestureRecognizer] locationInView:((UIGestureRecognizer *)[[self.viewController grabberTongue] edgePullGestureRecognizer]).view].x < 180) {
    return YES;
  }
    return NO;
}

%end

%hook SBFloatingDockSuggestionsModel

- (BOOL)_shouldProcessAppSuggestion:(id)arg1 {
    return YES;
}

- (BOOL)recentsEnabled {
    return YES;
}
%end

%hook SBPlatformController

-(long long)medusaCapabilities {
    return 1;
}

%end

%hook SBMainWorkspace
-(BOOL)isMedusaEnabled {
    return YES;
}
%end

%hook SBApplication
-(BOOL)isMedusaCapable {
    return YES;
}
%end


typedef struct SBIconCoordinate {
    NSInteger row;//行
    NSInteger col;//列
} SBIconCoordinate;

%group iOS13

%hook SBIconListGridLayoutConfiguration

- (NSUInteger)numberOfPortraitColumns {
    NSUInteger rows = MSHookIvar<NSUInteger>(self, "_numberOfPortraitRows");
    if (rows == 1)
        return 5;
    return %orig;
}

%end

%end

%group iOS12
%hook SBDockIconListView

+ (unsigned long long)maxIcons {
    return 5;
}


-(unsigned long long)iconsInRowForSpacingCalculation {
    return 5;
}

+(unsigned long long)iconColumnsForInterfaceOrientation:(long long)arg1 {
    if (arg1 == 0) {
        return 5;
    } else {
        return %orig;
    }
}
%end
%end

@interface SBIconView : UIView

- (void)dockAnimation;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithContentType:(unsigned long long)arg1;

@end

%hook SBIconView

%new
#define angleValue(angle) ((angle) * M_PI / 180.0)//角度数值转换宏
- (void)dockAnimation {
    CAKeyframeAnimation *anima = [CAKeyframeAnimation animation];
    anima.keyPath = @"transform.rotation";
    anima.values = @[@(angleValue(-5)),@(angleValue(5)),@(angleValue(-5))];
    anima.repeatCount = MAXFLOAT;
    [self.layer addAnimation:anima forKey:nil];
}

- (id)initWithFrame:(struct CGRect)arg1 {
    [self dockAnimation];
    return %orig;
}

- (id)initWithContentType:(unsigned long long)arg1 {
   [self dockAnimation];
   return %orig;
}

%end

%hook SBDockIconListView

- (CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1 numberOfIcons:(unsigned long long)arg2 {
    if (arg2 == 5) {
        
        struct SBIconCoordinate cor1;
        cor1.row = 1;
        cor1.col = 1;

        struct SBIconCoordinate cor2;
        cor2.row = 1;
        cor2.col = 2;

        struct SBIconCoordinate cor3;
        cor3.row = 1;
        cor3.col = 3;

        struct SBIconCoordinate cor4;
        cor4.row = 1;
        cor4.col = 4;

        CGPoint originalPointForIcon1 = %orig(cor1, 4);
        CGPoint originalPointForIcon2 = %orig(cor2, 4);
        CGPoint originalPointForIcon3 = %orig(cor3, 4);
        CGPoint originalPointForIcon4 = %orig(cor4, 4);

        int defaultY = originalPointForIcon1.y;

        int newIcon1X = originalPointForIcon1.x - (int)(originalPointForIcon1.x * 0.21);
        int newIcon2X = originalPointForIcon2.x - (int)(originalPointForIcon2.x * 0.21);
        int newIcon3X = originalPointForIcon3.x - (int)(originalPointForIcon3.x * 0.21);
        int newIcon4X = originalPointForIcon4.x - (int)(originalPointForIcon4.x * 0.21);
        int newIcon5X = originalPointForIcon4.x + (int)(originalPointForIcon4.x * 0.03);


        if (arg1.col == 1) {
            return CGPointMake(newIcon1X, defaultY);
        }
        else if (arg1.col == 2) {
            return CGPointMake(newIcon2X, defaultY);
        }
        else if (arg1.col == 3) {
            return CGPointMake(newIcon3X, defaultY);
        }
        else if (arg1.col == 4) {
            return CGPointMake(newIcon4X, defaultY);
        }
        else {
            return CGPointMake(newIcon5X, defaultY);
        }
    }
    return %orig;

}

%end

%ctor {

    %init;
    
    if(kCFCoreFoundationVersionNumber < 1650) {
            %init(iOS12);
    }
    else {
            %init(iOS13);
    }
}


