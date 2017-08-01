//
//  UIColor+WTK.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5/14.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (WTK)
/**
 * 十六进制颜色值
 */
+(UIColor *) colorWithHex:(long)hex;
+(UIColor *) colorWithHexString:(NSString *)hex;

+(UIColor *) colorWithHex:(long)hex alpha:(float)alpha;
@end
