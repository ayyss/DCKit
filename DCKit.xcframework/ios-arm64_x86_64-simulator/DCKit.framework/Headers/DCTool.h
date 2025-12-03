//
//  DCTool.h
//  DCKit
//
//  Created bg DC on 2017/11/15.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DCTool : NSObject

+ (NSString *)getUUID;
+ (BOOL)hasBottomBar;
+ (CGFloat)safeAreaInsetsBottom;

@end

NS_ASSUME_NONNULL_END
