/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISDownloadMetadata, NSNumber, NSString;

@interface ISPurchaseDescriptor : NSObject <NSCoding> {
    NSNumber *_accountDSID;
    NSString *_buyParameters;
    ISDownloadMetadata *_metadata;
    NSInteger _primaryAssetType;
}

@property NSInteger primaryAssetType; /* unknown property attribute: V_primaryAssetType */
@property(retain) ISDownloadMetadata *metadata; /* unknown property attribute: V_metadata */
@property(retain) NSString *buyParameters; /* unknown property attribute: V_buyParameters */
@property(retain) NSNumber *accountDSID; /* unknown property attribute: V_accountDSID */

- (id)accountDSID;
- (id)buyParameters;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)metadata;
- (NSInteger)primaryAssetType;
- (void)setAccountDSID:(id)arg1;
- (void)setBuyParameters:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPrimaryAssetType:(NSInteger)arg1;

@end