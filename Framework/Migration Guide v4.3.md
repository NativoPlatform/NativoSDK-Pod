#  NativoSDK 4.3 Migration Guide

## Overview

Nativo's SDK v4.3 brings pixel injection tracking, and a range of stability improvements and minor bug fixes. For existing users upgrading from the Nativo SDK v4.2, there are no required code changes.

* Tracking is now 100% handled by the SDK. All tracking related APIs are deprecated.
* Nativo RTB spec 1.2 support

## API Deprecation

#### TrackViewWithNoAdFill
No longer needed and may safely be removed. All tracking scenarios are now handled automatically.

    + (void)trackViewWithNoAdFill:(UIView *)view atLocationIdentifier:(id)identifier inContainer:(UIScrollView *)container forSection:(NSString *)sectionUrl;

#### Enable Placeholder Mode
Placeholders are now enabled by default. Placeholders allow for much more flexibility when injecting ads and allow greater tracking precision for viewability.

    + (void)enablePlaceholderMode;

#### Resizing Ad Images
Image resizing is handled by the Nativo SDK automatically. Not needed as part of the v4 spec.

    -(nullable NSURL *)resizePreviewImageUrlWithSize:(CGSize)size usingCropMode:(NtvCropMode)cropMode smartCropEnabled:(BOOL)enableSmartCrop;

    -(nullable NSURL *)resizeAuthorImageUrlWithSize:(CGSize)size usingCropMode:(NtvCropMode)cropMode smartCropEnabled:(BOOL)enableSmartCrop;


## API Additions

#### Disable Placeholder Mode
Placeholder are now enabled by default. However you may disable them if needed. May be useful if using UITableView automated row heights.

    + (void)disablePlaceholderMode;
