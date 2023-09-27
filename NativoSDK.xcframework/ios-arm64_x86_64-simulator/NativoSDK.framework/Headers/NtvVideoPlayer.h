//
//  NtvVideoPlayer.h
//  NativoSDK
//
//  Copyright © 2023 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, NtvVideoState) {
    NtvPlayStatePlay,
    NtvPlayStatePause,
    NtvPlayStateFinished,
    NtvPlayStateBuffering,
    NtvPlayStateInit
};

/**
 The Nativo VideoPlayer handles the playback of a video ad. Use this to modify playback as needed.
 */
@protocol NtvVideoPlayer <NSObject>

/// Play the video
- (void)play;

/// Pause the video
- (void)pause;

/// Mute the video
- (void)mute;

/// Un-mute the video
- (void)unmute;

/// Returns true if video is playing muted
- (BOOL)isMuted;

/**
    @abstract A string defining how the video is displayed within an AVPlayerLayer bounds rect.
    @discussion Options are AVLayerVideoGravityResizeAspect, AVLayerVideoGravityResizeAspectFill
                    and AVLayerVideoGravityResize. AVLayerVideoGravityResizeAspect is default.
                    See <AVFoundation/AVAnimation.h> for a description of these options.
 */
- (void)setVideoFillMode:(NSString *)fillMode;

/// Get the current video state
- (NtvVideoState)getVideoState;

/// Seek to desired position
- (void)seekTo:(long)posistion;

/// Get the video's current position in milliseconds
- (long)getPosistion;

/// Get the video's buffer position in milliseconds
- (long)getBufferPosistion;

/// Get the video's total duration in milliseconds
- (long)getDuration;

/// Exit the full screen video player if active
- (void)exitFullscreen;

@end
