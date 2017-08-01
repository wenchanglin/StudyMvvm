//
//  WTKHomeHeadView.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5/14.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WTKHomeHeadView : UICollectionReusableView

@property(nonatomic,strong)NSMutableArray   *dataArray;

@property(nonatomic,strong)RACSubject       *bannerSubject;

@property(nonatomic,strong)RACSubject       *btnSubject;

@end
