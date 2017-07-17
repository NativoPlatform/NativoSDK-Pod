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
#import "NtvAdData.h"
#import "NtvSharing.h"
#import "NtvAdInterface.h"
#import "NtvVideoAdInterface.h"
#import "NtvLandingPageInterface.h"
#import "NtvSectionDelegate.h"
#import "NtvVideoFullScreenControlsDelegate.h"

static NSString * _Nonnull const kNativoSDKVersion = @"4.1.0";


/**
 The `NativoSDK` is used to retrieve native, video, and clickout ads from Nativo. The NativoSDK is packed with features that will help you integrate native ads in your feed in a short amount of time. 
 
 The new SDK has the ability to automatically requests ads when needed and injects ad data into cells at requested spots in an app’s feed. Ad caching and tracking are automatically handled. Integrating with your `UICollectionViewCell`s and `UITableViewCell`s is now easier with interface template injection. Also, video ads are now supported in the feed.
 
 The NativoSDK works best by allowing it to manage how your cells get dequeued from a `UITableView` or `UICollectionView`. Upon each request to dequeue a cell, the NativoSDK will ask the section delegate if an ad should belong at this placement, if `YES`, it will either retrieve the ad from cache, or if not found, make a new request for the ad. While the ad is loading a blank cell will be returned with an activity indicator. When the ad data returns it will create a new view based on the ad type of the ad using the nib your registered previously using [NativoSDK registerNib:forAdTemplateType:]. The ad will then be injected into the previously returned cell. If there isn't an ad at the given index, the NativoSDK will dequeue a non-ad cell using the identifier passed in.
 
 __Version__: 4.1.0
 
 */
NS_ASSUME_NONNULL_BEGIN
@interface NativoSDK : NSObject


/** @name Set Section Delegate */

/**
 @abstract Before calling any Nativo methods you must set the delegate for your section.
 @param delegate The ViewController or object that conforms to NtvSectionDelegate.
 @param sectionUrl The section URL of the section. Please contact your account manager at Nativo for details.
 
 */
+ (void)setSectionDelegate:(id<NtvSectionDelegate>)delegate forSection:(NSString *)sectionUrl;



/** @name Register Ad Templates */

/**
@abstract Register nib for a specific ad type.
@discussion When the ad is being rendered, this nib will be used to change the layout of the ad based on the ad type. Nib's class must conform to one of the NtvAdInterface protocols.
@param nib The nib that builds a class that implements one of the NtvAdInterface protocols.
@param templateType The template type that dictates if this nib should be used for Native or Video ads.

*/
+ (void)registerNib:(UINib *)nib forAdTemplateType:(NtvAdTemplateType)templateType;


/**
 @abstract Register nib for a specific ad type with desired height.
 @discussion Call this method if you are using a layouts that have different heights depending on the ad type. For example, if your video ad layout requires a different height from your native ad layout, call this method and specify the desired height for each respective template type.
 @param nib The nib that builds a class that implements one of the NtvAdInterface protocols.
 @param templateType The template type that dictates if this nib should be used for Native or Video ads.
 @param height the expected height of the view from the nib file.
 
 */
+ (void)registerNib:(UINib *)nib forAdTemplateType:(NtvAdTemplateType)templateType withDesiredHeight:(CGFloat)height;



/** @name Dequeue Cells */

/**
 @abstract Will dequeue cell with provided identifier or create an ad cell if ad content is available at given index path.
 @discussion This is the main method you should use to request and manage ads in your app. It will ask the NtvSectionDelegate if this index path should be an ad placement. If so it will make request and attempt to fill cell asynchronously if ad data not yet available. After calling this method, you must check provided cell's [reuseIdentifier](http://apple.co/2m5TeZ1) to know if the cell returned is an ad or not. If reuse identifier matches the value you passed in, the cell does not contain an ad and should be populated with data as normal. If ad data is not available, the section delegate [NtvSectionDelegate section:needsReloadDatasourceAtIndex:] will be called so that the delegate can remove the empty view.
 @param tableView The `UITableView` you are using to render your feed. Will also be used for ad tracking.
 @param identifier The identifier string that maps to your cells [reuseIdentifier](http://apple.co/2m5TeZ1)
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param index The index path where this ad is being placed.
 @param options Dictionary of options used to request ads. Pass 'nil' for no options.
 @return Returns either a normal cell with identifier provided or ad cell if ad content is available at given index path. You must check the cell's reuseIdentifier to know if an ad was returned or not.
 
 */
