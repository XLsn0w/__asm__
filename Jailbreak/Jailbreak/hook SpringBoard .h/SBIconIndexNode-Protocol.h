//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSMutableArray, NSMutableSet, NSString;
@protocol SBIconIndexNodeObserver;

@protocol SBIconIndexNode <NSObject>
- (NSString *)nodeDescriptionWithPrefix:(NSString *)arg1;
- (void)removeNodeObserver:(id <SBIconIndexNodeObserver>)arg1;
- (void)addNodeObserver:(id <SBIconIndexNodeObserver>)arg1;
- (NSMutableArray *)nodesAlongIndexPath:(NSIndexPath *)arg1 consumedIndexes:(unsigned long long)arg2;
- (NSMutableSet *)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(NSIndexPath *)arg2;
- (NSMutableSet *)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
@end
