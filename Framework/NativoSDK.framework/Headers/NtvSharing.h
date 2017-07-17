//
//  NtvSharing.h
//  NativoSDK
//
//  Copyright © 2017 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class NtvAdData;

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

/**
 Nativo's sharing service. Use these methods to get sharing links for ads and track them per platform.
 
 */
NS_ASSUME_NONNULL_BEGIN
@interface NtvSharing : NSObject

/// Returns a link that you can use for sharing with iOS's defaut sharing mechanisms.
+ (nullable NSString *)getShareLinkForPlatform:(NtvSharePlatform)sharePlatform withAd:(NtvAdData *)adData;

/// Track a share action for reporting with Nativo
+ (void)trackShareActionForPlatform:(NtvSharePlatform)sharePlatform withAd:(NtvAdData *)adData;

@end
NS_ASSUME_NONNULL_END
