//
//  WTKDataManager.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5/21.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 *  数据管理类
 */
@interface WTKDataManager : NSObject

/**
 *  保存用户数据
 */
+ (void)saveUserData;

/**
 *  读取用户数据
 */
+ (void)readUserData;

/**
 *  删除用户数据
 */
+ (void)removeUserData;

@end
