//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBRootFolder.h"

#import "SBIconIndexNodeObserver-Protocol.h"

@class NSString, SBIconListModel;

@interface SBRootFolderWithDock : SBRootFolder <SBIconIndexNodeObserver>
{
    SBIconListModel *_dock;
}

- (void).cxx_destruct;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)listDidMoveNodes:(id)arg1;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)_notifyIndexChange:(int)arg1 identifiers:(id)arg2 withValidationBlock:(CDUnknownBlockType)arg3;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (void)enumerateAllIconsWithBaseIndexPath:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)sort;
- (id)iconsOfClass:(Class)arg1;
- (void)markIconStateClean;
- (_Bool)isIconStateDirty;
- (_Bool)isValidPageIndex:(unsigned long long)arg1;
- (void)removeEmptyList:(id)arg1;
- (id)listsContainingLeafIconWithIdentifier:(id)arg1;
- (id)listsContainingIcon:(id)arg1;
- (unsigned long long)indexOfList:(id)arg1;
- (id)listAtIndex:(unsigned long long)arg1;
- (void)_setDock:(id)arg1;
- (id)dock;
- (_Bool)supportsDock;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
