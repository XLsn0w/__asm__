#line 1 "/Users/i/__asm__/Jailbreak/Jailbreak/Jailbreak.xm"
#import <SpringBoard/SpringBoard.h>
#import <UIKit/UIKit.h>

@interface SBGrabberTongue : NSObject
-(UIGestureRecognizer *)edgePullGestureRecognizer;
@end

@interface SBFloatingDockRootViewController : UIViewController

@property (nonatomic,retain) SBGrabberTongue * grabberTongue;
-(UIGestureRecognizer *)screenEdgePanGestureRecognizer;
-(void)_beginPresentationTransition;
-(void)setPresentationProgress:(double)arg1 animated:(BOOL)arg111 interactive:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)searchGesture:(id)arg1 completedShowing:(BOOL)arg2 ;
@end

@interface SBFloatingDockController : NSObject

@property (nonatomic, retain) SBFloatingDockRootViewController *viewController;

@end






#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class SBFloatingDockController; @class SBApplication; @class SBMainWorkspace; @class SBIconListGridLayoutConfiguration; @class SBPlatformController; @class SBFloatingDockSuggestionsModel; @class SBDockIconListView; 
static BOOL (*_logos_orig$_ungrouped$SBFloatingDockController$floatingDockRootViewControllerShouldBeginScreenEdgeGestureRecognizer$)(_LOGOS_SELF_TYPE_NORMAL SBFloatingDockController* _LOGOS_SELF_CONST, SEL, UIGestureRecognizer *); static BOOL _logos_method$_ungrouped$SBFloatingDockController$floatingDockRootViewControllerShouldBeginScreenEdgeGestureRecognizer$(_LOGOS_SELF_TYPE_NORMAL SBFloatingDockController* _LOGOS_SELF_CONST, SEL, UIGestureRecognizer *); static BOOL (*_logos_meta_orig$_ungrouped$SBFloatingDockController$isFloatingDockSupported)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL); static BOOL _logos_meta_method$_ungrouped$SBFloatingDockController$isFloatingDockSupported(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL); static BOOL (*_logos_orig$_ungrouped$SBFloatingDockController$_systemGestureManagerAllowsFloatingDockGesture)(_LOGOS_SELF_TYPE_NORMAL SBFloatingDockController* _LOGOS_SELF_CONST, SEL); static BOOL _logos_method$_ungrouped$SBFloatingDockController$_systemGestureManagerAllowsFloatingDockGesture(_LOGOS_SELF_TYPE_NORMAL SBFloatingDockController* _LOGOS_SELF_CONST, SEL); static BOOL (*_logos_orig$_ungrouped$SBFloatingDockSuggestionsModel$_shouldProcessAppSuggestion$)(_LOGOS_SELF_TYPE_NORMAL SBFloatingDockSuggestionsModel* _LOGOS_SELF_CONST, SEL, id); static BOOL _logos_method$_ungrouped$SBFloatingDockSuggestionsModel$_shouldProcessAppSuggestion$(_LOGOS_SELF_TYPE_NORMAL SBFloatingDockSuggestionsModel* _LOGOS_SELF_CONST, SEL, id); static BOOL (*_logos_orig$_ungrouped$SBFloatingDockSuggestionsModel$recentsEnabled)(_LOGOS_SELF_TYPE_NORMAL SBFloatingDockSuggestionsModel* _LOGOS_SELF_CONST, SEL); static BOOL _logos_method$_ungrouped$SBFloatingDockSuggestionsModel$recentsEnabled(_LOGOS_SELF_TYPE_NORMAL SBFloatingDockSuggestionsModel* _LOGOS_SELF_CONST, SEL); static long long (*_logos_orig$_ungrouped$SBPlatformController$medusaCapabilities)(_LOGOS_SELF_TYPE_NORMAL SBPlatformController* _LOGOS_SELF_CONST, SEL); static long long _logos_method$_ungrouped$SBPlatformController$medusaCapabilities(_LOGOS_SELF_TYPE_NORMAL SBPlatformController* _LOGOS_SELF_CONST, SEL); static BOOL (*_logos_orig$_ungrouped$SBMainWorkspace$isMedusaEnabled)(_LOGOS_SELF_TYPE_NORMAL SBMainWorkspace* _LOGOS_SELF_CONST, SEL); static BOOL _logos_method$_ungrouped$SBMainWorkspace$isMedusaEnabled(_LOGOS_SELF_TYPE_NORMAL SBMainWorkspace* _LOGOS_SELF_CONST, SEL); static BOOL (*_logos_orig$_ungrouped$SBApplication$isMedusaCapable)(_LOGOS_SELF_TYPE_NORMAL SBApplication* _LOGOS_SELF_CONST, SEL); static BOOL _logos_method$_ungrouped$SBApplication$isMedusaCapable(_LOGOS_SELF_TYPE_NORMAL SBApplication* _LOGOS_SELF_CONST, SEL); static CGPoint (*_logos_orig$_ungrouped$SBDockIconListView$originForIconAtCoordinate$numberOfIcons$)(_LOGOS_SELF_TYPE_NORMAL SBDockIconListView* _LOGOS_SELF_CONST, SEL, struct SBIconCoordinate, unsigned long long); static CGPoint _logos_method$_ungrouped$SBDockIconListView$originForIconAtCoordinate$numberOfIcons$(_LOGOS_SELF_TYPE_NORMAL SBDockIconListView* _LOGOS_SELF_CONST, SEL, struct SBIconCoordinate, unsigned long long); 

