//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet, SBApplicationRestrictionController, SBIconModel, SBRecentAppLayouts;
@protocol SBRecentDisplayItemsPersistenceDelegate;

@interface SBRecentDisplayItemsDataStore : NSObject
{
    SBIconModel *_iconModel;
    SBApplicationRestrictionController *_restrictionController;
    SBRecentAppLayouts *_recentLayouts;
    id <SBRecentDisplayItemsPersistenceDelegate> _persistenceDelegate;
    _Bool _shouldFallbackToRecentAppLayouts;
}

@property(nonatomic) __weak id <SBRecentDisplayItemsPersistenceDelegate> persistenceDelegate; // @synthesize persistenceDelegate=_persistenceDelegate;
- (void).cxx_destruct;
- (_Bool)_isDisplayItemRestrictedOrHidden:(id)arg1;
- (id)_displayItemsFromRecentAppLayouts:(id)arg1;
@property(copy, nonatomic) NSOrderedSet *displayItems;
- (id)initWithIconModel:(id)arg1 restrictionController:(id)arg2 recentLayouts:(id)arg3 fallbackToRecentAppLayouts:(_Bool)arg4;
- (id)init;

@end
