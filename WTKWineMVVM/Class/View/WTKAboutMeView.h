//
//  WTKAboutMeView.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//17.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WTKAboutMeView : UIView

@property(nonatomic,strong)RACSubject   *clickSubject;

/**
 * 初始化
 * param titleArray 标题(1-3个)
 */
- (instancetype)initWithFrame:(CGRect)frame withTitleArray:(NSArray<NSString *> *)titleArray;


@end
