//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration;
@protocol OS_dispatch_queue, SBAttentionAwarenessClientDelegate;

@interface SBAttentionAwarenessClient : NSObject
{
    AWAttentionAwarenessConfiguration *_queue_configuration;
    _Bool _enabled;
    id <SBAttentionAwarenessClientDelegate> _delegate;
    AWAttentionAwarenessClient *_attentionAwarenessClient;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient; // @synthesize attentionAwarenessClient=_attentionAwarenessClient;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <SBAttentionAwarenessClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleAttentionAwarenessEvent:(id)arg1;
- (void)_resetAttentionLostTimeout;
- (void)_suspend;
- (void)_resume;
- (void)resetAttentionLostTimeout;
- (void)setConfiguration:(id)arg1 shouldReset:(_Bool)arg2;
@property(retain, nonatomic) AWAttentionAwarenessConfiguration *configuration;
- (id)init;

@end

