//
//  WTKTouchManager.h
//  WTKTransitionAnimation
//
//  Created by wenchanglin on 2017/5/29.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface WTKTouchManager : NSObject

@property(nonatomic,assign)CGPoint touchPoint;

@property(nonatomic,assign)float radius;

+ (instancetype)shareManager;

@end
