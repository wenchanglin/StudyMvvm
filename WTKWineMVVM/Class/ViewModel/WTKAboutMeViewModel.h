//
//  WTKAboutMeViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//20.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"
#import "WTKAboutMeVC.h"
@interface WTKAboutMeViewModel : WTKBasedViewModel

@property(nonatomic,strong)RACCommand   *cellClickCommand;

@property(nonatomic,weak)WTKAboutMeVC   *vc;

@end
