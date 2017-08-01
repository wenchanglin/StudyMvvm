//
//  WTKOrderDetailViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//11.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"

@class WTKOrderModel;
@interface WTKOrderDetailViewModel : WTKBasedViewModel

@property(nonatomic,strong)WTKOrderModel    *order;

@property(nonatomic,strong)RACSubject       *segmentSubject;

@property(nonatomic,strong)RACCommand       *requestStatusCommand;

@property(nonatomic,strong)NSMutableArray   *statusArray;

/**刷新detailTableView*/
@property(nonatomic,strong)RACCommand       *refreshDetail;

/**刷新statusTableView*/
@property(nonatomic,strong)RACCommand       *refreshStatus;
@end
