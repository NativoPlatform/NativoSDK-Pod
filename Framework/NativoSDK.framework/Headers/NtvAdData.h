//
//  NtvAdData.h
//  NativoSDK
//
//  Copyright © 2017 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>


/** Ad types */
typedef NS_ENUM(NSUInteger, NtvAdType) {
    Native,
    Display,
    Video,
    ScrollToPlayVideo,
    Placeholder
};


/** Enum of all the ad types that requre unique template nibs */
typedef NS_ENUM(NSUInteger, NtvAdTemplateType) {
    NtvAdTemplateTypeNative = 1,
    NtvAdTemplateTypeVideo,
    NtvAdTemplateTypeLandingPage
};


/** Image resize crop modes */
typedef NS_ENUM(NSUInteger, NtvCropMode) {
    ntvCropModeAspectFit,
    ntvCropModeAspectFill,
    ntvCropModePadding,
};


/**
 An instance of `NtvAdData` stores data of a single Nativo ad. You should never create an instance of `NtvAdData` yourself. They will be requested and handled for you automatically by the NativoSDK. If you do need access to the ad data of a placement, you can access it by calling [NativoSDK getCachedAdAtIndex:forSection:]. However this will not make a request for a new ad, it simply checks the cache for an ad already received.  Typically you will not need to handle NtvAdData unless using the NtvSharing APIs or adding custom behavior.
 
 **Note:** A `NtvAdData` object may or may not contain ad content. If the property `<isAdContentAvailable>` returns `NO`, it means that no ad will show at this placement, however the cell where the ad would have been placed will still be tracked for unfilled inventory.
 */
NS_ASSUME_NONNULL_BEGIN
@interface NtvAdData : NSObject


///@name Verifying the Availability of Ad Content

/**
 @abstract Returns `YES` if this object carries ad content.
 @discussion  Sometimes requests for ads cannot be filled. When this happens the ad will still return, however there will be no content. In these cases the NativoSDK will make sure that the empty cell gets removed from your datasource, and the cell will be tracked as unfilled inventory.
 */
@property (readonly, nonatomic) BOOL isAdContentAvailable;


/**
 @abstract Returns 'YES' if this ad placement should be reserved until the request for ads is complete.
 @discussion  Ad placeholders are used when a cell must be reserved while the request for ads is still processing. Used when the cell UI is needed before the `NativoSDK` has time to return ad data.
 */
@property (readonly, nonatomic) BOOL isPlaceholder;


///@name Ad Properties

/**
 @abstract The ad's type. Certain ad types require different ad templates and on-click behaviors.
 @discussion The ad types are Native, Click-out, Autoplay Video, and Click-to-Play Video. Since certain ad types should be handled differently it is important to check this property.
 Click-out ads require a dedicated web view that consume the full screen. Native ads should be displayed in a UIViewController containing UILabel for title and UIWebView or WKWebView for the ad's content.
 */
@property (readonly, nonatomic) NtvAdType adType;


/**
 @abstract The ad's title.
*/
@property (readonly, nonatomic) NSString *title;


/**
 @abstract URL to the ad's content.
 @discussion Use this URL for both native and click-out ads. For click-out, display ad in a full-screen web view. For native ads, load this url in a WKWebView or UIWebView. The web view should be within a UIViewController that is style to look like the rest of your app using native components such as UILabels and UIImageViews for the title and article image. 
 */
@property (readonly, nonatomic) NSURL* sponsoredArticleURL;


/**
 @abstract Call to action URL. The link set by advertisers that will click out to advertisers site.
 */
@property (readonly, nonatomic, nullable) NSURL* ctaURL;


/**
 @abstract The ad's date of creation.
 */
@property (readonly, nonatomic, nullable) NSDate *date;


/**
 @abstract The ad's preview text.
 */
@property (readonly, nonatomic) NSString *previewText;


/**
 @abstract The ad's preview image URL.
 @discussion You may alternatively use `<resizePreviewImageUrlWithSize:usingCropMode:smartCropEnabled:>` to retrieve the URL of a pre-resized version of the preview image.
 */
@property (readonly, nonatomic) NSString *previewImageURL;


/**
 @abstract The advertiser's name.
 */
@property (readonly, nonatomic) NSString *authorName;


/**
 @abstract The advertiser's website URL.
 */
@property (readonly, nonatomic) NSString *authorURL;


/**
 @abstract The advertiser's image URL.
 @discussion You may alternatively use `<resizeAuthorImageUrlWithSize:usingCropMode:smartCropEnabled:>` to retrieve the URL of a pre-resized version of the author image. 
 */
@property (readonly, nonatomic) NSString *authorImageURL;


/**
 @abstract Populated with custom key-value pairs that were set by the advertiser on admin.nativo.com.
 @discussion May contain custom data set on admin.nativo.com. If working directly with advertiser, they can populate data here.
 */
@property (readonly, nonatomic, nullable) NSDictionary *customData;




///@name Remotely Resizing an ad Image

/**
 @abstract Returns the URL for a resized version of the ad's preview image.
 @discussion Nativo provides a service to remotely resize the preview image of an ad. Use this method to get the resized version of the URL.
 @param size The desired height and width. If either height or width is set to 0 (not both), then the image will be scaled based on aspect ratio.
 @param cropMode There are three different crop modes. We recommend using `ntvCropModeAspectFit`, however use whichever mode best suites your app. Defaults to 'ntvCropModeAspectFit'.
 @param enableSmartCrop If cropMode is set to `ntvCropModeAspectFill` and smart crop is enabled, then the image will be intelligently cropped so that the image's focal point is at the center. Enabling smart crop may slow down the request.
 
 */
-(NSURL *)resizePreviewImageUrlWithSize:(CGSize)size usingCropMode:(NtvCropMode)cropMode smartCropEnabled:(BOOL)enableSmartCrop;


/**
 @abstract Returns the URL for a resized version of `<authorImageURL>`.
 @discussion Nativo provides a service to remotely resize the author image of an ad. Use this method to get the resized version of the URL.
 @param size The desired height and width. If either height or width is set to 0 (not both), then the image will be scaled based on aspect ratio.
 @param cropMode There are three different crop modes. We recommend using `ntvCropModeAspectFit`, however use whichever mode best suites your app. Defaults to 'ntvCropModeAspectFit'.
 @param enableSmartCrop If cropMode is set to `ntvCropModeAspectFill` and smart crop is enabled, then the image will be intelligently cropped so that the image's focal point is at the center. Enabling smart crop may slow down the request.
 
 */
-(NSURL *)resizeAuthorImageUrlWithSize:(CGSize)size usingCropMode:(NtvCropMode)cropMode smartCropEnabled:(BOOL)enableSmartCrop;


@end
NS_ASSUME_NONNULL_END
