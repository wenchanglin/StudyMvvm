//
//  WTKQRCodeViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/6/16.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"

@interface WTKQRCodeViewModel : WTKBasedViewModel

@property(nonatomic,strong)RACCommand       *scanCommand;

@end
