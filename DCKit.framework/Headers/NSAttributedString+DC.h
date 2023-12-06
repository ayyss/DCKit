//
//  NSAttributedString+DC.h
//  DCKit
//
//  Created by a on 2023/11/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSAttributedString (DC)

- (CGFloat)getHeightWithWidth:(CGFloat)width;

- (CGFloat)getStringWidth;

@end

NS_ASSUME_NONNULL_END
