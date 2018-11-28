//
//  NativoSDK.h
//  NativoSDK
//
//  Copyright © 2017 Nativo, Inc. All rights reserved.
//

//! Project version number for NativoSDK.
extern double NativoSDKVersionNumber;

//! Project version string for NativoSDK.
extern const unsigned char NativoSDKVersionString[];

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UIWebView+NativoUtil.h"
#import "WKWebView+NativoUtil.h"
#import "NtvContentWebView.h"
#import "NtvAdData.h"
#import "NtvSharing.h"
#import "NtvAdInterface.h"
#import "NtvVideoAdInterface.h"
#import "NtvLandingPageInterface.h"
#import "NtvSectionDelegate.h"
#import "NtvVideoFullScreenControlsDelegate.h"

static NSString * _Nonnull const kNativoSDKVersion = @"4.3.6";



/**
 The `NativoSDK` is used to retrieve true native, native display, and video ads from Nativo. The NativoSDK is packed with features that will help you integrate native ads in your feed in a short amount of time.
 
 The NativoSDK has two main APIs for injecting ads into your views. The first is the table/collection view API, the second is the View API. The Table/Collection view API works by allowing it to manage how your cells get dequeued from a `UITableView` or `UICollectionView`. This is the most streamlined and convenient API for getting ad injected into your feed in no time. The View API works by simply passing in a `UIView` container which will be injected with ad content. In both APIs, the ad's view will be created using a nib that you registered previously using [NativoSDK registerNib:forAdTemplateType:], or via the `NtvSectionDelegate` method `registerNibNameForAdTemplateType:atLocationIdentifier:`.
 
 __Version__: 4.3.6
 
 */
NS_ASSUME_NONNULL_BEGIN
@interface NativoSDK : NSObject


/** @name Set Delegates */

/**
 @abstract Set the delegate to be notified of section events. Before calling any Nativo methods you must set the delegate for your section.
 @param delegate The ViewController or object that conforms to NtvSectionDelegate.
 @param sectionUrl The section URL of the section. Please contact your account manager at Nativo for details.
 
 */
+ (void)setSectionDelegate:(id<NtvSectionDelegate>)delegate forSection:(NSString *)sectionUrl;



/** @name Register Ad Templates */

/**
 @abstract Register nib for a specific ad type for all sections and placements.
 @discussion Use this method to specify which nib should be used for each template type. This will set that nib to be used globally across all sections and placements. To set a nib for a specific section or placement, you must use the `NtvSectionDelegate` method - `section:registerNibNameForAdTemplateType:atLocationIdentifier:`
 @note The nib's class must conform to NtvAdInterface, NtvVideoAdInterface, or NtvLandingPageInterface, depending on the template type it was registered with.
 @param nib The `UINib` that builds a class that implements one of the NtvAdInterface protocols.
 @param templateType The template type that dictates if this Nib should be used for Native ads, Video ads, or sponsored content landing pages. The Nib's class must conform to NtvAdInterface, NtvVideoAdInterface, or NtvLandingPageInterface.
 
 */
+ (void)registerNib:(UINib *)nib forAdTemplateType:(NtvAdTemplateType)templateType;



/** @name Table/Collection View API */

/**
 @abstract Dequeue cell from table view. Use this method instead of [UITableView dequeueReusableCellWithIdentifier:]. Will attempt to inject ads at the index paths specified by the section delegate, otherwise returns cell with the reuse identifier specified.
 @discussion This is the main method you should use to request and manage ads in your app. For each index path the `NtvSectionDelegate` will be asked if it should become an ad placement or not. If yes, it will make a request for an ad and attempt to fill the cell asynchronously. After calling this method, you must check provided cell's [reuseIdentifier](http://apple.co/2m5TeZ1) to know if the cell returned is an ad or not. If the reuse identifier matches the reuse identifier you passed in, then it does not contain an ad and should be populated with data as normal. Otherwise it contains ad data and no additional work is needed. If ad data is not available, the section delegate [NtvSectionDelegate section:needsReloadDatasourceAtLocationIdentifier:forReason:] will be called so that the view can be removed on next reload.
 @param tableView The `UITableView` you are using to render your feed. Will also be used for ad tracking.
 @param reuseIdentifier The reuse identifier string that maps to your cells [reuseIdentifier](http://apple.co/2m5TeZ1)
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param index The index path where this ad is being placed.
 @param options Dictionary of options used to request ads. Pass 'nil' for no options.
 @return A cell with Nativo ad content if there is ad data available at given index path, otherwise a cell dequeued using the reuse identifier passed in.
 
 */
