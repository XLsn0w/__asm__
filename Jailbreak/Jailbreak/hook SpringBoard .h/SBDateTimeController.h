//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSHashTable;

@interface SBDateTimeController : NSObject
{
    NSDate *_overrideDate;
    NSHashTable *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(copy, nonatomic) NSDate *overrideDate;
@property(readonly, copy, nonatomic) NSDate *currentDate;
- (id)init;

@end

