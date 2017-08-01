//
//  WTKSexView.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//26.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WTKSexView : UIView

@property(nonatomic,strong)RACSubject *subject;

///性别 YES-男 NO-女
@property(nonatomic,assign)BOOL     w_sex;

@end
