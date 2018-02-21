#  NativoSDK 4.2 Migration Guide


## Overview

Nativo's SDK v4.2 brings a multitude of changes and improvements:

* Support for Apple's WKWebView
* Ability to register multiple view templates (nibs) for sections and placements
* Optimizations for bottom-of-article ad placements
* Ability to load a specific ad placement at a specific location in app using a unique placement id
* Optimizations for injecting ads outside of the context of UITableView or UICollectionView
* API naming optimizations
* Tracking optimizations

Some APIs were removed,  added, or modified. This guide will walk you through the changes needed to move from version 4.0-4.1 to version 4.2.

<br>


## API Removals

#### Register Nib with Desired Height
The API to register a nib with a desired height was removed:

    + (void)registerNib:(UINib *)nib forAdTemplateType:(NtvAdTemplateType)templateType withDesiredHeight:(CGFloat)height;

Specifying a desired height is no longer needed. You will need to shorten it to just <[NativoSDK registerNib:forAdTemplateType:]>. Now the desired height will be estimated based on the height of the nib that was registered.


#### Infinite Scroll and Disable Placeholder
Infinite scroll is now enabled by default, and placeholder mode is now disabled. You no longer need to call these methods:

    + (void)enableInfiniteScrollForSection:(NSString *)sectionUrl;
    + (void)disablePlaceholderMode;

For the placeholder mode what this means is that the NativoSDK will not attempt to inject a placeholder view into your table or collection view while the ad request is processing. Now, the ad will only be injected after the ad request has been completed. You can optionally enable placeholder mode by calling <[NativoSDK enablePlaceholderMode]>. Enabling placeholder mode may reduce the need to reload your views, but will cause issues when using `UITableView` automatic row heights.


<br>

## API Name Changes

#### Table/Collection View API
The API methods `dequeueCellWithAdFromTableView:usingIdentifierIfNoAd:atPlacementIndex:options:` and `dequeueCellWithAdFromCollectionView:usingIdentifierIfNoAd:atPlacementIndex:options:` have been changed to

    + (nullable __kindof UITableViewCell *)dequeueCellWithAdFromTableView:(UITableView *)tableView usingReuseIdentifierIfNoAd:(NSString *)reuseIdentifier forSection:(NSString *)sectionUrl atPlacementIndex:(NSIndexPath *)index options:(nullable NSDictionary<NSString *, NSString *> *)options;
    + (nullable __kindof UICollectionViewCell *)dequeueCellWithAdFromCollectionView:(UICollectionView *)collectionView usingReuseIdentifierIfNoAd:(NSString *)reuseIdentifier forSection:(NSString *)sectionUrl atPlacementIndex:(NSIndexPath *)index options:(nullable NSDictionary<NSString *, NSString *> *)options;

for table views and collections views, respectively. The only difference being the injection of the word `Reuse`. The importance here is for developers to recognize that this is the same reuse identifier they used to register a class or UINib with their table or collectionview. The reuse identifier will be used to dequeue a cell if there is no ad fill.


#### Basic API
The basic ad injection API `+ (BOOL)placeAdInView:(UIView *)view inContainer:(UIScrollView *)container forSection:(NSString *)sectionUrl atPlacementIndex:(NSIndexPath *)index options:(nullable NSDictionary *)options;` has been changed to

    + (BOOL)placeAdInView:(UIView *)view atLocationIdentifier:(id)identifier inContainer:(UIScrollView *)container forSection:(NSString *)sectionUrl options:(nullable NSDictionary<NSString *, NSString *> *)options;
    
The method now allows you to inject an ad using an object of type `id`/`Any` as the ad's identifier. Previously developers had to use `NSIndexPath`. This lends greater flexibility and may be useful when injecting ad placements outside the context of a `UITableView` or `UICollectionView`. Please note that you are still able to use `NSIndexPath`s with this method if needed, and it is still compatible for use in table and collection views.


