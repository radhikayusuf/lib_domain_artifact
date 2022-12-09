#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class LibDomainSearchDomainInfo, LibDomainProductWithCriteriaEntity, LibDomainProductTagEntityCompanion, LibDomainProductTagEntity, LibDomainKotlinPair<__covariant A, __covariant B>, LibDomainSearchProductTagConfigEntityTag, LibDomainSearchProductTagConfigEntity, LibDomainSearchProductTagConfigEntityCriteria, LibDomainNativeConcurrentUtils, LibDomainPlatform, LibDomainSearchProductTagRepository, LibDomainSearchProductTaggingUseCaseCompanion, LibDomainKotlinThrowable, LibDomainKotlinArray<T>, LibDomainKotlinException, LibDomainKotlinRuntimeException, LibDomainKotlinIllegalStateException;

@protocol LibDomainTagCriteria, LibDomainKotlinx_coroutines_coreCoroutineScope, LibDomainKotlinSuspendFunction0, LibDomainKotlinCoroutineContext, LibDomainKotlinFunction, LibDomainKotlinCoroutineContextElement, LibDomainKotlinCoroutineContextKey, LibDomainKotlinIterator;

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
@interface LibDomainBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface LibDomainBase (LibDomainBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface LibDomainMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface LibDomainMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorLibDomainKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface LibDomainNumber : NSNumber
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
@interface LibDomainByte : LibDomainNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface LibDomainUByte : LibDomainNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface LibDomainShort : LibDomainNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface LibDomainUShort : LibDomainNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface LibDomainInt : LibDomainNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface LibDomainUInt : LibDomainNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface LibDomainLong : LibDomainNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface LibDomainULong : LibDomainNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface LibDomainFloat : LibDomainNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface LibDomainDouble : LibDomainNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface LibDomainBoolean : LibDomainNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDomainInfo")))
@interface LibDomainSearchDomainInfo : LibDomainBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchDomainInfo __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LibDomainSearchDomainInfo *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *versionSearchDomain __attribute__((swift_name("versionSearchDomain")));
@end;

__attribute__((swift_name("TagCriteria")))
@protocol LibDomainTagCriteria
@required
- (BOOL)isActiveProduct:(LibDomainProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssuranceCriteria")))
@interface LibDomainAssuranceCriteria : LibDomainBase <LibDomainTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(LibDomainProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarriersCriteria")))
@interface LibDomainCarriersCriteria : LibDomainBase <LibDomainTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(LibDomainProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DigitalProductCriteria")))
@interface LibDomainDigitalProductCriteria : LibDomainBase <LibDomainTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(LibDomainProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FreeShippingCriteria")))
@interface LibDomainFreeShippingCriteria : LibDomainBase <LibDomainTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(LibDomainProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductTagEntity")))
@interface LibDomainProductTagEntity : LibDomainBase
- (instancetype)initWithId:(NSString *)id title:(NSString *)title icon:(NSString *)icon criterias:(NSMutableArray<id<LibDomainTagCriteria>> *)criterias __attribute__((swift_name("init(id:title:icon:criterias:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LibDomainProductTagEntityCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSMutableArray<id<LibDomainTagCriteria>> *)component4 __attribute__((swift_name("component4()")));
- (LibDomainProductTagEntity *)doCopyId:(NSString *)id title:(NSString *)title icon:(NSString *)icon criterias:(NSMutableArray<id<LibDomainTagCriteria>> *)criterias __attribute__((swift_name("doCopy(id:title:icon:criterias:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)doInitCriteriasConfigCriterias:(NSArray<LibDomainKotlinPair<NSString *, NSArray<NSString *> *> *> *)configCriterias __attribute__((swift_name("doInitCriterias(configCriterias:)")));
- (BOOL)isActiveForProductProduct:(LibDomainProductWithCriteriaEntity *)product __attribute__((swift_name("isActiveForProduct(product:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSMutableArray<id<LibDomainTagCriteria>> *criterias __attribute__((swift_name("criterias")));
@property NSString *icon __attribute__((swift_name("icon")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductTagEntity.Companion")))
@interface LibDomainProductTagEntityCompanion : LibDomainBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LibDomainProductTagEntityCompanion *shared __attribute__((swift_name("shared")));
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
@interface LibDomainProductWithCriteriaEntity : LibDomainBase
- (instancetype)initWithCarriers:(NSArray<NSString *> *)carriers specialCampaignId:(NSString * _Nullable)specialCampaignId assurance:(BOOL)assurance wholeSaleText:(NSString * _Nullable)wholeSaleText isDigitalProduct:(BOOL)isDigitalProduct isWithoutShipping:(BOOL)isWithoutShipping isFreeShipping:(BOOL)isFreeShipping __attribute__((swift_name("init(carriers:specialCampaignId:assurance:wholeSaleText:isDigitalProduct:isWithoutShipping:isFreeShipping:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NSString *> *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (LibDomainProductWithCriteriaEntity *)doCopyCarriers:(NSArray<NSString *> *)carriers specialCampaignId:(NSString * _Nullable)specialCampaignId assurance:(BOOL)assurance wholeSaleText:(NSString * _Nullable)wholeSaleText isDigitalProduct:(BOOL)isDigitalProduct isWithoutShipping:(BOOL)isWithoutShipping isFreeShipping:(BOOL)isFreeShipping __attribute__((swift_name("doCopy(carriers:specialCampaignId:assurance:wholeSaleText:isDigitalProduct:isWithoutShipping:isFreeShipping:)")));
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
@interface LibDomainScreenOrPlatformCriteria : LibDomainBase <LibDomainTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(LibDomainProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchProductTagConfigEntity")))
@interface LibDomainSearchProductTagConfigEntity : LibDomainBase
- (instancetype)initWithTags:(NSArray<LibDomainSearchProductTagConfigEntityTag *> *)tags searchMaxTag:(int32_t)searchMaxTag pdpMaxTag:(int32_t)pdpMaxTag __attribute__((swift_name("init(tags:searchMaxTag:pdpMaxTag:)"))) __attribute__((objc_designated_initializer));
- (NSArray<LibDomainSearchProductTagConfigEntityTag *> *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (LibDomainSearchProductTagConfigEntity *)doCopyTags:(NSArray<LibDomainSearchProductTagConfigEntityTag *> *)tags searchMaxTag:(int32_t)searchMaxTag pdpMaxTag:(int32_t)pdpMaxTag __attribute__((swift_name("doCopy(tags:searchMaxTag:pdpMaxTag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t pdpMaxTag __attribute__((swift_name("pdpMaxTag")));
@property int32_t searchMaxTag __attribute__((swift_name("searchMaxTag")));
@property (readonly) NSArray<LibDomainSearchProductTagConfigEntityTag *> *tags __attribute__((swift_name("tags")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchProductTagConfigEntity.Criteria")))
@interface LibDomainSearchProductTagConfigEntityCriteria : LibDomainBase
- (instancetype)initWithType:(NSString *)type values:(NSArray<NSString *> *)values __attribute__((swift_name("init(type:values:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> *)component2 __attribute__((swift_name("component2()")));
- (LibDomainSearchProductTagConfigEntityCriteria *)doCopyType:(NSString *)type values:(NSArray<NSString *> *)values __attribute__((swift_name("doCopy(type:values:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSArray<NSString *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchProductTagConfigEntity.Tag")))
@interface LibDomainSearchProductTagConfigEntityTag : LibDomainBase
- (instancetype)initWithId:(NSString *)id enabled:(BOOL)enabled title:(NSString *)title icon:(NSString *)icon criterias:(NSArray<LibDomainSearchProductTagConfigEntityCriteria *> *)criterias __attribute__((swift_name("init(id:enabled:title:icon:criterias:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSArray<LibDomainSearchProductTagConfigEntityCriteria *> *)component5 __attribute__((swift_name("component5()")));
- (LibDomainSearchProductTagConfigEntityTag *)doCopyId:(NSString *)id enabled:(BOOL)enabled title:(NSString *)title icon:(NSString *)icon criterias:(NSArray<LibDomainSearchProductTagConfigEntityCriteria *> *)criterias __attribute__((swift_name("doCopy(id:enabled:title:icon:criterias:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<LibDomainSearchProductTagConfigEntityCriteria *> *criterias __attribute__((swift_name("criterias")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) NSString *icon __attribute__((swift_name("icon")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpecialCampaignCriteria")))
@interface LibDomainSpecialCampaignCriteria : LibDomainBase <LibDomainTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(LibDomainProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnregisteredCriteria")))
@interface LibDomainUnregisteredCriteria : LibDomainBase <LibDomainTagCriteria>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isActiveProduct:(LibDomainProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WholesaleCriteria")))
@interface LibDomainWholesaleCriteria : LibDomainBase <LibDomainTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(LibDomainProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WithoutShippingCriteria")))
@interface LibDomainWithoutShippingCriteria : LibDomainBase <LibDomainTagCriteria>
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isActiveProduct:(LibDomainProductWithCriteriaEntity *)product __attribute__((swift_name("isActive(product:)")));
@property NSArray<NSString *> *criteriaValues __attribute__((swift_name("criteriaValues")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NativeConcurrentUtils")))
@interface LibDomainNativeConcurrentUtils : LibDomainBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nativeConcurrentUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LibDomainNativeConcurrentUtils *shared __attribute__((swift_name("shared")));
- (id _Nullable)freezeValue:(id _Nullable)receiver __attribute__((swift_name("freezeValue(_:)")));
- (BOOL)isFrozenValue:(id _Nullable)receiver __attribute__((swift_name("isFrozenValue(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface LibDomainPlatform : LibDomainBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platform __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LibDomainPlatform *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchProductTaggingUseCase")))
@interface LibDomainSearchProductTaggingUseCase : LibDomainBase
- (instancetype)initWithRepository:(LibDomainSearchProductTagRepository *)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LibDomainSearchProductTaggingUseCaseCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<LibDomainProductTagEntity *> *)getActiveTagsProduct:(LibDomainProductWithCriteriaEntity *)product __attribute__((swift_name("getActiveTags(product:)")));
- (int32_t)getScreenMaxTag __attribute__((swift_name("getScreenMaxTag()")));
- (void)setupComponents __attribute__((swift_name("setupComponents()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchProductTaggingUseCase.Companion")))
@interface LibDomainSearchProductTaggingUseCaseCompanion : LibDomainBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LibDomainSearchProductTaggingUseCaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DEFAULT_MAX_TAG __attribute__((swift_name("DEFAULT_MAX_TAG")));
@end;

__attribute__((swift_name("SearchProductTagRepository")))
@interface LibDomainSearchProductTagRepository : LibDomainBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)getMaxTag __attribute__((swift_name("getMaxTag()")));
- (NSArray<LibDomainProductTagEntity *> *)getSearchProductTags __attribute__((swift_name("getSearchProductTags()")));
- (NSArray<LibDomainSearchProductTagConfigEntityTag *> *)getTags __attribute__((swift_name("getTags()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MovieResponseModel")))
@interface LibDomainMovieResponseModel : LibDomainBase
- (instancetype)initWithMap:(NSDictionary<NSString *, id> *)map __attribute__((swift_name("init(map:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAdult:(LibDomainBoolean * _Nullable)adult backdropPath:(NSString * _Nullable)backdropPath genreIds:(NSArray<LibDomainInt *> * _Nullable)genreIds id:(LibDomainInt * _Nullable)id originalLanguage:(NSString * _Nullable)originalLanguage originalTitle:(NSString * _Nullable)originalTitle overview:(NSString * _Nullable)overview popularity:(LibDomainDouble * _Nullable)popularity posterPath:(NSString * _Nullable)posterPath releaseDate:(NSString * _Nullable)releaseDate title:(NSString * _Nullable)title video:(LibDomainBoolean * _Nullable)video voteAverage:(LibDomainDouble * _Nullable)voteAverage voteCount:(LibDomainInt * _Nullable)voteCount __attribute__((swift_name("init(adult:backdropPath:genreIds:id:originalLanguage:originalTitle:overview:popularity:posterPath:releaseDate:title:video:voteAverage:voteCount:)"))) __attribute__((objc_designated_initializer));
@property (readonly) LibDomainBoolean * _Nullable adult __attribute__((swift_name("adult")));
@property (readonly) NSString * _Nullable backdropPath __attribute__((swift_name("backdropPath")));
@property (readonly) NSArray<LibDomainInt *> * _Nullable genreIds __attribute__((swift_name("genreIds")));
@property (readonly) LibDomainInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable originalLanguage __attribute__((swift_name("originalLanguage")));
@property (readonly) NSString * _Nullable originalTitle __attribute__((swift_name("originalTitle")));
@property (readonly) NSString * _Nullable overview __attribute__((swift_name("overview")));
@property (readonly) LibDomainDouble * _Nullable popularity __attribute__((swift_name("popularity")));
@property (readonly) NSString * _Nullable posterPath __attribute__((swift_name("posterPath")));
@property (readonly) NSString * _Nullable releaseDate __attribute__((swift_name("releaseDate")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) LibDomainBoolean * _Nullable video __attribute__((swift_name("video")));
@property (readonly) LibDomainDouble * _Nullable voteAverage __attribute__((swift_name("voteAverage")));
@property (readonly) LibDomainInt * _Nullable voteCount __attribute__((swift_name("voteCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtensionKt")))
@interface LibDomainExtensionKt : LibDomainBase
+ (LibDomainBoolean * _Nullable)getBoolean:(NSDictionary<NSString *, id> *)receiver key:(NSString *)key __attribute__((swift_name("getBoolean(_:key:)")));
+ (LibDomainDouble * _Nullable)getDouble:(NSDictionary<NSString *, id> *)receiver key:(NSString *)key __attribute__((swift_name("getDouble(_:key:)")));
+ (LibDomainInt * _Nullable)getInt:(NSDictionary<NSString *, id> *)receiver key:(NSString *)key __attribute__((swift_name("getInt(_:key:)")));
+ (NSArray<LibDomainInt *> * _Nullable)getListOfInt:(NSDictionary<NSString *, id> *)receiver key:(NSString *)key __attribute__((swift_name("getListOfInt(_:key:)")));
+ (LibDomainLong * _Nullable)getLong:(NSDictionary<NSString *, id> *)receiver key:(NSString *)key __attribute__((swift_name("getLong(_:key:)")));
+ (NSString * _Nullable)getString:(NSDictionary<NSString *, id> *)receiver key:(NSString *)key __attribute__((swift_name("getString(_:key:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThreadExtKt")))
@interface LibDomainThreadExtKt : LibDomainBase
+ (void)runOnBackground:(id<LibDomainKotlinx_coroutines_coreCoroutineScope>)receiver block:(id<LibDomainKotlinSuspendFunction0>)block __attribute__((swift_name("runOnBackground(_:block:)")));
+ (void)runOnMain:(id<LibDomainKotlinx_coroutines_coreCoroutineScope>)receiver block:(id<LibDomainKotlinSuspendFunction0>)block __attribute__((swift_name("runOnMain(_:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface LibDomainKotlinPair<__covariant A, __covariant B> : LibDomainBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibDomainKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol LibDomainKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<LibDomainKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol LibDomainKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol LibDomainKotlinSuspendFunction0 <LibDomainKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol LibDomainKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<LibDomainKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<LibDomainKotlinCoroutineContextElement> _Nullable)getKey:(id<LibDomainKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<LibDomainKotlinCoroutineContext>)minusKeyKey:(id<LibDomainKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<LibDomainKotlinCoroutineContext>)plusContext:(id<LibDomainKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface LibDomainKotlinThrowable : LibDomainBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LibDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LibDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (LibDomainKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibDomainKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface LibDomainKotlinException : LibDomainKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LibDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LibDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface LibDomainKotlinRuntimeException : LibDomainKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LibDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LibDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface LibDomainKotlinIllegalStateException : LibDomainKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LibDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LibDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface LibDomainKotlinCancellationException : LibDomainKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LibDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LibDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol LibDomainKotlinCoroutineContextElement <LibDomainKotlinCoroutineContext>
@required
@property (readonly) id<LibDomainKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol LibDomainKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface LibDomainKotlinArray<T> : LibDomainBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(LibDomainInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<LibDomainKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol LibDomainKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
