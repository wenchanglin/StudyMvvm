//
//  WTKOrderTableView.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//10.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WTKOrderViewModel;
@interface WTKOrderTableView : UITableView

@property(nonatomic,strong)NSMutableArray *dataArray;

@property(nonatomic,strong)WTKOrderViewModel *viewModel;

@end
