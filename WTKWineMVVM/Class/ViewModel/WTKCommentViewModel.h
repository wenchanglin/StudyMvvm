//
//  WTKCommentViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/6/11.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"
@class WTKOrderModel;
@class WTKCommentVC;
@interface WTKCommentViewModel : WTKBasedViewModel

@property(nonatomic,strong)WTKOrderModel    *order;

@property(nonatomic,weak)WTKCommentVC       *vc;

@property(nonatomic,strong)RACCommand       *addPicCommand;

@property(nonatomic,strong)RACCommand       *commitCommand;

@property(nonatomic,strong)RACSubject       *changeImgSubject;

///评论
@property(nonatomic,copy)NSString           *comment;

@end
