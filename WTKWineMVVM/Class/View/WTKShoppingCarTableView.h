//
//  WTKShoppingCarTableView.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//21.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WTKShoppingCarViewModel;
@interface WTKShoppingCarTableView : UITableView

@property(nonatomic,strong)NSArray                  *dataArray;

@property(nonatomic,strong)WTKShoppingCarViewModel  *viewModel;


- (void)w_reloadData;
@end
