//
//  GradientViews.h
//  Beeminder
//
//  Created by Andy Brett on 8/4/12.
//  Copyright (c) 2012 Andy Brett. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GradientViews : NSObject

+(void) addGradient:(UIView *)view withColor:(UIColor *)color cornerRadius:(CGFloat)cornerRadius borderColor:(UIColor *)borderColor;

@end
