//
//  WTKMeViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5/14.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"

@interface WTKMeViewModel : WTKBasedViewModel
/**cell点击*/
@property(nonatomic,strong)RACSubject   *cellClickSubject;

/**head点击*/
@property(nonatomic,strong)RACSubject   *headClickSubject;

/**设置*/
@property(nonatomic,strong)RACSubject   *setUpSubject;

@end
