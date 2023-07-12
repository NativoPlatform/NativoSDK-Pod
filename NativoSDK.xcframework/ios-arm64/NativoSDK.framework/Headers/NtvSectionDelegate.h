//
//  NtvSectionDelegate.h
//  NativoSDK
//
//  Copyright © 2023 Nativo, Inc. All rights reserved.
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
 @discussion Called when an ad request from [NativoSDK.prefetchAdForSection] or [NativoSDK.placeAdInView] returns.
 @param sectionUrl The section that requested an ad
 @param didGetFill True if ad returned with content. False if successful request was made but no ad was available.
 
 */
- (void)section:(NSString *)sectionUrl didReceiveAd:(BOOL)didGetFill;

/**
 @abstract Notifes when an ad has been assigned to a location.
 @discussion Use this to keep track of what rows contain Nativo ad data in order to update your datasource and insert/reload new rows as needed.
 @note Calling NativoSDK.placeAdInView() may return false if there is no ad available yet. Once the ad is received (request is made automatically), it will be assigned to the location provided and this method will be called. At that point, you can reload/insert into your table/collection view, where the next call to NativoSDK.placeAdInView() will succeed.
 @param sectionUrl the section where ads are being injected.
 @param adData The Nativo ad data for this location
 @param location The location identifier associated with the ad.
 @param container The root container in which the ad belongs
 
 */
- (void)section:(NSString *)sectionUrl didAssignAd:(NtvAdData *)adData toLocation:(id)location container:(UIView *)container;

/**
 @abstract Notifies when an ad, or ad request fails. If `atLocation` is provided it is your responsibility to remove the ad view at the given location.
 @discussion When an ad request fails, or ad content is not available, you may be left with a blank ad unit. This method will be called in these scenarios so that you can remove the ad view from your views.
 @param sectionUrl the section where the ad failed.
 @param location The location identifier associated with the ad. Nil if ad not assigned to location yet.
 @param view The UIView that the ad is placed in. Nil if ad not placed in view yet.
 @param errMsg The error message if any.
 @param container The root container in which the ad belongs

 */
- (void)section:(NSString *)sectionUrl didFailAdAtLocation:(nullable id)location inView:(nullable UIView *)view withError:(nullable NSString *)errMsg container:(nullable UIView *)container;


@optional

/**
 @abstract Notifies when an ad has been placed in view at location. This will be called after `didReceiveAd` and `didAssignAd`, once the is ad injected into the view heirarchy.
 @note May be called multiple times as a user scrolls up and down and views are recycled.
 @param sectionUrl the section where ads are being injected.
 @param adData The Nativo ad data for this location.
 @param view The UIView that the ad is placed in.
 @param location The location identifier associated with the ad.
 @param container The root container in which the ad belongs
 
 */
- (void)section:(NSString *)sectionUrl didPlaceAd:(NtvAdData *)adData inView:(UIView *)view atLocation:(id)location  container:(UIView *)container;


/// @name Ad Placement Click Events

/**
 @abstract Called when native ad is clicked and landing page should be displayed. Use this method to implement how the landing page will be displayed.
 
 */
- (void)section:(NSString *)sectionUrl needsDisplayLandingPage:(nullable UIViewController<NtvLandingPageInterface> *)sponsoredLandingPageViewController;

/**
 @abstract Called when click-out ad is clicked and a web view of some sort should be displayed. Use this method to implement how the web view will be displayed.
 
 */
- (void)section:(NSString *)sectionUrl needsDisplayClickoutURL:(NSURL *)url;


/// @name Handle Full Screen Player

/**
 @abstract Return the view controller where you want the full screen video and story ad player to be injected.
 @discussion Optional method. Control where the full screen player will be injected. By default will inject in `window.rootViewController`. The NtvVideoAdDelegate protocol method 'viewController' will override this if implemented.
 @note If using VAST video demand, the view controller returned here will also be used as a parameter for rendering VAST video. If the view controller returned here does not match the video's parent view controller, the Google IMA SDK will throw an exception.
 @return The view controller where the full screen video and story ad player will be injected.
 
 */
- (UIViewController *)viewControllerForFullScreenInSection:(NSString *)sectionUrl;

/**
@abstract When the user clicks the share button on a video they will be presented with a UIActivityController. By default will be presented using the window's root view controller.
@discussion Optional method. By default will be presented in the window's root view controller.

*/
- (void)section:(NSString *)sectionUrl shouldPresentShareActivity:(UIActivityViewController *)shareActivity;


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



@end
NS_ASSUME_NONNULL_END