#line 25 "/Users/i/__asm__/Jailbreak/Jailbreak/Jailbreak.xm"


static BOOL _logos_method$_ungrouped$SBFloatingDockController$floatingDockRootViewControllerShouldBeginScreenEdgeGestureRecognizer$(_LOGOS_SELF_TYPE_NORMAL SBFloatingDockController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UIGestureRecognizer * arg1) {
    return _logos_orig$_ungrouped$SBFloatingDockController$floatingDockRootViewControllerShouldBeginScreenEdgeGestureRecognizer$(self, _cmd, arg1);
}

static BOOL _logos_meta_method$_ungrouped$SBFloatingDockController$isFloatingDockSupported(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return YES;
}

static BOOL _logos_method$_ungrouped$SBFloatingDockController$_systemGestureManagerAllowsFloatingDockGesture(_LOGOS_SELF_TYPE_NORMAL SBFloatingDockController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
  if([[[self.viewController grabberTongue] edgePullGestureRecognizer] locationInView:((UIGestureRecognizer *)[[self.viewController grabberTongue] edgePullGestureRecognizer]).view].x < 180) {
    return YES;
  }
    return NO;
}





static BOOL _logos_method$_ungrouped$SBFloatingDockSuggestionsModel$_shouldProcessAppSuggestion$(_LOGOS_SELF_TYPE_NORMAL SBFloatingDockSuggestionsModel* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return YES;
}

static BOOL _logos_method$_ungrouped$SBFloatingDockSuggestionsModel$recentsEnabled(_LOGOS_SELF_TYPE_NORMAL SBFloatingDockSuggestionsModel* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return YES;
}




static long long _logos_method$_ungrouped$SBPlatformController$medusaCapabilities(_LOGOS_SELF_TYPE_NORMAL SBPlatformController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 1;
}




static BOOL _logos_method$_ungrouped$SBMainWorkspace$isMedusaEnabled(_LOGOS_SELF_TYPE_NORMAL SBMainWorkspace* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return YES;
}



static BOOL _logos_method$_ungrouped$SBApplication$isMedusaCapable(_LOGOS_SELF_TYPE_NORMAL SBApplication* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return YES;
}



typedef struct SBIconCoordinate {
    NSInteger row;
    NSInteger col;
} SBIconCoordinate;

static NSUInteger (*_logos_orig$iOS13$SBIconListGridLayoutConfiguration$numberOfPortraitColumns)(_LOGOS_SELF_TYPE_NORMAL SBIconListGridLayoutConfiguration* _LOGOS_SELF_CONST, SEL); static NSUInteger _logos_method$iOS13$SBIconListGridLayoutConfiguration$numberOfPortraitColumns(_LOGOS_SELF_TYPE_NORMAL SBIconListGridLayoutConfiguration* _LOGOS_SELF_CONST, SEL); 


static NSUInteger _logos_method$iOS13$SBIconListGridLayoutConfiguration$numberOfPortraitColumns(_LOGOS_SELF_TYPE_NORMAL SBIconListGridLayoutConfiguration* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUInteger rows = MSHookIvar<NSUInteger>(self, "_numberOfPortraitRows");
    if (rows == 1)
        return 5;
    return _logos_orig$iOS13$SBIconListGridLayoutConfiguration$numberOfPortraitColumns(self, _cmd);
}




