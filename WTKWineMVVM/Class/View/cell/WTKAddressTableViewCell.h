//
//  WTKAddressTableViewCell.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//26.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WTKAddressTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *w_nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *w_phoneLabel;
@property (weak, nonatomic) IBOutlet UILabel *w_addresslabel;

@property(nonatomic,strong)RACSubject   *subject;

- (void)updateAddress:(WTKAddress *)address;

@end
