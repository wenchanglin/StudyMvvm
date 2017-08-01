//
//  WTKOrderMenuView.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//11.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WTKOrderMenuView : UIView

@property(nonatomic,strong)RACSubject *clickSignal;
/**
 *  array 列表菜单(NSString *)
 */
- (instancetype)initWithFrame:(CGRect)frame withData:(NSArray *)array;

- (void)dismiss;
- (void)beginAnimation;
@end
