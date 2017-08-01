//
//  WTKViewModelNavigationImpl.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5/14.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WTKViewModelNavigationImpl : NSObject<WTKViewModelServices>
@property(nonatomic,copy)NSString *className;
///设置当前rootVC
@property(nonatomic,assign)NSInteger selectedIndex;
- (instancetype)initWithNavigationController:(UINavigationController *)navi;


@end
