//
//  WTKGoodManagerView.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5/18.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WTKGood;
@interface WTKGoodManagerView : UIView


///已添加购物车数量
@property (nonatomic, assign) NSInteger num;

/// 添加到购物车
@property(nonatomic,strong)RACSubject   *addSubject;

///移除时发送信号
@property(nonatomic,strong)RACSubject   *reduceSubject;

- (void)updateGood:(WTKGood *)good;

@end
