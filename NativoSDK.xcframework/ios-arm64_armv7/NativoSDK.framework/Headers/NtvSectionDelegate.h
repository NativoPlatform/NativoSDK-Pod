//
//  NtvSectionDelegate.h
//  NativoSDK
//
//  Copyright © 2021 Nativo, Inc. All rights reserved.
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
 @abstract Notification of an ad response.
 @discussion Called when an ad request from [NativoSDK.prefetchAdForSection] or [NativoSDK.placeAdInView] returns. Use this to reload your views as needed.
 @param sectionUrl The section that requested an ad
 @param didGetFill True if ad returned with content. False if successful request was made but no ad was available.
 
 */
- (void)section:(NSString *)sectionUrl didReceiveAd:(BOOL)didGetFill;

/**
 @abstract Notifes when an ad has been assigned to a location.
 @discussion Use this to keep track of what rows contain Nativo ad data in order to update your datasource and inject new rows if needed.
 @note Calling NativoSDK.placeAdInView() the first time, without a previous prefetch call, will return false and will make an async request for a new ad. When the new ad returns, this method will be called and you will need to reload your views and call NativoSDK.placeAdInView() at the location provided.
 @param sectionUrl the section where ads are being injected.
 @param adData The Nativo ad data for this location
 @param identifier The location identifier associated with the ad.
 @param container The root container in which the ad belongs
 
 */
- (void)section:(NSString *)sectionUrl didAssignAd:(NtvAdData *)adData toLocation:(id)identifier container:(UIView *)container;

/**
 @abstract Notifies when an ad, or ad request fails. If `atLocation` is provided it is your responsibility to remove the ad view at the given location.
 @discussion When an ad request fails, or ad content is not available, you may be left with a blank ad unit. This method will be called in these scenarios so that you can remove the ad view and refresh your content.
 @param sectionUrl the section where the ad failed.
 @param identifier The location identifier associated with the ad. Nil if ad not assigned to location yet.
 @param view The UIView that the ad is placed in. Nil if ad not placed in view yet.
 @param errMsg The error message if any.
 @param container The root container in which the ad belongs
 @note If using the example implementation from the guide, calling `reloadData()` on your UITableView or UICollectionView should be all that is needed here.

 */
- (void)section:(NSString *)sectionUrl didFailAdAtLocation:(nullable id)identifier inView:(nullable UIView *)view withError:(nullable NSString *)errMsg container:(nullable UIView *)container;


@optional

/**
 @abstract Notifies when an ad has been placed in view at location.
 @note May be called multiple times as a user scrolls up and down and views are recycled.
 @param sectionUrl the section where ads are being injected.
 @param adData The Nativo ad data for this location.
 @param view The UIView that the ad is placed in.
 @param identifier The location identifier associated with the ad.
 @param container The root container in which the ad belongs
 
 */
- (void)section:(NSString *)sectionUrl didPlaceAd:(NtvAdData *)adData inView:(UIView *)view atLocation:(id)identifier  container:(UIView *)container;


/// @name Ad Placement Click Events

/**
 @abstract Called when native ad is clicked and landing page should be displayed. Use this method to implement how the landing page will be displayed.
 
 */
- (void)section:(NSString *)sectionUrl needsDisplayLandingPage:(nullable UIViewController<NtvLandingPageInterface> *)sponsoredLandingPageViewController;

/**
 @abstract Called when click-out ad is clicked and a web view of some sort should be displayed. Use this method to implement how the web view will be displayed.
 
 */
- (void)section:(NSString *)sectionUrl needsDisplayClickoutURL:(NSURL *)url;



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



/// @name Handle Full Screen Player

/**
 @abstract Return the view controller where you want the full screen video and story ad player to be injected.
 @discussion Optional method. Control where the full screen player will be injected. By default will inject in `window.rootViewController`. The NtvVideoAdDelegate protocol method 'viewController' will override this if implemented.
 @note If using VAST video demand, the view controller returned here will also be used as a parameter for rendering VAST video. If the view controller returned here does not match the video's parent view controller, the Google IMA SDK will throw an exception.
 @return The view controller where the full screen video and story ad player will be injected.
 
 */
- (UIViewController *)viewControllerForFullScreenInSection:(NSString *)sectionUrl;


/**
 @abstract Return the view where you want the full screen video and story ad player to be injected.
 @discussion Deprecated. Please use `viewControllerForFullScreenInSection` instead. By default will inject into root window.
 @return The view where the full screen video and story ad player will be injected.
 
 */
- (UIView *)getContainerForFullScreenVideoInSection:(NSString *)sectionUrl __deprecated;


/**
@abstract When the user clicks the share button on a video they will be presented with a UIActivityController. By default will be presented using the window's root view controller.
@discussion Optional method. By default will be presented in the window's root view controller.

*/
- (void)section:(NSString *)sectionUrl shouldPresentShareActivity:(UIActivityViewController *)shareActivity;


@end
NS_ASSUME_NONNULL_END
