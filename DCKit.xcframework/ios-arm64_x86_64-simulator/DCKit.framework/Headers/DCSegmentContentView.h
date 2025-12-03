//
//  DCSegmentContentView.h
//  DCKit
//
//  Created bg DC on 2017/11/26.
//

#import <UIKit/UIKit.h>
#import <DCKit/DCRecognizerCollectionView.h>

NS_ASSUME_NONNULL_BEGIN

@class DCSegmentContentView;
@protocol DCSegmentContentViewDelegate <NSObject>

@required
- (void)contentViewDidEndChangeIndex:(DCSegmentContentView *)contentView;
- (void)contentViewWillBeginDragging:(DCSegmentContentView *)contentView;
- (void)contentViewDidScroll:(UIScrollView *)scrollView isLeft:(BOOL)isLeft;
- (NSInteger)numberOfContentView;
- (UIView *)viewForContentForIndex:(NSInteger)index;
- (CGSize)sizeForContentItem;

@end

@interface DCSegmentContentView : UIView

@property (weak, nonatomic) id<DCSegmentContentViewDelegate> delegate;
@property (strong, nonatomic) DCRecognizerCollectionView *collectionView;
@property (assign, nonatomic) NSInteger currentIndex;

- (void)onStatusBarOrientationChange;
- (void)moveToIndex:(NSInteger)index animation:(BOOL)animation;

@end

NS_ASSUME_NONNULL_END
