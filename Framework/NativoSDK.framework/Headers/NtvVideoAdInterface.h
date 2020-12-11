//
//  NtvVideoAdInterface.h
//  NativoSDK
//
//  Copyright © 2020 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <NativoSDK/NtvAdData.h>
@class AVPlayerItem;
@class AVPlayer;


// Audio session change reasons
extern NSString * _Nonnull const NtvAudioSessionEndReasonResumeBackgroundAudio;
extern NSString * _Nonnull const NtvAudioSessionEndReasonAppSuspended;
extern NSString * _Nonnull const NtvAudioCategoryChangeReasonVideoFullscreen;
extern NSString * _Nonnull const NtvAudioCategoryChangeReasonVideoExitFullscreen;
extern NSString * _Nonnull const NtvAudioCategoryChangeReasonPlayMutedVideoWithBackgroundAudio;


/**
 The `NtvVideoAdInterface` protocol is used by the NativoSDK to populate views with in feed video ad data. It is also used to notify the app of video related events. It should be implemented by a  view used in your articles list.
 */

@protocol NtvVideoAdInterface <NSObject>

///@name Interface Labels

/// A view that will contain the video for your ad.
@property (nonatomic, readonly, null_unspecified) UIView *videoView;

/// The label where the title of the ad should display
@property (nonatomic, readonly, null_unspecified) UILabel *titleLabel;

/// The label where the name of the ad's author/advertiser name should display
@property (nonatomic, readonly, null_unspecified) UILabel *authorNameLabel;

@optional

/// The label where the preview text of the ad should display
@property (nonatomic, readonly, null_unspecified) UILabel *previewTextLabel;

/// The `UIImageView` where author/advertiser image of the ad should display
@property (nonatomic, readonly, null_unspecified) UIImageView *authorImageView;

/// The label where the date of the ad should display
@property (nonatomic, readonly, null_unspecified) UILabel *dateLabel;

/**
 @abstract The view that will contain the AdChoices icon button.
 @discussion This will optionally be displayed only if the ad returned uses audience data targeting. The AdChoices button will click-out to a Nativo website that explains AdChoices and audience targeting. If the ad doesn't use targeting, then this view will be set to zero height and width. Your ad view should handle this by setting appropriate constraints to handle this change in size. Will add 3px insets on each side. Recommended 20x20 width and height. You can test this by calling `NativoSDK.enableTestAdvertisementsWithAdType(NtvTestAdTypeAdChoicesDisplay)`.
 */
@property (nonatomic, readonly, null_unspecified) UIView *adChoicesIconView;


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
- (nonnull NSString *)formatDate:(nullable NSDate *)date;

/**
 @abstract Defaults to true. Return false if you don't need 'By' prepended to the author name.
 */
- (BOOL)shouldPrependAuthorByline;

/**
 @abstract A string defining how the video is displayed within an AVPlayerLayer bounds rect.
 @discussion Options are AVLayerVideoGravityResizeAspect, AVLayerVideoGravityResizeAspectFill
 and AVLayerVideoGravityResize. AVLayerVideoGravityResizeAspect is default.
 See <AVFoundation/AVAnimation.h> for a description of these options.
 */
- (nonnull NSString *)videoFillMode;


///@name Video player notification methods

/// Video player did load
- (void)videoPlayerViewDidLoadWithPlayer:(nonnull AVPlayer *)player;

/// Video player goes full screen
- (void)videoPlayerViewDidGoFullScreenWithAd:(nonnull NtvAdData *)adData;

/// Video player did exit full screen
- (void)videoPlayerViewDidExitFullScreenWithAd:(nonnull NtvAdData *)adData;

/// Video player will load an AVPlayerItem
- (void)videoPlayerViewWillLoadPlayerItem:(nullable AVPlayerItem *)playerItem withAd:(nonnull NtvAdData *)adData;

/// Video player did load an AVPlayerItem
- (void)videoPlayerViewDidLoadPlayerItem:(nullable AVPlayerItem *)playerItem withAd:(nonnull NtvAdData *)adData;

/// Video player rate did change
- (void)videoPlayerViewPlayerRateChange:(float)rate withAd:(nonnull NtvAdData *)adData;

/// Video player did reach end
- (void)videoPlayerViewDidReachEndWithAd:(nonnull NtvAdData *)adData;

/// Video player did fail
- (void)videoPlayerViewDidFailWithError:(nullable NSError *)error withAd:(nonnull NtvAdData *)adData;


///@name Manage Audio Session

/**
 @abstract Nativo will modify audio session category
 @discussion You may use this method to prevent the audio session category from being modified. Do so only if your app requires specific categories to be set. Audio session categories are modified to playback
    mode when a video goes fullscreen, and also in order to allow muted videos to be played without pausing background audio.
 
While Nativo will handle the audio session for videos that we control, it is up to you to manage the session for your own videos. We highly recommend that you import AVFoundation and change the AVAudioSessionCategory to `AVAudioSessionCategoryPlayback` whenever a video in your app is played. This will prevent background audio from overlapping with the foreground video.

 @return If you return 'false', the audio category will not be modified
 */
- (BOOL)videoPlayerShouldModifyAudioSessionCategory:(nonnull NSString *)category withReason:(nonnull NSString *)reason;

/**
 @abstract Nativo will deactivate the current audio session
 @discussion You may use this method to prevent the audio session from being deactivated. The video player will, by default, disable the audio session when the video has finished playing, or if the app is suspended in the background, but only if background audio was previously playing. Doing so will enable any background audio to resume playing.
 @return If you return 'false', the audio session will not be deactivated
 */
- (BOOL)videoPlayerShouldDeactiveAudioSessionWithReason:(nonnull NSString *)reason;


///@name Sharing

/**
  @abstract Will be set by the NativoSDK. Use to share link to the ad content.
 */
@property (nonatomic, nullable) NSString *shareUrl;

/**
  @abstract Call this function pointer when a user succesfully shares the ad's shareUrl
 */
@property (nonatomic, null_unspecified) TrackDidShareBlock trackDidShare;

@end
