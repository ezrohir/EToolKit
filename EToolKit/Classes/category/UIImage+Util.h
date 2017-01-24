//
//  UIImage+Util.h
//  LionLiving
//
//  Created by jie.tane on 4/27/16.
//  Copyright © 2016 com.youxiduo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Util)
- (UIImage *)barrageImageScaleToSize:(CGSize)size;
-(UIImage *)blurImageWithBlur:(CGFloat)blur;
- (UIImage *)cropImageWithX:(CGFloat)x y:(CGFloat)y width:(CGFloat)width height:(CGFloat)height;
- (UIImage *)resizedImage:(CGSize)newSize interpolationQuality:(CGInterpolationQuality)quality;


+ (UIImage *)imageWithColor:(UIColor *)color;
+ (UIImage *)imageWithColor:(UIColor *)color andSize:(CGSize)size;
+(instancetype)circleImageWithImage:(UIImage *)image border:(CGFloat)border color:(UIColor *)color;
@end
