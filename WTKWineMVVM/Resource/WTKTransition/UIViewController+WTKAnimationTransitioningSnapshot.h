//
//  UIViewController+WTKAnimationTransitioningSnapshot.h
//  WTKPushAndPopAnimation
//
//  Created by wenchanglin on 2017/5/22.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (WTKAnimationTransitioningSnapshot)

/**
 *屏幕快照
 */
@property (nonatomic, strong) UIView *snapshot;

@property(nonatomic,strong)UIView *topSnapshot;

@property(nonatomic,strong)UIView *viewSnapshot;
@end