#### Section Delegate
Section delegate method `- (void)section:(NSString *)sectionUrl needsReloadDatasourceAtIndex:(nullable NSIndexPath *)index;` has changed to:

    - (void)section:(NSString *)sectionUrl needsReloadDatasourceAtLocationIdentifier:(nullable id)identifier forReason:(NSString *)reason;

The method now provides a reason for why the ad needs to be reloaded. You can find this by inspecting the reason string. The possible reasons are listed in the NtvSectionDelegate header file.

* NtvSectionReloadReasonRemoveView
* NtvSectionReloadReasonInjectView
* NtvSectionReloadReasonResizeView

Optionally you can modify your app's logic for how you reload based on the reason provided. The method also now passes in a parameter of type `id` (`Any`) instead of an `NSIndexPath`. The method works exactly like it did before, except now it is more flexible by allowing placements to be associated with  `id`/`Any` instead of forcing an `NSIndexPath`. However if you are using  `NSIndexPath` as the location identifier, then the `id`/`Any` can be cast as such.

The section delegate method `- (void)section:(NSString *)sectionUrl didRecieveAds:(NSArray<NtvAdData *> *)ads;` has changed to only pass in a single ad per each call. This better reflects how each ad placement only requests a single ad.

    - (void)section:(NSString *)sectionUrl didReceiveAd:(NtvAdData *)adData;


#### Adjust Index Path For Ads Received
The method `+ (NSIndexPath *)getAdjustedIndexRowForPath:(NSIndexPath *)indexPath forSection:(NSString *)sectionUrl;` has changed to

    + (NSIndexPath *)getAdjustedIndexPath:(NSIndexPath *)indexPath forAdsInjectedInSection:(NSString *)sectionUrl;

The method is used to adjust an index path based on the number of ads injected into a table or collectionview for the purpose of accessing the correct index in your data source.


#### Ad Type Enum
NtvAdType enum has changed its reference to video ads from `Video` to `ClickToPlayVideo`. Any references need to be updated.


#### Enable DFP
The method to enable DFP on the NativoSDK has changed. It is now required that you input the version of the DFP SDK you are working with.

    + (void)enableDFPRequestsWithVersion:(NSString *)versionStr;


<br>

## API Additions

#### Register Multiple Nibs for Specific Placements and Sections
New in v4.2 is the ability to register multiple Nib files for specific sections or placement locations using the new NtvSectionDelegate method:

    - (NSString *)section:(NSString *)sectionUrl registerNibNameForAdTemplateType:(NtvAdTemplateType)templateType atLocationIdentifier:(id)locationIdentifier;

This method lends incredible flexibility in deciding which nib file should be used for a given section or placement. For example, you could use one design for your home feed ad placement, and a different design for an ad placement at the bottom of articles. You could even direct that a single placement in a certain section have a different design than from the rest of the app. The method requires you return the file name of a nib to be used with an ad in the given section, location identifier, and template type. Note that you can still use the preexisting method <[NativoSDK registerNib:forAdTemplateType:]>, which will register the specified nib to be used globally across all placements and sections unless overridden.


#### Setup Placement Mapping
Also new in v4.2 is the ability to map a specific location in your app to a specific Nativo ad placement using the placement's unique id. This unique number for identifying the placement will be given to you by your representative at Nativo. Using this API you will be able to tell the SDK to always render a specific placement at index path row 3, for example. You can call this method multiple times in order to map multiple placements to multiple locations.

    + (void)mapPlacementId:(NSNumber *)placementId toIndexPath:(NSIndexPath *)indexPath inSection:(NSString *)sectionUrl;
    + (void)mapPlacementId:(NSNumber *)placementId toLocationIdentifier:(id)identifier inSection:(NSString *)sectionUrl;
    
When using this method you do not need to call the section delegate method <[NtvSectionDelegate section:shouldPlaceAdAtIndex:]>. That is because the SDK will already know where the ads should be placed from the method parameters.


