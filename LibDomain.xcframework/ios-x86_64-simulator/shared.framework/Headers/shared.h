#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedSearchDomainInfo, SharedProductWithCriteriaEntity, SharedProductTagEntityCompanion, SharedProductTagEntity, SharedKotlinPair<__covariant A, __covariant B>, SharedSearchProductTagConfigEntityTag, SharedSearchProductTagConfigEntity, SharedSearchProductTagConfigEntityCriteria, SharedNativeConcurrentUtils, SharedPlatform, SharedSearchProductTagRepository, SharedSearchProductTaggingUseCaseCompanion, NSObject, SharedKotlinThrowable, SharedKotlinArray<T>, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException;

@protocol SharedTagCriteria, SharedKotlinx_coroutines_coreCoroutineScope, SharedKotlinSuspendFunction0, SharedKotlinCoroutineContext, SharedKotlinFunction, SharedKotlinCoroutineContextElement, SharedKotlinCoroutineContextKey, SharedKotlinIterator;

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
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
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
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDomainInfo")))
@interface SharedSearchDomainInfo : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchDomainInfo __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSearchDomainInfo *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *versionSearchDomain __attribute__((swift_name("versionSearchDomain")));
@end;

__attribute__((swift_name("TagCriteria")))
@protocol SharedTagCriteria
@required
- (BOOL)isActiveProduct:(SharedProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssuranceCriteria")))
@interface SharedAssuranceCriteria : SharedBase <SharedTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(SharedProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarriersCriteria")))
@interface SharedCarriersCriteria : SharedBase <SharedTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(SharedProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DigitalProductCriteria")))
@interface SharedDigitalProductCriteria : SharedBase <SharedTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(SharedProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FreeShippingCriteria")))
@interface SharedFreeShippingCriteria : SharedBase <SharedTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(SharedProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductTagEntity")))
@interface SharedProductTagEntity : SharedBase
- (instancetype)initWithId:(NSString *)id title:(NSString *)title icon:(NSString *)icon criterias:(NSMutableArray<id<SharedTagCriteria>> *)criterias __attribute__((swift_name("init(id:title:icon:criterias:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedProductTagEntityCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSMutableArray<id<SharedTagCriteria>> *)component4 __attribute__((swift_name("component4()")));
- (SharedProductTagEntity *)doCopyId:(NSString *)id title:(NSString *)title icon:(NSString *)icon criterias:(NSMutableArray<id<SharedTagCriteria>> *)criterias __attribute__((swift_name("doCopy(id:title:icon:criterias:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)doInitCriteriasConfigCriterias:(NSArray<SharedKotlinPair<NSString *, NSArray<NSString *> *> *> *)configCriterias __attribute__((swift_name("doInitCriterias(configCriterias:)")));
- (BOOL)isActiveForProductProduct:(SharedProductWithCriteriaEntity *)product __attribute__((swift_name("isActiveForProduct(product:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSMutableArray<id<SharedTagCriteria>> *criterias __attribute__((swift_name("criterias")));
@property NSString *icon __attribute__((swift_name("icon")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductTagEntity.Companion")))
@interface SharedProductTagEntityCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedProductTagEntityCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ID_BAZAR __attribute__((swift_name("ID_BAZAR")));
@property (readonly) NSString *ID_COD __attribute__((swift_name("ID_COD")));
@property (readonly) NSString *ID_DIGITAL_PRODUCT __attribute__((swift_name("ID_DIGITAL_PRODUCT")));
@property (readonly) NSString *ID_FREE_SHIPPING __attribute__((swift_name("ID_FREE_SHIPPING")));
@property (readonly) NSString *ID_GUARANTEE __attribute__((swift_name("ID_GUARANTEE")));
@property (readonly) NSString *ID_INSTANT_COURIER __attribute__((swift_name("ID_INSTANT_COURIER")));
@property (readonly) NSString *ID_WHOLESALE __attribute__((swift_name("ID_WHOLESALE")));
@property (readonly) NSString *ID_WITHOUT_SHIPPING __attribute__((swift_name("ID_WITHOUT_SHIPPING")));
@property (readonly) NSString *TYPE_ASSURANCE __attribute__((swift_name("TYPE_ASSURANCE")));
@property (readonly) NSString *TYPE_CARRIERS __attribute__((swift_name("TYPE_CARRIERS")));
@property (readonly) NSString *TYPE_DIGITAL_PRODUCT __attribute__((swift_name("TYPE_DIGITAL_PRODUCT")));
@property (readonly) NSString *TYPE_FREE_SHIPPING __attribute__((swift_name("TYPE_FREE_SHIPPING")));
@property (readonly) NSString *TYPE_PLATFORM __attribute__((swift_name("TYPE_PLATFORM")));
@property (readonly) NSString *TYPE_SCREEN __attribute__((swift_name("TYPE_SCREEN")));
@property (readonly) NSString *TYPE_SPECIAL_CAMPAIGN_IDS __attribute__((swift_name("TYPE_SPECIAL_CAMPAIGN_IDS")));
@property (readonly) NSString *TYPE_WHOLESALE __attribute__((swift_name("TYPE_WHOLESALE")));
@property (readonly) NSString *TYPE_WITHOUT_SHIPPING __attribute__((swift_name("TYPE_WITHOUT_SHIPPING")));
@property (readonly) NSString *VALUE_SEARCH_LISTING __attribute__((swift_name("VALUE_SEARCH_LISTING")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductWithCriteriaEntity")))
@interface SharedProductWithCriteriaEntity : SharedBase
- (instancetype)initWithCarriers:(NSArray<NSString *> *)carriers specialCampaignId:(NSString * _Nullable)specialCampaignId assurance:(BOOL)assurance wholeSaleText:(NSString * _Nullable)wholeSaleText isDigitalProduct:(BOOL)isDigitalProduct isWithoutShipping:(BOOL)isWithoutShipping isFreeShipping:(BOOL)isFreeShipping __attribute__((swift_name("init(carriers:specialCampaignId:assurance:wholeSaleText:isDigitalProduct:isWithoutShipping:isFreeShipping:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NSString *> *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (SharedProductWithCriteriaEntity *)doCopyCarriers:(NSArray<NSString *> *)carriers specialCampaignId:(NSString * _Nullable)specialCampaignId assurance:(BOOL)assurance wholeSaleText:(NSString * _Nullable)wholeSaleText isDigitalProduct:(BOOL)isDigitalProduct isWithoutShipping:(BOOL)isWithoutShipping isFreeShipping:(BOOL)isFreeShipping __attribute__((swift_name("doCopy(carriers:specialCampaignId:assurance:wholeSaleText:isDigitalProduct:isWithoutShipping:isFreeShipping:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL assurance __attribute__((swift_name("assurance")));
@property NSArray<NSString *> *carriers __attribute__((swift_name("carriers")));
@property BOOL isDigitalProduct __attribute__((swift_name("isDigitalProduct")));
@property BOOL isFreeShipping __attribute__((swift_name("isFreeShipping")));
@property BOOL isWithoutShipping __attribute__((swift_name("isWithoutShipping")));
@property NSString * _Nullable specialCampaignId __attribute__((swift_name("specialCampaignId")));
@property NSString * _Nullable wholeSaleText __attribute__((swift_name("wholeSaleText")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenOrPlatformCriteria")))
@interface SharedScreenOrPlatformCriteria : SharedBase <SharedTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(SharedProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchProductTagConfigEntity")))
@interface SharedSearchProductTagConfigEntity : SharedBase
- (instancetype)initWithTags:(NSArray<SharedSearchProductTagConfigEntityTag *> *)tags searchMaxTag:(int32_t)searchMaxTag pdpMaxTag:(int32_t)pdpMaxTag __attribute__((swift_name("init(tags:searchMaxTag:pdpMaxTag:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedSearchProductTagConfigEntityTag *> *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (SharedSearchProductTagConfigEntity *)doCopyTags:(NSArray<SharedSearchProductTagConfigEntityTag *> *)tags searchMaxTag:(int32_t)searchMaxTag pdpMaxTag:(int32_t)pdpMaxTag __attribute__((swift_name("doCopy(tags:searchMaxTag:pdpMaxTag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t pdpMaxTag __attribute__((swift_name("pdpMaxTag")));
@property int32_t searchMaxTag __attribute__((swift_name("searchMaxTag")));
@property (readonly) NSArray<SharedSearchProductTagConfigEntityTag *> *tags __attribute__((swift_name("tags")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchProductTagConfigEntity.Criteria")))
@interface SharedSearchProductTagConfigEntityCriteria : SharedBase
- (instancetype)initWithType:(NSString *)type values:(NSArray<NSString *> *)values __attribute__((swift_name("init(type:values:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> *)component2 __attribute__((swift_name("component2()")));
- (SharedSearchProductTagConfigEntityCriteria *)doCopyType:(NSString *)type values:(NSArray<NSString *> *)values __attribute__((swift_name("doCopy(type:values:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSArray<NSString *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchProductTagConfigEntity.Tag")))
@interface SharedSearchProductTagConfigEntityTag : SharedBase
- (instancetype)initWithId:(NSString *)id enabled:(BOOL)enabled title:(NSString *)title icon:(NSString *)icon criterias:(NSArray<SharedSearchProductTagConfigEntityCriteria *> *)criterias __attribute__((swift_name("init(id:enabled:title:icon:criterias:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSArray<SharedSearchProductTagConfigEntityCriteria *> *)component5 __attribute__((swift_name("component5()")));
- (SharedSearchProductTagConfigEntityTag *)doCopyId:(NSString *)id enabled:(BOOL)enabled title:(NSString *)title icon:(NSString *)icon criterias:(NSArray<SharedSearchProductTagConfigEntityCriteria *> *)criterias __attribute__((swift_name("doCopy(id:enabled:title:icon:criterias:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedSearchProductTagConfigEntityCriteria *> *criterias __attribute__((swift_name("criterias")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) NSString *icon __attribute__((swift_name("icon")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpecialCampaignCriteria")))
@interface SharedSpecialCampaignCriteria : SharedBase <SharedTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(SharedProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnregisteredCriteria")))
@interface SharedUnregisteredCriteria : SharedBase <SharedTagCriteria>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isActiveProduct:(SharedProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WholesaleCriteria")))
@interface SharedWholesaleCriteria : SharedBase <SharedTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(SharedProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithoutShippingCriteria")))
@interface SharedWithoutShippingCriteria : SharedBase <SharedTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(SharedProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NativeConcurrentUtils")))
@interface SharedNativeConcurrentUtils : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nativeConcurrentUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedNativeConcurrentUtils *shared __attribute__((swift_name("shared")));
- (id _Nullable)freezeValue:(id _Nullable)receiver __attribute__((swift_name("freezeValue(_:)")));
- (BOOL)isFrozenValue:(id _Nullable)receiver __attribute__((swift_name("isFrozenValue(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface SharedPlatform : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platform __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPlatform *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchProductTaggingUseCase")))
@interface SharedSearchProductTaggingUseCase : SharedBase
- (instancetype)initWithRepository:(SharedSearchProductTagRepository *)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSearchProductTaggingUseCaseCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<SharedProductTagEntity *> *)getActiveTagsProduct:(SharedProductWithCriteriaEntity *)product __attribute__((swift_name("getActiveTags(product:)")));
- (int32_t)getScreenMaxTag __attribute__((swift_name("getScreenMaxTag()")));
- (void)setupComponents __attribute__((swift_name("setupComponents()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchProductTaggingUseCase.Companion")))
@interface SharedSearchProductTaggingUseCaseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSearchProductTaggingUseCaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DEFAULT_MAX_TAG __attribute__((swift_name("DEFAULT_MAX_TAG")));
@end;

__attribute__((swift_name("SearchProductTagRepository")))
@interface SharedSearchProductTagRepository : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)getMaxTag __attribute__((swift_name("getMaxTag()")));
- (NSArray<SharedProductTagEntity *> *)getSearchProductTags __attribute__((swift_name("getSearchProductTags()")));
- (NSArray<SharedSearchProductTagConfigEntityTag *> *)getTags __attribute__((swift_name("getTags()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MovieResponseModel")))
@interface SharedMovieResponseModel : SharedBase
- (instancetype)initWithMap:(NSObject *)map __attribute__((swift_name("init(map:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAdult:(SharedBoolean * _Nullable)adult backdropPath:(NSString * _Nullable)backdropPath genreIds:(NSArray<SharedInt *> * _Nullable)genreIds id:(SharedInt * _Nullable)id originalLanguage:(NSString * _Nullable)originalLanguage originalTitle:(NSString * _Nullable)originalTitle overview:(NSString * _Nullable)overview popularity:(SharedDouble * _Nullable)popularity posterPath:(NSString * _Nullable)posterPath releaseDate:(NSString * _Nullable)releaseDate title:(NSString * _Nullable)title video:(SharedBoolean * _Nullable)video voteAverage:(SharedDouble * _Nullable)voteAverage voteCount:(SharedInt * _Nullable)voteCount __attribute__((swift_name("init(adult:backdropPath:genreIds:id:originalLanguage:originalTitle:overview:popularity:posterPath:releaseDate:title:video:voteAverage:voteCount:)"))) __attribute__((objc_designated_initializer));
- (NSString *)test __attribute__((swift_name("test()")));
@property (readonly) SharedBoolean * _Nullable adult __attribute__((swift_name("adult")));
@property (readonly) NSString * _Nullable backdropPath __attribute__((swift_name("backdropPath")));
@property (readonly) NSArray<SharedInt *> * _Nullable genreIds __attribute__((swift_name("genreIds")));
@property (readonly) SharedInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable originalLanguage __attribute__((swift_name("originalLanguage")));
@property (readonly) NSString * _Nullable originalTitle __attribute__((swift_name("originalTitle")));
@property (readonly) NSString * _Nullable overview __attribute__((swift_name("overview")));
@property (readonly) SharedDouble * _Nullable popularity __attribute__((swift_name("popularity")));
@property (readonly) NSString * _Nullable posterPath __attribute__((swift_name("posterPath")));
@property (readonly) NSString * _Nullable releaseDate __attribute__((swift_name("releaseDate")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) SharedBoolean * _Nullable video __attribute__((swift_name("video")));
@property (readonly) SharedDouble * _Nullable voteAverage __attribute__((swift_name("voteAverage")));
@property (readonly) SharedInt * _Nullable voteCount __attribute__((swift_name("voteCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtensionKt")))
@interface SharedExtensionKt : SharedBase
+ (SharedBoolean * _Nullable)getBoolean:(NSObject *)receiver key:(NSString *)key __attribute__((swift_name("getBoolean(_:key:)")));
+ (SharedDouble * _Nullable)getDouble:(NSObject *)receiver key:(NSString *)key __attribute__((swift_name("getDouble(_:key:)")));
+ (SharedInt * _Nullable)getInt:(NSObject *)receiver key:(NSString *)key __attribute__((swift_name("getInt(_:key:)")));
+ (NSArray<SharedInt *> * _Nullable)getListOfInt:(NSObject *)receiver key:(NSString *)key __attribute__((swift_name("getListOfInt(_:key:)")));
+ (SharedLong * _Nullable)getLong:(NSObject *)receiver key:(NSString *)key __attribute__((swift_name("getLong(_:key:)")));
+ (NSString * _Nullable)getString:(NSObject *)receiver key:(NSString *)key __attribute__((swift_name("getString(_:key:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThreadExtKt")))
@interface SharedThreadExtKt : SharedBase
+ (void)runOnBackground:(id<SharedKotlinx_coroutines_coreCoroutineScope>)receiver block:(id<SharedKotlinSuspendFunction0>)block __attribute__((swift_name("runOnBackground(_:block:)")));
+ (void)runOnMain:(id<SharedKotlinx_coroutines_coreCoroutineScope>)receiver block:(id<SharedKotlinSuspendFunction0>)block __attribute__((swift_name("runOnMain(_:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface SharedKotlinPair<__covariant A, __covariant B> : SharedBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol SharedKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol SharedKotlinSuspendFunction0 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKotlinCoroutineContext>)plusContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