+ (nullable __kindof UITableViewCell *)dequeueCellWithAdFromTableView:(UITableView *)tableView usingReuseIdentifierIfNoAd:(NSString *)reuseIdentifier forSection:(NSString *)sectionUrl atPlacementIndex:(NSIndexPath *)index options:(nullable NSDictionary<NSString *, NSString *> *)options;

/**
 @abstract Dequeue cell from collection view. Use this method instead of [UICollectionView dequeueReusableCellWithReuseIdentifier:]. Will attempt to inject ads at the index paths specified by the section delegate, otherwise returns cell with the reuse identifier specified.
 @discussion This is the main method you should use to request and manage ads in your app. For each index path the `NtvSectionDelegate` will be asked if it should become an ad placement or not. If yes, it will make a request for an ad and attempt to fill the cell asynchronously. After calling this method, you must check provided cell's [reuseIdentifier](http://apple.co/2m5TeZ1) to know if the cell returned is an ad or not. If the reuse identifier matches the reuse identifier you passed in, then it does not contain an ad and should be populated with data as normal. Otherwise it contains ad data and no additional work is needed. If ad data is not available, the section delegate [NtvSectionDelegate section:needsReloadDatasourceAtLocationIdentifier:forReason:] will be called so that the view can be removed on next reload.
 @param collectionView The `UICollectionView` you are using to render your feed. Will also be used for ad tracking.
 @param reuseIdentifier The reuse identifier string that maps to your cells [reuseIdentifier](http://apple.co/2m5Bmxw)
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param index The index path where this ad is being placed.
 @param options Dictionary of options used to request ads. Pass 'nil' for no options.
 @return A cell with Nativo ad content if there is ad data available at given index path, otherwise a cell dequeued using the reuse identifier passed in.
 
 */
+ (nullable __kindof UICollectionViewCell *)dequeueCellWithAdFromCollectionView:(UICollectionView *)collectionView usingReuseIdentifierIfNoAd:(NSString *)reuseIdentifier forSection:(NSString *)sectionUrl atPlacementIndex:(NSIndexPath *)index options:(nullable NSDictionary<NSString *, NSString *> *)options;



/** @name View API */

/**
 @abstract View Ad Injection API. Attempts to place an ad in the view provided.
 @discussion Asynchronously injects view with ad data at given indexPath. If ad data is not available, the section delegate [NtvSectionDelegate section:needsReloadDatasourceAtLocationIdentifier:forReason:] will be called so that the delegate can remove the view.
 @param view UIView where ad will be injected.
 @param identifier The location identifier with which the ad will be associated.
 @param container The view that contains the ad placement. Used for tracking purposes.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param options Dictionary of options used to request ads. Pass 'nil' for no options.
 @return Will return true if Nativo ad returned with fill and was successfully injected into the view
 
 */
+ (BOOL)placeAdInView:(UIView *)view atLocationIdentifier:(id)identifier inContainer:(UIScrollView *)container forSection:(NSString *)sectionUrl options:(nullable NSDictionary<NSString *, NSString *> *)options;

/**
 @abstract Deprecated. No longer needed and may safely be removed. All tracking scenarios are handled automatically.
 @param view The view to be tracked. View should be nested in UIScrollView.
 @param identifier The location identifier or index path with which the ad is associated.
 @param container The scroll view that contains the ad placement. Used for tracking purposes.
 @param sectionUrl The section identifier used to request ads from Nativo.
 
 */
+ (void)trackViewWithNoAdFill:(UIView *)view atLocationIdentifier:(id)identifier inContainer:(UIScrollView *)container forSection:(NSString *)sectionUrl __deprecated_msg("No longer needed and may safely be removed. All tracking scenarios are handled automatically.");

/** @name Manage Placements */

