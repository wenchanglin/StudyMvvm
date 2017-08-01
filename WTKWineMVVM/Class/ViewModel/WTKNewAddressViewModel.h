//
//  WTKNewAddressViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//26.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"

@class WTKNewAddressVC;
@interface WTKNewAddressViewModel : WTKBasedViewModel

@property(nonatomic,strong)WTKAddress       *address;
/// 保存
@property(nonatomic,strong)RACCommand       *saveCommand;
///删除
@property(nonatomic,strong)RACCommand       *deleteCommand;
/// 选择地址
@property(nonatomic,strong)RACCommand       *addressCommand;

///跳转通讯录
@property(nonatomic,strong)RACCommand       *phoneBookCommand;

///弱引用，用来present
@property(nonatomic,weak)WTKNewAddressVC    *vc;

/// 从通讯录获取的手机号
@property(nonatomic,copy)NSString           *phoneNum;
/// 从通讯录获取的姓名
@property(nonatomic,copy)NSString           *phoneName;

///地址String
@property(nonatomic,copy)NSString           *addressString;

@end
