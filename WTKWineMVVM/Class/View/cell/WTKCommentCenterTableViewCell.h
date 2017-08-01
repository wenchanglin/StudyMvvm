//
//  WTKCommentCenterTableViewCell.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/6/11.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WTKOrderModel;
@interface WTKCommentCenterTableViewCell : UITableViewCell
///评价
@property(nonatomic,strong)RACSubject *commentSubject;

- (void)updateWithOrder:(WTKOrderModel *)order;

@end
