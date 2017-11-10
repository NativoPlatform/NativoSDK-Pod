//
//  NtvVideoAdInterface.h
//  NativoSDK
//
//  Copyright © 2017 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AVPlayerItem;
@class NtvAdData;


/**
 The `NtvVideoAdInterface` protocol is used by the NativoSDK to populate views with in feed video ad data. It should be implemented by a subclass of the view used in your articles list. In most cases this will be UITableViewCell or UICollectionViewCell.
 */
NS_ASSUME_NONNULL_BEGIN
@protocol NtvVideoAdInterface <NSObject>

///@name Interface Labels

/// A view that will contain the video for your ad.
- (UIView *)videoView;

/// The label where the title of the ad should display
- (UILabel *)titleLabel;

/// The label where the name of the ad's author/advertiser name should display
- (UILabel *)authorNameLabel;

@optional

/// The label where the preview text of the ad should display
- (UILabel *)previewTextLabel;

/// The `UIImageView` where author/advertiser image of the ad should display
- (UIImageView *)authorImageView;

/// The label where the date of the ad should display
- (UILabel *)dateLabel;


///@name Layout formatting

/**
 @abstract Called with isSponsored `YES` when view is being used as an ad
 @discussion Implement this method when using the same view for both video and sponsored video. If using this approach, you should implement this method and show sponsored indicators if `YES`, otherwise hide sponsored indicators if `NO`.
 */
- (void)displaySponsoredIndicators:(BOOL)isSponsored;

/**
 @abstract If implemented this method will be called to format the ad's date into a string.
 @discussion Use this method when you require specific date-time formatting to match the rest of your app
 */
- (NSString *)formatDate:(NSDate *)date;

/**
 @abstract A string defining how the video is displayed within an AVPlayerLayer bounds rect.
 @discusssion Options are AVLayerVideoGravityResizeAspect, AVLayerVideoGravityResizeAspectFill
 and AVLayerVideoGravityResize. AVLayerVideoGravityResizeAspect is default.
 See <AVFoundation/AVAnimation.h> for a description of these options.
 */
- (NSString *)videoFillMode;


///@name Video player notification methods

/// Video player goes full screen
- (void)videoPlayerViewDidGoFullScreenWithAd:(NtvAdData *)adData;

/// Video player did exit full screen
- (void)videoPlayerViewDidExitFullScreenWithAd:(NtvAdData *)adData;

/// Video player will load an AVPlayerItem
- (void)videoPlayerViewWillLoadPlayerItem:(nullable AVPlayerItem *)playerItem withAd:(NtvAdData *)adData;

/// Video player did load an AVPlayerItem
- (void)videoPlayerViewDidLoadPlayerItem:(nullable AVPlayerItem *)playerItem withAd:(NtvAdData *)adData;

/// Video player rate did change
- (void)videoPlayerViewPlayerRateChange:(float)rate withAd:(NtvAdData *)adData;

/// Video player did reach end
- (void)videoPlayerViewDidReachEndWithAd:(NtvAdData *)adData;

/// Video player did fail
- (void)videoPlayerViewDidFailWithError:(NSError *)error withAd:(NtvAdData *)adData;

/**
 @abstract Video player will modify audio session category
 @discusssion You may use this method to prevent the audio session category from being modified. Do so only if your app requires specific categories to be set.
 Audio session categories are modified in order to allow muted videos to be played without pausing background audio.
 @return If you return 'false', the audio category will not be modified
 */
- (BOOL)videoPlayerWillModifyAudioSessionCategory:(NSString *)category withAd:(NtvAdData *)adData;

/**
 @abstract Video player will deactivate the current audio session
 @discusssion You may use this method to prevent the audio session from being deactivated. The video player will, be default, disable the audio session when the video has finished playing, is paused, or goes at least 50% off screen. Doing so will enable any background audio to resume playing.
 @return If you return 'false', the audio session will not be deactivated
 */
- (BOOL)videoPlayerWillDeactiveAudioSessionWithAd:(NtvAdData *)adData;


@end
NS_ASSUME_NONNULL_END
