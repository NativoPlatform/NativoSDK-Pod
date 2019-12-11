//
//  NtvLandingPageInterface.h
//  NativoSDK
//
//  Copyright © 2019 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
@class NtvAdData;
@class NtvContentWebView;

@import WebKit;

@protocol NtvLandingPageInterface <NSObject>


/**
 @abstract Handle external links
 @param link The URL that was clicked.
 
 */
- (void)handleExternalLink:(nonnull NSURL *)link;


@optional

/// @name Content Web View

/**
 @abstract Should return a NtvContentWebView that will be used as the landing page's body. NtvContentWebView is a subclass of WKWebView.
 @discussion The web view will be resized by the NativoSDK based on the length of content. For this reason the entire landing page should be nested in a scroll view so that the content can scroll if neccessary. Please be careful to not apply auto-layout constraints that might conflict with the webviews intrinsic height as is grows or shrinks.
 @warning You should not attempt to assign an object as this web view's navigation delegate. The NativoSDK will act as the navigation delegate for this web view.
 
 */
@property (nonatomic, readonly, null_unspecified) WKWebView *contentWKWebView;



///@name Interface Properties

/**
 @abstract The label that will be used to display the article's title
 
 */
@property (nonatomic, readonly, null_unspecified) UILabel *titleLabel;

/**
 @abstract The label that will be used to display the advertiser's name
 
 */
@property (nonatomic, readonly, null_unspecified) UILabel *authorNameLabel;

/**
 @abstract The image view that will be used to display the advertiser's logo
 
 */
@property (nonatomic, readonly, null_unspecified) UIImageView *authorImageView;

/**
 @abstract The image view that will be used to display the article's preview image
 
 */
@property (nonatomic, readonly, null_unspecified) UIImageView *previewImageView;

/**
 @abstract The label that will be used to display the article's previewText
 
 */
@property (nonatomic, readonly, null_unspecified) UILabel *previewTextLabel;

/**
 @abstract The label that will be used to display the article's date
 
 */
@property (nonatomic, readonly, null_unspecified) UILabel *dateLabel;


/// @name Ad Data

/**
 @abstract Called when finished loading a new ad into the landing page.
 @discussion You will need a reference to the ad in order to use the NtvSharing APIs.
 
 */
- (void)didLoadContentWithAd:(nonnull NtvAdData *)adData;

///@name Layout Formatting

/**
 @abstract If implemented this method will be called to format the article's date into a string.
 @discussion Use this method when you require specific date-time formatting to match the rest of your app
 
 */
- (nonnull NSString *)formatDate:(nullable NSDate *)date;


/// @name Manage Web View Events

/**
 @abstract Return `YES` if the content web view's inner scroll should be enabled. Defaults to `NO'.
 @discussion Since the landing page content should be placed in a UIScollView, by default the content web view will have inner scrolling disabled and expand to its intrinsic height.
 
 */
- (BOOL)contentWebViewShouldScroll;


/**
 @abstract Optionally implement additional logic when content web view finishes loading article
 
 */
- (void)contentWebViewDidFinishLoad;

/**
 @abstract Handle web view load failures

 */
- (void)contentWebViewDidFailLoadWithError:(nullable NSError *)error;


@end
