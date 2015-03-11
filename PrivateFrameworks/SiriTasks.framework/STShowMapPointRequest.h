/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@class NSData;

@interface STShowMapPointRequest : AFSiriRequest {
    NSData *_placeData;
    bool_isCurrentLocation;
}

@property bool isCurrentLocation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPlaceData:(id)arg1;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCurrentLocation;
- (id)mapPointData;
- (void)setIsCurrentLocation:(bool)arg1;

@end