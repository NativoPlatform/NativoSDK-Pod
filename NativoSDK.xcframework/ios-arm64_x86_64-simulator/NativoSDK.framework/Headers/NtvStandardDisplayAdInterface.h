//
//  NtvStandardDisplayInterface.h
//  NativoSDK
//
//  Copyright © 2023 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
@class NtvContentWebView;
@class WKNavigation;


@protocol NtvStandardDisplayAdInterface <NSObject>

/**
 @abstract The WKWebView subclass used for rendering standard display ad content.
 @discussion This view has an intrinsic content size, and will always grow or shrink to its designed height and width. For that reason you should avoid manually creating height and width constraints on this view to avoid autolayout conflicts. Instead bind it to its top, bottom, leading and trailing edges.
 */
@property (nonatomic, null_unspecified, readonly) NtvContentWebView *contentWebView;

@optional

/// Called once the contentWebView has finished loading its content
- (void)didFinishNavigation:(null_unspecified WKNavigation *)navigation;

/// Called if the content html fails to load for any reason
- (void)didFailNavigation:(null_unspecified WKNavigation *)navigation withError:(nonnull NSError *)error;

@end
