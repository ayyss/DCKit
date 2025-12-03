//
//  DCSegmentBar.h
//  DCKit
//
//  Created bg DC on 2017/11/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class DCSegmentBarItem;
@protocol DCSegmentBarDelegate <NSObject>

@required
- (void)didSelectedIndex:(NSInteger)index;
- (NSInteger)numberOfTitles;
- (NSString *)titleForIndex:(NSInteger)index;
- (CGFloat)widthForIndex:(NSInteger)index;

- (CGFloat)normalFontSize;
- (CGFloat)highLightFontSize;

- (UIColor *)normalFontColor;
- (UIColor *)highLightFontColor;

- (UIFontWeight)normalFontWeight;
- (UIFontWeight)highLightFontWeight;

- (UIEdgeInsets)insetsForTitleBar;
- (CGFloat)interitemSpacingForTitleBar;

- (CGFloat)titleBarLineWidth;

@optional

- (void)customConfigTitleItem:(DCSegmentBarItem *)item index:(NSInteger)index;

- (UIColor *)lineColor;
- (void)titleBarDidScroll;
- (void)titleBarDidEndScroll;
- (BOOL)hideScrollLine;
- (CGFloat)lineHeight;
- (CGFloat)lineCornerRadius;

@end

@interface DCSegmentBar : UIView

@property (strong, nonatomic) UICollectionView *collectionView;
@property (strong, nonatomic) UIView *backLine;

@property (assign, nonatomic) NSInteger firstIndex;
@property (assign, nonatomic) NSInteger currentIndex;

@property (assign, nonatomic) BOOL isDragging;

@property (assign, nonatomic) CGFloat lastAssociateViewOffsetX;

@property (weak, nonatomic) UIView *associateView;
@property (weak, nonatomic) id<DCSegmentBarDelegate> delegate;

- (void)reload;
- (void)responseScrollAction:(UIScrollView *)scrollView isLeft:(BOOL)isLeft;

@end

NS_ASSUME_NONNULL_END
