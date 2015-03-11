/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDIMessageSentMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int fzError : 1; 
        unsigned int hasAttachments : 1; 
        unsigned int isGroupMessage : 1; 
        unsigned int isToEmail : 1; 
        unsigned int isToPhoneNumber : 1; 
        unsigned int isTypingIndicator : 1; 
        unsigned int messageError : 1; 
        unsigned int sendDuration : 1; 
    int _fzError;
    NSString *_guid;
    } _has;
    unsigned int _hasAttachments;
    unsigned int _isGroupMessage;
    unsigned int _isToEmail;
    unsigned int _isToPhoneNumber;
    unsigned int _isTypingIndicator;
    unsigned int _messageError;
    unsigned int _sendDuration;
    unsigned long long _timestamp;
}

@property int fzError;
@property(retain) NSString * guid;
@property unsigned int hasAttachments;
@property BOOL hasFzError;
@property(readonly) BOOL hasGuid;
@property BOOL hasHasAttachments;
@property BOOL hasIsGroupMessage;
@property BOOL hasIsToEmail;
@property BOOL hasIsToPhoneNumber;
@property BOOL hasIsTypingIndicator;
@property BOOL hasMessageError;
@property BOOL hasSendDuration;
@property BOOL hasTimestamp;
@property unsigned int isGroupMessage;
@property unsigned int isToEmail;
@property unsigned int isToPhoneNumber;
@property unsigned int isTypingIndicator;
@property unsigned int messageError;
@property unsigned int sendDuration;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fzError;
- (id)guid;
- (unsigned int)hasAttachments;
- (BOOL)hasFzError;
- (BOOL)hasGuid;
- (BOOL)hasHasAttachments;
- (BOOL)hasIsGroupMessage;
- (BOOL)hasIsToEmail;
- (BOOL)hasIsToPhoneNumber;
- (BOOL)hasIsTypingIndicator;
- (BOOL)hasMessageError;
- (BOOL)hasSendDuration;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)isGroupMessage;
- (unsigned int)isToEmail;
- (unsigned int)isToPhoneNumber;
- (unsigned int)isTypingIndicator;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageError;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)sendDuration;
- (void)setFzError:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasAttachments:(unsigned int)arg1;
- (void)setHasFzError:(BOOL)arg1;
- (void)setHasHasAttachments:(BOOL)arg1;
- (void)setHasIsGroupMessage:(BOOL)arg1;
- (void)setHasIsToEmail:(BOOL)arg1;
- (void)setHasIsToPhoneNumber:(BOOL)arg1;
- (void)setHasIsTypingIndicator:(BOOL)arg1;
- (void)setHasMessageError:(BOOL)arg1;
- (void)setHasSendDuration:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIsGroupMessage:(unsigned int)arg1;
- (void)setIsToEmail:(unsigned int)arg1;
- (void)setIsToPhoneNumber:(unsigned int)arg1;
- (void)setIsTypingIndicator:(unsigned int)arg1;
- (void)setMessageError:(unsigned int)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
