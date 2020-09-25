//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBApplicationServerCarPlayDelegate-Protocol.h"

@class NSString, SBCarPlayIconImageCache;

@interface SBApplicationCarPlayService : NSObject <SBApplicationServerCarPlayDelegate>
{
    SBCarPlayIconImageCache *_iconImageCache;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) SBCarPlayIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
- (void).cxx_destruct;
- (void)applicationServer:(id)arg1 client:(id)arg2 fetchApplicationForBundleIdentifier:(id)arg3 inVehicle:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)applicationServer:(id)arg1 client:(id)arg2 resetAppIdentifierOrderForVehicleId:(id)arg3;
- (void)applicationServer:(id)arg1 client:(id)arg2 setIconOrder:(id)arg3 hiddenIcons:(id)arg4 forVehicleId:(id)arg5;
- (void)applicationServer:(id)arg1 client:(id)arg2 fetchIconOrderForVehicleId:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)_iconControllerForVehicleId:(id)arg1;
- (id)initWithIconImageCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

