//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBSceneManager.h"

@protocol SBCarDisplaySceneManagerDelegate;

@interface SBCarDisplaySceneManager : SBSceneManager
{
    id <SBCarDisplaySceneManagerDelegate> _carDisplayDelegate;
}

+ (Class)_layoutStateManagerClass;
@property(nonatomic) __weak id <SBCarDisplaySceneManagerDelegate> carDisplayDelegate; // @synthesize carDisplayDelegate=_carDisplayDelegate;
- (void).cxx_destruct;
- (id)_sceneWindowLayoutStrategy;
- (id)_newSceneLayoutViewController;
- (_Bool)_handleAction:(id)arg1 forScene:(id)arg2;
- (long long)_hostingPolicyForScene:(id)arg1;

@end

