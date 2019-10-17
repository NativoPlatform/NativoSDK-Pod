//
//  NtvSectionDelegate.h
//  NativoSDK
//
//  Copyright © 2019 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NtvLandingPageInterface.h"
#import "NtvAdData.h"
@class NtvAdData;

NS_ASSUME_NONNULL_BEGIN

// Section reload reasons
extern NSString *const NtvSectionReloadReasonRemoveView;
extern NSString *const NtvSectionReloadReasonInjectView;
extern NSString *const NtvSectionReloadReasonResizeView;


/**
 Implementers of this protocol decide where ads should be placed, handle how an ad's landing page gets displayed, and are notified when ads are received or a request fails.
 
 */
@protocol NtvSectionDelegate <NSObject>

/// @name Manage Ad Placements

/**
 @abstract Reload the views where ads are served. Typically done by reloading data of a UITableView or UICollectionView.
 @discussion Called when the view were ad is served needs to be refreshed. Typically this happens for one of three reasons:
 1. An ad that is in loading state doesn't get filled, and needs to be removed
 2. There is ad content available that needs to be injected into a view
 3. The height of the view passed in does not match the height of Nib registered for the ad type. Need to reload will appropriate sized view.
 @param identifier The location identifier associated with the ad.
 @param reason A string indicating the reason for reloading. Compare using constants `NtvSectionReloadReasonRemoveView`, `NtvSectionReloadReasonInjectView`, and `NtvSectionReloadReasonResizeView`.
 @note Reloading with `UITableView` or `UICollectionView` will automatically cause the ad placeholder to be removed or resized. You should implement the delegate method `heightForRowAtIndex:` and specify the correct height for ad type in given row.
 
 */
- (void)section:(NSString *)sectionUrl needsReloadDatasourceAtLocationIdentifier:(id)identifier forReason:(NSString *)reason;


@optional


/**
 @abstract Return `YES` if given index should be an ad placement.
 @discussion Only required if using table/collection view API to dequeue cells in a table or collection view. Using this method you can indicate to the SDK where ad placements should be.
 
 */
- (BOOL)section:(NSString *)sectionUrl shouldPlaceAdAtIndex:(NSIndexPath *)index;


/// @name Register Nibs

/**
 @abstract Return the file name of a specific nib to be used with an ad in the given section, placement identifier, and template type.
 @discussion Optional method used if you need specific ad layouts for different sections or placements. Only loads from the main bundle.
 @param sectionUrl The section where ads are being injected.
 @param templateType The template type associated with an certain ads (Native, Video, Standard Display, or LandingPage).
 @param locationIdentifier The location identifier of where the Nib should be used.
 @return The file name of the nib to be used for the specified section, placement identifier and template type. Returning `nil` will default to nib or reuse identifier set in [NativoSDK registerNib:forAdTemplateType:] if set.
 
 */
- (nullable NSString *)section:(NSString *)sectionUrl registerNibNameForAdTemplateType:(NtvAdTemplateType)templateType atLocationIdentifier:(id)locationIdentifier;

/**
 @abstract Return the reuse identifier of a cell that will be used for ads in the given section, placement identifier, and template type.
 @discussion Optional method used if you need specific ad layouts for different sections or placements.
 @param sectionUrl The section where ads are being injected.
 @param templateType The template type associated with the ad (Native, Video, or Standard Display).
 @param locationIdentifier The location identifier of where the Nib should be used.
 @return The reuse identifier of the cell to be used for the specified section, placement identifier and template type. Returning `nil` will default to nib or reuse identifier set in [NativoSDK registerNib:forAdTemplateType:] if set.
 
 */
- (nullable NSString *)section:(NSString *)sectionUrl registerReuseIdForAdTemplateType:(NtvAdTemplateType)templateType atLocationIdentifier:(id)locationIdentifier;

/**
 @abstract Return the class of a view that will be used for ads in the given section, placement identifier, and template type.
 @discussion Optional method used if you need specific ad layouts for different sections or placements.
 @param sectionUrl The section where ads are being injected.
 @param templateType The template type associated with the ad (Native, Video, or Standard Display).
 @param locationIdentifier The location identifier of where the Nib should be used.
 @return The reuse identifier of the cell to be used for the specified section, placement identifier and template type. Returning `nil` will default to the class, nib, or reuse identifier previously registered.
 
 */
- (nullable Class)section:(NSString *)sectionUrl registerClassNameForAdTemplateType:(NtvAdTemplateType)templateType atLocationIdentifier:(id)locationIdentifier;


/// @name Ad Placement Click Events

/**
 @abstract Called when native ad is clicked and landing page should be displayed. Use this method to implement how the landing page will be displayed.
 
 */
- (void)section:(NSString *)sectionUrl needsDisplayLandingPage:(nullable UIViewController<NtvLandingPageInterface> *)sponsoredLandingPageViewController;

/**
 @abstract Called when click-out ad is clicked and a web view of some sort should be displayed. Use this method to implement how the web view will be displayed.
 
 */
- (void)section:(NSString *)sectionUrl needsDisplayClickoutURL:(NSURL *)url;


/// @name Handle Video

/**
 @abstract Return the view where you want the full screen video controls to be injected. Default is `window.rootViewController.view`.
 @discussion Optional method. By default will inject in `window.rootViewController.view`.
 @return The view where the full screen video controls will be injected.
 
 */
- (UIView *)getContainerForFullScreenVideoInSection:(NSString *)sectionUrl;

/**
@abstract When the user clicks the share button on a video they will be presented with a UIActivityController. By default will be presented using the window's root view controller.
@discussion Optional method. By default will be presented in the window's root view controller.

*/
- (void)section:(NSString *)sectionUrl shouldPresentShareActivity:(UIActivityViewController *)shareActivity;


/// @name Handle Ad Response

/**
 @abstract Notify delegate of ad received. Optional protocol.
 
 */
- (void)section:(NSString *)sectionUrl didReceiveAd:(NtvAdData *)adData;

/**
 @abstract Notify delegate of ad request failure.
 
 */
- (void)section:(NSString *)sectionUrl requestDidFailWithError:(nullable NSError *)error;


@end
NS_ASSUME_NONNULL_END
