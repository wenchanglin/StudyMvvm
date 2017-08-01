//
//  WTKMapViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5//26.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import "WTKBasedViewModel.h"
#import <BaiduMapAPI_Base/BMKBaseComponent.h>
#import <BaiduMapAPI_Map/BMKMapComponent.h>
#import <BaiduMapAPI_Search/BMKSearchComponent.h>
#import <BaiduMapAPI_Location/BMKLocationService.h>

@interface WTKMapViewModel : WTKBasedViewModel<BMKPoiSearchDelegate,BMKMapViewDelegate,BMKGeoCodeSearchDelegate>
///周边检索
@property(nonatomic,strong)RACCommand       *searchCommand;

///选择地址
@property(nonatomic,strong)RACCommand       *cellClick;

///代理
@property(nonatomic,strong)RACSubject       *addressSubject;

@end
