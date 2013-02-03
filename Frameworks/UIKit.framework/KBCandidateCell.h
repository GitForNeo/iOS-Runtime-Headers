/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface KBCandidateCell : UIView {
    struct CGSize { 
        float width; 
        float height; 
    SEL _action;
    float _atBottom;
    NSString *_candidate;
    BOOL _drawDone;
    BOOL _highlighted;
    NSUInteger _index;
    BOOL _isLastInLine;
    } _stringImageSize;
    BOOL _stringMayBeTooLong;
    id _target;
}

+ (id)font;

- (void)dealloc;
- (float)dividorOriginX;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSUInteger)index;
- (id)initWithCandidate:(id)arg1 andIndex:(NSUInteger)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)selected;
- (void)setAtBottom:(BOOL)arg1;
- (void)setGap:(float)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLastInLine:(BOOL)arg1;
- (void)setStringMayBeTooLong:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })stringImageSize;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end