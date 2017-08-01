//
//  WTKPaySuccessViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//25.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"
@class WTKOrderModel;
@interface WTKPaySuccessViewModel : WTKBasedViewModel

@property(nonatomic,strong)WTKOrderModel    *orderModel;
///查看订单
@property(nonatomic,strong)RACCommand       *orderCommand;

///
@property(nonatomic,strong)RACCommand       *goHomeCommand;
@end
