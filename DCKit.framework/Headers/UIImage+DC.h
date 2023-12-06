//
//  UIImage+DC.h
//  DCKit
//
//  Created by a on 2023/11/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (DC)

+ (UIImage *)compressImage:(UIImage *)sourceImage toTargetWidth:(CGFloat)targetWidth;

+ (UIImage *)getTheLaunchImage;

@end

NS_ASSUME_NONNULL_END
