//
//  WTKNetWork.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//19.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WTKNetWork : NSObject

@property(nonatomic,assign)BOOL isNetReachable;

+ (instancetype)shareInatance;

- (void)initNetWork;

@end
