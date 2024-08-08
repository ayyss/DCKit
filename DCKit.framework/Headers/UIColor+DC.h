//
//  UIColor+DC.h
//  DCKit
//
//  Created bg DC on 2017/11/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (DC)

+ (UIColor *)randomColor;
+ (UIColor *)changeRGBColor:(UIColor *)color toColor:(UIColor *)toColor value:(CGFloat)value;

@end

NS_ASSUME_NONNULL_END
