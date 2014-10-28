/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSKPulseAnimationControllerProtocol>;

@interface TSKPulseAnimationController : TSKHighlightController {
    BOOL _autohide;
    <TSKPulseAnimationControllerProtocol> *_delegate;
    double _duration;
    BOOL _pulsating;
    float _pulseOffset;
}

@property BOOL autohide;
@property double duration;
@property BOOL pulsating;
@property float pulseOffset;

- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)autohide;
- (void)dealloc;
- (void)disconnect;
- (BOOL)drawRoundedRect;
- (double)duration;
- (id)initWithDelegate:(id)arg1;
- (BOOL)pulsating;
- (float)pulseOffset;
- (void)reset;
- (void)setAutohide:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (void)setPulsating:(BOOL)arg1;
- (void)setPulseOffset:(float)arg1;
- (void)startAnimating;
- (void)stop;

@end