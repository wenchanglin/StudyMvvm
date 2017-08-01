//
//  WTKGoodsViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5/18.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"
@class WTKGood;
@interface WTKGoodsViewModel : WTKBasedViewModel
@property(nonatomic,strong)WTKGood          *goods;

@property(nonatomic,strong)RACCommand       *addCommand;

@property(nonatomic,strong)RACCommand       *clickShopCommand;
///分享
@property(nonatomic,strong)RACCommand       *shareCommand;

@property(nonatomic,strong)NSMutableArray   *commentArray;

@property(nonatomic,strong)NSDictionary     *titleDic;
///刷新评论
@property(nonatomic,strong)RACCommand       *refreshCommand;

///评论类型
@property(nonatomic,strong)RACCommand       *menuCommand;

@end
