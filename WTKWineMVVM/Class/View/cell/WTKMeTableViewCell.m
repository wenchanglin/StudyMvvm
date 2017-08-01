//
//  WTKMeTableViewCell.m
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//12.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKMeTableViewCell.h"

@implementation WTKMeTableViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
    self.selectionStyle = UITableViewCellSelectionStyleNone;
}

- (void)updateTitle:(NSString *)title subTitle:(NSString *)subTitle
{
    self.w_titleLabel.text = title;
    if (subTitle.length <= 0)
    {
        self.w_subTitleLabel.hidden = YES;
    }
    else
    {
        self.w_subTitleLabel.text   = subTitle;
        self.w_subTitleLabel.hidden = NO;
    }
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
