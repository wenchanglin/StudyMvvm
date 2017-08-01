//
//  WTKSetupViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//14.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"

@interface WTKSetupViewModel : WTKBasedViewModel

@property(nonatomic,strong)RACSubject *cellClickSubject;

@property(nonatomic,strong)RACSubject *exitSubject;

@end
