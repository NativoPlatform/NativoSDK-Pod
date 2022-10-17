#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NtvVideoOutOfScreenAction, NtvVideoOnClickAction, NtvAutoplaySettingsCompanion, NtvAutoplaySettings, NtvCoreAdDataCompanion, NtvCoreAdFilterType, NtvCoreAdType, NtvOMSDKTrackingData, NtvCoreRateType, NtvCoreSystemConfig, NtvCoreSharePlatform, NtvKotlinArray<T>, NtvCoreAdData, NtvKotlinEnumCompanion, NtvKotlinEnum<E>, NtvCoreAdFilterTypeCompanion, NtvCoreAdTypeCompanion, NtvCoreCache, NtvCoreCompositeErrorCompanion, NtvGAMParameters, NtvGAMTest, NtvUrlConfiguration, NtvTestAdConfiguration, NtvCoreConfigCompanion, NtvCoreConfig, NtvCoreConfigService, NtvCoreErrorReporting, NtvKotlinUnit, NtvCoreCompositeError, NtvCoreResponse, NtvCoreNativeAdAbstractCompanion, NtvCoreNativeAdAbstract, NtvCoreNativeAdDataCompanion, NtvCoreNativeAdData, NtvCoreNativeVideoAdAbstractCompanion, NtvCoreVideoData, NtvCoreNativeVideoAdAbstract, NtvCoreNativeVideoAdDataCompanion, NtvCoreNativeVideoAdData, NtvKotlinx_serialization_jsonJsonElement, NtvCorePlacementCompanion, NtvCorePlacement, NtvCorePlacementsResponseCompanion, NtvCorePlacementsResponse, NtvCoreRateTypeCompanion, NtvCoreRequestService, NtvKotlinThrowable, NtvCoreSectionCache, NtvCoreSessionManager, NtvCoreSettings, NtvCoreTestAdType, NtvCoreStandardDisplayAdDataCompanion, NtvCoreStandardDisplayAdData, NtvCoreStoryAdDataCompanion, NtvCoreStoryAdData, NtvCoreSystemConfigCompanion, NtvCoreTestAdTypeCompanion, NtvCoreUtil, NtvVideoTracking, NtvCoreVideoDataCompanion, NtvVastVideoType, NtvKotlinException, NtvGAMParametersCompanion, NtvGAMTestCompanion, NtvKotlinError, NtvLog, NtvOMSDKTrackingDataCompanion, NtvPlacementKey, NtvTestAdConfigurationCompanion, NtvUrlConfigurationCompanion, NtvVastVideoTypeCompanion, NtvVideoOnClickActionCompanion, NtvVideoOutOfScreenActionCompanion, NtvVideoTrackingProperties, NtvVideoTrackingEventType, NtvVideoTrackingProgressType, NtvVideoTrackingCompanion, NtvVideoTrackingEvents, NtvVideoTrackingEventTypeCompanion, NtvVideoTrackingEventsCompanion, NtvVideoTrackingProgressKeysCompanion, NtvVideoTrackingProgressKeys, NtvVideoTrackingProgressTypeCompanion, NtvVideoTrackingPropertiesCompanion, NtvKotlinRuntimeException, NtvKotlinIllegalStateException, NtvKotlinx_serialization_jsonJsonElementCompanion, NtvKotlinx_serialization_coreSerializersModule, NtvKotlinx_serialization_coreSerialKind, NtvKotlinNothing;

