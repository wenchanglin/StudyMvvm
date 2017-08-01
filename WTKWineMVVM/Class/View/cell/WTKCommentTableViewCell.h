//
//  WTKCommentTableViewCell.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 16/11/1.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WTKComment;
@interface WTKCommentTableViewCell : UITableViewCell

///刷新cell
- (void)updateWithComment:(WTKComment *)comment;

@end
