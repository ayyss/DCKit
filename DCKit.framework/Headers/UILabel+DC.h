//
//  UILabel+DC.h
//  DCKit
//
//  Created bg DC on 2017/11/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (DC)

- (UILabel *(^)(NSString *))labelText;
- (UILabel *(^)(UIColor *))labelTextColor;
- (UILabel *(^)(UIFont *))labelFont;
- (UILabel *(^)(NSTextAlignment))labelTextAlignment;
- (UILabel *(^)(NSInteger))labelNumberOfLines;

- (void)addLineWithColor:(UIColor *)lineColor lineHeight:(CGFloat)lineHeight;
- (UIView *)returnLineWithColor:(UIColor *)lineColor lineHeight:(CGFloat)lineHeight;

- (void)setAlightLeftAndRightWithWidth:(CGFloat)labelWidth;

/// 文字，颜色
+ (instancetype)labelWithFont:(UIFont *)font
                    textColor:(UIColor *)textColor;

/// 文字，颜色，对齐
+ (instancetype)labelWithFont:(UIFont *)font
                    textColor:(UIColor *)textColor
                textAlignment:(NSTextAlignment)textAlignment;

/// 文字，颜色，自适应宽度
+ (instancetype)labelWithFont:(UIFont *)font
                    textColor:(UIColor *)textColor
               sizeToFitWidth:(BOOL)sizeToFitWidth;

/// 文字，颜色，对齐，自适应宽度
+ (instancetype)labelWithFont:(UIFont *)font
                    textColor:(UIColor *)textColor
                textAlignment:(NSTextAlignment)textAlignment
               sizeToFitWidth:(BOOL)sizeToFitWidth;

@end

NS_ASSUME_NONNULL_END