static unsigned long long (*_logos_meta_orig$iOS12$SBDockIconListView$maxIcons)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL); static unsigned long long _logos_meta_method$iOS12$SBDockIconListView$maxIcons(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL); static unsigned long long (*_logos_orig$iOS12$SBDockIconListView$iconsInRowForSpacingCalculation)(_LOGOS_SELF_TYPE_NORMAL SBDockIconListView* _LOGOS_SELF_CONST, SEL); static unsigned long long _logos_method$iOS12$SBDockIconListView$iconsInRowForSpacingCalculation(_LOGOS_SELF_TYPE_NORMAL SBDockIconListView* _LOGOS_SELF_CONST, SEL); static unsigned long long (*_logos_meta_orig$iOS12$SBDockIconListView$iconColumnsForInterfaceOrientation$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, long long); static unsigned long long _logos_meta_method$iOS12$SBDockIconListView$iconColumnsForInterfaceOrientation$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, long long); 


static unsigned long long _logos_meta_method$iOS12$SBDockIconListView$maxIcons(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 5;
}


static unsigned long long _logos_method$iOS12$SBDockIconListView$iconsInRowForSpacingCalculation(_LOGOS_SELF_TYPE_NORMAL SBDockIconListView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 5;
}

static unsigned long long _logos_meta_method$iOS12$SBDockIconListView$iconColumnsForInterfaceOrientation$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    if (arg1 == 0) {
        return 5;
    } else {
        return _logos_meta_orig$iOS12$SBDockIconListView$iconColumnsForInterfaceOrientation$(self, _cmd, arg1);
    }
}





static CGPoint _logos_method$_ungrouped$SBDockIconListView$originForIconAtCoordinate$numberOfIcons$(_LOGOS_SELF_TYPE_NORMAL SBDockIconListView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, struct SBIconCoordinate arg1, unsigned long long arg2) {
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

        CGPoint originalPointForIcon1 = _logos_orig$_ungrouped$SBDockIconListView$originForIconAtCoordinate$numberOfIcons$(self, _cmd, cor1, 4);
        CGPoint originalPointForIcon2 = _logos_orig$_ungrouped$SBDockIconListView$originForIconAtCoordinate$numberOfIcons$(self, _cmd, cor2, 4);
        CGPoint originalPointForIcon3 = _logos_orig$_ungrouped$SBDockIconListView$originForIconAtCoordinate$numberOfIcons$(self, _cmd, cor3, 4);
        CGPoint originalPointForIcon4 = _logos_orig$_ungrouped$SBDockIconListView$originForIconAtCoordinate$numberOfIcons$(self, _cmd, cor4, 4);

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
    return _logos_orig$_ungrouped$SBDockIconListView$originForIconAtCoordinate$numberOfIcons$(self, _cmd, arg1, arg2);

}



