//
//  QQHelperSetting.h
//  QQRedPackHelper
//
//  Created by tangxianhai on 2018/3/2.
//  Copyright © 2018年 tangxianhai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>

@interface QQHelperSetting : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, assign) NSInteger countT;

@property (nonatomic, assign) BOOL isEnableRedPacket;
@property (nonatomic, assign) BOOL isHideRedDetailWindow;
@property (nonatomic, assign) BOOL isMessageRevoke;
@property (nonatomic, assign) BOOL isPersonRedPackage;

@property (nonatomic, assign) NSInteger startTime;
@property (nonatomic, assign) NSInteger endTime;

@property (nonatomic, strong) NSNumber * msgRandom;

@property (nonatomic, strong) NSArray * sessionIds;

@property (nonatomic, strong) NSString * filterKeyword; // 逗号分隔

@property (nonatomic, strong) NSMutableArray *redPacControllers;

@property (nonatomic, strong) NSString * supportDir;
@property (nonatomic, strong) NSString * documentDir;
@property (nonatomic, strong) NSString * libraryDir;

- (void)saveOneRedPacController:(NSViewController *)redPacVc;
- (void)closeRedPacWindowns;

- (NSInteger)getRandomNumber:(int)from to:(int)to;
- (void)showWarnMessage:(NSString *)msg;
- (void)showMessage:(NSString *)msg;

- (BOOL)keywordContainer:(NSString *)redPackKeyword;
- (BOOL)groupSessionIdContainer:(NSInteger)sessionId;

@end
