//
//  HmIFEXPay.h
//  IFEXPay
//
//  Created by 赵海明 on 2019/1/22.
//  Copyright © 2019 ulaiber. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HmBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HmIFEXPay : NSObject

+ (instancetype)sharedPay;
- (void)ifexPay:(HmBaseModel *)req;

@end

NS_ASSUME_NONNULL_END
