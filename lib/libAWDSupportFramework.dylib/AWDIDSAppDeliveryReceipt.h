/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDIDSAppDeliveryReceipt : PBCodable <NSCopying> {
    struct { 
        unsigned int isToDefaultPairedDevice : 1; 
        unsigned int messageSize : 1; 
        unsigned int priority : 1; 
        unsigned int rTT : 1; 
        unsigned int timestamp : 1; 
    } _has;
    unsigned long long _isToDefaultPairedDevice;
    unsigned long long _messageSize;
    unsigned long long _priority;
    unsigned long long _rTT;
    NSString *_service;
    unsigned long long _timestamp;
}

@property BOOL hasIsToDefaultPairedDevice;
@property BOOL hasMessageSize;
@property BOOL hasPriority;
@property BOOL hasRTT;
@property(readonly) BOOL hasService;
@property BOOL hasTimestamp;
@property unsigned long long isToDefaultPairedDevice;
@property unsigned long long messageSize;
@property unsigned long long priority;
@property unsigned long long rTT;
@property(retain) NSString * service;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsToDefaultPairedDevice;
- (BOOL)hasMessageSize;
- (BOOL)hasPriority;
- (BOOL)hasRTT;
- (BOOL)hasService;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)isToDefaultPairedDevice;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)messageSize;
- (unsigned long long)priority;
- (unsigned long long)rTT;
- (BOOL)readFrom:(id)arg1;
- (id)service;
- (void)setHasIsToDefaultPairedDevice:(BOOL)arg1;
- (void)setHasMessageSize:(BOOL)arg1;
- (void)setHasPriority:(BOOL)arg1;
- (void)setHasRTT:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIsToDefaultPairedDevice:(unsigned long long)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setRTT:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
