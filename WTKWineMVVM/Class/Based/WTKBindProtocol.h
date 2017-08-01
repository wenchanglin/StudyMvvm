//
//  WTKBingProtocol.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5/14.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WTKBindProtocol <NSObject>
///绑定viewModel
- (instancetype)bindViewModel:(id)viewModel;
@end
