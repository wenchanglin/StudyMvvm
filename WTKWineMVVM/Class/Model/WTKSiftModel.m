//
//  WTKSiftModel.m
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//20.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKSiftModel.h"

@implementation WTKSiftModel

- (instancetype)initWithDic:(NSDictionary *)dic
{
    if (self = [super init])
    {
        for (NSString *key in [dic allKeys])
        {
            [self setValue:dic[key] forKey:key];
        }
    }
    return self;
}

- (void)setValue:(id)value forUndefinedKey:(NSString *)key
{
    NSLog(@"%@",key);
}

@end
