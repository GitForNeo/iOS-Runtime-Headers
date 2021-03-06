/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDClientMetadata : PBCodable <NSCopying> {
    GEOABSecondPartyPlaceRequestClientMetaData * _abClientMetadata;
    GEOAdditionalEnabledMarkets * _additionalEnabledMarkets;
    unsigned int  _dayOfWeek;
    NSString * _debugApiKey;
    NSString * _deviceCountryCode;
    NSString * _deviceDisplayLanguage;
    GEOLocation * _deviceExtendedLocation;
    NSMutableArray * _deviceHistoricalLocations;
    NSString * _deviceKeyboardLanguage;
    NSString * _deviceSpokenLanguage;
    struct { 
        unsigned int dayOfWeek : 1; 
        unsigned int hourOfDay : 1; 
        unsigned int requiredVersion : 1; 
        unsigned int resultListAttributionSupport : 1; 
        unsigned int timeSinceMapEnteredForeground : 1; 
    }  _has;
    unsigned int  _hourOfDay;
    int  _requiredVersion;
    int  _resultListAttributionSupport;
    unsigned int  _timeSinceMapEnteredForeground;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOABSecondPartyPlaceRequestClientMetaData *abClientMetadata;
@property (nonatomic, retain) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic, retain) NSString *debugApiKey;
@property (nonatomic, retain) NSString *deviceCountryCode;
@property (nonatomic, retain) NSString *deviceDisplayLanguage;
@property (nonatomic, retain) GEOLocation *deviceExtendedLocation;
@property (nonatomic, retain) NSMutableArray *deviceHistoricalLocations;
@property (nonatomic, retain) NSString *deviceKeyboardLanguage;
@property (nonatomic, retain) NSString *deviceSpokenLanguage;
@property (nonatomic, readonly) BOOL hasAbClientMetadata;
@property (nonatomic, readonly) BOOL hasAdditionalEnabledMarkets;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic, readonly) BOOL hasDebugApiKey;
@property (nonatomic, readonly) BOOL hasDeviceCountryCode;
@property (nonatomic, readonly) BOOL hasDeviceDisplayLanguage;
@property (nonatomic, readonly) BOOL hasDeviceExtendedLocation;
@property (nonatomic, readonly) BOOL hasDeviceKeyboardLanguage;
@property (nonatomic, readonly) BOOL hasDeviceSpokenLanguage;
@property (nonatomic) BOOL hasHourOfDay;
@property (nonatomic) BOOL hasRequiredVersion;
@property (nonatomic) BOOL hasResultListAttributionSupport;
@property (nonatomic) BOOL hasTimeSinceMapEnteredForeground;
@property (nonatomic) unsigned int hourOfDay;
@property (nonatomic) int requiredVersion;
@property (nonatomic) int resultListAttributionSupport;
@property (nonatomic) unsigned int timeSinceMapEnteredForeground;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)deviceHistoricalLocationType;

- (int)StringAsRequiredVersion:(id)arg1;
- (int)StringAsResultListAttributionSupport:(id)arg1;
- (id)abClientMetadata;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (id)additionalEnabledMarkets;
- (void)clearDeviceHistoricalLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dayOfWeek;
- (void)dealloc;
- (id)debugApiKey;
- (id)description;
- (id)deviceCountryCode;
- (id)deviceDisplayLanguage;
- (id)deviceExtendedLocation;
- (id)deviceHistoricalLocationAtIndex:(unsigned int)arg1;
- (id)deviceHistoricalLocations;
- (unsigned int)deviceHistoricalLocationsCount;
- (id)deviceKeyboardLanguage;
- (id)deviceSpokenLanguage;
- (id)dictionaryRepresentation;
- (BOOL)hasAbClientMetadata;
- (BOOL)hasAdditionalEnabledMarkets;
- (BOOL)hasDayOfWeek;
- (BOOL)hasDebugApiKey;
- (BOOL)hasDeviceCountryCode;
- (BOOL)hasDeviceDisplayLanguage;
- (BOOL)hasDeviceExtendedLocation;
- (BOOL)hasDeviceKeyboardLanguage;
- (BOOL)hasDeviceSpokenLanguage;
- (BOOL)hasHourOfDay;
- (BOOL)hasRequiredVersion;
- (BOOL)hasResultListAttributionSupport;
- (BOOL)hasTimeSinceMapEnteredForeground;
- (unsigned int)hash;
- (unsigned int)hourOfDay;
- (id)initWithTraits:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)requiredVersion;
- (id)requiredVersionAsString:(int)arg1;
- (int)resultListAttributionSupport;
- (id)resultListAttributionSupportAsString:(int)arg1;
- (void)setAbClientMetadata:(id)arg1;
- (void)setAdditionalEnabledMarkets:(id)arg1;
- (void)setDayOfWeek:(unsigned int)arg1;
- (void)setDebugApiKey:(id)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDeviceDisplayLanguage:(id)arg1;
- (void)setDeviceExtendedLocation:(id)arg1;
- (void)setDeviceHistoricalLocations:(id)arg1;
- (void)setDeviceKeyboardLanguage:(id)arg1;
- (void)setDeviceSpokenLanguage:(id)arg1;
- (void)setHasDayOfWeek:(BOOL)arg1;
- (void)setHasHourOfDay:(BOOL)arg1;
- (void)setHasRequiredVersion:(BOOL)arg1;
- (void)setHasResultListAttributionSupport:(BOOL)arg1;
- (void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1;
- (void)setHourOfDay:(unsigned int)arg1;
- (void)setRequiredVersion:(int)arg1;
- (void)setResultListAttributionSupport:(int)arg1;
- (void)setTimeSinceMapEnteredForeground:(unsigned int)arg1;
- (unsigned int)timeSinceMapEnteredForeground;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
