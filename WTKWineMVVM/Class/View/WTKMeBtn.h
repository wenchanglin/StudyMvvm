//
//  WTKMeBtn.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//12.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WTKMeBtn : UIButton

/**
 *  左上的提示
 */
@property(nonatomic,assign)NSInteger bageValue;
/**
 * 构建方法  最低高度65
 */
+ (instancetype)buttonWithTitle:(NSString *)title imageName:(NSString *)imageName;

@end