static __attribute__((constructor)) void _logosLocalCtor_b2edea14(int __unused argc, char __unused **argv, char __unused **envp) {

    {Class _logos_class$_ungrouped$SBFloatingDockController = objc_getClass("SBFloatingDockController"); Class _logos_metaclass$_ungrouped$SBFloatingDockController = object_getClass(_logos_class$_ungrouped$SBFloatingDockController); MSHookMessageEx(_logos_class$_ungrouped$SBFloatingDockController, @selector(floatingDockRootViewControllerShouldBeginScreenEdgeGestureRecognizer:), (IMP)&_logos_method$_ungrouped$SBFloatingDockController$floatingDockRootViewControllerShouldBeginScreenEdgeGestureRecognizer$, (IMP*)&_logos_orig$_ungrouped$SBFloatingDockController$floatingDockRootViewControllerShouldBeginScreenEdgeGestureRecognizer$);MSHookMessageEx(_logos_metaclass$_ungrouped$SBFloatingDockController, @selector(isFloatingDockSupported), (IMP)&_logos_meta_method$_ungrouped$SBFloatingDockController$isFloatingDockSupported, (IMP*)&_logos_meta_orig$_ungrouped$SBFloatingDockController$isFloatingDockSupported);MSHookMessageEx(_logos_class$_ungrouped$SBFloatingDockController, @selector(_systemGestureManagerAllowsFloatingDockGesture), (IMP)&_logos_method$_ungrouped$SBFloatingDockController$_systemGestureManagerAllowsFloatingDockGesture, (IMP*)&_logos_orig$_ungrouped$SBFloatingDockController$_systemGestureManagerAllowsFloatingDockGesture);Class _logos_class$_ungrouped$SBFloatingDockSuggestionsModel = objc_getClass("SBFloatingDockSuggestionsModel"); MSHookMessageEx(_logos_class$_ungrouped$SBFloatingDockSuggestionsModel, @selector(_shouldProcessAppSuggestion:), (IMP)&_logos_method$_ungrouped$SBFloatingDockSuggestionsModel$_shouldProcessAppSuggestion$, (IMP*)&_logos_orig$_ungrouped$SBFloatingDockSuggestionsModel$_shouldProcessAppSuggestion$);MSHookMessageEx(_logos_class$_ungrouped$SBFloatingDockSuggestionsModel, @selector(recentsEnabled), (IMP)&_logos_method$_ungrouped$SBFloatingDockSuggestionsModel$recentsEnabled, (IMP*)&_logos_orig$_ungrouped$SBFloatingDockSuggestionsModel$recentsEnabled);Class _logos_class$_ungrouped$SBPlatformController = objc_getClass("SBPlatformController"); MSHookMessageEx(_logos_class$_ungrouped$SBPlatformController, @selector(medusaCapabilities), (IMP)&_logos_method$_ungrouped$SBPlatformController$medusaCapabilities, (IMP*)&_logos_orig$_ungrouped$SBPlatformController$medusaCapabilities);Class _logos_class$_ungrouped$SBMainWorkspace = objc_getClass("SBMainWorkspace"); MSHookMessageEx(_logos_class$_ungrouped$SBMainWorkspace, @selector(isMedusaEnabled), (IMP)&_logos_method$_ungrouped$SBMainWorkspace$isMedusaEnabled, (IMP*)&_logos_orig$_ungrouped$SBMainWorkspace$isMedusaEnabled);Class _logos_class$_ungrouped$SBApplication = objc_getClass("SBApplication"); MSHookMessageEx(_logos_class$_ungrouped$SBApplication, @selector(isMedusaCapable), (IMP)&_logos_method$_ungrouped$SBApplication$isMedusaCapable, (IMP*)&_logos_orig$_ungrouped$SBApplication$isMedusaCapable);Class _logos_class$_ungrouped$SBDockIconListView = objc_getClass("SBDockIconListView"); MSHookMessageEx(_logos_class$_ungrouped$SBDockIconListView, @selector(originForIconAtCoordinate:numberOfIcons:), (IMP)&_logos_method$_ungrouped$SBDockIconListView$originForIconAtCoordinate$numberOfIcons$, (IMP*)&_logos_orig$_ungrouped$SBDockIconListView$originForIconAtCoordinate$numberOfIcons$);}
    
    if(kCFCoreFoundationVersionNumber < 1650) {
            {Class _logos_class$iOS12$SBDockIconListView = objc_getClass("SBDockIconListView"); Class _logos_metaclass$iOS12$SBDockIconListView = object_getClass(_logos_class$iOS12$SBDockIconListView); MSHookMessageEx(_logos_metaclass$iOS12$SBDockIconListView, @selector(maxIcons), (IMP)&_logos_meta_method$iOS12$SBDockIconListView$maxIcons, (IMP*)&_logos_meta_orig$iOS12$SBDockIconListView$maxIcons);MSHookMessageEx(_logos_class$iOS12$SBDockIconListView, @selector(iconsInRowForSpacingCalculation), (IMP)&_logos_method$iOS12$SBDockIconListView$iconsInRowForSpacingCalculation, (IMP*)&_logos_orig$iOS12$SBDockIconListView$iconsInRowForSpacingCalculation);MSHookMessageEx(_logos_metaclass$iOS12$SBDockIconListView, @selector(iconColumnsForInterfaceOrientation:), (IMP)&_logos_meta_method$iOS12$SBDockIconListView$iconColumnsForInterfaceOrientation$, (IMP*)&_logos_meta_orig$iOS12$SBDockIconListView$iconColumnsForInterfaceOrientation$);}
    }
    else {
            {Class _logos_class$iOS13$SBIconListGridLayoutConfiguration = objc_getClass("SBIconListGridLayoutConfiguration"); MSHookMessageEx(_logos_class$iOS13$SBIconListGridLayoutConfiguration, @selector(numberOfPortraitColumns), (IMP)&_logos_method$iOS13$SBIconListGridLayoutConfiguration$numberOfPortraitColumns, (IMP*)&_logos_orig$iOS13$SBIconListGridLayoutConfiguration$numberOfPortraitColumns);}
    }
}