+ (nullable __kindof UITableViewCell *)dequeueCellWithAdFromTableView:(UITableView *)tableView usingIdentifierIfNoAd:(NSString *)identifier forSection:(NSString *)sectionUrl atPlacementIndex:(NSIndexPath *)index options:(nullable NSDictionary *)options;


/**
 @abstract Will dequeue cell with provided identifier or create an ad cell if ad content is available at given index path.
 @discussion This is the main method you should use to request and manage ads in your app. It will ask the NtvSectionDelegate if this index path should be an ad placement. If so it will make request and attempt to fill cell asynchronously if ad data not yet available. After calling this method, you must check provided cell's [reuseIdentifier](http://apple.co/2m5Bmxw) to know if the cell returned is an ad or not. If reuse identifier matches the value you passed in, the cell does not contain an ad and should be populated with data as normal. If ad data is not available, the section delegate [NtvSectionDelegate section:needsReloadDatasourceAtIndex:] will be called so that the delegate can remove the empty view.
 @param collectionView The `UICollectionView` you are using to render your feed. Will also be used for ad tracking.
 @param identifier The identifier string that maps to your cells [reuseIdentifier](http://apple.co/2m5Bmxw)
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param index The index path where this ad is being placed.
 @param options Dictionary of options used to request ads. Pass 'nil' for no options.
 @return Returns either a normal cell with identifier provided or ad cell if ad content is available at given index path. You must check the cell's reuseIdentifier to know if an ad was returned or not.
 
 */
+ (nullable __kindof UICollectionViewCell *)dequeueCellWithAdFromCollectionView:(UICollectionView *)collectionView usingIdentifierIfNoAd:(NSString *)identifier forSection:(NSString *)sectionUrl atPlacementIndex:(NSIndexPath *)index options:(nullable NSDictionary *)options;



/** @name Manage Datasource */

/**
 @abstract Modify index path provided to adjust for any ads currently received.
 @discussion Used to get an adjusted indexPath that has been modified to account for the number of ads that have been received. Used to prevent items in feed from being skipped/overridden by ads. For example, lets say there exists 5 articles in your datasource, and you have one ad at the third row. That makes 6 rows total (indexPaths.row 0-5). Lets say the user clicks on row 4. Now if even though it is the 4th row, you need to access the 3rd item in your datasource, since first row = datasource[0], second row = datasource[1], third row is nativo ad, then forth row = datasource[2]. If you had used the vanilla indexPath you would have accessed datasource[3] and an item in your feed would have been skipped. By using this method, you can prevent items in your feed from getting skipped, or worse, array out of bounds errors.
 @param indexPath The indexPath provided by the `UITableView` or `UICollectionView` delegate methods.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @return Modified NSIndexPath based on number of ads with content received.
 
 */
+ (NSIndexPath *)getAdjustedIndexRowForPath:(NSIndexPath *)indexPath forSection:(NSString *)sectionUrl;


/**
 @abstract Get the number of ads in the section.
 @discussion You will need this method when a `UITableViewDataSource` or `UICollectionViewDataSource` protocol method asks you for the number of rows. Use this method to provide an accurate count based on the number of ads received that have fill.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param section The section of the `UITableView` or `UICollectionView`.
 @param itemsCount The current number of items in your datasource for given section
 @return Number of ads with content in section.
 
 */
+ (NSInteger)getNumberOfAdsInSection:(NSString *)sectionUrl inTableOrCollectionSection:(NSInteger)section forNumberOfItemsInDatasource:(NSInteger)itemsCount;



/** @name Get Ads From Cache */

/**
 @abstract Get ad at given indexPath.
 @discussion Use this method when you need to check an ads [NtvAdData adType] or get its [NtvAdData sponsoredArticleURL]. This method will not make a request to get the ad, it simply checks if an ad exists in cache. Requests are made as needed by 'dequeueCell' methods.
 @param index The indexPath provided by the `UITableView` or `UICollectionView` delegate methods.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @return NtvAdData if any at given indexPath.
 
 */
+ (NtvAdData *)getCachedAdAtIndex:(NSIndexPath *)index forSection:(NSString *)sectionUrl;


/**
 @abstract Check if there exists an ad with content at given indexPath.
 @param index The indexPath provided by the `UITableView` or `UICollectionView` delegate methods.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @return Returns `YES` if ad has content at given indexPath.
 
 */
+ (BOOL)adPlacementHasContentAtIndex:(NSIndexPath *)index forSection:(NSString *)sectionUrl;



/** @name Inject Sponsored Landing Page */

