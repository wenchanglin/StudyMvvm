//
//  WTKHomeViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5/14.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"

@interface WTKHomeViewModel : WTKBasedViewModel
/**刷新数据*/
@property(nonatomic,strong)RACCommand   *refreshCommand;

@property(nonatomic,strong)NSArray      *headData;

@property(nonatomic,strong)NSArray      *dataArray;

///头视图
@property(nonatomic,strong)RACCommand   *headCommand;

///中间按钮点击
@property(nonatomic,strong)RACCommand   *btnCommand;

///good
@property(nonatomic,strong)RACCommand   *goodCommand;

///导航栏
@property(nonatomic,strong)RACCommand   *naviCommand;

@property(nonatomic,strong)RACSubject   *searchSubject;

@end
