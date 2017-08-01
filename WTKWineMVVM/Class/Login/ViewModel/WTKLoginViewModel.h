//
//  WTKLoginViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//14.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"

@interface WTKLoginViewModel : WTKBasedViewModel

@property(nonatomic,strong)NSString     *phoneNum;

@property(nonatomic,strong)NSString     *codeNum;

@property(nonatomic,strong)RACSignal    *phoneSignal;

@property(nonatomic,strong)RACSignal    *canLoginSignal;

/**是否可以点击发送验证码*/
@property(nonatomic,strong)RACSignal    *canCodeSignal;

@property(nonatomic,strong)RACCommand   *codeCommand;

@property(nonatomic,strong)RACCommand   *loginCommand;

@end
