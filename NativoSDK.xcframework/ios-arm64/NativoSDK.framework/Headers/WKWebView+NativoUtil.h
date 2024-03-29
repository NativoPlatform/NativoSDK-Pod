//
//  WKWebView+NativoUtil.h
//  NativoSDK
//
//  Copyright © 2023 Nativo, Inc. All rights reserved.
//

#import <WebKit/WebKit.h>

@class NtvAdData;

/**
 This WKWebView Category provides useful methods that will be helpful as you display a sponsored ad's article page. None of these methods are required; they are simply provided as convenience methods to simplify the process of displaying and manipulating the article page in the most common ways.
 
 */
@interface WKWebView (NativoUtil)

/**
 @abstract Get a standard WKWebView Config object that automatically sets the content viewport scale correctly. Also sets a default font size.
 */
+ (nullable WKWebViewConfiguration *)getConfigToScaleToViewPort;

/**
 @abstract Convenience method used to load the article URL from the 'NativoAdData' into the WebView.
 @param adData A `<NativoAdData>` object carrying ad data and Nativo tracking relevant information
 */
- (void)loadWithAdData:(nonnull NtvAdData *)adData;

/**
 @abstract Expand the frame of the webView to the height of its inner web contents.
 @discussion This prevents the webView's inner scrollView from scrolling, since the webView's contentSize will be the same as its frame. Use this method if the web view will be contained within a UIScrollView, and is intended to scroll inside a parent's view hierarchy. NOTE: This method will only scale the height. The width should be set by some means independantly.
 */
- (void)expandWebViewToFitContents;
- (void)expandWebViewToFitContentsWithCompletion:(void (^_Nullable)(void))completion;

/**
 @abstract Used to stop loading, rendering and tracking all parts of the web view. Call when the sponsored content landing page is dismissed.
 */
- (void)stopLoadingNativo;

/**
 @abstract Manual override to send UIScroll content offset events to Nativo JS trackers
 */
- (void)sendScrollEventsToJS:(float)adUnitY;
- (void)cancelSendScrollEvents;

@end
