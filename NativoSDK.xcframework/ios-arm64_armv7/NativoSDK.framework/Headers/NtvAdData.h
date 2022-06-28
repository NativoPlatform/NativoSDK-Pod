//
//  NtvAdData.h
//  NativoSDK
//
//  Copyright © 2021 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>


/** Ad types */
typedef NS_ENUM(NSUInteger, NtvAdType) {
    NtvAdTypeNative = 0,
    NtvAdTypeDisplay = 2,
    NtvAdTypeClickToPlayVideo = 3,
    NtvAdTypeScrollToPlayVideo = 5,
    NtvAdTypeStandardDisplay = 6,
    NtvAdTypeStory = 7,
    NtvAdTypeNoFill = 8
};

typedef NS_ENUM(NSUInteger, NtvTestAdType) {
    NtvTestAdTypeNative,
    NtvTestAdTypeDisplay,
    NtvTestAdTypeAdChoicesDisplay,
    NtvTestAdTypeStandardDisplay,
    NtvTestAdTypeClickToPlayVideo,
    NtvTestAdTypeScrollToPlayVideo,
    NtvTestAdTypeAdChoicesVideo,
    NtvTestAdTypeStory,
    NtvTestAdTypeNoFill
};

/** Enum of all the ad types that requre unique template nibs */
typedef NS_ENUM(NSUInteger, NtvAdTemplateType) {
    NtvAdTemplateTypeNative = 1,
    NtvAdTemplateTypeVideo,
    NtvAdTemplateTypeStandardDisplay,
    NtvAdTemplateTypeLandingPage
};


/** Image resize crop modes */
typedef NS_ENUM(NSUInteger, NtvCropMode) {
    NtvCropModeAspectFit,
    NtvCropModeAspectFill,
    NtvCropModePadding,
};

/** Share link types. Primarily used for tracking purposes. Use `NtvSharePlatformOther` if you are not sure of share plateform. */
typedef NS_ENUM(NSUInteger, NtvSharePlatform) {
    NtvSharePlatformFacebook,
    NtvSharePlatformTwitter,
    NtvSharePlatformLinkedIn,
    NtvSharePlatformGooglePlus,
    NtvSharePlatformPinterest,
    NtvSharePlatformStumbleUpon,
    NtvSharePlatformOther
};

typedef void(^TrackDidShareBlock)(NtvSharePlatform);

// Ad size (3x3) for use with Google Ads
extern CGSize const kGADAdSizeNativoDefault;

/**
 An instance of `NtvAdData` stores data of a single Nativo ad.  Ads are automatically requested and cached when calling `NativoSDK.prefetchAd()` and `NativoSDK.placeAdInView()`.
 
 */
NS_ASSUME_NONNULL_BEGIN
@interface NtvAdData : NSObject


///@name Verifying the Availability of Ad Content

/**
 @abstract Returns `true` if ad content is available.
 @discussion Sometimes requests for ads cannot be filled. When this happens the ad will still return, however there will be no content. In these cases calling `placeAdInView()` will return `false` at this location identifier and no ad will be rendered.
 */
@property (readonly, nonatomic) BOOL isAdContentAvailable;


///@name Ad Properties

/**
 @abstract The ad's type. Certain ad types require different ad templates and on-click behaviors.
 */
@property (readonly, nonatomic) NtvAdType adType;


/**
 @abstract The ad's title.
*/
@property (nullable, readonly, nonatomic) NSString *title;


/**
 @abstract URL to the ad's content.
 @discussion Use this URL for both native and click-out ads. 
 */
@property (nullable, readonly, nonatomic) NSURL* sponsoredArticleURL;


/**
 @abstract Call to action URL. The link set by advertisers that will click out to advertisers site.
 */
@property (nullable, readonly, nonatomic) NSURL* ctaURL;


/**
 @abstract The ad's date of creation.
 */
@property (nullable, readonly, nonatomic) NSDate *date;


/**
 @abstract The ad's preview text.
 */
@property (nullable, readonly, nonatomic) NSString *previewText;


/**
 @abstract The ad's image URL.
 */
@property (nullable, readonly, nonatomic) NSString *previewImageURL;


/**
 @abstract The advertiser's name.
 */
@property (nullable, readonly, nonatomic) NSString *authorName;


/**
 @abstract The advertiser's website URL.
 */
@property (nullable, readonly, nonatomic) NSString *authorURL;


/**
 @abstract The advertiser's image URL.
 */
@property (nullable, readonly, nonatomic) NSString *authorImageURL;


/**
 @abstract Populated with custom key-value pairs that were set by the advertiser on admin.nativo.com.
 @discussion May contain custom data set on admin.nativo.com. If working directly with advertiser, they can populate data here.
 */
@property (nullable, readonly, nonatomic) NSDictionary *customData;


/**
 @abstract The identifier of the placement to which the ad belongs.
 */
@property (readonly, nonatomic) NSNumber *placementId;

/**
 @abstract The identifier for this ad.
 */
@property (readonly, nonatomic) NSNumber *adId;

/**
 @abstract Object that identifies the ad's location. Will most likely be an `NSIndexPath`
 */
@property (nullable, readonly, nonatomic) id locationIdentifier;

/**
 @abstract The size of the standard display ad. If ad type is not 'NtvAdTypeStandardDisplay' this will return CGSizeZero.
 */
@property (nonatomic) CGSize standardDisplaySize;

@end
NS_ASSUME_NONNULL_END
