//
//  DCSegmentController.h
//  DCKit
//
//  Created bg DC on 2017/11/26.
//

#import <UIKit/UIKit.h>
#import <DCKit/DCSegmentBar.h>
#import <DCKit/DCSegmentContentView.h>
#import <DCKit/DCSegmentBarItem.h>


NS_ASSUME_NONNULL_BEGIN

@protocol DCSegmentControllerDelegate <NSObject>

@required
- (CGFloat)heightForTitleBar;
- (NSInteger)numberOfTitleBarTitles;
- (NSString *)titleForTitleBarIndex:(NSInteger)index;
- (CGFloat)widthForTitleBarIndex:(NSInteger)index;

- (NSInteger)numberOfContentView;
- (UIViewController *)controllerForContentForIndex:(NSInteger)index;

- (CGFloat)normalFontSize;
- (CGFloat)highLightFontSize;

- (UIFontWeight)normalFontWeight;
- (UIFontWeight)highLightFontWeight;

@optional
- (void)didSelectedTitleBarIndex:(NSInteger)index;
- (void)configTitleItem:(DCSegmentBarItem *)item index:(NSInteger)index;
- (void)didScrollToIndexOfContentView:(NSInteger)index;
- (void)changeSuperScrollStatus:(BOOL)enable;

- (UIEdgeInsets)insetsForTitleBar;
- (CGFloat)interitemSpacingForTitleBar;

- (UIColor *)normalFontColor;
- (UIColor *)highLightFontColor;

- (CGFloat)titleBarLineWidth;

- (BOOL)hideScrollLine;
- (UIColor *)lineColor;

- (CGFloat)lineHeight;
- (CGFloat)lineCornerRadius;

@end

@interface DCSegmentController : UIViewController

- (void)configIndex:(NSInteger)index;
- (void)configCurrentIndex;
@property (assign, nonatomic) BOOL titleBarShouldScroll;
@property (assign, nonatomic) BOOL scrollEnable;
@property (weak, nonatomic) id<DCSegmentControllerDelegate> delegate;

- (void)reloadData;


@property (strong, nonatomic) DCSegmentBar *titleBar;
@property (strong, nonatomic) DCSegmentContentView *contentView;

@end

NS_ASSUME_NONNULL_END
