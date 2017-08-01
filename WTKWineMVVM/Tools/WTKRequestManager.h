//
//  WTKRequestManager.h
//  ZHBMVVM
//
//  Created by wenchanglin on 2017/5/7.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WTKRequestManager : NSObject

//+ (instancetype)shareManager;
///本地数据（array）
+ (RACSignal *)postArrayDataWithURL:(NSString *)urlString
                       withpramater:(NSDictionary *)paremater;

///本地数据（dic）
+ (RACSignal *)postDicDataWithURL:(NSString *)urlString
                     withpramater:(NSDictionary *)paremater;

+ (RACSignal *)getWithURL:(NSString *)uslString
            withParamater:(NSDictionary *)paramter;

+ (RACSignal *)postWithURL:(NSString *)urlString
             withParamater:(NSDictionary *)parameter;
@end
