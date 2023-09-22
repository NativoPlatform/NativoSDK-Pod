//
//  NtvContentWebView.h
//  NativoSDK
//
//  Copyright © 2023 Nativo, Inc. All rights reserved.
//

#import <WebKit/WKWebView.h>

/**
 WKWebView subclass used for displaying web content. This class has a custom init that will ensure the web view scales properly for mobile devices.
 It is possible to initialize this class with a custom configuration as needed.
 
 */
@interface NtvContentWebView : WKWebView

@end
