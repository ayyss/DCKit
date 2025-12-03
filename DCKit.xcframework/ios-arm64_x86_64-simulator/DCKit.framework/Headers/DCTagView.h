//
//  DCTagView.h
//  DCKit
//
//  Created bg DC on 2017/11/15.
//

#import <UIKit/UIKit.h>
#import <DCKit/DCTagItem.h>

NS_ASSUME_NONNULL_BEGIN

@class DCTagView;

@protocol DCTagViewDelegate <NSObject>

@required
- (NSInteger)tagView:(DCTagView *)tagView numberOfItemsInSection:(NSInteger)section;
- (NSString *)tagView:(DCTagView *)tagView textForItemAtIndexPath:(NSIndexPath *)indexPath;

@optional
- (void)tagView:(DCTagView *)tagView didSelectItemAtIndexPath:(NSIndexPath *)indexPath;
- (void)tagview:(DCTagView *)tagView cellForItem:(DCTagItem *)item atIndexPath:(NSIndexPath *)indexPath;

@end

@interface DCTagView : UIView

- (instancetype)initWithBackColorString:(NSString *)backColorString
                        textColorString:(NSString *)textColorString
                                   font:(UIFont *)font
                           cornerRedius:(CGFloat)cornerRedius
                              textSpace:(CGFloat)textSpace
                              itemSpace:(CGFloat)itemSpace
                             itemHeight:(CGFloat)itemHeight
                              lineSpace:(CGFloat)lineSpace
                               delegate:(id<DCTagViewDelegate>)delegate;

- (void)reloadData;

@property (strong, nonatomic) UIColor *collectionViewColor;

- (CGFloat)contentHeight;

@end

NS_ASSUME_NONNULL_END
