//
//  UIWebView+NativoUtil.h
//  NativoSDK
//
//  Copyright © 2018 Nativo, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NtvAdData;

/**
 This WebView Category provides useful methods that will be helpful as you display a sponsored ad's article page. None of these methods are required; they are simply provided as convenience methods to simplify the process of displaying and manipulating the article page in the most common ways.
 
 */
@interface UIWebView (NativoUtil) <UIWebViewDelegate>


/**
 @abstract Convenience method used to load the article URL from the 'NtvAdData' into the WebView.
 @param adData A `<NtvAdData>` object carrying ad data and Nativo tracking relevant information
 */
- (void)loadWithAdData:(nonnull NtvAdData *)adData;

/**
 @abstract Expand the frame of the webView to the height of its inner web contents.
 @discussion This prevents the webView's inner scrollView from scrolling, since the webView's contentSize will be the same as its frame. Use this method if the web view will be contained within a UIScrollView, and is intended to scroll inside a parent's view hierarchy. NOTE: This method will only scale the height. The width should be set by some means independantly.
 */
- (void)expandWebViewToFitContents;

/**
 @abstract Used to stop video playback on the webView. The implementation uses JavaScript to parse the html for video tags to pause and exit fullscreen mode.
 */
- (void)stopVideoPlayback;

@end

