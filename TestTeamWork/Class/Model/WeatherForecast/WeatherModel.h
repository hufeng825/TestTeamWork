//
//  WeatherModel.h
//  TestTeamWork
//
//  Created by 杨启晖 on 14/12/21.
//  Copyright (c) 2014年 GE. All rights reserved.
//

#import "RYModel.h"
#import "ForeCastModel.h"
#import "ConditionModel.h"

@interface WeatherModel : RYModel
@property (nonatomic, strong)NSString *created;
@property (nonatomic, strong)NSString *imageURL;
@property (nonatomic, assign)int imageWidth;
@property (nonatomic, assign)int imageHeight;
@property (nonatomic, strong)NSArray<ForeCastModel> *forecast;
@property (nonatomic, strong)ConditionModel *condition;
@end
