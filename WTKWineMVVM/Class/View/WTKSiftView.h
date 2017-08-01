//
//  WTKSiftView.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//20.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 *  分类筛选视图
 */
@interface WTKSiftView : UIView

@property(nonatomic,strong)NSArray *dataArray;

@property(nonatomic,strong)RACSubject *dismissSubject;

///刷新数据
- (void)reloadData;

///移除
- (void)dismiss;

@end
