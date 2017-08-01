//
//  WTKMapSearchTableView.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//28.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WTKMapViewModel;
@interface WTKMapSearchTableView : UITableView

@property(nonatomic,strong)NSArray *searchArray;

@property(nonatomic,strong)WTKMapViewModel *viewModel;

@end
