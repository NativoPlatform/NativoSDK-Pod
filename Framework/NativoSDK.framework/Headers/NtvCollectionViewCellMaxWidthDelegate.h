//
//  NtvCollectionViewCellMaxWidthDelegate.h
//  NativoSDK
//
//  Copyright © 2019 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Optional protocol used when implementing a UICollectionView with automatic sizing cells.
 Use with Nativo ad cells to set the desired width of the cell. When autolayout constraints are setup appropriately the cell's height will grow dynamically.
 See https://sdk.nativo.com/v5.0/docs/cell-resizing-ios for more information.
 
 */
@protocol NtvCollectionViewCellMaxWidthDelegate <NSObject>

- (void)setMaxWidth:(CGFloat)maxWidth;

@end
