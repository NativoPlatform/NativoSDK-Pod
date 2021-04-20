//
//  NtvCollectionViewCellMaxWidthDelegate.h
//  NativoSDK
//
//  Copyright © 2021 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Optional protocol used when you want to implementing automatic sizing cells within UICollectionViewFlowLayout.
 Allows you to set a width constrain on views that implement. When autolayout constraints are setup appropriately the cell's height will size dynamically based on inner content.
 See https://sdk.nativo.com/docs/cell-resizing-ios for more information.
 
 */
@protocol NtvCollectionViewCellMaxWidthDelegate <NSObject>

/**
@abstract Set the maximum width of the cell
@discussion Implement this method in your UICollectionViewCell subclass. Create a layout constraint for width and place it in the cell.
@param maxWidth the desired width of the cell
*/
- (void)setMaxWidth:(CGFloat)maxWidth;

@end
