//
//  WTKMeTableViewCell.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//12.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WTKMeTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *w_titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *w_subTitleLabel;

- (void)updateTitle:(NSString *)title subTitle:(NSString *)subTitle;

@end
