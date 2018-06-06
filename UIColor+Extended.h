//
//  UIColor+Extended.h
//  frame
//
//  Created by duonuo on 14-6-20.
//  Copyright (c) 2014年 duonuo. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface UIColor (extended)

+ (UIColor *)hexChangeFloat:(NSString *)hexColor;

+ (UIColor *)hexChangeFloat:(NSString *)hexColor withAlpha:(CGFloat)alpha;

+ (UIColor *)appBgColor;

//颜色渐变
+ (CAGradientLayer *)setGradualChangingColor:(UIView *)view fromColor:(NSString *)fromHexColorStr toColor:(NSString *)toHexColorStr;

@end

//删除空白部分
@interface NSString (PzProject)
- (NSString *)trim;
@end
