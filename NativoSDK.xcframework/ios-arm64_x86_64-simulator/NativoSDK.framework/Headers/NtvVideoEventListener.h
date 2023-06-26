//
//  VideoEventListener.h
//  NativoSDK
//
//  Copyright © 2023 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <NativoSDK/NtvAdData.h>
#import <NativoSDK/NtvVideoPlayer.h>

@protocol NtvVideoEventListener <NSObject>
@optional

///@name Video Player Events

/// Video player state changed
- (void)videoPlayer:(nonnull id<NtvVideoPlayer>)player stateChanged:(NtvVideoState)state;

/// Called as the video or buffer position progresses, in milliseconds
- (void)videoPlayer:(nonnull id<NtvVideoPlayer>)player progressChanged:(long)progress withAd:(nonnull NtvAdData *)adData;

/// Video player goes full screen
- (void)videoPlayer:(nonnull id<NtvVideoPlayer>)player didGoFullScreenWithAd:(nonnull NtvAdData *)adData;

/// Video player did exit full screen
- (void)videoPlayer:(nonnull id<NtvVideoPlayer>)player didExitFullScreenWithAd:(nonnull NtvAdData *)adData;

/// Called when the user taps the learn more button on the full screen player
- (void)videoPlayer:(nonnull id<NtvVideoPlayer>)player learnMoreClicked:(nonnull NtvAdData *)adData;

/// Video player did fail
- (void)videoPlayer:(nonnull id<NtvVideoPlayer>)player didFailWithError:(nullable NSError *)error withAd:(nonnull NtvAdData *)adData;

///@name Manage Audio Session

/**
 @abstract Nativo will modify audio session category
 @discussion You may use this method to prevent the audio session category from being modified. Do so only if your app requires specific categories to be set. Audio session categories are modified to playback
    mode when a video goes fullscreen, and also in order to allow muted videos to be played without pausing background audio.
 
While Nativo will handle the audio session for videos that we control, it is up to you to manage the session for your own videos. We highly recommend that you import AVFoundation and change the AVAudioSessionCategory to `AVAudioSessionCategoryPlayback` whenever a video in your app is played. This will prevent background audio from overlapping with the foreground video.

 @return If you return 'false', the audio category will not be modified
 */
- (BOOL)videoPlayer:(nonnull id<NtvVideoPlayer>)player shouldModifyAudioSessionCategory:(nonnull NSString *)category withReason:(nonnull NSString *)reason;

/**
 @abstract Nativo will deactivate the current audio session
 @discussion You may use this method to prevent the audio session from being deactivated. The video player will, by default, disable the audio session when the video has finished playing, or if the app is suspended in the background, but only if background audio was previously playing. Doing so will enable any background audio to resume playing.
 @return If you return 'false', the audio session will not be deactivated
 */
- (BOOL)videoPlayer:(nonnull id<NtvVideoPlayer>)player shouldDeactiveAudioSessionWithReason:(nonnull NSString *)reason;

@end
