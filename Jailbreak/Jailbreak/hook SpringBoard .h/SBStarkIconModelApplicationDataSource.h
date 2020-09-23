//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBIconModelApplicationDataSource-Protocol.h"

@class NSString, SBPlatformController;
@protocol SBStarkSessionConfiguring;

@interface SBStarkIconModelApplicationDataSource : NSObject <SBIconModelApplicationDataSource>
{
    id <SBStarkSessionConfiguring> _configuration;
    SBPlatformController *_platformController;
    SBPlatformController *platformController;
}

@property(readonly, nonatomic) SBPlatformController *platformController; // @synthesize platformController;
- (void).cxx_destruct;
- (id)firstPageLeafIdentifiers;
- (id)defaultIconState;
- (id)allApplications;
- (id)initWithConfiguration:(id)arg1 platformController:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