@protocol NtvKotlinx_serialization_coreKSerializer, NtvKotlinComparable, NtvCoreAdDataWrapper, NtvCoreSectionWrapper, NtvCoreSessionDelegate, NtvKotlinx_serialization_coreEncoder, NtvKotlinx_serialization_coreSerialDescriptor, NtvKotlinx_serialization_coreSerializationStrategy, NtvKotlinx_serialization_coreDecoder, NtvKotlinx_serialization_coreDeserializationStrategy, NtvKotlinIterator, NtvKotlinx_serialization_coreCompositeEncoder, NtvKotlinAnnotation, NtvKotlinx_serialization_coreCompositeDecoder, NtvKotlinx_serialization_coreSerializersModuleCollector, NtvKotlinKClass, NtvKotlinKDeclarationContainer, NtvKotlinKAnnotatedElement, NtvKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface NtvBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface NtvBase (NtvBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface NtvMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface NtvMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorNtvKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface NtvNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface NtvByte : NtvNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface NtvUByte : NtvNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface NtvShort : NtvNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface NtvUShort : NtvNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface NtvInt : NtvNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface NtvUInt : NtvNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface NtvLong : NtvNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface NtvULong : NtvNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface NtvFloat : NtvNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface NtvDouble : NtvNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface NtvBoolean : NtvNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoplaySettings")))
@interface NtvAutoplaySettings : NtvBase
- (instancetype)initWithMinViewableArea:(float)minViewableArea minViewableAreaTime:(float)minViewableAreaTime onVideoEnd:(int32_t)onVideoEnd outOfScreenViewableArea:(float)outOfScreenViewableArea onOutOfScreen:(NtvVideoOutOfScreenAction *)onOutOfScreen onClickAction:(NtvVideoOnClickAction *)onClickAction isLegacy:(BOOL)isLegacy type:(float)type __attribute__((swift_name("init(minViewableArea:minViewableAreaTime:onVideoEnd:outOfScreenViewableArea:onOutOfScreen:onClickAction:isLegacy:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvAutoplaySettingsCompanion *companion __attribute__((swift_name("companion")));
- (float)component1 __attribute__((swift_name("component1()")));
- (float)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (float)component4 __attribute__((swift_name("component4()")));
- (NtvVideoOutOfScreenAction *)component5 __attribute__((swift_name("component5()")));
- (NtvVideoOnClickAction *)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (float)component8 __attribute__((swift_name("component8()")));
- (NtvAutoplaySettings *)doCopyMinViewableArea:(float)minViewableArea minViewableAreaTime:(float)minViewableAreaTime onVideoEnd:(int32_t)onVideoEnd outOfScreenViewableArea:(float)outOfScreenViewableArea onOutOfScreen:(NtvVideoOutOfScreenAction *)onOutOfScreen onClickAction:(NtvVideoOnClickAction *)onClickAction isLegacy:(BOOL)isLegacy type:(float)type __attribute__((swift_name("doCopy(minViewableArea:minViewableAreaTime:onVideoEnd:outOfScreenViewableArea:onOutOfScreen:onClickAction:isLegacy:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLegacy __attribute__((swift_name("isLegacy")));
@property (readonly) float minViewableArea __attribute__((swift_name("minViewableArea")));
@property (readonly) float minViewableAreaTime __attribute__((swift_name("minViewableAreaTime")));
@property (readonly) NtvVideoOnClickAction *onClickAction __attribute__((swift_name("onClickAction")));
@property (readonly) NtvVideoOutOfScreenAction *onOutOfScreen __attribute__((swift_name("onOutOfScreen")));
@property (readonly) int32_t onVideoEnd __attribute__((swift_name("onVideoEnd")));
@property (readonly) float outOfScreenViewableArea __attribute__((swift_name("outOfScreenViewableArea")));
@property (readonly) float type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoplaySettings.Companion")))
@interface NtvAutoplaySettingsCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvAutoplaySettingsCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("CoreAdData")))
@interface NtvCoreAdData : NtvBase
@property (class, readonly, getter=companion) NtvCoreAdDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t adCampaignID __attribute__((swift_name("adCampaignID")));
@property (readonly) NSString * _Nullable adChoicesUrl __attribute__((swift_name("adChoicesUrl")));
@property (readonly) NtvCoreAdFilterType *adFilterType __attribute__((swift_name("adFilterType")));
@property (readonly) int32_t adID __attribute__((swift_name("adID")));
@property NtvCoreAdType *adType __attribute__((swift_name("adType")));
@property (readonly) NtvInt * _Nullable advertiserID __attribute__((swift_name("advertiserID")));
@property (readonly) NSArray<NSString *> * _Nullable clickThirdPartyTrackingUrls __attribute__((swift_name("clickThirdPartyTrackingUrls")));
@property NSString * _Nullable clickTrackerGAM __attribute__((swift_name("clickTrackerGAM")));
@property id _Nullable container __attribute__((swift_name("container")));
@property (readonly) NSString *cpmImpressionPixelUrl __attribute__((swift_name("cpmImpressionPixelUrl")));
@property (readonly) NSString *ctaURL __attribute__((swift_name("ctaURL")));
@property (readonly) NtvMutableDictionary<NSString *, NSString *> * _Nullable customData __attribute__((swift_name("customData")));
@property (readonly) NSString *dateTime __attribute__((swift_name("dateTime")));
@property BOOL didTrack __attribute__((swift_name("didTrack")));
@property BOOL didTrackInView __attribute__((swift_name("didTrackInView")));
@property BOOL didTrackViewability __attribute__((swift_name("didTrackViewability")));
@property (readonly) int32_t filteringLevel __attribute__((swift_name("filteringLevel")));
@property (readonly) BOOL hasOMTrackingData __attribute__((swift_name("hasOMTrackingData")));
@property BOOL isInvalid __attribute__((swift_name("isInvalid")));
@property (readonly) BOOL isLoading __attribute__((swift_name("isLoading")));
@property BOOL isPlaceholder __attribute__((swift_name("isPlaceholder")));
@property id _Nullable locationIdentifier __attribute__((swift_name("locationIdentifier")));
@property (readonly) NSArray<NtvOMSDKTrackingData *> * _Nullable omSDKTrackers __attribute__((swift_name("omSDKTrackers")));
@property (readonly) NSString *percent70ImpressionPixelUrl __attribute__((swift_name("percent70ImpressionPixelUrl")));
@property (readonly) NSString *permanentLink __attribute__((swift_name("permanentLink")));
@property (readonly) NSString * _Nullable pixelThirdPartyTrackingUrl __attribute__((swift_name("pixelThirdPartyTrackingUrl")));
@property int32_t placementId __attribute__((swift_name("placementId")));
@property (readonly) NtvCoreRateType *rateType __attribute__((swift_name("rateType")));
@property (readonly) int32_t rateTypeVal __attribute__((swift_name("rateTypeVal")));
@property NSString *sectionUrl __attribute__((swift_name("sectionUrl")));
@property BOOL shouldNotTrack __attribute__((swift_name("shouldNotTrack")));
@property int32_t slideNum __attribute__((swift_name("slideNum")));
@property NtvCoreSystemConfig *sysInfo __attribute__((swift_name("sysInfo")));
@property (readonly) NSString * _Nullable thirdPartyCpmTrackers __attribute__((swift_name("thirdPartyCpmTrackers")));
@property (readonly) NSString * _Nullable thirdPartyVcpmTrackers __attribute__((swift_name("thirdPartyVcpmTrackers")));
@property void (^ _Nullable trackDidShareCallback)(NtvCoreSharePlatform *) __attribute__((swift_name("trackDidShareCallback")));
@property (readonly) NSString *trackShareLink __attribute__((swift_name("trackShareLink")));
@property (readonly) NSString *vCPMImpressionPixelUrl __attribute__((swift_name("vCPMImpressionPixelUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdData.Companion")))
@interface NtvCoreAdDataCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreAdDataCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(NtvKotlinArray<id<NtvKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end;


/**
 * Interface that iOS and Android can implement to be stored within NtvCoreCache
 * Used so that iOS & Android classes can wrap AdData
 */
__attribute__((swift_name("CoreAdDataWrapper")))
@protocol NtvCoreAdDataWrapper
@required
@property (readonly) NtvCoreAdData * _Nullable coreAdData __attribute__((swift_name("coreAdData")));
@property (readonly) BOOL isAdContentAvailable __attribute__((swift_name("isAdContentAvailable")));
@property (readonly) BOOL isInvalid __attribute__((swift_name("isInvalid")));
@property (readonly) BOOL isPlaceholder __attribute__((swift_name("isPlaceholder")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol NtvKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface NtvKotlinEnum<E> : NtvBase <NtvKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;


/**
 * Private enums
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdFilterType")))
@interface NtvCoreAdFilterType : NtvKotlinEnum<NtvCoreAdFilterType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Private enums
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NtvCoreAdFilterTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NtvCoreAdFilterType *advertiser __attribute__((swift_name("advertiser")));
@property (class, readonly) NtvCoreAdFilterType *campaign __attribute__((swift_name("campaign")));
@property (class, readonly) NtvCoreAdFilterType *ad __attribute__((swift_name("ad")));
+ (NtvKotlinArray<NtvCoreAdFilterType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdFilterType.Companion")))
@interface NtvCoreAdFilterTypeCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreAdFilterTypeCompanion *shared __attribute__((swift_name("shared")));
- (NtvCoreAdFilterType * _Nullable)valueOfValue:(int32_t)value __attribute__((swift_name("valueOf(value:)")));
@end;


/**
 * Public Enums
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdType")))
@interface NtvCoreAdType : NtvKotlinEnum<NtvCoreAdType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Public Enums
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NtvCoreAdTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NtvCoreAdType *native __attribute__((swift_name("native")));
@property (class, readonly) NtvCoreAdType *display __attribute__((swift_name("display")));
@property (class, readonly) NtvCoreAdType *clickToPlayVideo __attribute__((swift_name("clickToPlayVideo")));
@property (class, readonly) NtvCoreAdType *scrollToPlayVideo __attribute__((swift_name("scrollToPlayVideo")));
@property (class, readonly) NtvCoreAdType *standardDisplay __attribute__((swift_name("standardDisplay")));
@property (class, readonly) NtvCoreAdType *story __attribute__((swift_name("story")));
@property (class, readonly) NtvCoreAdType *noFill __attribute__((swift_name("noFill")));
+ (NtvKotlinArray<NtvCoreAdType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdType.Companion")))
@interface NtvCoreAdTypeCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreAdTypeCompanion *shared __attribute__((swift_name("shared")));
- (NtvCoreAdType * _Nullable)valueOfValue:(int32_t)value __attribute__((swift_name("valueOf(value:)")));
@end;


/**
 * NtvCoreCache
 * Thread safe via https://github.com/touchlab/Stately#stately-isolate
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCache")))
@interface NtvCoreCache : NtvBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * NtvCoreCache
 * Thread safe via https://github.com/touchlab/Stately#stately-isolate
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)coreCache __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreCache *shared __attribute__((swift_name("shared")));

/**
 * Clear cache
 */
- (void)clearAdsInSectionUrl:(NSString *)inSectionUrl container:(id _Nullable)container __attribute__((swift_name("clearAds(inSectionUrl:container:)")));

/**
 * Used to notify a section of a failure and invalidate the ad.
 * Only provides location and container if ad was previously
 * assigned to location and is not a placeholder
 */
- (void)failAdInSectionUrl:(NSString *)sectionUrl atLocation:(id _Nullable)atLocation inView:(id _Nullable)inView container:(id _Nullable)container error:(id _Nullable)error __attribute__((swift_name("failAdIn(sectionUrl:atLocation:inView:container:error:)")));

/**
 * Ad Data
 */
- (id<NtvCoreAdDataWrapper> _Nullable)getAdDataForIdentifier:(id)identifier sectionUrl:(NSString *)sectionUrl container:(id)container __attribute__((swift_name("getAdDataFor(identifier:sectionUrl:container:)")));
- (id<NtvCoreAdDataWrapper> _Nullable)getAndDequeueAdDataForLocation:(id)location sectionUrl:(NSString *)sectionUrl container:(id)container __attribute__((swift_name("getAndDequeueAdDataFor(location:sectionUrl:container:)")));

/**
 * Used to help manage datasource
 */
- (int32_t)getNumberOfAdsInSectionUrl:(NSString *)sectionUrl container:(id)container __attribute__((swift_name("getNumberOfAdsIn(sectionUrl:container:)")));

/**
 * Used to help manage datasource offsets on iOS
 */
- (NSArray<id> * _Nullable)getPlacementKeysInSectionUrl:(NSString *)sectionUrl container:(id)container __attribute__((swift_name("getPlacementKeysIn(sectionUrl:container:)")));

/**
 * Prefetching
 */
- (int32_t)getPrefetchedAdsCountSectionUrl:(NSString *)sectionUrl __attribute__((swift_name("getPrefetchedAdsCount(sectionUrl:)")));
- (id<NtvCoreSectionWrapper> _Nullable)getSectionForSectionUrl:(NSString * _Nullable)sectionUrl __attribute__((swift_name("getSectionFor(sectionUrl:)")));
- (void)removeSectionWithSectionUrl:(NSString *)withSectionUrl __attribute__((swift_name("removeSection(withSectionUrl:)")));
- (void)setAdForAdData:(id<NtvCoreAdDataWrapper>)adData sectionUrl:(NSString *)sectionUrl location:(id _Nullable)location container:(id _Nullable)container __attribute__((swift_name("setAdFor(adData:sectionUrl:location:container:)")));
- (void)setAdPlaceholderForSectionUrl:(NSString *)sectionUrl location:(id)location container:(id)container __attribute__((swift_name("setAdPlaceholderFor(sectionUrl:location:container:)")));

/**
 * Section
 */
- (void)setSectionForSectionUrl:(NSString *)sectionUrl section:(id<NtvCoreSectionWrapper>)section targeting:(NSDictionary<NSString *, id> * _Nullable)targeting owner:(id _Nullable)owner __attribute__((swift_name("setSectionFor(sectionUrl:section:targeting:owner:)")));
@end;

__attribute__((swift_name("CoreCompositeError")))
@interface NtvCoreCompositeError : NtvBase
- (instancetype)initWithAnyError:(id _Nullable)anyError contextMsg:(NSString * _Nullable)contextMsg relatedUrl:(NSString * _Nullable)relatedUrl __attribute__((swift_name("init(anyError:contextMsg:relatedUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAnyError:(id _Nullable)anyError contextMsg:(NSString * _Nullable)contextMsg __attribute__((swift_name("init(anyError:contextMsg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvCoreCompositeErrorCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) id _Nullable anyError __attribute__((swift_name("anyError")));
@property NSString * _Nullable contextMsg __attribute__((swift_name("contextMsg")));
@property BOOL isException __attribute__((swift_name("isException")));
@property BOOL isFatal __attribute__((swift_name("isFatal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCompositeError.Companion")))
@interface NtvCoreCompositeErrorCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreCompositeErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConfig")))
@interface NtvCoreConfig : NtvBase
- (instancetype)initWithGamParams:(NtvGAMParameters *)gamParams gamTestValues:(NtvGAMTest *)gamTestValues url:(NtvUrlConfiguration *)url testAds:(NtvTestAdConfiguration *)testAds timeOnContentActionType:(int32_t)timeOnContentActionType userEngagementActionType:(int32_t)userEngagementActionType userEngagementTimeDelayMS:(int32_t)userEngagementTimeDelayMS shouldApplyGDPR:(BOOL)shouldApplyGDPR shouldApplyCCPA:(BOOL)shouldApplyCCPA hasGDPRConsentForNativo:(BOOL)hasGDPRConsentForNativo hasCCPAConsentForNativo:(BOOL)hasCCPAConsentForNativo enableErrorReporting:(BOOL)enableErrorReporting enableOMTracking:(BOOL)enableOMTracking enableOMTesting:(BOOL)enableOMTesting omServiceUrl:(NSString *)omServiceUrl omVerificationUrl:(NSString *)omVerificationUrl shouldTrackSDKError:(BOOL)shouldTrackSDKError enableVAST:(BOOL)enableVAST loadJSFormatString:(NSString *)loadJSFormatString loadJSTrackingAttr:(NSString *)loadJSTrackingAttr dateFormat:(NSString *)dateFormat imageUrlBase:(NSString *)imageUrlBase rtbImageUrlBase:(NSString *)rtbImageUrlBase adCacheLimit:(int32_t)adCacheLimit __attribute__((swift_name("init(gamParams:gamTestValues:url:testAds:timeOnContentActionType:userEngagementActionType:userEngagementTimeDelayMS:shouldApplyGDPR:shouldApplyCCPA:hasGDPRConsentForNativo:hasCCPAConsentForNativo:enableErrorReporting:enableOMTracking:enableOMTesting:omServiceUrl:omVerificationUrl:shouldTrackSDKError:enableVAST:loadJSFormatString:loadJSTrackingAttr:dateFormat:imageUrlBase:rtbImageUrlBase:adCacheLimit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvCoreConfigCompanion *companion __attribute__((swift_name("companion")));
- (NtvGAMParameters *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (BOOL)component11 __attribute__((swift_name("component11()")));
- (BOOL)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (BOOL)component14 __attribute__((swift_name("component14()")));
- (NSString *)component15 __attribute__((swift_name("component15()")));
- (NSString *)component16 __attribute__((swift_name("component16()")));
- (BOOL)component17 __attribute__((swift_name("component17()")));
- (BOOL)component18 __attribute__((swift_name("component18()")));
- (NSString *)component19 __attribute__((swift_name("component19()")));
- (NtvGAMTest *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component20 __attribute__((swift_name("component20()")));
- (NSString *)component21 __attribute__((swift_name("component21()")));
- (NSString *)component22 __attribute__((swift_name("component22()")));
- (NSString *)component23 __attribute__((swift_name("component23()")));
- (int32_t)component24 __attribute__((swift_name("component24()")));
- (NtvUrlConfiguration *)component3 __attribute__((swift_name("component3()")));
- (NtvTestAdConfiguration *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (NtvCoreConfig *)doCopyGamParams:(NtvGAMParameters *)gamParams gamTestValues:(NtvGAMTest *)gamTestValues url:(NtvUrlConfiguration *)url testAds:(NtvTestAdConfiguration *)testAds timeOnContentActionType:(int32_t)timeOnContentActionType userEngagementActionType:(int32_t)userEngagementActionType userEngagementTimeDelayMS:(int32_t)userEngagementTimeDelayMS shouldApplyGDPR:(BOOL)shouldApplyGDPR shouldApplyCCPA:(BOOL)shouldApplyCCPA hasGDPRConsentForNativo:(BOOL)hasGDPRConsentForNativo hasCCPAConsentForNativo:(BOOL)hasCCPAConsentForNativo enableErrorReporting:(BOOL)enableErrorReporting enableOMTracking:(BOOL)enableOMTracking enableOMTesting:(BOOL)enableOMTesting omServiceUrl:(NSString *)omServiceUrl omVerificationUrl:(NSString *)omVerificationUrl shouldTrackSDKError:(BOOL)shouldTrackSDKError enableVAST:(BOOL)enableVAST loadJSFormatString:(NSString *)loadJSFormatString loadJSTrackingAttr:(NSString *)loadJSTrackingAttr dateFormat:(NSString *)dateFormat imageUrlBase:(NSString *)imageUrlBase rtbImageUrlBase:(NSString *)rtbImageUrlBase adCacheLimit:(int32_t)adCacheLimit __attribute__((swift_name("doCopy(gamParams:gamTestValues:url:testAds:timeOnContentActionType:userEngagementActionType:userEngagementTimeDelayMS:shouldApplyGDPR:shouldApplyCCPA:hasGDPRConsentForNativo:hasCCPAConsentForNativo:enableErrorReporting:enableOMTracking:enableOMTesting:omServiceUrl:omVerificationUrl:shouldTrackSDKError:enableVAST:loadJSFormatString:loadJSTrackingAttr:dateFormat:imageUrlBase:rtbImageUrlBase:adCacheLimit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t adCacheLimit __attribute__((swift_name("adCacheLimit")));
@property (readonly) NSString *dateFormat __attribute__((swift_name("dateFormat")));
@property (readonly) BOOL delayRemovePixel __attribute__((swift_name("delayRemovePixel")));
@property (readonly) BOOL enableErrorReporting __attribute__((swift_name("enableErrorReporting")));
@property (readonly) BOOL enableOMTesting __attribute__((swift_name("enableOMTesting")));
@property (readonly) BOOL enableOMTracking __attribute__((swift_name("enableOMTracking")));
@property (readonly) BOOL enableVAST __attribute__((swift_name("enableVAST")));
@property (readonly) NtvGAMParameters *gamParams __attribute__((swift_name("gamParams")));
@property (readonly) NtvGAMTest *gamTestValues __attribute__((swift_name("gamTestValues")));
@property (readonly) BOOL hasCCPAConsentForNativo __attribute__((swift_name("hasCCPAConsentForNativo")));
@property (readonly) BOOL hasGDPRConsentForNativo __attribute__((swift_name("hasGDPRConsentForNativo")));
@property (readonly) NSString *imageUrlBase __attribute__((swift_name("imageUrlBase")));
@property (readonly) NSString *loadJSFormatString __attribute__((swift_name("loadJSFormatString")));
@property (readonly) NSString *loadJSTrackingAttr __attribute__((swift_name("loadJSTrackingAttr")));
@property (readonly) NSString *omServiceUrl __attribute__((swift_name("omServiceUrl")));
@property (readonly) NSString *omVerificationUrl __attribute__((swift_name("omVerificationUrl")));
@property (readonly) NSString *rtbImageUrlBase __attribute__((swift_name("rtbImageUrlBase")));
@property (readonly) BOOL shouldApplyCCPA __attribute__((swift_name("shouldApplyCCPA")));
@property (readonly) BOOL shouldApplyGDPR __attribute__((swift_name("shouldApplyGDPR")));
@property (readonly) BOOL shouldShowTrackingPixel __attribute__((swift_name("shouldShowTrackingPixel")));
@property (readonly) BOOL shouldTrackSDKError __attribute__((swift_name("shouldTrackSDKError")));
@property (readonly) NtvTestAdConfiguration *testAds __attribute__((swift_name("testAds")));
@property (readonly) int32_t timeOnContentActionType __attribute__((swift_name("timeOnContentActionType")));
@property (readonly) NtvUrlConfiguration *url __attribute__((swift_name("url")));
@property (readonly) int32_t userEngagementActionType __attribute__((swift_name("userEngagementActionType")));
@property (readonly) int32_t userEngagementTimeDelayMS __attribute__((swift_name("userEngagementTimeDelayMS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConfig.Companion")))
@interface NtvCoreConfigCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConfigService")))
@interface NtvCoreConfigService : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)coreConfigService __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreConfigService *shared __attribute__((swift_name("shared")));
- (void)requestConfigCompletion:(void (^ _Nullable)(NtvCoreConfig *))completion __attribute__((swift_name("requestConfig(completion:)")));
@property NtvCoreConfig *config __attribute__((swift_name("config")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreErrorReporting")))
@interface NtvCoreErrorReporting : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)coreErrorReporting __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreErrorReporting *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)postErrorLogsWithCompletionHandler:(void (^)(NtvKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postErrorLogs(completionHandler:)")));
- (void)registerUncaughtExceptions __attribute__((swift_name("registerUncaughtExceptions()")));
- (void)reportError:(NtvCoreCompositeError *)error __attribute__((swift_name("report(error:)")));
- (void)reportErrorWithContextMsg:(NSString *)contextMsg __attribute__((swift_name("reportErrorWith(contextMsg:)")));
- (void)reportIfInvalidResponseResponse:(NtvCoreResponse *)response contextMsg:(NSString *)contextMsg relatedUrl:(NSString *)relatedUrl __attribute__((swift_name("reportIfInvalidResponse(response:contextMsg:relatedUrl:)")));
- (void)reportUniqueError:(NtvCoreCompositeError *)error __attribute__((swift_name("reportUnique(error:)")));
@end;

__attribute__((swift_name("CoreNativeAdAbstract")))
@interface NtvCoreNativeAdAbstract : NtvCoreAdData
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NtvCoreNativeAdAbstractCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *articleUrl __attribute__((swift_name("articleUrl")));
@property (readonly) NSString *author __attribute__((swift_name("author")));
@property (readonly) NSString *authorImageURL __attribute__((swift_name("authorImageURL")));
@property (readonly) NSString *authorUrl __attribute__((swift_name("authorUrl")));
@property (readonly) NSString *previewImageURL __attribute__((swift_name("previewImageURL")));
@property (readonly) NSString *previewText __attribute__((swift_name("previewText")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNativeAdAbstract.Companion")))
@interface NtvCoreNativeAdAbstractCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreNativeAdAbstractCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(NtvKotlinArray<id<NtvKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNativeAdData")))
@interface NtvCoreNativeAdData : NtvCoreNativeAdAbstract
- (instancetype)initWithTitle:(NSString *)title articleUrl:(NSString *)articleUrl previewText:(NSString *)previewText author:(NSString *)author authorUrl:(NSString *)authorUrl authorImageURL:(NSString *)authorImageURL previewImageURL:(NSString *)previewImageURL dateTime:(NSString *)dateTime permanentLink:(NSString *)permanentLink trackShareLink:(NSString *)trackShareLink ctaURL:(NSString *)ctaURL cpmImpressionPixelUrl:(NSString *)cpmImpressionPixelUrl vCPMImpressionPixelUrl:(NSString *)vCPMImpressionPixelUrl percent70ImpressionPixelUrl:(NSString *)percent70ImpressionPixelUrl advertiserID:(NtvInt * _Nullable)advertiserID adID:(int32_t)adID adCampaignID:(int32_t)adCampaignID filteringLevel:(int32_t)filteringLevel rateTypeVal:(int32_t)rateTypeVal customData:(NtvMutableDictionary<NSString *, NSString *> * _Nullable)customData omSDKTrackers:(NSArray<NtvOMSDKTrackingData *> * _Nullable)omSDKTrackers adChoicesUrl:(NSString * _Nullable)adChoicesUrl thirdPartyCpmTrackers:(NSString * _Nullable)thirdPartyCpmTrackers thirdPartyVcpmTrackers:(NSString * _Nullable)thirdPartyVcpmTrackers clickThirdPartyTrackingUrls:(NSArray<NSString *> * _Nullable)clickThirdPartyTrackingUrls pixelThirdPartyTrackingUrl:(NSString * _Nullable)pixelThirdPartyTrackingUrl __attribute__((swift_name("init(title:articleUrl:previewText:author:authorUrl:authorImageURL:previewImageURL:dateTime:permanentLink:trackShareLink:ctaURL:cpmImpressionPixelUrl:vCPMImpressionPixelUrl:percent70ImpressionPixelUrl:advertiserID:adID:adCampaignID:filteringLevel:rateTypeVal:customData:omSDKTrackers:adChoicesUrl:thirdPartyCpmTrackers:thirdPartyVcpmTrackers:clickThirdPartyTrackingUrls:pixelThirdPartyTrackingUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) NtvCoreNativeAdDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (NSString *)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NtvInt * _Nullable)component15 __attribute__((swift_name("component15()")));
- (int32_t)component16 __attribute__((swift_name("component16()")));
- (int32_t)component17 __attribute__((swift_name("component17()")));
- (int32_t)component18 __attribute__((swift_name("component18()")));
- (int32_t)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NtvMutableDictionary<NSString *, NSString *> * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSArray<NtvOMSDKTrackingData *> * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSString * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSString * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSArray<NSString *> * _Nullable)component25 __attribute__((swift_name("component25()")));
- (NSString * _Nullable)component26 __attribute__((swift_name("component26()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NtvCoreNativeAdData *)doCopyTitle:(NSString *)title articleUrl:(NSString *)articleUrl previewText:(NSString *)previewText author:(NSString *)author authorUrl:(NSString *)authorUrl authorImageURL:(NSString *)authorImageURL previewImageURL:(NSString *)previewImageURL dateTime:(NSString *)dateTime permanentLink:(NSString *)permanentLink trackShareLink:(NSString *)trackShareLink ctaURL:(NSString *)ctaURL cpmImpressionPixelUrl:(NSString *)cpmImpressionPixelUrl vCPMImpressionPixelUrl:(NSString *)vCPMImpressionPixelUrl percent70ImpressionPixelUrl:(NSString *)percent70ImpressionPixelUrl advertiserID:(NtvInt * _Nullable)advertiserID adID:(int32_t)adID adCampaignID:(int32_t)adCampaignID filteringLevel:(int32_t)filteringLevel rateTypeVal:(int32_t)rateTypeVal customData:(NtvMutableDictionary<NSString *, NSString *> * _Nullable)customData omSDKTrackers:(NSArray<NtvOMSDKTrackingData *> * _Nullable)omSDKTrackers adChoicesUrl:(NSString * _Nullable)adChoicesUrl thirdPartyCpmTrackers:(NSString * _Nullable)thirdPartyCpmTrackers thirdPartyVcpmTrackers:(NSString * _Nullable)thirdPartyVcpmTrackers clickThirdPartyTrackingUrls:(NSArray<NSString *> * _Nullable)clickThirdPartyTrackingUrls pixelThirdPartyTrackingUrl:(NSString * _Nullable)pixelThirdPartyTrackingUrl __attribute__((swift_name("doCopy(title:articleUrl:previewText:author:authorUrl:authorImageURL:previewImageURL:dateTime:permanentLink:trackShareLink:ctaURL:cpmImpressionPixelUrl:vCPMImpressionPixelUrl:percent70ImpressionPixelUrl:advertiserID:adID:adCampaignID:filteringLevel:rateTypeVal:customData:omSDKTrackers:adChoicesUrl:thirdPartyCpmTrackers:thirdPartyVcpmTrackers:clickThirdPartyTrackingUrls:pixelThirdPartyTrackingUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t adCampaignID __attribute__((swift_name("adCampaignID")));
@property (readonly) NSString * _Nullable adChoicesUrl __attribute__((swift_name("adChoicesUrl")));
@property (readonly) int32_t adID __attribute__((swift_name("adID")));
@property (readonly) NtvInt * _Nullable advertiserID __attribute__((swift_name("advertiserID")));
@property (readonly) NSString *articleUrl __attribute__((swift_name("articleUrl")));
@property (readonly) NSString *author __attribute__((swift_name("author")));
@property (readonly) NSString *authorImageURL __attribute__((swift_name("authorImageURL")));
@property (readonly) NSString *authorUrl __attribute__((swift_name("authorUrl")));
@property (readonly) NSArray<NSString *> * _Nullable clickThirdPartyTrackingUrls __attribute__((swift_name("clickThirdPartyTrackingUrls")));
@property (readonly) NSString *cpmImpressionPixelUrl __attribute__((swift_name("cpmImpressionPixelUrl")));
@property (readonly) NSString *ctaURL __attribute__((swift_name("ctaURL")));
@property (readonly) NtvMutableDictionary<NSString *, NSString *> * _Nullable customData __attribute__((swift_name("customData")));
@property (readonly) NSString *dateTime __attribute__((swift_name("dateTime")));
@property (readonly) int32_t filteringLevel __attribute__((swift_name("filteringLevel")));
@property (readonly) NSArray<NtvOMSDKTrackingData *> * _Nullable omSDKTrackers __attribute__((swift_name("omSDKTrackers")));
@property (readonly) NSString *percent70ImpressionPixelUrl __attribute__((swift_name("percent70ImpressionPixelUrl")));
@property (readonly) NSString *permanentLink __attribute__((swift_name("permanentLink")));
@property (readonly) NSString * _Nullable pixelThirdPartyTrackingUrl __attribute__((swift_name("pixelThirdPartyTrackingUrl")));
@property (readonly) NSString *previewImageURL __attribute__((swift_name("previewImageURL")));
@property (readonly) NSString *previewText __attribute__((swift_name("previewText")));
@property (readonly) int32_t rateTypeVal __attribute__((swift_name("rateTypeVal")));
@property (readonly) NSString * _Nullable thirdPartyCpmTrackers __attribute__((swift_name("thirdPartyCpmTrackers")));
@property (readonly) NSString * _Nullable thirdPartyVcpmTrackers __attribute__((swift_name("thirdPartyVcpmTrackers")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *trackShareLink __attribute__((swift_name("trackShareLink")));
@property (readonly) NSString *vCPMImpressionPixelUrl __attribute__((swift_name("vCPMImpressionPixelUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNativeAdData.Companion")))
@interface NtvCoreNativeAdDataCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreNativeAdDataCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("CoreNativeVideoAdAbstract")))
@interface NtvCoreNativeVideoAdAbstract : NtvCoreNativeAdAbstract
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NtvCoreNativeVideoAdAbstractCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NtvCoreVideoData *video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNativeVideoAdAbstract.Companion")))
@interface NtvCoreNativeVideoAdAbstractCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreNativeVideoAdAbstractCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(NtvKotlinArray<id<NtvKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNativeVideoAdData")))
@interface NtvCoreNativeVideoAdData : NtvCoreNativeVideoAdAbstract
- (instancetype)initWithVideo:(NtvCoreVideoData *)video dateTime:(NSString *)dateTime permanentLink:(NSString *)permanentLink trackShareLink:(NSString *)trackShareLink ctaURL:(NSString *)ctaURL cpmImpressionPixelUrl:(NSString *)cpmImpressionPixelUrl vCPMImpressionPixelUrl:(NSString *)vCPMImpressionPixelUrl percent70ImpressionPixelUrl:(NSString *)percent70ImpressionPixelUrl advertiserID:(NtvInt * _Nullable)advertiserID adID:(int32_t)adID adCampaignID:(int32_t)adCampaignID filteringLevel:(int32_t)filteringLevel rateTypeVal:(int32_t)rateTypeVal customData:(NtvMutableDictionary<NSString *, NSString *> * _Nullable)customData omSDKTrackers:(NSArray<NtvOMSDKTrackingData *> * _Nullable)omSDKTrackers adChoicesUrl:(NSString * _Nullable)adChoicesUrl thirdPartyCpmTrackers:(NSString * _Nullable)thirdPartyCpmTrackers thirdPartyVcpmTrackers:(NSString * _Nullable)thirdPartyVcpmTrackers title:(NSString *)title articleUrl:(NSString *)articleUrl previewText:(NSString *)previewText author:(NSString *)author authorUrl:(NSString *)authorUrl authorImageURL:(NSString *)authorImageURL previewImageURL:(NSString *)previewImageURL clickThirdPartyTrackingUrls:(NSArray<NSString *> * _Nullable)clickThirdPartyTrackingUrls pixelThirdPartyTrackingUrl:(NSString * _Nullable)pixelThirdPartyTrackingUrl __attribute__((swift_name("init(video:dateTime:permanentLink:trackShareLink:ctaURL:cpmImpressionPixelUrl:vCPMImpressionPixelUrl:percent70ImpressionPixelUrl:advertiserID:adID:adCampaignID:filteringLevel:rateTypeVal:customData:omSDKTrackers:adChoicesUrl:thirdPartyCpmTrackers:thirdPartyVcpmTrackers:title:articleUrl:previewText:author:authorUrl:authorImageURL:previewImageURL:clickThirdPartyTrackingUrls:pixelThirdPartyTrackingUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) NtvCoreNativeVideoAdDataCompanion *companion __attribute__((swift_name("companion")));
- (NtvCoreVideoData *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component10 __attribute__((swift_name("component10()")));
- (int32_t)component11 __attribute__((swift_name("component11()")));
- (int32_t)component12 __attribute__((swift_name("component12()")));
- (int32_t)component13 __attribute__((swift_name("component13()")));
- (NtvMutableDictionary<NSString *, NSString *> * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSArray<NtvOMSDKTrackingData *> * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString *)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component20 __attribute__((swift_name("component20()")));
- (NSString *)component21 __attribute__((swift_name("component21()")));
- (NSString *)component22 __attribute__((swift_name("component22()")));
- (NSString *)component23 __attribute__((swift_name("component23()")));
- (NSString *)component24 __attribute__((swift_name("component24()")));
- (NSString *)component25 __attribute__((swift_name("component25()")));
- (NSArray<NSString *> * _Nullable)component26 __attribute__((swift_name("component26()")));
- (NSString * _Nullable)component27 __attribute__((swift_name("component27()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NtvInt * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NtvCoreNativeVideoAdData *)doCopyVideo:(NtvCoreVideoData *)video dateTime:(NSString *)dateTime permanentLink:(NSString *)permanentLink trackShareLink:(NSString *)trackShareLink ctaURL:(NSString *)ctaURL cpmImpressionPixelUrl:(NSString *)cpmImpressionPixelUrl vCPMImpressionPixelUrl:(NSString *)vCPMImpressionPixelUrl percent70ImpressionPixelUrl:(NSString *)percent70ImpressionPixelUrl advertiserID:(NtvInt * _Nullable)advertiserID adID:(int32_t)adID adCampaignID:(int32_t)adCampaignID filteringLevel:(int32_t)filteringLevel rateTypeVal:(int32_t)rateTypeVal customData:(NtvMutableDictionary<NSString *, NSString *> * _Nullable)customData omSDKTrackers:(NSArray<NtvOMSDKTrackingData *> * _Nullable)omSDKTrackers adChoicesUrl:(NSString * _Nullable)adChoicesUrl thirdPartyCpmTrackers:(NSString * _Nullable)thirdPartyCpmTrackers thirdPartyVcpmTrackers:(NSString * _Nullable)thirdPartyVcpmTrackers title:(NSString *)title articleUrl:(NSString *)articleUrl previewText:(NSString *)previewText author:(NSString *)author authorUrl:(NSString *)authorUrl authorImageURL:(NSString *)authorImageURL previewImageURL:(NSString *)previewImageURL clickThirdPartyTrackingUrls:(NSArray<NSString *> * _Nullable)clickThirdPartyTrackingUrls pixelThirdPartyTrackingUrl:(NSString * _Nullable)pixelThirdPartyTrackingUrl __attribute__((swift_name("doCopy(video:dateTime:permanentLink:trackShareLink:ctaURL:cpmImpressionPixelUrl:vCPMImpressionPixelUrl:percent70ImpressionPixelUrl:advertiserID:adID:adCampaignID:filteringLevel:rateTypeVal:customData:omSDKTrackers:adChoicesUrl:thirdPartyCpmTrackers:thirdPartyVcpmTrackers:title:articleUrl:previewText:author:authorUrl:authorImageURL:previewImageURL:clickThirdPartyTrackingUrls:pixelThirdPartyTrackingUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t adCampaignID __attribute__((swift_name("adCampaignID")));
@property (readonly) NSString * _Nullable adChoicesUrl __attribute__((swift_name("adChoicesUrl")));
@property (readonly) int32_t adID __attribute__((swift_name("adID")));
@property (readonly) NtvInt * _Nullable advertiserID __attribute__((swift_name("advertiserID")));
@property (readonly) NSString *articleUrl __attribute__((swift_name("articleUrl")));
@property (readonly) NSString *author __attribute__((swift_name("author")));
@property (readonly) NSString *authorImageURL __attribute__((swift_name("authorImageURL")));
@property (readonly) NSString *authorUrl __attribute__((swift_name("authorUrl")));
@property (readonly) NSArray<NSString *> * _Nullable clickThirdPartyTrackingUrls __attribute__((swift_name("clickThirdPartyTrackingUrls")));
@property (readonly) NSString *cpmImpressionPixelUrl __attribute__((swift_name("cpmImpressionPixelUrl")));
@property (readonly) NSString *ctaURL __attribute__((swift_name("ctaURL")));
@property (readonly) NtvMutableDictionary<NSString *, NSString *> * _Nullable customData __attribute__((swift_name("customData")));
@property (readonly) NSString *dateTime __attribute__((swift_name("dateTime")));
@property (readonly) int32_t filteringLevel __attribute__((swift_name("filteringLevel")));
@property (readonly) NSArray<NtvOMSDKTrackingData *> * _Nullable omSDKTrackers __attribute__((swift_name("omSDKTrackers")));
@property (readonly) NSString *percent70ImpressionPixelUrl __attribute__((swift_name("percent70ImpressionPixelUrl")));
@property (readonly) NSString *permanentLink __attribute__((swift_name("permanentLink")));
@property (readonly) NSString * _Nullable pixelThirdPartyTrackingUrl __attribute__((swift_name("pixelThirdPartyTrackingUrl")));
@property (readonly) NSString *previewImageURL __attribute__((swift_name("previewImageURL")));
@property (readonly) NSString *previewText __attribute__((swift_name("previewText")));
@property (readonly) int32_t rateTypeVal __attribute__((swift_name("rateTypeVal")));
@property (readonly) NSString * _Nullable thirdPartyCpmTrackers __attribute__((swift_name("thirdPartyCpmTrackers")));
@property (readonly) NSString * _Nullable thirdPartyVcpmTrackers __attribute__((swift_name("thirdPartyVcpmTrackers")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *trackShareLink __attribute__((swift_name("trackShareLink")));
@property (readonly) NSString *vCPMImpressionPixelUrl __attribute__((swift_name("vCPMImpressionPixelUrl")));
@property (readonly) NtvCoreVideoData *video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNativeVideoAdData.Companion")))
@interface NtvCoreNativeVideoAdDataCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreNativeVideoAdDataCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePlacement")))
@interface NtvCorePlacement : NtvBase
- (instancetype)initWithPlacementID:(int32_t)placementID ad:(NSDictionary<NSString *, NtvKotlinx_serialization_jsonJsonElement *> * _Nullable)ad __attribute__((swift_name("init(placementID:ad:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvCorePlacementCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSDictionary<NSString *, NtvKotlinx_serialization_jsonJsonElement *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NtvCorePlacement *)doCopyPlacementID:(int32_t)placementID ad:(NSDictionary<NSString *, NtvKotlinx_serialization_jsonJsonElement *> * _Nullable)ad __attribute__((swift_name("doCopy(placementID:ad:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NtvKotlinx_serialization_jsonJsonElement *> * _Nullable ad __attribute__((swift_name("ad")));
@property (readonly) int32_t placementID __attribute__((swift_name("placementID")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePlacement.Companion")))
@interface NtvCorePlacementCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCorePlacementCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePlacementsResponse")))
@interface NtvCorePlacementsResponse : NtvBase
- (instancetype)initWithSys:(NtvCoreSystemConfig *)sys placements:(NSArray<NtvCorePlacement *> *)placements __attribute__((swift_name("init(sys:placements:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvCorePlacementsResponseCompanion *companion __attribute__((swift_name("companion")));
- (NtvCoreSystemConfig *)component1 __attribute__((swift_name("component1()")));
- (NSArray<NtvCorePlacement *> *)component2 __attribute__((swift_name("component2()")));
- (NtvCorePlacementsResponse *)doCopySys:(NtvCoreSystemConfig *)sys placements:(NSArray<NtvCorePlacement *> *)placements __attribute__((swift_name("doCopy(sys:placements:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NtvCorePlacement *> *placements __attribute__((swift_name("placements")));
@property (readonly) NtvCoreSystemConfig *sys __attribute__((swift_name("sys")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePlacementsResponse.Companion")))
@interface NtvCorePlacementsResponseCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCorePlacementsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRateType")))
@interface NtvCoreRateType : NtvKotlinEnum<NtvCoreRateType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NtvCoreRateTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NtvCoreRateType *cpm __attribute__((swift_name("cpm")));
@property (class, readonly) NtvCoreRateType *vcpm __attribute__((swift_name("vcpm")));
@property (class, readonly) NtvCoreRateType *cpc __attribute__((swift_name("cpc")));
@property (class, readonly) NtvCoreRateType *cpv __attribute__((swift_name("cpv")));
@property (class, readonly) NtvCoreRateType *cpcv __attribute__((swift_name("cpcv")));
@property (class, readonly) NtvCoreRateType *videoCpm __attribute__((swift_name("videoCpm")));
@property (class, readonly) NtvCoreRateType *vcpm70 __attribute__((swift_name("vcpm70")));
+ (NtvKotlinArray<NtvCoreRateType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRateType.Companion")))
@interface NtvCoreRateTypeCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreRateTypeCompanion *shared __attribute__((swift_name("shared")));
- (NtvCoreRateType * _Nullable)valueOfValue:(int32_t)value __attribute__((swift_name("valueOf(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRequestService")))
@interface NtvCoreRequestService : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)coreRequestService __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreRequestService *shared __attribute__((swift_name("shared")));
- (void)blockRequestQueue __attribute__((swift_name("blockRequestQueue()")));
- (void)prefetchAdWithSectionUrl:(NSString *)sectionUrl location:(id _Nullable)location container:(id _Nullable)container options:(NSDictionary<NSString *, id> * _Nullable)options onSuccess:(void (^)(NtvCoreAdData *))onSuccess onFail:(void (^)(NtvKotlinThrowable *))onFail __attribute__((swift_name("prefetchAdWith(sectionUrl:location:container:options:onSuccess:onFail:)")));
- (void)requestUrl:(NSString *)url parameters:(NSDictionary<NSString *, NSString *> * _Nullable)parameters onResponse:(void (^)(NtvCoreResponse *))onResponse __attribute__((swift_name("request(url:parameters:onResponse:)")));
- (void)requestAdSectionUrl:(NSString *)sectionUrl location:(id _Nullable)location container:(id _Nullable)container options:(NSDictionary<NSString *, id> * _Nullable)options onSuccess:(void (^)(NtvCoreAdData *))onSuccess onFail:(void (^)(NtvKotlinThrowable *))onFail __attribute__((swift_name("requestAd(sectionUrl:location:container:options:onSuccess:onFail:)")));
- (void)requestWithWebViewForHtml:(NSString *)html __attribute__((swift_name("requestWithWebViewFor(html:)")));
- (void)unblockRequestQueue __attribute__((swift_name("unblockRequestQueue()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponse")))
@interface NtvCoreResponse : NtvBase
- (instancetype)initWithStatus:(int32_t)status text:(NSString * _Nullable)text __attribute__((swift_name("init(status:text:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end;


/**
 * Stores data for a given section
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSectionCache")))
@interface NtvCoreSectionCache : NtvBase
- (instancetype)initWithSectionUrl:(NSString *)sectionUrl __attribute__((swift_name("init(sectionUrl:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL isPrefetching __attribute__((swift_name("isPrefetching")));
@property int32_t queuedRequestCount __attribute__((swift_name("queuedRequestCount")));
@property (readonly) NSString *sectionUrl __attribute__((swift_name("sectionUrl")));
@end;

__attribute__((swift_name("CoreSectionWrapper")))
@protocol NtvCoreSectionWrapper
@required
- (void)didAssignAdToLocationAdData:(id<NtvCoreAdDataWrapper>)adData location:(id)location container:(id)container __attribute__((swift_name("didAssignAdToLocation(adData:location:container:)")));
- (void)didFailAdAtLocationLocation:(id _Nullable)location inView:(id _Nullable)inView container:(id _Nullable)container error:(id _Nullable)error __attribute__((swift_name("didFailAdAtLocation(location:inView:container:error:)")));
- (void)didReceiveAdDidGetFill:(BOOL)didGetFill __attribute__((swift_name("didReceiveAd(didGetFill:)")));
- (void)triggerNextPrefetch __attribute__((swift_name("triggerNextPrefetch()")));
@property NtvCoreSectionCache *coreSection __attribute__((swift_name("coreSection")));
@end;

__attribute__((swift_name("CoreSessionDelegate")))
@protocol NtvCoreSessionDelegate
@required
- (NSString * _Nullable)getUserAgent __attribute__((swift_name("getUserAgent()")));
- (void)makeRequestWithWebViewHtml:(NSString *)html __attribute__((swift_name("makeRequestWithWebView(html:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSessionManager")))
@interface NtvCoreSessionManager : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)coreSessionManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreSessionManager *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getValueForCookieName:(NSString *)name completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getValueForCookie(name:completionHandler:)")));
- (void)managePrivacyConsentCookie __attribute__((swift_name("managePrivacyConsentCookie()")));
@property (readonly) NSString *CCPA_COOKIE __attribute__((swift_name("CCPA_COOKIE")));
@property (readonly) NSString *GDPR_COOKIE __attribute__((swift_name("GDPR_COOKIE")));
@property (readonly) NSString *VISITOR_COOKIE __attribute__((swift_name("VISITOR_COOKIE")));
@property id<NtvCoreSessionDelegate> _Nullable delegate __attribute__((swift_name("delegate")));
@property (readonly) BOOL hasAdTrackingConsent __attribute__((swift_name("hasAdTrackingConsent")));
@end;


/**
 * A global settings object
 * Global objects cannot share mutable state due to KMM/Native concurrency rules, so all values must be atomic
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSettings")))
@interface NtvCoreSettings : NtvBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A global settings object
 * Global objects cannot share mutable state due to KMM/Native concurrency rules, so all values must be atomic
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)coreSettings __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreSettings *shared __attribute__((swift_name("shared")));
- (void)enableTestAdvertisementsWithType:(NtvCoreTestAdType *)type __attribute__((swift_name("enableTestAdvertisementsWith(type:)")));
@property BOOL autoPrefetchEnabled __attribute__((swift_name("autoPrefetchEnabled")));
@property BOOL devLogsEnabled __attribute__((swift_name("devLogsEnabled")));
@property BOOL enableTestAds __attribute__((swift_name("enableTestAds")));
@property BOOL errorReportingEnabled __attribute__((swift_name("errorReportingEnabled")));
@property NSString * _Nullable gamVersion __attribute__((swift_name("gamVersion")));
@property BOOL isGAMEnabled __attribute__((swift_name("isGAMEnabled")));
@property BOOL placeholderMode __attribute__((swift_name("placeholderMode")));
@property BOOL placeholderModeOverride __attribute__((swift_name("placeholderModeOverride")));
@property NSString * _Nullable requestType __attribute__((swift_name("requestType")));
@property BOOL shouldTestSpecificAdType __attribute__((swift_name("shouldTestSpecificAdType")));
@property NtvCoreTestAdType *testAdType __attribute__((swift_name("testAdType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSharePlatform")))
@interface NtvCoreSharePlatform : NtvKotlinEnum<NtvCoreSharePlatform *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NtvCoreSharePlatform *facebook __attribute__((swift_name("facebook")));
@property (class, readonly) NtvCoreSharePlatform *twitter __attribute__((swift_name("twitter")));
@property (class, readonly) NtvCoreSharePlatform *linkedin __attribute__((swift_name("linkedin")));
@property (class, readonly) NtvCoreSharePlatform *other __attribute__((swift_name("other")));
+ (NtvKotlinArray<NtvCoreSharePlatform *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStandardDisplayAdData")))
@interface NtvCoreStandardDisplayAdData : NtvCoreAdData
- (instancetype)initWithStandardDisplayHtml:(NSString *)standardDisplayHtml standardDisplayWidth:(int32_t)standardDisplayWidth standardDisplayHeight:(int32_t)standardDisplayHeight dateTime:(NSString *)dateTime permanentLink:(NSString *)permanentLink trackShareLink:(NSString *)trackShareLink ctaURL:(NSString *)ctaURL cpmImpressionPixelUrl:(NSString *)cpmImpressionPixelUrl vCPMImpressionPixelUrl:(NSString *)vCPMImpressionPixelUrl percent70ImpressionPixelUrl:(NSString *)percent70ImpressionPixelUrl thirdPartyCpmTrackers:(NSString * _Nullable)thirdPartyCpmTrackers thirdPartyVcpmTrackers:(NSString * _Nullable)thirdPartyVcpmTrackers advertiserID:(NtvInt * _Nullable)advertiserID adID:(int32_t)adID adCampaignID:(int32_t)adCampaignID customData:(NtvMutableDictionary<NSString *, NSString *> * _Nullable)customData filteringLevel:(int32_t)filteringLevel rateTypeVal:(int32_t)rateTypeVal omSDKTrackers:(NSArray<NtvOMSDKTrackingData *> * _Nullable)omSDKTrackers adChoicesUrl:(NSString * _Nullable)adChoicesUrl clickThirdPartyTrackingUrls:(NSArray<NSString *> * _Nullable)clickThirdPartyTrackingUrls pixelThirdPartyTrackingUrl:(NSString * _Nullable)pixelThirdPartyTrackingUrl __attribute__((swift_name("init(standardDisplayHtml:standardDisplayWidth:standardDisplayHeight:dateTime:permanentLink:trackShareLink:ctaURL:cpmImpressionPixelUrl:vCPMImpressionPixelUrl:percent70ImpressionPixelUrl:thirdPartyCpmTrackers:thirdPartyVcpmTrackers:advertiserID:adID:adCampaignID:customData:filteringLevel:rateTypeVal:omSDKTrackers:adChoicesUrl:clickThirdPartyTrackingUrls:pixelThirdPartyTrackingUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvCoreStandardDisplayAdDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NtvInt * _Nullable)component13 __attribute__((swift_name("component13()")));
- (int32_t)component14 __attribute__((swift_name("component14()")));
- (int32_t)component15 __attribute__((swift_name("component15()")));
- (NtvMutableDictionary<NSString *, NSString *> * _Nullable)component16 __attribute__((swift_name("component16()")));
- (int32_t)component17 __attribute__((swift_name("component17()")));
- (int32_t)component18 __attribute__((swift_name("component18()")));
- (NSArray<NtvOMSDKTrackingData *> * _Nullable)component19 __attribute__((swift_name("component19()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSArray<NSString *> * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NtvCoreStandardDisplayAdData *)doCopyStandardDisplayHtml:(NSString *)standardDisplayHtml standardDisplayWidth:(int32_t)standardDisplayWidth standardDisplayHeight:(int32_t)standardDisplayHeight dateTime:(NSString *)dateTime permanentLink:(NSString *)permanentLink trackShareLink:(NSString *)trackShareLink ctaURL:(NSString *)ctaURL cpmImpressionPixelUrl:(NSString *)cpmImpressionPixelUrl vCPMImpressionPixelUrl:(NSString *)vCPMImpressionPixelUrl percent70ImpressionPixelUrl:(NSString *)percent70ImpressionPixelUrl thirdPartyCpmTrackers:(NSString * _Nullable)thirdPartyCpmTrackers thirdPartyVcpmTrackers:(NSString * _Nullable)thirdPartyVcpmTrackers advertiserID:(NtvInt * _Nullable)advertiserID adID:(int32_t)adID adCampaignID:(int32_t)adCampaignID customData:(NtvMutableDictionary<NSString *, NSString *> * _Nullable)customData filteringLevel:(int32_t)filteringLevel rateTypeVal:(int32_t)rateTypeVal omSDKTrackers:(NSArray<NtvOMSDKTrackingData *> * _Nullable)omSDKTrackers adChoicesUrl:(NSString * _Nullable)adChoicesUrl clickThirdPartyTrackingUrls:(NSArray<NSString *> * _Nullable)clickThirdPartyTrackingUrls pixelThirdPartyTrackingUrl:(NSString * _Nullable)pixelThirdPartyTrackingUrl __attribute__((swift_name("doCopy(standardDisplayHtml:standardDisplayWidth:standardDisplayHeight:dateTime:permanentLink:trackShareLink:ctaURL:cpmImpressionPixelUrl:vCPMImpressionPixelUrl:percent70ImpressionPixelUrl:thirdPartyCpmTrackers:thirdPartyVcpmTrackers:advertiserID:adID:adCampaignID:customData:filteringLevel:rateTypeVal:omSDKTrackers:adChoicesUrl:clickThirdPartyTrackingUrls:pixelThirdPartyTrackingUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t adCampaignID __attribute__((swift_name("adCampaignID")));
@property (readonly) NSString * _Nullable adChoicesUrl __attribute__((swift_name("adChoicesUrl")));
@property (readonly) int32_t adID __attribute__((swift_name("adID")));
@property (readonly) NtvInt * _Nullable advertiserID __attribute__((swift_name("advertiserID")));
@property (readonly) NSArray<NSString *> * _Nullable clickThirdPartyTrackingUrls __attribute__((swift_name("clickThirdPartyTrackingUrls")));
@property (readonly) NSString *cpmImpressionPixelUrl __attribute__((swift_name("cpmImpressionPixelUrl")));
@property (readonly) NSString *ctaURL __attribute__((swift_name("ctaURL")));
@property (readonly) NtvMutableDictionary<NSString *, NSString *> * _Nullable customData __attribute__((swift_name("customData")));
@property (readonly) NSString *dateTime __attribute__((swift_name("dateTime")));
@property (readonly) int32_t filteringLevel __attribute__((swift_name("filteringLevel")));
@property (readonly) NSArray<NtvOMSDKTrackingData *> * _Nullable omSDKTrackers __attribute__((swift_name("omSDKTrackers")));
@property (readonly) NSString *percent70ImpressionPixelUrl __attribute__((swift_name("percent70ImpressionPixelUrl")));
@property (readonly) NSString *permanentLink __attribute__((swift_name("permanentLink")));
@property (readonly) NSString * _Nullable pixelThirdPartyTrackingUrl __attribute__((swift_name("pixelThirdPartyTrackingUrl")));
@property (readonly) int32_t rateTypeVal __attribute__((swift_name("rateTypeVal")));
@property (readonly) int32_t standardDisplayHeight __attribute__((swift_name("standardDisplayHeight")));
@property (readonly) NSString *standardDisplayHtml __attribute__((swift_name("standardDisplayHtml")));
@property (readonly) int32_t standardDisplayWidth __attribute__((swift_name("standardDisplayWidth")));
@property (readonly) NSString * _Nullable thirdPartyCpmTrackers __attribute__((swift_name("thirdPartyCpmTrackers")));
@property (readonly) NSString * _Nullable thirdPartyVcpmTrackers __attribute__((swift_name("thirdPartyVcpmTrackers")));
@property (readonly) NSString *trackShareLink __attribute__((swift_name("trackShareLink")));
@property (readonly) NSString *vCPMImpressionPixelUrl __attribute__((swift_name("vCPMImpressionPixelUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStandardDisplayAdData.Companion")))
@interface NtvCoreStandardDisplayAdDataCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreStandardDisplayAdDataCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStoryAdData")))
@interface NtvCoreStoryAdData : NtvCoreNativeAdAbstract
- (instancetype)initWithHtmlContent:(NSString *)htmlContent title:(NSString *)title articleUrl:(NSString *)articleUrl ctaURL:(NSString *)ctaURL dateTime:(NSString *)dateTime previewText:(NSString *)previewText previewImageURL:(NSString *)previewImageURL author:(NSString *)author authorUrl:(NSString *)authorUrl authorImageURL:(NSString *)authorImageURL adChoicesUrl:(NSString * _Nullable)adChoicesUrl permanentLink:(NSString *)permanentLink customData:(NtvMutableDictionary<NSString *, NSString *> * _Nullable)customData trackShareLink:(NSString *)trackShareLink cpmImpressionPixelUrl:(NSString *)cpmImpressionPixelUrl vCPMImpressionPixelUrl:(NSString *)vCPMImpressionPixelUrl percent70ImpressionPixelUrl:(NSString *)percent70ImpressionPixelUrl thirdPartyCpmTrackers:(NSString * _Nullable)thirdPartyCpmTrackers thirdPartyVcpmTrackers:(NSString * _Nullable)thirdPartyVcpmTrackers advertiserID:(NtvInt * _Nullable)advertiserID adID:(int32_t)adID adCampaignID:(int32_t)adCampaignID filteringLevel:(int32_t)filteringLevel rateTypeVal:(int32_t)rateTypeVal omSDKTrackers:(NSArray<NtvOMSDKTrackingData *> * _Nullable)omSDKTrackers clickThirdPartyTrackingUrls:(NSArray<NSString *> * _Nullable)clickThirdPartyTrackingUrls pixelThirdPartyTrackingUrl:(NSString * _Nullable)pixelThirdPartyTrackingUrl __attribute__((swift_name("init(htmlContent:title:articleUrl:ctaURL:dateTime:previewText:previewImageURL:author:authorUrl:authorImageURL:adChoicesUrl:permanentLink:customData:trackShareLink:cpmImpressionPixelUrl:vCPMImpressionPixelUrl:percent70ImpressionPixelUrl:thirdPartyCpmTrackers:thirdPartyVcpmTrackers:advertiserID:adID:adCampaignID:filteringLevel:rateTypeVal:omSDKTrackers:clickThirdPartyTrackingUrls:pixelThirdPartyTrackingUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) NtvCoreStoryAdDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (NtvMutableDictionary<NSString *, NSString *> * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NSString *)component15 __attribute__((swift_name("component15()")));
- (NSString *)component16 __attribute__((swift_name("component16()")));
- (NSString *)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NtvInt * _Nullable)component20 __attribute__((swift_name("component20()")));
- (int32_t)component21 __attribute__((swift_name("component21()")));
- (int32_t)component22 __attribute__((swift_name("component22()")));
- (int32_t)component23 __attribute__((swift_name("component23()")));
- (int32_t)component24 __attribute__((swift_name("component24()")));
- (NSArray<NtvOMSDKTrackingData *> * _Nullable)component25 __attribute__((swift_name("component25()")));
- (NSArray<NSString *> * _Nullable)component26 __attribute__((swift_name("component26()")));
- (NSString * _Nullable)component27 __attribute__((swift_name("component27()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NtvCoreStoryAdData *)doCopyHtmlContent:(NSString *)htmlContent title:(NSString *)title articleUrl:(NSString *)articleUrl ctaURL:(NSString *)ctaURL dateTime:(NSString *)dateTime previewText:(NSString *)previewText previewImageURL:(NSString *)previewImageURL author:(NSString *)author authorUrl:(NSString *)authorUrl authorImageURL:(NSString *)authorImageURL adChoicesUrl:(NSString * _Nullable)adChoicesUrl permanentLink:(NSString *)permanentLink customData:(NtvMutableDictionary<NSString *, NSString *> * _Nullable)customData trackShareLink:(NSString *)trackShareLink cpmImpressionPixelUrl:(NSString *)cpmImpressionPixelUrl vCPMImpressionPixelUrl:(NSString *)vCPMImpressionPixelUrl percent70ImpressionPixelUrl:(NSString *)percent70ImpressionPixelUrl thirdPartyCpmTrackers:(NSString * _Nullable)thirdPartyCpmTrackers thirdPartyVcpmTrackers:(NSString * _Nullable)thirdPartyVcpmTrackers advertiserID:(NtvInt * _Nullable)advertiserID adID:(int32_t)adID adCampaignID:(int32_t)adCampaignID filteringLevel:(int32_t)filteringLevel rateTypeVal:(int32_t)rateTypeVal omSDKTrackers:(NSArray<NtvOMSDKTrackingData *> * _Nullable)omSDKTrackers clickThirdPartyTrackingUrls:(NSArray<NSString *> * _Nullable)clickThirdPartyTrackingUrls pixelThirdPartyTrackingUrl:(NSString * _Nullable)pixelThirdPartyTrackingUrl __attribute__((swift_name("doCopy(htmlContent:title:articleUrl:ctaURL:dateTime:previewText:previewImageURL:author:authorUrl:authorImageURL:adChoicesUrl:permanentLink:customData:trackShareLink:cpmImpressionPixelUrl:vCPMImpressionPixelUrl:percent70ImpressionPixelUrl:thirdPartyCpmTrackers:thirdPartyVcpmTrackers:advertiserID:adID:adCampaignID:filteringLevel:rateTypeVal:omSDKTrackers:clickThirdPartyTrackingUrls:pixelThirdPartyTrackingUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t adCampaignID __attribute__((swift_name("adCampaignID")));
@property (readonly) NSString * _Nullable adChoicesUrl __attribute__((swift_name("adChoicesUrl")));
@property (readonly) int32_t adID __attribute__((swift_name("adID")));
@property (readonly) NtvInt * _Nullable advertiserID __attribute__((swift_name("advertiserID")));
@property (readonly) NSString *articleUrl __attribute__((swift_name("articleUrl")));
@property (readonly) NSString *author __attribute__((swift_name("author")));
@property (readonly) NSString *authorImageURL __attribute__((swift_name("authorImageURL")));
@property (readonly) NSString *authorUrl __attribute__((swift_name("authorUrl")));
@property (readonly) NSArray<NSString *> * _Nullable clickThirdPartyTrackingUrls __attribute__((swift_name("clickThirdPartyTrackingUrls")));
@property (readonly) NSString *cpmImpressionPixelUrl __attribute__((swift_name("cpmImpressionPixelUrl")));
@property (readonly) NSString *ctaURL __attribute__((swift_name("ctaURL")));
@property NtvMutableDictionary<NSString *, NSString *> * _Nullable customData __attribute__((swift_name("customData")));
@property (readonly) NSString *dateTime __attribute__((swift_name("dateTime")));
@property (readonly) int32_t filteringLevel __attribute__((swift_name("filteringLevel")));
@property (readonly) NSString *htmlContent __attribute__((swift_name("htmlContent")));
@property (readonly) NSArray<NtvOMSDKTrackingData *> * _Nullable omSDKTrackers __attribute__((swift_name("omSDKTrackers")));
@property (readonly) NSString *percent70ImpressionPixelUrl __attribute__((swift_name("percent70ImpressionPixelUrl")));
@property (readonly) NSString *permanentLink __attribute__((swift_name("permanentLink")));
@property (readonly) NSString * _Nullable pixelThirdPartyTrackingUrl __attribute__((swift_name("pixelThirdPartyTrackingUrl")));
@property (readonly) NSString *previewImageURL __attribute__((swift_name("previewImageURL")));
@property (readonly) NSString *previewText __attribute__((swift_name("previewText")));
@property (readonly) int32_t rateTypeVal __attribute__((swift_name("rateTypeVal")));
@property (readonly) NSString * _Nullable thirdPartyCpmTrackers __attribute__((swift_name("thirdPartyCpmTrackers")));
@property (readonly) NSString * _Nullable thirdPartyVcpmTrackers __attribute__((swift_name("thirdPartyVcpmTrackers")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *trackShareLink __attribute__((swift_name("trackShareLink")));
@property (readonly) NSString *vCPMImpressionPixelUrl __attribute__((swift_name("vCPMImpressionPixelUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStoryAdData.Companion")))
@interface NtvCoreStoryAdDataCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreStoryAdDataCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSystemConfig")))
@interface NtvCoreSystemConfig : NtvBase
- (instancetype)initWithVisitorID:(NSString *)visitorID viewableDelay:(int32_t)viewableDelay viewableRatio:(double)viewableRatio __attribute__((swift_name("init(visitorID:viewableDelay:viewableRatio:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvCoreSystemConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (NtvCoreSystemConfig *)doCopyVisitorID:(NSString *)visitorID viewableDelay:(int32_t)viewableDelay viewableRatio:(double)viewableRatio __attribute__((swift_name("doCopy(visitorID:viewableDelay:viewableRatio:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t viewableDelay __attribute__((swift_name("viewableDelay")));
@property (readonly) double viewableRatio __attribute__((swift_name("viewableRatio")));
@property (readonly) NSString *visitorID __attribute__((swift_name("visitorID")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSystemConfig.Companion")))
@interface NtvCoreSystemConfigCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreSystemConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTestAdType")))
@interface NtvCoreTestAdType : NtvKotlinEnum<NtvCoreTestAdType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NtvCoreTestAdTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NtvCoreTestAdType *native __attribute__((swift_name("native")));
@property (class, readonly) NtvCoreTestAdType *display __attribute__((swift_name("display")));
@property (class, readonly) NtvCoreTestAdType *standardDisplay __attribute__((swift_name("standardDisplay")));
@property (class, readonly) NtvCoreTestAdType *videoClickToPlay __attribute__((swift_name("videoClickToPlay")));
@property (class, readonly) NtvCoreTestAdType *videoScrollToPlay __attribute__((swift_name("videoScrollToPlay")));
@property (class, readonly) NtvCoreTestAdType *videoVastScroll __attribute__((swift_name("videoVastScroll")));
@property (class, readonly) NtvCoreTestAdType *videoVastClick __attribute__((swift_name("videoVastClick")));
@property (class, readonly) NtvCoreTestAdType *story __attribute__((swift_name("story")));
@property (class, readonly) NtvCoreTestAdType *noFill __attribute__((swift_name("noFill")));
+ (NtvKotlinArray<NtvCoreTestAdType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTestAdType.Companion")))
@interface NtvCoreTestAdTypeCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreTestAdTypeCompanion *shared __attribute__((swift_name("shared")));
- (NtvCoreTestAdType * _Nullable)valueOfValue:(int32_t)value __attribute__((swift_name("valueOf(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUtil")))
@interface NtvCoreUtil : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)coreUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreUtil *shared __attribute__((swift_name("shared")));
- (NSString * _Nullable)getAppIdentifier __attribute__((swift_name("getAppIdentifier()")));
- (NSString * _Nullable)getAppVersion __attribute__((swift_name("getAppVersion()")));
- (NSString * _Nullable)getCCPAString __attribute__((swift_name("getCCPAString()")));
- (NSString * _Nullable)getGDPRString __attribute__((swift_name("getGDPRString()")));
- (NSString *)getSDKVersion __attribute__((swift_name("getSDKVersion()")));
- (NSString * _Nullable)getValueFromDiskKey:(NSString *)key __attribute__((swift_name("getValueFromDisk(key:)")));
- (void)setValueToDiskKey:(NSString *)key value:(NSString * _Nullable)value __attribute__((swift_name("setValueToDisk(key:value:)")));
@property NSString *iosVersion __attribute__((swift_name("iosVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVideoData")))
@interface NtvCoreVideoData : NtvBase
- (instancetype)initWithSrc:(NSArray<NSString *> *)src vastTag:(NSString * _Nullable)vastTag vastUrl:(NSString * _Nullable)vastUrl videoTracking:(NtvVideoTracking *)videoTracking baseTrackingUrl:(NSString *)baseTrackingUrl autoplaySettings:(NtvAutoplaySettings * _Nullable)autoplaySettings __attribute__((swift_name("init(src:vastTag:vastUrl:videoTracking:baseTrackingUrl:autoplaySettings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvCoreVideoDataCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NtvVideoTracking *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NtvAutoplaySettings * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NtvCoreVideoData *)doCopySrc:(NSArray<NSString *> *)src vastTag:(NSString * _Nullable)vastTag vastUrl:(NSString * _Nullable)vastUrl videoTracking:(NtvVideoTracking *)videoTracking baseTrackingUrl:(NSString *)baseTrackingUrl autoplaySettings:(NtvAutoplaySettings * _Nullable)autoplaySettings __attribute__((swift_name("doCopy(src:vastTag:vastUrl:videoTracking:baseTrackingUrl:autoplaySettings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NtvAutoplaySettings * _Nullable autoplaySettings __attribute__((swift_name("autoplaySettings")));
@property (readonly) NSString *baseTrackingUrl __attribute__((swift_name("baseTrackingUrl")));
@property (readonly) NSArray<NSString *> *src __attribute__((swift_name("src")));
@property (readonly) NSString * _Nullable vastTag __attribute__((swift_name("vastTag")));
@property (readonly) NSString * _Nullable vastUrl __attribute__((swift_name("vastUrl")));
@property (readonly) NtvVastVideoType *vastVideoType __attribute__((swift_name("vastVideoType")));
@property (readonly) NtvVideoTracking *videoTracking __attribute__((swift_name("videoTracking")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVideoData.Companion")))
@interface NtvCoreVideoDataCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvCoreVideoDataCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface NtvKotlinThrowable : NtvBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (NtvKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NtvKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface NtvKotlinException : NtvKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DuplicateRequestException")))
@interface NtvDuplicateRequestException : NtvKotlinException
- (instancetype)initWithSectionUrl:(NSString *)sectionUrl location:(id)location __attribute__((swift_name("init(sectionUrl:location:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id location __attribute__((swift_name("location")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *sectionUrl __attribute__((swift_name("sectionUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GAMParameters")))
@interface NtvGAMParameters : NtvBase
- (instancetype)initWithNativoTagRegex:(NSString *)nativoTagRegex versionPlacement:(NSString *)versionPlacement integrationMode:(NSString *)integrationMode adUnitSize:(NSString *)adUnitSize campaignID:(NSString *)campaignID budgetID:(NSString *)budgetID adUnitID:(NSString *)adUnitID clickTrk:(NSString *)clickTrk __attribute__((swift_name("init(nativoTagRegex:versionPlacement:integrationMode:adUnitSize:campaignID:budgetID:adUnitID:clickTrk:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvGAMParametersCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *adUnitID __attribute__((swift_name("adUnitID")));
@property (readonly) NSString *adUnitSize __attribute__((swift_name("adUnitSize")));
@property (readonly) NSString *budgetID __attribute__((swift_name("budgetID")));
@property (readonly) NSString *campaignID __attribute__((swift_name("campaignID")));
@property (readonly) NSString *clickTrk __attribute__((swift_name("clickTrk")));
@property (readonly) NSString *integrationMode __attribute__((swift_name("integrationMode")));
@property (readonly) NSString *nativoTagRegex __attribute__((swift_name("nativoTagRegex")));
@property (readonly) NSString *versionPlacement __attribute__((swift_name("versionPlacement")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GAMParameters.Companion")))
@interface NtvGAMParametersCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvGAMParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GAMTest")))
@interface NtvGAMTest : NtvBase
- (instancetype)initWithTestPub:(NSString *)testPub adUnitId:(NSString *)adUnitId kDFPAdUnitSize:(NSString *)kDFPAdUnitSize kDFPCampaignID:(NSString *)kDFPCampaignID __attribute__((swift_name("init(testPub:adUnitId:kDFPAdUnitSize:kDFPCampaignID:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvGAMTestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *adUnitId __attribute__((swift_name("adUnitId")));
@property (readonly) NSString *kDFPAdUnitSize __attribute__((swift_name("kDFPAdUnitSize")));
@property (readonly) NSString *kDFPCampaignID __attribute__((swift_name("kDFPCampaignID")));
@property (readonly) NSString *testPub __attribute__((swift_name("testPub")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GAMTest.Companion")))
@interface NtvGAMTestCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvGAMTestCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinError")))
@interface NtvKotlinError : NtvKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvalidSectionError")))
@interface NtvInvalidSectionError : NtvKotlinError
- (instancetype)initWithSectionUrl:(NSString *)sectionUrl __attribute__((swift_name("init(sectionUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *sectionUrl __attribute__((swift_name("sectionUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Log")))
@interface NtvLog : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)log __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvLog *shared __attribute__((swift_name("shared")));
- (void)debugMessage:(NSString * _Nullable)message __attribute__((swift_name("debug(message:)")));
- (void)errorMessage:(NSString * _Nullable)message __attribute__((swift_name("error(message:)")));
- (void)errorMessage:(NSString * _Nullable)message e:(NtvKotlinThrowable * _Nullable)e __attribute__((swift_name("error(message:e:)")));
- (void)infoMessage:(NSString * _Nullable)message __attribute__((swift_name("info(message:)")));
- (void)warnMessage:(NSString * _Nullable)message __attribute__((swift_name("warn(message:)")));
- (void)warnMessage:(NSString * _Nullable)message e:(NtvKotlinThrowable * _Nullable)e __attribute__((swift_name("warn(message:e:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkConnectionError")))
@interface NtvNetworkConnectionError : NtvKotlinError
- (instancetype)initWithSectionUrl:(NSString *)sectionUrl __attribute__((swift_name("init(sectionUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *sectionUrl __attribute__((swift_name("sectionUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoFillError")))
@interface NtvNoFillError : NtvKotlinError
- (instancetype)initWithSectionUrl:(NSString *)sectionUrl location:(id)location __attribute__((swift_name("init(sectionUrl:location:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id location __attribute__((swift_name("location")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *sectionUrl __attribute__((swift_name("sectionUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OMSDKTrackingData")))
@interface NtvOMSDKTrackingData : NtvBase
- (instancetype)initWithVendorKey:(NSString * _Nullable)vendorKey javascriptResourceUrl:(NSString *)javascriptResourceUrl verificationParameters:(NSString * _Nullable)verificationParameters __attribute__((swift_name("init(vendorKey:javascriptResourceUrl:verificationParameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvOMSDKTrackingDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NtvOMSDKTrackingData *)doCopyVendorKey:(NSString * _Nullable)vendorKey javascriptResourceUrl:(NSString *)javascriptResourceUrl verificationParameters:(NSString * _Nullable)verificationParameters __attribute__((swift_name("doCopy(vendorKey:javascriptResourceUrl:verificationParameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *javascriptResourceUrl __attribute__((swift_name("javascriptResourceUrl")));
@property (readonly) NSString * _Nullable vendorKey __attribute__((swift_name("vendorKey")));
@property (readonly) NSString * _Nullable verificationParameters __attribute__((swift_name("verificationParameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OMSDKTrackingData.Companion")))
@interface NtvOMSDKTrackingDataCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvOMSDKTrackingDataCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlacementKey")))
@interface NtvPlacementKey : NtvBase
- (instancetype)initWithLocation:(id)location container:(id)container __attribute__((swift_name("init(location:container:)"))) __attribute__((objc_designated_initializer));
- (id)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (NtvPlacementKey *)doCopyLocation:(id)location container:(id)container __attribute__((swift_name("doCopy(location:container:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id container __attribute__((swift_name("container")));
@property (readonly) id location __attribute__((swift_name("location")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrefectchLimitHitError")))
@interface NtvPrefectchLimitHitError : NtvKotlinError
- (instancetype)initWithSectionUrl:(NSString *)sectionUrl __attribute__((swift_name("init(sectionUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *sectionUrl __attribute__((swift_name("sectionUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SectionNotFoundError")))
@interface NtvSectionNotFoundError : NtvKotlinError
- (instancetype)initWithSectionUrl:(NSString *)sectionUrl __attribute__((swift_name("init(sectionUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *sectionUrl __attribute__((swift_name("sectionUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestAdConfiguration")))
@interface NtvTestAdConfiguration : NtvBase
- (instancetype)initWithSECTION:(NSString *)SECTION PLACEMENT:(NSString *)PLACEMENT NATIVE:(NSString *)NATIVE DISPLAY:(NSString *)DISPLAY IN_FEED_VIDEO:(NSString *)IN_FEED_VIDEO IN_FEED_AUTO_PLAY_VIDEO:(NSString *)IN_FEED_AUTO_PLAY_VIDEO VAST_VIDEO_CTP:(NSString *)VAST_VIDEO_CTP VAST_VIDEO_STP:(NSString *)VAST_VIDEO_STP STORY:(NSString *)STORY STANDARD_DISPLAY_PLACEMENT:(NSString *)STANDARD_DISPLAY_PLACEMENT __attribute__((swift_name("init(SECTION:PLACEMENT:NATIVE:DISPLAY:IN_FEED_VIDEO:IN_FEED_AUTO_PLAY_VIDEO:VAST_VIDEO_CTP:VAST_VIDEO_STP:STORY:STANDARD_DISPLAY_PLACEMENT:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvTestAdConfigurationCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NtvTestAdConfiguration *)doCopySECTION:(NSString *)SECTION PLACEMENT:(NSString *)PLACEMENT NATIVE:(NSString *)NATIVE DISPLAY:(NSString *)DISPLAY IN_FEED_VIDEO:(NSString *)IN_FEED_VIDEO IN_FEED_AUTO_PLAY_VIDEO:(NSString *)IN_FEED_AUTO_PLAY_VIDEO VAST_VIDEO_CTP:(NSString *)VAST_VIDEO_CTP VAST_VIDEO_STP:(NSString *)VAST_VIDEO_STP STORY:(NSString *)STORY STANDARD_DISPLAY_PLACEMENT:(NSString *)STANDARD_DISPLAY_PLACEMENT __attribute__((swift_name("doCopy(SECTION:PLACEMENT:NATIVE:DISPLAY:IN_FEED_VIDEO:IN_FEED_AUTO_PLAY_VIDEO:VAST_VIDEO_CTP:VAST_VIDEO_STP:STORY:STANDARD_DISPLAY_PLACEMENT:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *DISPLAY __attribute__((swift_name("DISPLAY")));
@property (readonly) NSString *IN_FEED_AUTO_PLAY_VIDEO __attribute__((swift_name("IN_FEED_AUTO_PLAY_VIDEO")));
@property (readonly) NSString *IN_FEED_VIDEO __attribute__((swift_name("IN_FEED_VIDEO")));
@property (readonly) NSString *NATIVE __attribute__((swift_name("NATIVE")));
@property (readonly) NSString *PLACEMENT __attribute__((swift_name("PLACEMENT")));
@property (readonly) NSString *SECTION __attribute__((swift_name("SECTION")));
@property (readonly) NSString *STANDARD_DISPLAY_PLACEMENT __attribute__((swift_name("STANDARD_DISPLAY_PLACEMENT")));
@property (readonly) NSString *STORY __attribute__((swift_name("STORY")));
@property (readonly) NSString *VAST_VIDEO_CTP __attribute__((swift_name("VAST_VIDEO_CTP")));
@property (readonly) NSString *VAST_VIDEO_STP __attribute__((swift_name("VAST_VIDEO_STP")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestAdConfiguration.Companion")))
@interface NtvTestAdConfigurationCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvTestAdConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlConfiguration")))
@interface NtvUrlConfiguration : NtvBase
- (instancetype)initWithSdkRequestPath:(NSString *)sdkRequestPath dfpRequestPath:(NSString *)dfpRequestPath __attribute__((swift_name("init(sdkRequestPath:dfpRequestPath:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvUrlConfigurationCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NtvUrlConfiguration *)doCopySdkRequestPath:(NSString *)sdkRequestPath dfpRequestPath:(NSString *)dfpRequestPath __attribute__((swift_name("doCopy(sdkRequestPath:dfpRequestPath:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dfpRequestPath __attribute__((swift_name("dfpRequestPath")));
@property (readonly) NSString *sdkRequestPath __attribute__((swift_name("sdkRequestPath")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlConfiguration.Companion")))
@interface NtvUrlConfigurationCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvUrlConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VastVideoType")))
@interface NtvVastVideoType : NtvKotlinEnum<NtvVastVideoType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NtvVastVideoTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NtvVastVideoType *none __attribute__((swift_name("none")));
@property (class, readonly) NtvVastVideoType *preroll __attribute__((swift_name("preroll")));
@property (class, readonly) NtvVastVideoType *source __attribute__((swift_name("source")));
+ (NtvKotlinArray<NtvVastVideoType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VastVideoType.Companion")))
@interface NtvVastVideoTypeCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvVastVideoTypeCompanion *shared __attribute__((swift_name("shared")));
- (NtvVastVideoType * _Nullable)valueOfValue:(int32_t)value __attribute__((swift_name("valueOf(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoOnClickAction")))
@interface NtvVideoOnClickAction : NtvKotlinEnum<NtvVideoOnClickAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NtvVideoOnClickActionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NtvVideoOnClickAction *unmute __attribute__((swift_name("unmute")));
@property (class, readonly) NtvVideoOnClickAction *unmuteRestart __attribute__((swift_name("unmuteRestart")));
+ (NtvKotlinArray<NtvVideoOnClickAction *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoOnClickAction.Companion")))
@interface NtvVideoOnClickActionCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvVideoOnClickActionCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoOutOfScreenAction")))
@interface NtvVideoOutOfScreenAction : NtvKotlinEnum<NtvVideoOutOfScreenAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NtvVideoOutOfScreenActionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NtvVideoOutOfScreenAction *pause __attribute__((swift_name("pause")));
@property (class, readonly) NtvVideoOutOfScreenAction *restart __attribute__((swift_name("restart")));
+ (NtvKotlinArray<NtvVideoOutOfScreenAction *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoOutOfScreenAction.Companion")))
@interface NtvVideoOutOfScreenActionCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvVideoOutOfScreenActionCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoTracking")))
@interface NtvVideoTracking : NtvBase
- (instancetype)initWithMap:(NSDictionary<NSString *, NtvVideoTrackingProperties *> *)map events:(NtvVideoTrackingEventType *)events progress:(NtvVideoTrackingProgressType *)progress __attribute__((swift_name("init(map:events:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvVideoTrackingCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, NtvVideoTrackingProperties *> *)component1 __attribute__((swift_name("component1()")));
- (NtvVideoTrackingEventType *)component2 __attribute__((swift_name("component2()")));
- (NtvVideoTrackingProgressType *)component3 __attribute__((swift_name("component3()")));
- (NtvVideoTracking *)doCopyMap:(NSDictionary<NSString *, NtvVideoTrackingProperties *> *)map events:(NtvVideoTrackingEventType *)events progress:(NtvVideoTrackingProgressType *)progress __attribute__((swift_name("doCopy(map:events:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NtvVideoTrackingEventType *events __attribute__((swift_name("events")));
@property (readonly) NSDictionary<NSString *, NtvVideoTrackingProperties *> *map __attribute__((swift_name("map")));
@property (readonly) NtvVideoTrackingProgressType *progress __attribute__((swift_name("progress")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoTracking.Companion")))
@interface NtvVideoTrackingCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvVideoTrackingCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoTrackingEventType")))
@interface NtvVideoTrackingEventType : NtvBase
- (instancetype)initWithContent:(NtvVideoTrackingEvents * _Nullable)content preroll:(NtvVideoTrackingEvents * _Nullable)preroll __attribute__((swift_name("init(content:preroll:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvVideoTrackingEventTypeCompanion *companion __attribute__((swift_name("companion")));
- (NtvVideoTrackingEvents * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NtvVideoTrackingEvents * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NtvVideoTrackingEventType *)doCopyContent:(NtvVideoTrackingEvents * _Nullable)content preroll:(NtvVideoTrackingEvents * _Nullable)preroll __attribute__((swift_name("doCopy(content:preroll:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NtvVideoTrackingEvents * _Nullable content __attribute__((swift_name("content")));
@property (readonly) NtvVideoTrackingEvents * _Nullable preroll __attribute__((swift_name("preroll")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoTrackingEventType.Companion")))
@interface NtvVideoTrackingEventTypeCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvVideoTrackingEventTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoTrackingEvents")))
@interface NtvVideoTrackingEvents : NtvBase
- (instancetype)initWithVideoStart:(NSArray<NSString *> * _Nullable)videoStart videoEnd:(NSArray<NSString *> * _Nullable)videoEnd click:(NSArray<NSString *> * _Nullable)click pause:(NSArray<NSString *> * _Nullable)pause resume:(NSArray<NSString *> * _Nullable)resume fullscreen:(NSArray<NSString *> * _Nullable)fullscreen exitFullscreen:(NSArray<NSString *> * _Nullable)exitFullscreen mute:(NSArray<NSString *> * _Nullable)mute unmute:(NSArray<NSString *> * _Nullable)unmute adHeadlineCick:(NSArray<NSString *> * _Nullable)adHeadlineCick __attribute__((swift_name("init(videoStart:videoEnd:click:pause:resume:fullscreen:exitFullscreen:mute:unmute:adHeadlineCick:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvVideoTrackingEventsCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSString *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSArray<NSString *> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<NSString *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSArray<NSString *> * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSArray<NSString *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NtvVideoTrackingEvents *)doCopyVideoStart:(NSArray<NSString *> * _Nullable)videoStart videoEnd:(NSArray<NSString *> * _Nullable)videoEnd click:(NSArray<NSString *> * _Nullable)click pause:(NSArray<NSString *> * _Nullable)pause resume:(NSArray<NSString *> * _Nullable)resume fullscreen:(NSArray<NSString *> * _Nullable)fullscreen exitFullscreen:(NSArray<NSString *> * _Nullable)exitFullscreen mute:(NSArray<NSString *> * _Nullable)mute unmute:(NSArray<NSString *> * _Nullable)unmute adHeadlineCick:(NSArray<NSString *> * _Nullable)adHeadlineCick __attribute__((swift_name("doCopy(videoStart:videoEnd:click:pause:resume:fullscreen:exitFullscreen:mute:unmute:adHeadlineCick:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable adHeadlineCick __attribute__((swift_name("adHeadlineCick")));
@property (readonly) NSArray<NSString *> * _Nullable click __attribute__((swift_name("click")));
@property (readonly) NSArray<NSString *> * _Nullable exitFullscreen __attribute__((swift_name("exitFullscreen")));
@property (readonly) NSArray<NSString *> * _Nullable fullscreen __attribute__((swift_name("fullscreen")));
@property (readonly) NSArray<NSString *> * _Nullable mute __attribute__((swift_name("mute")));
@property (readonly) NSArray<NSString *> * _Nullable pause __attribute__((swift_name("pause")));
@property (readonly) NSArray<NSString *> * _Nullable resume __attribute__((swift_name("resume")));
@property (readonly) NSArray<NSString *> * _Nullable unmute __attribute__((swift_name("unmute")));
@property (readonly) NSArray<NSString *> * _Nullable videoEnd __attribute__((swift_name("videoEnd")));
@property (readonly) NSArray<NSString *> * _Nullable videoStart __attribute__((swift_name("videoStart")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoTrackingEvents.Companion")))
@interface NtvVideoTrackingEventsCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvVideoTrackingEventsCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoTrackingProgressKeys")))
@interface NtvVideoTrackingProgressKeys : NtvBase
- (instancetype)initWithPercentile:(NSDictionary<NSString *, NSArray<NSString *> *> *)percentile position:(NSDictionary<NSString *, NSArray<NSString *> *> *)position continuous:(NSDictionary<NSString *, NSArray<NSString *> *> *)continuous cumulative:(NSDictionary<NSString *, NSArray<NSString *> *> *)cumulative __attribute__((swift_name("init(percentile:position:continuous:cumulative:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvVideoTrackingProgressKeysCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, NSArray<NSString *> *> *)component1 __attribute__((swift_name("component1()")));
- (NSDictionary<NSString *, NSArray<NSString *> *> *)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, NSArray<NSString *> *> *)component3 __attribute__((swift_name("component3()")));
- (NSDictionary<NSString *, NSArray<NSString *> *> *)component4 __attribute__((swift_name("component4()")));
- (NtvVideoTrackingProgressKeys *)doCopyPercentile:(NSDictionary<NSString *, NSArray<NSString *> *> *)percentile position:(NSDictionary<NSString *, NSArray<NSString *> *> *)position continuous:(NSDictionary<NSString *, NSArray<NSString *> *> *)continuous cumulative:(NSDictionary<NSString *, NSArray<NSString *> *> *)cumulative __attribute__((swift_name("doCopy(percentile:position:continuous:cumulative:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *continuous __attribute__((swift_name("continuous")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *cumulative __attribute__((swift_name("cumulative")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *percentile __attribute__((swift_name("percentile")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoTrackingProgressKeys.Companion")))
@interface NtvVideoTrackingProgressKeysCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvVideoTrackingProgressKeysCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoTrackingProgressType")))
@interface NtvVideoTrackingProgressType : NtvBase
- (instancetype)initWithContent:(NtvVideoTrackingProgressKeys * _Nullable)content preroll:(NtvVideoTrackingProgressKeys * _Nullable)preroll __attribute__((swift_name("init(content:preroll:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvVideoTrackingProgressTypeCompanion *companion __attribute__((swift_name("companion")));
- (NtvVideoTrackingProgressKeys * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NtvVideoTrackingProgressKeys * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NtvVideoTrackingProgressType *)doCopyContent:(NtvVideoTrackingProgressKeys * _Nullable)content preroll:(NtvVideoTrackingProgressKeys * _Nullable)preroll __attribute__((swift_name("doCopy(content:preroll:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NtvVideoTrackingProgressKeys * _Nullable content __attribute__((swift_name("content")));
@property (readonly) NtvVideoTrackingProgressKeys * _Nullable preroll __attribute__((swift_name("preroll")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoTrackingProgressType.Companion")))
@interface NtvVideoTrackingProgressTypeCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvVideoTrackingProgressTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoTrackingProperties")))
@interface NtvVideoTrackingProperties : NtvBase
- (instancetype)initWithFirstParty:(NSArray<NtvInt *> *)firstParty thirdParty:(NSString * _Nullable)thirdParty queryString:(NSString * _Nullable)queryString frequency:(int32_t)frequency __attribute__((swift_name("init(firstParty:thirdParty:queryString:frequency:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NtvVideoTrackingPropertiesCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NtvInt *> *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NtvVideoTrackingProperties *)doCopyFirstParty:(NSArray<NtvInt *> *)firstParty thirdParty:(NSString * _Nullable)thirdParty queryString:(NSString * _Nullable)queryString frequency:(int32_t)frequency __attribute__((swift_name("doCopy(firstParty:thirdParty:queryString:frequency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NtvInt *> *firstParty __attribute__((swift_name("firstParty")));
@property (readonly) int32_t frequency __attribute__((swift_name("frequency")));
@property (readonly) NSString * _Nullable queryString __attribute__((swift_name("queryString")));
@property (readonly) NSString * _Nullable thirdParty __attribute__((swift_name("thirdParty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoTrackingProperties.Companion")))
@interface NtvVideoTrackingPropertiesCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvVideoTrackingPropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdDataFactoryKt")))
@interface NtvCoreAdDataFactoryKt : NtvBase
@property (class, readonly) NSString *AD_TYPE __attribute__((swift_name("AD_TYPE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUtilKt")))
@interface NtvCoreUtilKt : NtvBase
@property (class, readonly) NSString *versionDefault __attribute__((swift_name("versionDefault")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol NtvKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<NtvKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<NtvKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol NtvKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<NtvKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<NtvKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol NtvKotlinx_serialization_coreKSerializer <NtvKotlinx_serialization_coreSerializationStrategy, NtvKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface NtvKotlinArray<T> : NtvBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(NtvInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<NtvKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface NtvKotlinEnumCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface NtvKotlinRuntimeException : NtvKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface NtvKotlinIllegalStateException : NtvKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface NtvKotlinCancellationException : NtvKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NtvKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface NtvKotlinUnit : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface NtvKotlinx_serialization_jsonJsonElement : NtvBase
@property (class, readonly, getter=companion) NtvKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol NtvKotlinx_serialization_coreEncoder
@required
- (id<NtvKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<NtvKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<NtvKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<NtvKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<NtvKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) NtvKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol NtvKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<NtvKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<NtvKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<NtvKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) NtvKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol NtvKotlinx_serialization_coreDecoder
@required
- (id<NtvKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<NtvKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (NtvKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<NtvKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<NtvKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) NtvKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol NtvKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface NtvKotlinx_serialization_jsonJsonElementCompanion : NtvBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NtvKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol NtvKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<NtvKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<NtvKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<NtvKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) NtvKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface NtvKotlinx_serialization_coreSerializersModule : NtvBase
- (void)dumpToCollector:(id<NtvKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<NtvKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<NtvKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<NtvKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<NtvKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<NtvKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<NtvKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<NtvKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol NtvKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface NtvKotlinx_serialization_coreSerialKind : NtvBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol NtvKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<NtvKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<NtvKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<NtvKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<NtvKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) NtvKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface NtvKotlinNothing : NtvBase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol NtvKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<NtvKotlinKClass>)kClass provider:(id<NtvKotlinx_serialization_coreKSerializer> (^)(NSArray<id<NtvKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<NtvKotlinKClass>)kClass serializer:(id<NtvKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<NtvKotlinKClass>)baseClass actualClass:(id<NtvKotlinKClass>)actualClass actualSerializer:(id<NtvKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<NtvKotlinKClass>)baseClass defaultDeserializerProvider:(id<NtvKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<NtvKotlinKClass>)baseClass defaultDeserializerProvider:(id<NtvKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<NtvKotlinKClass>)baseClass defaultSerializerProvider:(id<NtvKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol NtvKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol NtvKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol NtvKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol NtvKotlinKClass <NtvKotlinKDeclarationContainer, NtvKotlinKAnnotatedElement, NtvKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
