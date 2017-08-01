//
//  WTKFunctionViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//17.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"

@interface WTKFunctionViewModel : WTKBasedViewModel

@property(nonatomic,strong)RACCommand       *switchCommand;

@end