/**
 @abstract Optional. Inject a UIViewController that conforms to NtvLandingPageInterface with with Nativo ad data.
 @discussion This method allows you to have control over how the landing page view controller is instantiated. Only use this method if you are *not* registering a nib file that contains your sponsored landing page with [NativoSDK registerNib:forAdTemplateType:] and *not* implementing the section delegate methods [NtvSectionDelegate section:needsDisplayLandingPage:] and [NtvSectionDelegate section:needsDisplayClickoutURL:].  If you are registering a nib for your sponsored landing page then the NativoSDK will handle the ad unit click for you.
 @param viewController The view controller used to display sponsored articles.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param index The index path where this ad is being placed.
 
 */
+ (void)injectSponsoredLandingPageViewController:(UIViewController<NtvLandingPageInterface> *)viewController forSection:(NSString *)sectionUrl atPlacementIndex:(NSIndexPath *)index;




/** @name Infinite Scroll */

/**
 @abstract Enable infinite scroll for given section.
 @discussion Infinite scroll enables the ability to make multiple requests for a given section, each time requesting a unique ad. If you want an 'unlimited' number of placements in your sections, then you should enable this property.
 @param sectionUrl The section identifier used to request ads from Nativo.
 
 */
+ (void)enableInfiniteScrollForSection:(NSString *)sectionUrl;


/**
 @abstract Reset the list of ads that have been received.
 @discussion This will force the Nativo server to return ads to your app that may already have been received.
 @param sectionURL The section identifier used to request ads from Nativo.
 
 */
+ (void)clearAdsInSection:(NSString *)sectionURL;



/// @name Requesting Ads with DFP

/**
 @abstract For use with DFP only. Sets the app up for use with DFP. Must be called before prefetching or dequeing cells.
 
 */
+ (void)enableDFPRequests;


/**
 @abstract Use DFP as a way to flight and track your campaigns with Nativo.
 @param bannerView The banner view from Google's DFP SDK.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param indexPath The index path where this ad is being placed.
 @discussion You should make the request to DFP first before calling this method. The values from the view passed will be extracted in order to make the proper request to Nativo's ad server.
 
 */
+ (void)makeDFPRequestWithBannerView:(UIView *)bannerView forSection:(NSString *)sectionUrl atIndexPath:(NSIndexPath *)indexPath;



/** @name Miscellaneous */

/**
 @abstract Optional. Call this method to override the default full screen video controls with custom UI.
 @param controlsView The view that implements the `NtvVideoFullScreenControlsDelegate` protocol.
 
 */
+ (void)setCustomFullScreenVideoControlsView:(UIView<NtvVideoFullScreenControlsDelegate> *)controlsView;


/**
 @abstract Optional. Fetch ads for given section before they are required. Useful to avoid loading times for ads.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param options Dictionary of options used to request ads. Pass 'nil' for no options.
 
 */
+ (void)prefetchAdsForSection:(NSString *)sectionUrl options:(nullable NSDictionary *)options;


/**
 @abstract Attempt to place ad in view provided at index path
 @discussion Optional method, only use if your app is not compatible with [NativoSDK  dequeueCellWithAdFromTableView:usingIdentifierIfNoAd:forSection:atPlacementIndex:options:delegate:] or [NativoSDK dequeueCellWithAdFromCollectionView:usingIdentifierIfNoAd:forSection:atPlacementIndex:options:delegate:]. 
     Injects view with ad data if ad is available at given indexPath. If not, will make request and attempt to fill view asynchronously.
     If ad data is not available, the section delegate [NtvSectionDelegate section:needsReloadDatasourceAtIndex:] will be called so that the delegate can remove the empty view.
 @return Will return `YES` if there is an ad with content, or if ad is loading.
 @param view UIView where ad will be injected. In most cases this will be a kind of `UITableViewCell` or `UICollectionViewCell`.
 @param container The view that contains the ad placement. Used for tracking purposes.
 @param sectionUrl The section identifier used to request ads from Nativo.
 @param index The index path where this ad is being placed.
 @param options Dictionary of options used to request ads. Pass 'nil' for no options.
 
 */
+ (BOOL)placeAdInView:(UIView *)view inContainer:(UIScrollView *)container forSection:(NSString *)sectionUrl atPlacementIndex:(NSIndexPath *)index options:(nullable NSDictionary *)options;


/** @name Modifying SDK Settings */


/**
 Disable placeholder mode. Instead of reserving a view(placeholder) in the feed for an ad, inject the ad in the feed only when that ad is available.
 
 */
+ (void)disablePlaceholderMode;


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
