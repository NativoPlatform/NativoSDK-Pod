//
//  NativoSDK.h
//  NativoSDK
//
//  Copyright © 2023 Nativo, Inc. All rights reserved.
//

//! Project version number for NativoSDK.
extern double NativoSDKVersionNumber;

//! Project version string for NativoSDK.
extern const unsigned char NativoSDKVersionString[];

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <NativoSDK/WKWebView+NativoUtil.h>
#import <NativoSDK/NtvContentWebView.h>
#import <NativoSDK/NtvAdData.h>
#import <NativoSDK/NtvAdInterface.h>
#import <NativoSDK/NtvStandardDisplayAdInterface.h>
#import <NativoSDK/NtvVideoAdInterface.h>
#import <NativoSDK/NtvLandingPageInterface.h>
#import <NativoSDK/NtvSectionDelegate.h>
#import <NativoSDK/NtvVideoFullScreenControlsDelegate.h>
#import <NativoSDK/NtvCollectionViewCellMaxWidthDelegate.h>
#import <NativoSDK/NtvCollectionViewCell.h>


/**
 The Nativo SDK is used to render native article, native display, standard display, story and video ad formats with Nativo. This is the entry point to access and interact with Nativo ads.
 Refer to https://sdk.nativo.com for guides and documentation.
  
 */
NS_ASSUME_NONNULL_BEGIN
@interface NativoSDK : NSObject


/** @name Set Delegates */

/**
 @abstract Set the delegate to be notified of section events. Starts the initial prefetch request for the section.
 @discussion Before calling any Nativo methods you must set the delegate for your section.
 @param delegate The ViewController or object that conforms to NtvSectionDelegate.
 @param sectionUrl The section URL used for making ad requests.
 
 */
+ (void)setSectionDelegate:(id<NtvSectionDelegate>)delegate forSection:(NSString *)sectionUrl;

/**
 @abstract Set the delegate to be notified of section events. Starts the initial prefetch request for the section.
 @discussion Before calling any Nativo methods you must set the delegate for your section. This method will also add the given options to each automatic prefetch request.
 @param delegate The ViewController or object that conforms to NtvSectionDelegate.
 @param sectionUrl The section URL used for making ad requests.
 @param options Set options to be added to each automatic prefetch request in this section.
 
 */
+ (void)setSectionDelegate:(id<NtvSectionDelegate>)delegate forSection:(NSString *)sectionUrl withOptions:(nullable NSDictionary<NSString *, NSString *>*)options;

/**
 @abstract Set the delegate to be notified of section events. Starts the initial prefetch request for the section.
 @discussion Before calling any Nativo methods you must set the delegate for your section. This method will also add the given key-value pairs to each automatic prefetch request.
 @param delegate The ViewController or object that conforms to NtvSectionDelegate.
 @param sectionUrl The section URL used for making ad requests.
 @param keyValues Key-value pairs used for contextual targeting in this section. Accepts strings, numbers, and arrays.
 
 */
+ (void)setSectionDelegate:(id<NtvSectionDelegate>)delegate forSection:(NSString *)sectionUrl withTargeting:(nullable NSDictionary<NSString *, id>*)keyValues;


/** @name Register Ad Templates */

/**
 @abstract Register a nib that will be used for the specified ad type.
 @discussion This will register a nib to be used globally across all sections and placements. If you need multiple layouts for ads within a section you can use the `NtvSectionDelegate` method - `section:registerNibNameForAdTemplateType:atLocationIdentifier:`
 @note The nib's class must conform to NtvAdInterface, NtvVideoAdInterface, or NtvLandingPageInterface, depending on the template type it was registered with.
 @param nib The `UINib` that builds a class that implements one of the NtvAdInterface protocols.
 @param templateType The template type that dictates if this nib should be used for native ads, video ads, or sponsored content landing pages. The view's class must conform to NtvAdInterface, NtvVideoAdInterface, NtvStandardDisplayAdInterface or NtvLandingPageInterface.
 
 */
+ (void)registerNib:(UINib *)nib forAdTemplateType:(NtvAdTemplateType)templateType;

/**
 @abstract Register a reuse identifier that will be used to create an ad view using your table or collection view.
 @discussion Use this method if you are using dynamic prototype cells with a table or collection view. The prototype cell in your table or collection view must be assigned the same reuse identifier. This will assign that cell to be globally across all sections and placements for the specified ad type. If you need multiple layouts for ads within a section you can use the `NtvSectionDelegate` method - `section:registerReuseIdForAdTemplateType:atLocationIdentifier:`.
 @note The view must conform to NtvAdInterface or NtvVideoAdInterface depending on the template type it was registered with.
 @param reuseId The reuse identifier that is assigned to a cell in your table or collection view.
 @param templateType The template type dictates for which type of ads this view will be used. The view's class must conform to NtvAdInterface or NtvVideoAdInterface.
 
 */
+ (void)registerReuseId:(NSString *)reuseId forAdTemplateType:(NtvAdTemplateType)templateType;

