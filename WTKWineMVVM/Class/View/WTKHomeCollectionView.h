//
//  WTKHomeCollectionView.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5/14.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WTKHomeViewModel.h"
@interface WTKHomeCollectionView : UICollectionView

@property(nonatomic,strong)NSArray          *headArray;

@property(nonatomic,strong)NSMutableArray   *dataArray;

@property(nonatomic,strong)WTKHomeViewModel *viewModel;

@end
