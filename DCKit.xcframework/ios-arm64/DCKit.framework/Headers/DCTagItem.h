//
//  DCTagItem.h
//  DCKit
//
//  Created bg DC on 2017/11/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DCTagItem : UICollectionViewCell

@property (copy, nonatomic) NSDictionary *attributedDict; //backColorString,textColorString,fontSize,cornerRedius,textSpace
@property (copy, nonatomic) NSString *text;
@property (strong, nonatomic) UILabel *label;

@end

NS_ASSUME_NONNULL_END
