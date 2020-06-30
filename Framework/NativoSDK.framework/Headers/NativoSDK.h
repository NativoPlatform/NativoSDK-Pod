//
//  NativoSDK.h
//  NativoSDK
//
//  Copyright © 2019 Nativo, Inc. All rights reserved.
//

//! Project version number for NativoSDK.
extern double NativoSDKVersionNumber;

//! Project version string for NativoSDK.
extern const unsigned char NativoSDKVersionString[];

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WKWebView+NativoUtil.h"
#import "NtvContentWebView.h"
#import "NtvAdData.h"
#import "NtvSharing.h"
#import "NtvAdInterface.h"
#import "NtvStandardDisplayAdInterface.h"
#import "NtvVideoAdInterface.h"
#import "NtvLandingPageInterface.h"
#import "NtvSectionDelegate.h"
#import "NtvVideoFullScreenControlsDelegate.h"
#import "NtvCollectionViewCellMaxWidthDelegate.h"

static NSString * _Nonnull const kNativoSDKVersion = @"5.2.2-alpha.3";



/**
 The `NativoSDK` is used to retrieve true native, native display, standard display and video ads from Nativo. The NativoSDK is packed with features that will help you integrate native ads in your feed in a short amount of time.
 
 The NativoSDK has two main APIs for injecting ads into your views. The first is the table/collection view API, the second is the View API. The Table/Collection view API works by allowing it to manage how your cells get dequeued from a `UITableView` or `UICollectionView`. This is the most streamlined and convenient API for getting ad injected into your feed in no time. The View API works by simply passing in a `UIView` container which will be injected with ad content. In both APIs, the ad's view will be created using a nib that you registered previously using [NativoSDK registerNib:forAdTemplateType:], or via the `NtvSectionDelegate` method `registerNibNameForAdTemplateType:atLocationIdentifier:`.
 
 __Version__: 5.2.2
 
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
+ (UITableViewCell *)dequeueCellWithAdFromTableView:(UITableView *)tableView usingReuseIdentifierIfNoAd:(NSString *)reuseIdentifier forSection:(NSString *)sectionUrl atPlacementIndex:(NSIndexPath *)index options:(nullable NSDictionary<NSString *, NSString *> *)options;

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
+ (UICollectionViewCell *)dequeueCellWithAdFromCollectionView:(UICollectionView *)collectionView usingReuseIdentifierIfNoAd:(NSString *)reuseIdentifier forSection:(NSString *)sectionUrl atPlacementIndex:(NSIndexPath *)index options:(nullable NSDictionary<NSString *, NSString *> *)options;



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
+ (BOOL)placeAdInView:(UIView *)view atLocationIdentifier:(id)identifier inContainer:(UIView *)container forSection:(NSString *)sectionUrl options:(nullable NSDictionary<NSString *, NSString *> *)options;



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
 @param identifier The location identifier for the ad.
 @param options Dictionary of options used to request ads. Pass 'nil' for no options.

*/
+ (void)prefetchAdForSection:(NSString *)sectionUrl atLocationIdentifier:(id)identifier options:(nullable NSDictionary *)options;



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
 @discussion Use this method when you need to check an ads [NtvAdData adType] or get its [NtvAdData sponsoredArticleURL]. This method will not make a request to get the ad, it simply checks if an ad exists in cache. Requests are made as needed when calling TableView/CollectionView API, View API, or Prefetch API methods.
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
 Disable placeholder mode. Instead of reserving a view(placeholder) in the feed for an ad, inject the ad in the feed only when that ad is available and has content. You might need to disable placeholders in order to use UITableView automatic row heights.
 */
+ (void)disablePlaceholderMode;

/**
 Enable placeholder mode. Will attempt to reserve a place for an ad while requests are being made. Call this method if you are using the `placeAdInView` API and you are working under the assumption that all ad units will get fill until proven otherwise.
 */
+ (void)enablePlaceholderMode;

@end
NS_ASSUME_NONNULL_END
