//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBAWDMetric.h"

@class AWDServerConnection;

@interface SBAWDQueryableMetric : SBAWDMetric
{
    AWDServerConnection *_connection;
    CDUnknownBlockType _builder;
}

- (void).cxx_destruct;
- (void)_postQueryableMetric;
- (void)registerWithDataBuilder:(CDUnknownBlockType)arg1;

@end