/**
 @abstract Register a Class that will be used to create an ad view.
 @discussion Use this method if you are creating you ad views programatically without the use of Nibs or dynamic prototype cells. If you need multiple layouts for ads within a section you can use the `NtvSectionDelegate` method - `section:registerClassNameForAdTemplateType:atLocationIdentifier:`.
 @note The class **must** be a UIView subclass that conform to the NtvAdInterface, NtvVideoAdInterface, NtvStandardDisplayAdInterface, or the NtvLandingPageInterface depending on the template type it was registered with.
 @param className The class that is a UIView subclass that conforms to one of the `NtvAdInterface`s
 @param templateType The template type dictates for which type of ads this view will be used. The view's class must conform to NtvAdInterface, NtvVideoAdInterface, NtvStandardDisplayAdInterface or NtvLandingPageInterface.
 
 */
+ (void)registerClass:(Class)className forAdTemplateType:(NtvAdTemplateType)templateType;



/** @name Inject Ad */

/**
 @abstract View ad injection API. Attempts to place an ad in the view provided, using any prefetched ad.
 @discussion It is possible that calling this method the first time will return false if an ad has not been prefetched yet. Prefetching should happen automatically, and when the new ad returns, NtvSectionDelegate method `didReceiveAd`, or `didAssignAdToLocation` will be called and you will need to reload your datasource so that this method can be called again.
 @param view UIView where ad will be injected.
 @param location The location identifier with which the ad will be associated.
 @param container The scroll view that contains the ad placement. Used for tracking purposes.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param options Dictionary of options used to request ads. Pass 'nil' for no options.
 @return Will return true if Nativo ad returned with fill and was successfully injected into the view
 
 */
+ (BOOL)placeAdInView:(UIView *)view atLocationIdentifier:(id)location inContainer:(UIView *)container forSection:(NSString *)sectionUrl options:(nullable NSDictionary<NSString *, NSString *> *)options;



/** @name Prefetching */

/**
 @abstract Optional. Prefetches an ad for given section for any location. Useful to avoid loading views.
 @discussion You can greatly increase the performance of your app's scrolling by prefetching ad data before it is required. Read the iOS optimization guide for tips and strategies https://sdk.nativo.com/docs/optimization_ios
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param options Dictionary of options used to request ads. Pass 'nil' for no options.
 
 */
+ (void)prefetchAdForSection:(NSString *)sectionUrl options:(nullable NSDictionary *)options;

/**
 @abstract Optional. Prefetches an ad for given section at specific location. Useful to avoid loading views.
 @discussion The same as `prefetchAdForSection()` however this only loads an ad for a specific location. https://sdk.nativo.com/docs/optimization_ios
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param location The location identifier for the ad.
 @param container The scroll view that contains the ad placement.
 @param options Dictionary of options used to request ads. Pass 'nil' for no options.

*/
+ (void)prefetchAdForSection:(NSString *)sectionUrl atLocationIdentifier:(nullable id)location inContainer:(nullable UIView *)container options:(nullable NSDictionary *)options;



/** @name Web View API */

/**
 @abstract Inject an html based ad into a webview used by an article page.
 @discussion Used for injecting Nativo ads into your article content pages that are web views. Will load Nativo javascript into the page and attempt to load ads in placements specified in Nativo's admin controls. Speak to your account manager if this is something you wish to do.
 @param webView WKWebView where ad(s) will be injected.
 @param sectionUrl The section URL with which the ad will be associated.
 
 */
+ (void)placeAdInWebView:(WKWebView *)webView forSection:(NSString *)sectionUrl;



/** @name Manage Datasource */

/**
 @abstract Optional method used to offset an `NSIndexPath` from a table or collection view to adjust for any ads received.
 @discussion Used to get an adjusted an indexPath that has been modified to account for the number of ads that have been received. Used to prevent items in feed from being skipped/overridden by ads. For example, lets say there exists 5 articles in your datasource, and you have one ad at the third row. That makes 6 rows total (indexPaths.row 0-5). Lets say the user clicks on row 4. Now if even though it is the 4th row, you need to access the 3rd item in your datasource, since first row = datasource[0], second row = datasource[1], third row is nativo ad, then forth row = datasource[2]. If you had used the vanilla indexPath you would have accessed datasource[3] and an item in your feed would have been skipped. Using this method you can prevent items in your feed from getting skipped, or worse, array out of bounds errors.
 @param indexPath The indexPath provided by the `UITableView` or `UICollectionView` delegate methods.
 @param sectionUrl The Nativo section identifier used in the current section.
 @param container The scroll view that contains the ad placement.
 @return Modified `NSIndexPath` based on number of ads with content received.
 
 */
+ (NSIndexPath *)getAdjustedIndexPath:(NSIndexPath *)indexPath forAdsInjectedInSection:(NSString *)sectionUrl inContainer:(UIView *)container;

/**
 @abstract Get the number of ads in the section.
 @discussion You will need this method when a `UITableViewDataSource` or `UICollectionViewDataSource` protocol method asks you for the number of rows. Use this method to provide an accurate count based on the number of ads received that have fill.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param section The section of the `UITableView` or `UICollectionView`.
 @param itemsCount The current number of items in your datasource for given section
 @param container The scroll view that contains the ad placement.
 @return Number of ads with content in section.
 
 */
