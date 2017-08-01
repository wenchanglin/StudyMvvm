//
//  WTKOrderModel.m
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//10.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKOrderModel.h"
#import "WTKOrderDetailModel.h"
@implementation WTKOrderModel

- (instancetype)initWithDic:(NSDictionary *)aDic
{
    self = [super init];
    if (self)
    {
        for (NSString *key in [aDic allKeys])
        {
            if ([key isEqualToString:@"ordergoods"])
            {
                NSArray *array = aDic[@"ordergoods"];
                NSMutableArray *mArray = @[].mutableCopy;
                for (NSDictionary *aDic in array)
                {
                    WTKOrderDetailModel *model = [[WTKOrderDetailModel alloc]init];
                    [model setValuesForKeysWithDictionary:aDic];
                    [mArray addObject:model];
                }
                self.ordergoods = mArray;
                
            }
            else
            {
                [self setValue:aDic[key] forKey:key];
            }
            
        }
    }
    return self;
}

- (void)setValue:(id)value forUndefinedKey:(NSString *)key
{
    
}

@end
