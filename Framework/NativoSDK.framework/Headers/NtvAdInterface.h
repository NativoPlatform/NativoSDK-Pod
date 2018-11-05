//
//  NtvAdInterface.h
//  NativoSDK
//
//  Copyright © 2018 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
  The `NtvAdInterface` protocol is used by the NativoSDK to populate views with ad data. It should be implemented by a view used in your articles list.
 */

@protocol NtvAdInterface <NSObject>

///@name Interface Labels

/// The label where the title of the ad should display
@property (nonatomic, readonly) UILabel *titleLabel;

/// The label where the name of the ad's author/advertiser name should display
@property (nonatomic, readonly) UILabel *authorNameLabel;

@optional

/// The label where the preview text of the ad should display
@property (nonatomic, readonly) UILabel *previewTextLabel;

/// The `UIImageView` where image of the ad should display
@property (nonatomic, readonly) UIImageView *adImageView;

/// The `UIImageView` where author/advertiser image of the ad should display
@property (nonatomic, readonly) UIImageView *authorImageView;

/// The label where the date of the ad should display
@property (nonatomic, readonly) UILabel *dateLabel;


///@name Layout formatting

/**
 @abstract Called with isSponsored `YES` when object is being used as an ad
 @discussion Implement this method when using the same view for both articles and sponsored articles. If using this approach, you should implement this method and show sponsored indicators if `YES`, otherwise hide sponsored indicators if `NO`.
 */
- (void)displaySponsoredIndicators:(BOOL)isSponsored;

/**
 @abstract If implemented this method will be called to format the ad's date into a string.
 @discussion Use this method when you require specific date-time formatting to match the rest of your app
 */
- (nonnull NSString *)formatDate:(nullable NSDate *)date;


@end

