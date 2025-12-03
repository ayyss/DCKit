//
//  UIButton+DC.h
//  DCKit
//
//  Created bg DC on 2017/11/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ButtonEdgeInsetsStyle) {
    ButtonEdgeInsetsStyle_Top,          ///<图上字下
    ButtonEdgeInsetsStyle_Left,         ///<图左字右
    ButtonEdgeInsetsStyle_Right,        ///<图右字左
    ButtonEdgeInsetsStyle_Bottom        ///<图下字上
};

@interface UIButton (DC)

+ (instancetype)buttonWithTitle:(NSString *)title font:(UIFont *)font textColor:(UIColor *)textColor;

+ (instancetype)buttonWithTitle:(NSString *)title font:(UIFont *)font textColor:(UIColor *)textColor backgroundColor:(UIColor *)backgroundColor;

- (void)layoutWithEdgeInsetsStyle:(ButtonEdgeInsetsStyle)style
                  imageTitleSpace:(CGFloat)space;

- (void)btnDishilight;

@end

NS_ASSUME_NONNULL_END