/**
 @abstract Optionally map an ad placement to a specific indexPath in your table or collection view.
 @discussion The placement ID will be sent to you from your account manager as needed.
 @param placementId The id of the placement that should be requested on the indexPath. Will be given to you by your representative at Nativo.
 @param indexPath The index path with which the ad is associated.
 @param sectionUrl The section identifier that the placement belongs to.
 
 */
+ (void)mapPlacementId:(NSNumber *)placementId toIndexPath:(NSIndexPath *)indexPath inSection:(NSString *)sectionUrl;

/**
 @abstract Optionally map an ad placement to a specific identifier used with the View API - 'placeAdInView'.
 @discussion The placement ID will be sent to you from your account manager as needed.
 @param placementId The id of the placement that should be requested. Will be given to you by your representative at Nativo.
 @param identifier The location identifier with which the ad will be associated.
 @param sectionUrl The section identifier that the placement belongs to.
 
 */
+ (void)mapPlacementId:(NSNumber *)placementId toLocationIdentifier:(id)identifier inSection:(NSString *)sectionUrl;



/** @name Manage Datasource */

/**
 @abstract Modify an `NSIndexPath` from a table or collection view to adjust for any ads received.
 @discussion Used to get an adjusted an indexPath that has been modified to account for the number of ads that have been received. Used to prevent items in feed from being skipped/overridden by ads. For example, lets say there exists 5 articles in your datasource, and you have one ad at the third row. That makes 6 rows total (indexPaths.row 0-5). Lets say the user clicks on row 4. Now if even though it is the 4th row, you need to access the 3rd item in your datasource, since first row = datasource[0], second row = datasource[1], third row is nativo ad, then forth row = datasource[2]. If you had used the vanilla indexPath you would have accessed datasource[3] and an item in your feed would have been skipped. Using this method you can prevent items in your feed from getting skipped, or worse, array out of bounds errors.
 @param indexPath The indexPath provided by the `UITableView` or `UICollectionView` delegate methods.
 @param sectionUrl The Nativo section identifier used in the current section.
 @return Modified `NSIndexPath` based on number of ads with content received.
 
 */
+ (NSIndexPath *)getAdjustedIndexPath:(NSIndexPath *)indexPath forAdsInjectedInSection:(NSString *)sectionUrl;

/**
 @abstract Get the number of ads in the section.
 @discussion You will need this method when a `UITableViewDataSource` or `UICollectionViewDataSource` protocol method asks you for the number of rows. Use this method to provide an accurate count based on the number of ads received that have fill.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param section The section of the `UITableView` or `UICollectionView`.
 @param itemsCount The current number of items in your datasource for given section
 @return Number of ads with content in section.
 
 */
+ (NSInteger)getNumberOfAdsInSection:(NSString *)sectionUrl inTableOrCollectionSection:(NSInteger)section forNumberOfItemsInDatasource:(NSInteger)itemsCount;

/**
 @abstract Reset the list of ads that have been received in a section.
 @discussion This will force the Nativo server to return ads to your app that may already have been received.
 @param sectionURL The section identifier used to request ads from Nativo.
 
 */
+ (void)clearAdsInSection:(NSString *)sectionURL;

/**
 @abstract Frees all memories associated with the section, along with any ads
 @param sectionURL The section identifier used to request ads from Nativo.
 
 */
+ (void)clearSection:(NSString *)sectionURL;



/** @name Get Ads From Cache */

/**
 @abstract Get ad at given indexPath.
 @discussion Use this method when you need to check an ads [NtvAdData adType] or get its [NtvAdData sponsoredArticleURL]. This method will not make a request to get the ad, it simply checks if an ad exists in cache. Requests are made as needed by 'dequeueCell' methods.
 @param identifier The location identifier or indexPath with which the ad is associated.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @return NtvAdData Ad data if available at location identifier.
 
 */
+ (nullable NtvAdData *)getCachedAdAtLocationIdentifier:(id)identifier forSection:(NSString *)sectionUrl;
+ (nullable NtvAdData *)getCachedAdAtIndex:(NSIndexPath *)indexPath forSection:(NSString *)sectionUrl; // Convenience for use with table or collection views

/**
 @abstract Check if there exists an ad with content(fill) at given indexPath.
 @param identifier The location identifier or indexPath with which the ad is associated.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @return Returns `YES` if ad with specified placement and section identifier has content(fill).
 
 */
