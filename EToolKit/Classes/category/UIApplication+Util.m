//
//  UIApplication+Util.m
//  LionLiving
//
//  Created by sheng on 8/31/16.
//  Copyright © 2016 com.youxiduo. All rights reserved.
//

#import "UIApplication+Util.h"

@implementation UIApplication (Util)


- (UIWindow *)topValideWindow {
    
    NSEnumerator *frontToBackWindows = [[[UIApplication sharedApplication]windows]reverseObjectEnumerator];
    
    for (UIWindow *window in frontToBackWindows)
        if (window.windowLevel == UIWindowLevelNormal) {
            return window;
        }
    
    return [UIApplication sharedApplication].delegate.window;
    
    //[UIApplication sharedApplication].keyWindow
}

@end
