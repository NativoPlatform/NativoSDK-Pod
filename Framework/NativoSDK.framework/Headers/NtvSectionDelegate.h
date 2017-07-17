//
//  NtvSectionDelegate.h
//  NativoSDK
//
//  Copyright © 2017 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NtvLandingPageInterface.h"
@class NtvAdData;

/**
 Implementers of this protocol decide where ads should be placed, handle how an ad's landing page gets displayed, and are notified when ads are recieved or a request fails.
 */
NS_ASSUME_NONNULL_BEGIN
@protocol NtvSectionDelegate <NSObject>

/// @name Manage Ad Placement

/**
 @abstract Return `YES` if given index should be an ad placement.

 */
- (BOOL)section:(NSString *)sectionUrl shouldPlaceAdAtIndex:(NSIndexPath *)index;

/**
 @abstract Called when ads that are in loading state don't get filled. This is the chance for the delegate to remove the cell or view where ad would have been. Typically done by reloading data of `UITableView` or `UICollectionView`.
 
 */
- (void)section:(NSString *)sectionUrl needsReloadDatasourceAtIndex:(nullable NSIndexPath *)index;


@optional

/// @name Display Ad

/**
 @abstract Called when native ad is clicked and landing page should be displayed. Use this method to implement how the landing page will be displayed.
 
 */
- (void)section:(NSString *)sectionUrl needsDisplayLandingPage:(nullable UIViewController<NtvLandingPageInterface> *)sponsoredLandingPageViewController;

/**
 @abstract Called when click-out ad is clicked and a web view of some sort should be displayed. Use this method to implement how the web view will be displayed.
 
 */
- (void)section:(NSString *)sectionUrl needsDisplayClickoutURL:(NSURL *)url;


/// @name Handle Ad Response

/**
 @abstract Notify delegate of ads received. Optional protocol.
 
 */
- (void)section:(NSString *)sectionUrl didRecieveAds:(NSArray<NtvAdData *> *)ads;

/**
 @abstract Notify delegate of ad request failure.
 
 */
- (void)section:(NSString *)sectionUrl requestDidFailWithError:(nullable NSError *)error;


@end
NS_ASSUME_NONNULL_END
