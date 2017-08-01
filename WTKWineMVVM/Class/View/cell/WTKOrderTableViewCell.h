//
//  WTKOrderTableViewCell.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//10.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WTKOrderModel;

@interface WTKOrderTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *w_statusLabel;
@property (weak, nonatomic) IBOutlet UILabel *w_timeLabel;

@property (weak, nonatomic) IBOutlet UIScrollView *w_scrollView;
@property (weak, nonatomic) IBOutlet UILabel *w_priceLabel;
@property (weak, nonatomic) IBOutlet UIButton *w_statusButton;

@property (weak, nonatomic) IBOutlet UIImageView *w_finishImage;

@property (nonatomic,strong)WTKOrderModel *order;

@end
