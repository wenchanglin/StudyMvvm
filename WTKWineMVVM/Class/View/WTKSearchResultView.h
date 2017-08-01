//
//  WTKSearchResultView.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//31.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WTKSearchViewModel;
@interface WTKSearchResultView : UIView

@property(nonatomic,strong)NSArray              *dataArray;

@property(nonatomic,strong)WTKSearchViewModel   *viewModel;

///刷新
- (void)w_reloadData;

@end
