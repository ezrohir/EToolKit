//
//  UIColor+Util.m
//  LionLiving
//
//  Created by ezrohir on 16/6/24.
//  Copyright © 2016年 com.youxiduo. All rights reserved.
//

#import "UIColor+Util.h"

@implementation UIColor (Util)
//
//+ (UIColor *)colorFromHexString:(NSString *)hexString
//{
//    NSString *cleanString = [hexString stringByReplacingOccurrencesOfString:@"#" withString:@""];
//    if([cleanString length] == 3) {
//        cleanString = [NSString stringWithFormat:@"%@%@%@%@%@%@",
//                       [cleanString substringWithRange:NSMakeRange(0, 1)],[cleanString substringWithRange:NSMakeRange(0, 1)],
//                       [cleanString substringWithRange:NSMakeRange(1, 1)],[cleanString substringWithRange:NSMakeRange(1, 1)],
//                       [cleanString substringWithRange:NSMakeRange(2, 1)],[cleanString substringWithRange:NSMakeRange(2, 1)]];
//    }
//    if([cleanString length] == 6) {
//        cleanString = [cleanString stringByAppendingString:@"ff"];
//    }
//    
//    unsigned int baseValue;
//    [[NSScanner scannerWithString:cleanString] scanHexInt:&baseValue];
//    
//    float red = ((baseValue >> 24) & 0xFF)/255.0f;
//    float green = ((baseValue >> 16) & 0xFF)/255.0f;
//    float blue = ((baseValue >> 8) & 0xFF)/255.0f;
//    float alpha = ((baseValue >> 0) & 0xFF)/255.0f;
//    return [UIColor colorWithRed:red green:green blue:blue alpha:alpha];
//}

+ (UIColor *)colorFromHexString:(NSString *)hexString {
    
    if (!hexString.length) {
        return nil;
    }
    
    unsigned rgbValue = 0;
    if (hexString) {
        if ([hexString hasPrefix:@"#"]) {
            hexString = [hexString substringFromIndex:1];
        }
        
        NSScanner *scanner = [NSScanner scannerWithString:hexString];
        [scanner scanHexInt:&rgbValue];
        return [UIColor colorWithRed:((rgbValue & 0xFF0000) >> 16)/255.0 green:((rgbValue & 0xFF00) >> 8)/255.0 blue:(rgbValue & 0xFF)/255.0 alpha:1.0];
    }
    return nil;
}

@end
