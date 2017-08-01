//
//  WTKHomeCell.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5/14.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WTKHomeCell : UICollectionViewCell

///是否为搜索界面的cell(标志是否做动画)
@property(nonatomic,assign)BOOL isSearch;

- (void)updateGood:(WTKGood *)goods;

@end
