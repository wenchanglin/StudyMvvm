//
//  UIButton+WTKBtn.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5/12.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^wtkClickBlock)(UIButton *btn);

@interface UIButton (WTKBtn)

/**
 *  快速创建文字Button
 *
 *  @param frame           frame
 *  @param title           title
 *  @param backgroundColor 背景颜色
 *  @param titleColor      文字颜色
 *  @param font            文字大小
 *  @param tapAction       回调
 */
+ (instancetype)createCustomButtonWithFrame:(CGRect)frame
                                      title:(NSString *)title
                            backGroungColor:(UIColor *)backgroundColor
                                 titleColor:(UIColor *)titleColor
                                       font:(UIFont *)titleFont;



@end
