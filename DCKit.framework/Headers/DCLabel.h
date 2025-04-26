//
//  DCLabel.h
//  DCKit
//
//  Created bg DC on 2017/11/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DCLabel : UILabel

@property (assign, nonatomic) UIEdgeInsets dc_textInsets;
@property (assign, nonatomic) CGFloat dcLeftTextInset;
@property (assign, nonatomic) CGFloat dcRightTextInset;
@property (assign, nonatomic) CGFloat dcTopTextInset;
@property (assign, nonatomic) CGFloat dcBottomTextInset;

@end

NS_ASSUME_NONNULL_END
