/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAppConfigurationResource : NSObject <FCKeyValueStoreCoding, NSCopying> {
    NSData * _configurationData;
    NSString * _etag;
    NSDate * _lastFetchedDate;
    NSDate * _lastModifiedDate;
    NSString * _lastModifiedString;
    NSNumber * _maxAge;
    NSURL * _sourceURL;
}

@property (nonatomic, retain) NSData *configurationData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *etag;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSDate *lastFetchedDate;
@property (nonatomic, retain) NSDate *lastModifiedDate;
@property (nonatomic, retain) NSString *lastModifiedString;
@property (nonatomic, retain) NSNumber *maxAge;
@property (nonatomic, retain) NSURL *sourceURL;
@property (readonly) Class superclass;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (void).cxx_destruct;
- (id)configurationData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)etag;
- (BOOL)isExpiredWithFallbackMaxAge:(double)arg1;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (id)lastModifiedString;
- (id)maxAge;
- (void)setConfigurationData:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setLastFetchedDate:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setLastModifiedString:(id)arg1;
- (void)setMaxAge:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;
- (void)writeToKeyValuePair:(id)arg1;

@end