+ (NSInteger)getNumberOfAdsInSection:(NSString *)sectionUrl inTableOrCollectionSection:(NSInteger)section forNumberOfItemsInDatasource:(NSInteger)itemsCount inContainer:(UIView *)container;

/**
 @abstract Reset the map of ads that have been received in a section.
 @param sectionURL The section identifier used to request ads from Nativo.
 @param container The scroll view that contains the ad placement, or nil if should remove all ads in section.
 
 */
+ (void)clearAdsInSection:(NSString *)sectionURL inContainer:(nullable UIView *)container;

/**
 @abstract Frees all memories associated with the section, along with any ads
 @param sectionURL The section identifier used to request ads from Nativo.
 
 */
+ (void)clearSection:(NSString *)sectionURL;



/** @name Get Ads From Cache */

/**
 @abstract Get ad at given indexPath.
 @discussion Use this method when you need to check an ads [NtvAdData adType] or get its [NtvAdData sponsoredArticleURL]. This method will not make a request to get the ad, it simply checks if an ad exists in cache. Requests are made as needed when calling TableView/CollectionView API, View API, or Prefetch API methods.
 @param location The location identifier or indexPath with which the ad is associated.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param container The scroll view that contains the ad placement.
 @return NtvAdData Ad data if available at location identifier.
 
 */
+ (nullable NtvAdData *)getCachedAdAtLocationIdentifier:(id)location forSection:(NSString *)sectionUrl container:(UIView *)container;
// Convenience for use with table or collection views
+ (nullable NtvAdData *)getCachedAdAtIndex:(NSIndexPath *)indexPath forSection:(NSString *)sectionUrl container:(UIView *)container;



/** @name Inject Sponsored Landing Page */

/**
 @abstract Optional. Inject a UIViewController that conforms to NtvLandingPageInterface with with Nativo ad data.
 @discussion This method allows you to have control over how the landing page view controller is instantiated. Only use this method if you are *not* registering a nib file that contains your sponsored landing page with [NativoSDK registerNib:forAdTemplateType:] and *not* implementing the section delegate methods [NtvSectionDelegate section:needsDisplayLandingPage:] and [NtvSectionDelegate section:needsDisplayClickoutURL:].  If you are registering a nib for your sponsored landing page then the NativoSDK will handle the ad unit click for you.
 @param viewController The view controller used to display sponsored articles.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param location The location identifier with which the ad is associated.
 @param container The scroll view that contains the ad unit.
 
 */
+ (void)injectSponsoredLandingPageViewController:(UIViewController<NtvLandingPageInterface> *)viewController forSection:(NSString *)sectionUrl withAdAtLocationIdentifier:(id)location fromAdContainer:(UIView *)container;
// Convenience for use with table or collection views
+ (void)injectSponsoredLandingPageViewController:(UIViewController<NtvLandingPageInterface> *)viewController forSection:(NSString *)sectionUrl withAdAtIndexPath:(NSIndexPath *)indexPath fromAdContainer:(UIView *)container;



/** @name Requesting ads with GAM */

/**
 @abstract Sets the app up for use with GAM. Must be called first before any other Nativo SDK method.
 
 */
+ (void)enableGAMRequestsWithVersion:(NSString *)versionStr;

/**
 @abstract Use GAM as a way to flight and track your campaigns with Nativo.
 @discussion Make the request for a GAM banner first. Once you've detected that the ad contains a Nativo campaign call this method using the bannerView. A Nativo ad will be requested
 and your next call to placeAdInView() will place the ad in a view.
 @param bannerView The banner view from GAM SDK.
 @param sectionUrl The section identifier used to request ads from Nativo.

 */
+ (void)makeGAMRequestWithBannerView:(UIView *)bannerView forSection:(NSString *)sectionUrl;


/** @name Custom Video Controls */

/**
 @abstract Optional. Call this method to override the default full screen video controls with custom UI.
 @param controlsView The view that implements the `NtvVideoFullScreenControlsDelegate` protocol.
 
 */
+ (void)setCustomFullScreenVideoControlsView:(UIView<NtvVideoFullScreenControlsDelegate> *)controlsView;



/** @name Modifying SDK Settings */

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
+ (void)enableTestAdvertisementsWithAdType:(NtvTestAdType)adType;


/**
 @abstract By default Nativo will automatically prefetch ads as needed. Disable if you need to manually request ads.
 @param shouldDisable True if auto prefetching should be disabled.
 
 */
+ (void)disableAutoPrefetch:(BOOL)shouldDisable;

/**
 Enable placeholder mode. Default is disabled. Will attempt to reserve a place for an ad while requests are being made. Call this method if you are using the `placeAdInView` API and you are working under the assumption that all ad units will get fill until proven otherwise. You might need to disable placeholders in order to use UITableView automatic row heights.
 */
+ (void)enablePlaceholderMode:(BOOL)placeholdersEnabled;

@end
NS_ASSUME_NONNULL_END
