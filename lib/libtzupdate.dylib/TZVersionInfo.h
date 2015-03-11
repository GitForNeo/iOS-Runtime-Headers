/* Generated by RuntimeBrowser
   Image: /usr/lib/libtzupdate.dylib
 */

@class NSArray, NSNumber, NSString, NSURL;

@interface TZVersionInfo : NSObject {
    NSString *_bundleVersion;
    NSArray *_changedFiles;
    NSURL *_diskLocation;
    NSString *_icuChecksumBaseline;
    NSString *_icuChecksumCurrent;
    NSString *_icuNameBaseline;
    NSString *_icuNameCurrent;
    NSNumber *_shouldAlertAll;
    NSString *_tzDataVersion;
}

@property(retain) NSString * bundleVersion;
@property(retain) NSArray * changedFiles;
@property(retain) NSURL * diskLocation;
@property(retain) NSString * icuChecksumBaseline;
@property(retain) NSString * icuChecksumCurrent;
@property(retain) NSString * icuNameBaseline;
@property(retain) NSString * icuNameCurrent;
@property(retain) NSNumber * shouldAlertAll;
@property(retain) NSString * tzDataVersion;
@property(readonly) NSString * versionString;

+ (id)_tzDataVersionFromZoneinfoDirectory:(id)arg1 withError:(id*)arg2;
+ (BOOL)_verifyVersionInfoDictionary:(id)arg1;
+ (id)blankVersionInfo;
+ (id)versionInfoFromContainerDirectory:(id)arg1;
+ (id)versionInfoFromDefaultSystem;
+ (id)versionInfoWithDictionary:(id)arg1 isPartial:(BOOL)arg2;

- (void).cxx_destruct;
- (id)_initWithVersionInfoDictionary:(id)arg1 isPartial:(BOOL)arg2;
- (id)bundleVersion;
- (id)changedFiles;
- (int)compare:(id)arg1;
- (id)description;
- (id)diskLocation;
- (id)icuChecksumBaseline;
- (id)icuChecksumCurrent;
- (id)icuNameBaseline;
- (id)icuNameCurrent;
- (BOOL)isBlank;
- (void)setBundleVersion:(id)arg1;
- (void)setChangedFiles:(id)arg1;
- (void)setDiskLocation:(id)arg1;
- (void)setIcuChecksumBaseline:(id)arg1;
- (void)setIcuChecksumCurrent:(id)arg1;
- (void)setIcuNameBaseline:(id)arg1;
- (void)setIcuNameCurrent:(id)arg1;
- (void)setShouldAlertAll:(id)arg1;
- (void)setTzDataVersion:(id)arg1;
- (id)shouldAlertAll;
- (id)tzDataVersion;
- (id)versionString;

@end