+ (BOOL)adPlacementHasContentAtLocationIdentifier:(id)identifier forSection:(NSString *)sectionUrl;
+ (BOOL)adPlacementHasContentAtIndexPath:(NSIndexPath *)indexPath forSection:(NSString *)sectionUrl; // Convenience for use with table or collection views



/** @name Inject Sponsored Landing Page */

/**
 @abstract Optional. Inject a UIViewController that conforms to NtvLandingPageInterface with with Nativo ad data.
 @discussion This method allows you to have control over how the landing page view controller is instantiated. Only use this method if you are *not* registering a nib file that contains your sponsored landing page with [NativoSDK registerNib:forAdTemplateType:] and *not* implementing the section delegate methods [NtvSectionDelegate section:needsDisplayLandingPage:] and [NtvSectionDelegate section:needsDisplayClickoutURL:].  If you are registering a nib for your sponsored landing page then the NativoSDK will handle the ad unit click for you.
 @param viewController The view controller used to display sponsored articles.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param identifier The location identifier with which the ad is associated.
 
 */
+ (void)injectSponsoredLandingPageViewController:(UIViewController<NtvLandingPageInterface> *)viewController forSection:(NSString *)sectionUrl withAdAtLocationIdentifier:(id)identifier;
+ (void)injectSponsoredLandingPageViewController:(UIViewController<NtvLandingPageInterface> *)viewController forSection:(NSString *)sectionUrl withAdAtIndexPath:(NSIndexPath *)indexPath; // Convenience for use with table or collection views



/** @name Requesting Ads with DFP */

/**
 @abstract For use with DFP only. Sets the app up for use with DFP. Must be called before prefetching or dequeing cells.
 
 */
+ (void)enableDFPRequestsWithVersion:(NSString *)versionStr;

/**
 @abstract Use DFP as a way to flight and track your campaigns with Nativo.
 @param bannerView The banner view from Google's DFP SDK.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param identifier The location identifier with which the ad will be associated.
 @discussion You should make the request to DFP first before calling this method. The values from the view passed will be extracted in order to make the proper request to Nativo's ad server.
 
 */
+ (void)makeDFPRequestWithBannerView:(UIView *)bannerView forSection:(NSString *)sectionUrl atLocationIdentifier:(id)identifier;
+ (void)makeDFPRequestWithBannerView:(UIView *)bannerView forSection:(NSString *)sectionUrl atIndexPath:(NSIndexPath *)indexPath; // Convenience for use with table or collection views


/** @name Miscellaneous */

/**
 @abstract Optional. Call this method to override the default full screen video controls with custom UI.
 @param controlsView The view that implements the `NtvVideoFullScreenControlsDelegate` protocol.
 
 */
+ (void)setCustomFullScreenVideoControlsView:(UIView<NtvVideoFullScreenControlsDelegate> *)controlsView;

/**
 @abstract Optional. Prefetch an ad for given section. Useful to avoid reloading views.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param options Dictionary of options used to request ads. Pass 'nil' for no options.
 
 */
+ (void)prefetchAdsForSection:(NSString *)sectionUrl options:(nullable NSDictionary *)options;



/** @name Modifying SDK Settings */

/**
  Disable placeholder mode. Instead of reserving a view(placeholder) in the feed for an ad, inject the ad in the feed only when that ad is available and has content. You might need to disable placeholders in order to use UITableView automatic row heights.
 */
+ (void)disablePlaceholderMode;

/**
 Deprecated. Placeholders are enabled by default.
 */
+ (void)enablePlaceholderMode __deprecated_msg("Placeholder mode is enabled by default");

/**
 Sets the SDK to development mode. By enabling this, Nativo log messages become visible in the console.
 
 */
+ (void)enableDevLogs;

/**
 Sets the SDK to return demo advertisements for the purpose of testing.
 
 */
+ (void)enableTestAdvertisements;

/**
 @abstract Sets the SDK to return demo advertisements for the purpose of testing. Useful for testing specific ad types.
 @param adType The specific type of ad you want to receive
 
 */
+ (void)enableTestAdvertisementsWithAdType:(NtvAdType)adType;


@end
NS_ASSUME_NONNULL_END
