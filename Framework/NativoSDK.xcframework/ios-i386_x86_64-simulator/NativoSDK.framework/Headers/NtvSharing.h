//
//  NtvSharing.h
//  NativoSDK
//
//  Copyright © 2020 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <NativoSDK/NtvAdData.h>

/**
 Nativo's sharing service. Use these methods to get sharing links for ads and track them per platform.
 
 */
NS_ASSUME_NONNULL_BEGIN
@interface NtvSharing : NSObject

/// Returns a link that you can use for sharing with iOS's defaut sharing mechanisms.
+ (nullable NSString *)getShareLinkForPlatform:(NtvSharePlatform)sharePlatform withAd:(NtvAdData *)adData __deprecated_msg("Use NtvAdInterface sharing properties");

/// Track a share action for reporting with Nativo
+ (void)trackShareActionForPlatform:(NtvSharePlatform)sharePlatform withAd:(NtvAdData *)adData __deprecated_msg("Use NtvAdInterface sharing properties");

@end
NS_ASSUME_NONNULL_END
