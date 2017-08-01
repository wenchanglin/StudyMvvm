//
//  WTKSiftTableViewCell.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//20.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WTKSiftModel;
@interface WTKSiftTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *w_Label;

@property (weak, nonatomic) IBOutlet UIImageView *w_imageView;

- (void)updateWithModel:(WTKSiftModel *)model;

@end
