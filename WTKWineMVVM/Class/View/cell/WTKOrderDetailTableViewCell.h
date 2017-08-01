//
//  WTKOrderDetailTableViewCell.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//11.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WTKOrderModel;
@class WTKOrderDetailModel;
@interface WTKOrderDetailTableViewCell : UITableViewCell
//cell1
@property (weak, nonatomic) IBOutlet UILabel *w_detailSerial;
@property (weak, nonatomic) IBOutlet UILabel *w_detailTime;
@property (weak, nonatomic) IBOutlet UILabel *w_userName;
@property (weak, nonatomic) IBOutlet UILabel *w_userPhone;
@property (weak, nonatomic) IBOutlet UILabel *w_userAddress;
@property (weak, nonatomic) IBOutlet UILabel *w_stateLable;


//cell2
@property (weak, nonatomic) IBOutlet UIImageView *w_detailImg;
@property (weak, nonatomic) IBOutlet UILabel *w_detailName;
@property (weak, nonatomic) IBOutlet UILabel *w_detailPrice;
@property (weak, nonatomic) IBOutlet UILabel *w_detailNumber;
@property (weak, nonatomic) IBOutlet UIView *w_bottomLineView;

//cell3
@property (weak, nonatomic) IBOutlet UILabel *w_PayPrice;
@property (weak, nonatomic) IBOutlet UILabel *w_sendFee;
@property (weak, nonatomic) IBOutlet UILabel *w_jiFenCost;
@property (weak, nonatomic) IBOutlet UILabel *w_couponCost;


- (void)updateCell1:(WTKOrderModel *)order;
- (void)updateCell2:(WTKOrderDetailModel *)order;
- (void)updateCell3:(WTKOrderModel *)order;

- (void)updateCell2WithGoods:(WTKGood *)goods;

@end
