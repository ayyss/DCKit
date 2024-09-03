//
//  UIImage+DC.h
//  DCKit
//
//  Created bg DC on 2017/11/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (DC)

- (NSData *)compressBySizeWithMaxLength:(NSUInteger)maxLength;

+ (UIImage *)compressImage:(UIImage *)sourceImage toTargetWidth:(CGFloat)targetWidth;

+ (UIImage *)getTheLaunchImage;

@end

NS_ASSUME_NONNULL_END
