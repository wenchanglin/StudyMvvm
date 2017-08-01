//
//  WTKRecommendViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//8.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"

@interface WTKRecommendViewModel : WTKBasedViewModel

@property(nonatomic,strong)RACCommand *refershCommand;

@property(nonatomic,strong)RACCommand *shareCommand;

@end
