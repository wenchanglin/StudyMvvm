//
//  WTKCategoryLeftTableViewCell.m
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//19.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKCategoryLeftTableViewCell.h"

@implementation WTKCategoryLeftTableViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
    self.selectionStyle = UITableViewCellSelectionStyleNone;
    self.backgroundColor = WTKCOLOR(240, 240, 240, 1);
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    self.backgroundColor    = selected ? [UIColor whiteColor] : WTKCOLOR(242, 242, 242, 1);
    self.w_label.textColor  = selected ? THEME_COLOR : WTKCOLOR(70, 70, 70, 1);
    
}

@end
