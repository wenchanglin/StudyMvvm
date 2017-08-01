//
//  WTKAddress.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//25.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WTKAddress : NSObject<NSCoding>
///名字
@property(nonatomic,copy)NSString   *w_name;

///地址
@property(nonatomic,copy)NSString   *w_address;

///手机号
@property(nonatomic,copy)NSString   *w_phone;

///性别 YES-男 NO-女
@property(nonatomic,assign)BOOL     w_sex;

///详细地址
@property(nonatomic,copy)NSString   *w_detailAddress;

@end
