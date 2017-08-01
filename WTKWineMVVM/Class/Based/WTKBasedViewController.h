//
//  WTKBasedViewController.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5/14.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WTKViewModelNavigationImpl.h"
@interface WTKBasedViewController : UIViewController
@property(nonatomic,strong,readonly)WTKBasedViewModel *viewModel;
@property(nonatomic,strong,readonly)UIPercentDrivenInteractiveTransition *interactivePopTransition;


- (instancetype)initWithViewModel:(WTKBasedViewModel *)viewModel;

- (void)bindViewModel;

@end
