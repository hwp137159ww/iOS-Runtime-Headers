/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLBaseLayerStack : NSObject {
    struct CGImage { } *_brushImageRef;
    float _brushSize;
    float _brushSoftness;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _flippedViewToMaskTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _inverseFlippedViewToMaskTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _inverseViewToMaskTransform;
    NSMutableArray *_layers;
    int _maskLongEdgeSize;
    struct CGSize { 
        float width; 
        float height; 
    } _maskSize;
    BOOL _shouldNotify;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _viewToMaskTransform;
}

@property (nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } flippedViewToMaskTransform;
@property (nonatomic, readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } inverseFlippedViewToMaskTransform;
@property (nonatomic, readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } inverseViewToMaskTransform;
@property (nonatomic, readonly, retain) NSMutableArray *layers;
@property (nonatomic) int maskLongEdgeSize;
@property (nonatomic) struct CGSize { float x1; float x2; } maskSize;
@property (nonatomic) BOOL shouldNotify;
@property (nonatomic) NSDictionary *strokesDataDictionary;
@property (nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } viewToMaskTransform;
@property (nonatomic, retain) UIImage *workingImage;
@property (nonatomic, retain) BLPixelImageBuffer *workingImageBuffer;
@property (nonatomic) float workingImageScaleFactor;

- (struct CGImage { }*)brushImageRefWithSize:(float)arg1 softness:(float)arg2;
- (void)dealloc;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })flippedViewToMaskTransform;
- (BOOL)haveLayerMask;
- (id)imageLayer;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })inverseFlippedViewToMaskTransform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })inverseViewToMaskTransform;
- (id)layers;
- (float)maskArea;
- (int)maskLongEdgeSize;
- (struct CGSize { float x1; float x2; })maskSize;
- (struct CGImage { }*)newImageForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 andScale:(float)arg3;
- (BOOL)readyToDraw;
- (void)setFlippedViewToMaskTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setMaskLongEdgeSize:(int)arg1;
- (void)setMaskSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setShouldNotify:(BOOL)arg1;
- (void)setStrokesDataDictionary:(id)arg1;
- (void)setViewToMaskTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setWorkingImage:(id)arg1;
- (void)setWorkingImageBuffer:(id)arg1;
- (void)setWorkingImageScaleFactor:(float)arg1;
- (BOOL)shouldNotify;
- (id)strokesDataDictionary;
- (double)timestamp;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })viewToMaskTransform;
- (id)workingImage;
- (id)workingImageBuffer;
- (float)workingImageScaleFactor;

@end
