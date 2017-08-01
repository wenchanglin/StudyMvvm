//
//  WTKPaySuccessViewModel.m
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//25.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKPaySuccessViewModel.h"
#import "WTKOrderViewModel.h"
@implementation WTKPaySuccessViewModel

- (instancetype)initWithService:(id<WTKViewModelServices>)service params:(NSDictionary *)params
{
    self = [super initWithService:self.services params:params];
    if (self)
    {
        [self initViewModel];
    }
    return self;
}

- (void)initViewModel
{
    self.orderCommand       = [[RACCommand alloc]initWithSignalBlock:^RACSignal *(id input) {
        WTKOrderViewModel *viewModel = [[WTKOrderViewModel alloc]initWithService:self.services params:@{@"title":@"全部订单"}];
        viewModel.orderType = 0;
        self.naviImpl.className = @"WTKOrderVC";
        [self.naviImpl pushViewModel:viewModel animated:YES];
        return [RACSignal empty];
    }];
    
    self.goHomeCommand      = [[RACCommand alloc]initWithSignalBlock:^RACSignal *(id input) {
        [self.naviImpl popToRootViewModelWithAnimation:YES];
        return [RACSignal empty];
    }];
}

@end
