//
//  WTKCommentCenterViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/6/11.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"
///评价中心
@interface WTKCommentCenterViewModel : WTKBasedViewModel

@property(nonatomic,strong)NSMutableArray   *dataArray;

@property(nonatomic,strong)RACCommand       *refreshCommand;

@property(nonatomic,strong)RACCommand       *cellClickCommand;

///评价
@property(nonatomic,strong)RACCommand       *commentCommand;

@end
