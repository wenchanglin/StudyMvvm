//
//  WTKOrderStateTableView.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//12.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WTKOrderModel;

@interface WTKOrderStateTableView : UITableView

@property(nonatomic,strong)NSMutableArray *dataArray;

@property(nonatomic,strong)WTKOrderModel *order;


@end
