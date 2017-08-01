//
//  WTKOrderViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//10.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"

@interface WTKOrderViewModel : WTKBasedViewModel

@property(nonatomic,strong)NSMutableArray   *array;

@property(nonatomic,strong)RACCommand       *refreshCommand;

@property(nonatomic,strong)RACSubject       *menuClickSignal;

@property(nonatomic,strong)RACCommand       *cellClickCommand;

@property(nonatomic,assign)NSInteger        orderType;
@end
