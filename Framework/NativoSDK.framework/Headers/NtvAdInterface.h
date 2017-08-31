//
//  NtvAdInterface.h
//  NativoSDK
//
//  Copyright © 2017 Nativo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
  The `NtvAdInterface` protocol is used by the NativoSDK to populate views with ad data. It should be implemented by a subclass of the view used in your articles list. In most cases this will be UITableViewCell or UICollectionViewCell.
 */
NS_ASSUME_NONNULL_BEGIN
@protocol NtvAdInterface <NSObject>

///@name Interface Labels

/// The label where the title of the ad should display
- (UILabel *)titleLabel;

/// The label where the name of the ad's author/advertiser name should display
- (UILabel *)authorNameLabel;

@optional

/// The label where the preview text of the ad should display
- (UILabel *)previewTextLabel;

/// The `UIImageView` where image of the ad should display
- (UIImageView *)adImageView;

/// The `UIImageView` where author/advertiser image of the ad should display
- (UIImageView *)authorImageView;

/// The label where the date of the ad should display
- (UILabel *)dateLabel;


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
- (NSString *)formatDate:(nullable NSDate *)date;


@end
NS_ASSUME_NONNULL_END
