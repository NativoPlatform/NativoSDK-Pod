//
//  NtvSectionDelegate.h
//  NativoSDK
//
//  Copyright © 2020 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <NativoSDK/NtvLandingPageInterface.h>
#import <NativoSDK/NtvAdData.h>
@class NtvAdData;

NS_ASSUME_NONNULL_BEGIN


/**
 Implementers of this protocol decide where ads should be placed, handle how an ad's landing page gets displayed, and are notified when ads are received or a request fails.
 
 */
@protocol NtvSectionDelegate <NSObject>

/// @name Manage Ad Placements

/**
 @abstract Called when a new ad should be placed in view. Reload the table, collection, or scroll views and call NativoSDK.placeAdInView() to inject the ad.
 @discussion Calling NativoSDK.placeAdInView() the first time, without a previous prefetch call, will return false and will make an async request for a new ad. When the new ad returns, this method will be called. Called when an ad was requested asynchronous and has returned with fill. You will need to reload views and call NativoSDK.placeAdInView() at this location.
 @param sectionUrl the section where ads are being injected.
 @param identifier The location identifier associated with the ad.
 @note If using the example implementation from the guide, calling `reloadData()` on your UITableView or UICollectionView should be all that is needed here.
 
 */
- (void)section:(NSString *)sectionUrl needsPlaceAdInViewAtLocation:(id)identifier;

/**
 @abstract Remove the ad view at the given location. Typically done by reloading data of a UITableView or UICollectionView.
 @discussion When an ad request fails, or ad content is not available, you may be left with a blank ad unit. This method will be called in these scenarios so that you can remove the ad view and refresh your content.
 @param sectionUrl the section where ads are being injected.
 @param identifier The location identifier associated with the ad.
 @note If using the example implementation from the guide, calling `reloadData()` on your UITableView or UICollectionView should be all that is needed here.

 */
- (void)section:(NSString *)sectionUrl needsRemoveAdViewAtLocation:(id)identifier;


@optional

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
 @abstract Return the view where you want the full screen video and Nativo Story ads to be injected. Default is `window.rootViewController.view`.
 @discussion Optional method. By default will inject in `window.rootViewController.view`.
 @return The view where the full screen video and Nativo Story ads will be injected.
 
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
