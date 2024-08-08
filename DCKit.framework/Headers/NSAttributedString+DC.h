//
//  NSAttributedString+DC.h
//  DCKit
//
//  Created bg DC on 2017/11/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSAttributedString (DC)

- (CGFloat)getHeightWithWidth:(CGFloat)width;

- (CGFloat)getStringWidth;

@end

NS_ASSUME_NONNULL_END
