//
//  WTKPayViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//24.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"

@interface WTKPayViewModel : WTKBasedViewModel
///本次买的商品
@property(nonatomic,strong)NSMutableArray   *goodsArray;
///总费用
@property(nonatomic,assign)CGFloat          price;

///确认付款
@property(nonatomic,strong)RACCommand       *payCommand;

///商品点击
@property(nonatomic,strong)RACCommand       *goodCommand;
@end