#### Requesting ads with `id`/ `Any` instead of `NSIndexPath`
Many methods in the NativoSDK now have sister methods that accept a parameter of type `id`/`Any` instead of `NSIndexPath`. These are optional methods, and may be useful when requesting ad placements outside the context of a `UITableView` or `UICollectionView`. This parameter will be associated with the ad response, and will be used to retrieve the ad from cache on future requests. The new methods are listed here:

    + (nullable NtvAdData *)getCachedAdWithLocationIdentifier:(id)identifier forSection:(NSString *)sectionUrl;
    + (BOOL)adPlacementHasContentAtLocationIdentifier:(id)identifier forSection:(NSString *)sectionUrl;
    + (void)injectSponsoredLandingPageViewController:(UIViewController<NtvLandingPageInterface> *)viewController forSection:(NSString *)sectionUrl withAdFromLocationIdentifier:(id)identifier;
    + (void)makeDFPRequestWithBannerView:(UIView *)bannerView forSection:(NSString *)sectionUrl atLocationIdentifier:(id)identifier;


#### Track ad placements that didn't get fill
When using <[NativoSDK placeAdInView:atLocationIdentifier:inContainer:forSection:options:]> inside of a table or collection view, you will need to ensure that the view where the ad *would* have been still gets tracked. This is known as viewable inventory tracking. This method will help you do that.

    + (void)trackViewWithNoAdFill:(UIView *)view atLocationIdentifier:(id)identifier inContainer:(UIScrollView *)container forSection:(NSString *)sectionUrl;

Note that when using the Nativo table/collection view dequeue APIs, this tracking is handled automatically.


#### Manage Ads in Section
There are now new methods to manage sections and the ads they contain. These may be helpful when managing memory concerns, or if you wish to retrieve a new set of ads.

    + (void)clearAdsInSection:(NSString *)sectionURL;
    + (void)clearSection:(NSString *)sectionURL;
    
#### NtvContentWebView
NtvContentWebView is a new class in the SDK that subclasses `WKWebView`. Its goal is to aid in migrating your ad content from `UIWebView` to `WKWebView`. It has a custom configuration that will ensure it scales properly for mobile devices.

<br>

## Upgrading to WKWebView

Integrating with `WKWebView` in your Nativo content landing page is very straight-forward now that WebKit Views are now supported inside of Interface Builder. Simply remove your web view and replace it with a WebKit View by dragging it over from the object library in the right panel.

<img src="guide_img/webkitinterfacebuilder.png" ></img>

Make sure that you re-establish all the same constraints that you had on your web view.

Next, navigate to the identify inspector panel and change the class of the object to `NtvContentWebView`.

<img src="guide_img/ntvContentWebView.png"></img>

It is recommend that you use this class instead of `WKWebView` when used inside a nib. This `NtvContentWebView` has a custom configuration that will ensure it scales properly for mobile devices.

You will also need to update your `NtvLandingPageInterface` delegate. Remove the method `- (UIWebView *)contentWebView` and instead implement the method `- (WKWebView *)contentWKWebView`  and return the WKWebView from the IBOutlet on your nib.


<br>

## Other Changes

#### Section Delegate Method `shouldPlaceAdAtIndexPath:` Is Now Optional
The section delegate method <[NtvSectionDelegate section:shouldPlaceAdAtIndex:]> is now optional and not needed under these cirumstances:

* You are mapping placements to specific locations using <[NativoSDK mapPlacementId:toIndexPath:inSection:]> or <[NativoSDK mapPlacementId:toLocationIdentifier:inSection:]>
* You are using the basic ad injection API - <[NativoSDK placeAdInView:atLocationIdentifier:inContainer:forSection:options:]>
* You are using DFP along with the method <[NativoSDK makeDFPRequestWithBannerView:forSection:atLocationIdentifier:]>

If none of these conditions apply to you then this protocol method is still required so that the NativoSDK knows where to place any ads.


<br>
<br>
<br>
<br>

















