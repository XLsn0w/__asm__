//
// FSVLOBWelcomeController.h
// LockWatch
//
// Created by janikschmidt on 7/13/2020
// Copyright © 2020 Team FESTIVAL. All rights reserved
//

#import <OnBoardingKit/OnBoardingKit.h>

#import "FSVLOBBaseSetupControllerInterface.h"
#import "FSVLOBFlowItemDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@class OBTrayButton;

@interface FSVLOBWelcomeController : OBWelcomeController <FSVLOBBaseSetupControllerInterface>

@property (nonatomic) id <FSVLOBFlowItemDelegate> flowItemDelegate;
@property (nonatomic) NSDictionary* flowItemDefinition;
@property (nonatomic) OBTrayButton* primaryTrayButton;
@property (nonatomic) OBTrayButton* secondaryTrayButton;

@end

NS_ASSUME_NONNULL_END