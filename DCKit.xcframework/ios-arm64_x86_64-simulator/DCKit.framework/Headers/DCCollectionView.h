//
//  DCCollectionView.h
//  DCKit
//
//  Created bg DC on 2017/11/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class DCCollectionView;

@protocol DCCollectionViewDelegate <UICollectionViewDelegate>

@required
- (void)dc_collectionView:(DCCollectionView *)collectionView newDataSourceAfterMove:(NSArray *)dataSource;

@optional
- (NSArray <NSIndexPath *>*)dc_excludeIndexPathsWhenMoveDragCellCollectionView:(DCCollectionView *)collection;

- (void)dc_collectionView:(DCCollectionView *)collectionView cellWillBeginMoveAtIndexPath:(NSIndexPath *)indexPath;

- (void)dc_collectionView:(DCCollectionView *)collectionView cellDidMovedAtIndexPath:(NSIndexPath *)indexPath;

- (void)dc_collectionView:(DCCollectionView *)collectionView cellEndMovedAtIndexPath:(NSIndexPath *)indexPath;

- (void)dc_collectionView:(DCCollectionView *)collectionView moveCellFromIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath;

@end

@protocol DCCollectionViewDataSource <UICollectionViewDataSource>

@required
- (NSArray *)dc_dataSourceArrayOfCollectionView:(DCCollectionView *)collectionView;

@end


@interface DCCollectionView : UICollectionView

@property (weak, nonatomic) id<DCCollectionViewDelegate> delegate;
@property (weak, nonatomic) id<DCCollectionViewDataSource> dataSource;

@end

NS_ASSUME_NONNULL_END
