//
//  WTKTextView.h
//  WTKTextView
//
//  Created by wenchanglin on 2017/5//18.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WTKTextView : UITextView

@property(nonatomic,copy)NSString *placeholder;

/**
 *  构建方法
 */
+ (instancetype)textView;

@end
