//
//  WTKFeedBackViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//18.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"

@interface WTKFeedBackViewModel : WTKBasedViewModel

///类型
@property(nonatomic,assign)NSInteger    *ideaType;

///提交
@property(nonatomic,strong)RACCommand   *submitConmand;

@end
