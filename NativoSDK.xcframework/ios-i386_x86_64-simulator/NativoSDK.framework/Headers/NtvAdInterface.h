//
//  NtvAdInterface.h
//  NativoSDK
//
//  Copyright © 2021 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <NativoSDK/NtvAdData.h>


/**
  The `NtvAdInterface` protocol is used by the NativoSDK to populate views with ad data. It should be implemented by a view used in your articles list.
 */

@protocol NtvAdInterface <NSObject>

///@name Interface Labels

/// The label where the title of the ad should display
@property (nonatomic, readonly, null_unspecified) UILabel *titleLabel;

/// The label where the name of the ad's author/advertiser name should display
@property (nonatomic, readonly, null_unspecified) UILabel *authorNameLabel;

@optional

/// The label where the preview text of the ad should display. Use this or `previewTextView`, not both.
@property (nonatomic, readonly, null_unspecified) UILabel *previewTextLabel;

/// The text view where the preview text of the ad should display. Use this or `previewTextLabel`, not both.
@property (nonatomic, readonly, null_unspecified) UITextView *previewTextView;

/// The `UIImageView` where image of the ad should display
@property (nonatomic, readonly, null_unspecified) UIImageView *adImageView;

/// The `UIImageView` where author/advertiser image of the ad should display
@property (nonatomic, readonly, null_unspecified) UIImageView *authorImageView;

/// The label where the date of the ad should display
@property (nonatomic, readonly, null_unspecified) UILabel *dateLabel;

/**
 @abstract The view that will contain the AdChoices icon button.
 @discussion This will optionally be displayed only if the ad returned uses audience data targeting. The AdChoices button will click-out to a Nativo website that explains AdChoices and audience targeting. If the ad doesn't use targeting, then this view will be set to zero height and width. Your ad view should handle this by setting appropriate constraints to handle this change in size. Will add 3px insets on each side. Recommended 20x20 width and height. You can test this by calling `NativoSDK.enableTestAdvertisementsWithAdType(NtvTestAdTypeAdChoicesDisplay)`.
 */
@property (nonatomic, readonly, null_unspecified) UIView *adChoicesIconView;


///@name Sharing

/**
  @abstract Will be set by the NativoSDK. Use to share link to the ad content.
 */
@property (nonatomic, nullable) NSString *shareUrl;

/**
  @abstract Call this function pointer when a user succesfully shares the ad's shareUrl
 */
@property (nonatomic, null_unspecified) TrackDidShareBlock trackDidShare;


///@name Layout formatting

/**
 @abstract Called with isSponsored `YES` when object is being used as an ad
 @discussion Implement this method when using the same view for both articles and sponsored articles. If using this approach, you should implement this method and show sponsored indicators if `YES`, otherwise hide sponsored indicators if `NO`. See https://sdk.nativo.com/docs/dual-disclosure-best-practices.
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


@end

