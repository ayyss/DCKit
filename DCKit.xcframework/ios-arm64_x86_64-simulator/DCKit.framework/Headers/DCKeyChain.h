//
//  DCKeyChain.h
//  DCKit
//
//  Created bg DC on 2017/11/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DCKeyChain : NSObject

+ (void)save:(NSString *)service data:(id)data;

+ (id)load:(NSString *)service;

+ (void)deleteData:(NSString *)service;

@end

NS_ASSUME_NONNULL_END
