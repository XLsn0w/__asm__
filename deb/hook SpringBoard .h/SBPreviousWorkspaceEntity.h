//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBWorkspaceEntity.h"

@interface SBPreviousWorkspaceEntity : SBWorkspaceEntity
{
    long long _previousLayoutRole;
}

+ (id)entityWithPreviousLayoutRole:(long long)arg1;
@property(readonly, nonatomic) long long previousLayoutRole; // @synthesize previousLayoutRole=_previousLayoutRole;
- (_Bool)isPreviousWorkspaceEntity;
- (id)initWithIdentifier:(id)arg1 displayChangeSettings:(id)arg2;
- (id)initWithPreviousLayoutRole:(long long)arg1;

@end

