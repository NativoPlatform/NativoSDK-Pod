//
//  NtvCollectionViewCell.h
//  NativoSDK
//
//  Copyright © 2021 Nativo, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <NativoSDK/NtvCollectionViewCellMaxWidthDelegate.h>

/**
 Register this cell with your UICollectionView in order to use it as the view when calling `NativoSDK.placeAdInView()`. This class conforms to `NtvCollectionViewCellMaxWidthDelegate` which allows you to adjust it's width dynamically so that your  UICollectionViewFlowLayout can work correctly.
 See https://sdk.nativo.com/docs/cell-resizing-ios for more information.
 
 */
@interface NtvCollectionViewCell : UICollectionViewCell <NtvCollectionViewCellMaxWidthDelegate>
@property (nonatomic) NSLayoutConstraint *maxWidthConstraint;
@end
