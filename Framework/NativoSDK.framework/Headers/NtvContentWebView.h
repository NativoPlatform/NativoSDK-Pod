//
//  NtvContentWebView.h
//  NativoSDK
//
//  Copyright © 2018 Nativo, Inc. All rights reserved.
//

#import <WebKit/WebKit.h>

/**
 In iOS 11 when using WKWebView inside of a Nib or Storyboard, use this class instead of WKWebView directly. This class has a custom init that will ensure the web view scales properly for mobile devices.
 It is possible to initialize this class with a custom configuration as needed.
 
 */
@interface NtvContentWebView : WKWebView

@end
