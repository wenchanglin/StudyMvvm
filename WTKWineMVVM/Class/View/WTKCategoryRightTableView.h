//
//  WTKCategoryRightTableView.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//19.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WTKCategoryViewModel;
@interface WTKCategoryRightTableView : UITableView

@property(nonatomic,strong)NSArray                  *sectionArray;

@property(nonatomic,strong)NSDictionary             *dataDic;

@property(nonatomic,strong)WTKCategoryViewModel     *viewModel;

@end
