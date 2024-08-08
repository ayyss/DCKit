//
//  UIImageView+DC.h
//  DCKit
//
//  Created bg DC on 2017/11/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (DC)

- (void)dc_setImageWithURLString:(nullable NSString *)urlString placeholderImage:(nullable NSString *)placeholder;

@end

NS_ASSUME_NONNULL_END
