//
//  WTKPsdManagerViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//17.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"

@interface WTKPsdManagerViewModel : WTKBasedViewModel
/**原密码*/
@property(nonatomic,copy)NSString     *w_originPsd;
/**新密码*/
@property(nonatomic,copy)NSString     *w_newPsd;
/**确定*/
@property(nonatomic,copy)NSString     *w_confirmPsd;

/**是否可以更改*/
@property(nonatomic,strong)RACSignal    *canSignal;

/**确认修改*/
@property(nonatomic,strong)RACCommand   *confirmCommand;

@end
