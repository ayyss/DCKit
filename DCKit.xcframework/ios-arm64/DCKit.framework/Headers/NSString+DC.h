//
//  NSString+DC.h
//  DCKit
//
//  Created bg DC on 2017/11/14.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (DC)

- (CGFloat)getStringHeightWithWidth:(CGFloat)width font:(UIFont *)font;

- (CGFloat)getStringWidthWithFont:(UIFont *)font;

- (NSString *)stringToMD5String;

@end

NS_ASSUME_NONNULL_END
