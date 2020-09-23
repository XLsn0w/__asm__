//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBSystemGestureManager, UIHBClickGestureRecognizer, UIHBLongClickGestureRecognizer;

@interface SBHomeHardwareButtonGestureRecognizerConfiguration : NSObject
{
    SBSystemGestureManager *_systemGestureManager;
    UIHBClickGestureRecognizer *_initialButtonDownGestureRecognizer;
    UIHBClickGestureRecognizer *_initialButtonUpGestureRecognizer;
    UIHBClickGestureRecognizer *_singlePressUpGestureRecognizer;
    UIHBClickGestureRecognizer *_acceleratedSinglePressUpGestureRecognizer;
    UIHBLongClickGestureRecognizer *_longPressGestureRecognizer;
    UIHBClickGestureRecognizer *_doublePressDownGestureRecognizer;
    UIHBClickGestureRecognizer *_doublePressUpGestureRecognizer;
    UIHBClickGestureRecognizer *_triplePressUpGestureRecognizer;
    UIHBClickGestureRecognizer *_doubleTapUpGestureRecognizer;
}

@property(retain, nonatomic) UIHBClickGestureRecognizer *doubleTapUpGestureRecognizer; // @synthesize doubleTapUpGestureRecognizer=_doubleTapUpGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *triplePressUpGestureRecognizer; // @synthesize triplePressUpGestureRecognizer=_triplePressUpGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *doublePressUpGestureRecognizer; // @synthesize doublePressUpGestureRecognizer=_doublePressUpGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *doublePressDownGestureRecognizer; // @synthesize doublePressDownGestureRecognizer=_doublePressDownGestureRecognizer;
@property(retain, nonatomic) UIHBLongClickGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *acceleratedSinglePressUpGestureRecognizer; // @synthesize acceleratedSinglePressUpGestureRecognizer=_acceleratedSinglePressUpGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *singlePressUpGestureRecognizer; // @synthesize singlePressUpGestureRecognizer=_singlePressUpGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *initialButtonUpGestureRecognizer; // @synthesize initialButtonUpGestureRecognizer=_initialButtonUpGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *initialButtonDownGestureRecognizer; // @synthesize initialButtonDownGestureRecognizer=_initialButtonDownGestureRecognizer;
@property(retain, nonatomic) SBSystemGestureManager *systemGestureManager; // @synthesize systemGestureManager=_systemGestureManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldConfigureDependencies;

@end

