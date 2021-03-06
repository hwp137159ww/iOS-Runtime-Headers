/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUEffectView : UIView {
    MPUEffectCache *_effectCache;
    UIImage *_effectImage;
    _UIBackdropViewSettings *_effectSettings;
    UIView *_referenceView;
}

@property (nonatomic, retain) MPUEffectCache *effectCache;
@property (nonatomic, retain) UIImage *effectImage;
@property (nonatomic, retain) _UIBackdropViewSettings *effectSettings;
@property (nonatomic, retain) UIView *referenceView;

+ (void)coordinateAsyncEffectViewPropertyChanges:(id /* block */)arg1 withAnimationBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)effectCache;
- (id)effectImage;
- (id)effectSettings;
- (id)referenceView;
- (void)setEffectCache:(id)arg1;
- (void)setEffectImage:(id)arg1;
- (void)setEffectSettings:(id)arg1;
- (void)setReferenceView:(id)arg1;
- (void)updateEffect;

@end
