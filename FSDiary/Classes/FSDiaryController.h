//
//  FSDiaryController.h
//  myhome
//
//  Created by FudonFuchina on 2017/5/28.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"

@interface FSDiaryController : FSBaseController

@property (nonatomic,assign) BOOL       isSearchMode;
@property (nonatomic,strong) NSArray    *searchResults;

- (instancetype _Nullable )initWithZone:(NSString * _Nonnull )zone
                        name:(NSString * _Nonnull )name
                    password:(NSString * _Nonnull )password;

@end
