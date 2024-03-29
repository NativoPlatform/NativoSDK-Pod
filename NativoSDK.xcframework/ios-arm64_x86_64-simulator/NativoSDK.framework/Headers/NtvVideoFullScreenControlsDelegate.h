//
//  NtvVideoFullScreenControlsDelegate.h
//  NativoSDK
//
//  Copyright © 2023 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <NativoSDK/NtvVideoEventListener.h>
#import <NativoSDK/NtvVideoPlayer.h>
@class AVPlayer;
@class AVPlayerLayer;

/**
 The `NtvVideoFullScreenControlsDelegate` is an optional protocol that should be adopted if you intend to create your own user interface for video controls. By default the NativoSDK will automatically use Nativo's own built in video controls, however if you need to match the look and feel of your app you can create your own UI by creating a view that implements this protocol. You would then need to call [NativoSDK setCustomFullScreenVideoControlsView:] to set your player as the new default.
 
 */
NS_ASSUME_NONNULL_BEGIN
@protocol NtvVideoFullScreenControlsDelegate <NSObject>

///@name Set Player

/// Return the view that will be used to diplay video
@property (nonatomic, readonly) UIView *videoContainer;

/// Use this method to return a button that can be used to clickout to an advertisers site, where users can learn more. A new click target will automatically be added to this button to open the ad's link in Safari.
- (UIButton *)learnMoreButton;

///@name Observe

@optional

/// Return an implementation of the NtvVideoEventListener to listen for video events
@property (nonatomic, readonly, null_unspecified) id<NtvVideoEventListener> videoEventListener;

/// Used to be notified when a new video source is loading. Use to update UI.
- (void)willLoadNewPlayerItem DEPRECATED_MSG_ATTRIBUTE("Use videoEventListener");

/// Used to be notified when a new video is being played. Use to update UI and observe player item state as neccesary.
- (void)didLoadNewPlayerItem:(nullable AVPlayerItem *)playerItem DEPRECATED_MSG_ATTRIBUTE("Use videoEventListener");

/// Set the given player in your Custom full screen controls class. Use to play, pause, observe state.
- (void)setPlayer:(nullable AVPlayer *)player DEPRECATED_MSG_ATTRIBUTE("Use NtvVideoPlayer instead");


///@name Ad Data Labels and Sharing

/// Video Player's title
- (void)setTitle:(NSString *)title;

/// Video Player's advertiser name
- (void)setAuthorName:(NSString *)author;

/// Video Player's content/preview text
- (void)setContentText:(NSString *)content;

/// Video Player's social share button
- (UIButton *)socialShareButton;

@end
NS_ASSUME_NONNULL_END
