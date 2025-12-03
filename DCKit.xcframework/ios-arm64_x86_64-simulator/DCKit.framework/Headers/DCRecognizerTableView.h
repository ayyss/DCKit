//
//  DCRecognizerTableView.h
//  DCKit
//
//  Created by DC on 2018/9/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DCRecognizerTableView : UITableView<UIGestureRecognizerDelegate>

@property (assign, nonatomic) BOOL shouldRecognize;

@end

NS_ASSUME_NONNULL_END
