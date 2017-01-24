//
//  NSString+Util.h
//  LionLiving
//
//  Created by jie.tane on 4/25/16.
//  Copyright © 2016 com.youxiduo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCrypto.h>
#import <UIKit/UIKit.h>


@interface NSString (Util)

+ (NSString *)randomStringWithLength:(int)len;

- (NSString *)MD5;
-(BOOL)isNotEmpty;

- (NSString *)replaceNewLine; //return a string "\n" replaced by empty

-(BOOL)isEmail;

// If the string only contains white space or \r\\n, this function returns nil \n
// else it returns a string trimed. \n
// if the string is nil, call this function will also get nil, which is desirable \n
// Use this method to determine if a string is empty is totally OK.
- (NSString *)wpTrim;
- (NSString *)cutStringWithLength:(NSInteger)length;
- (NSString *)firstLetter;
- (NSNumber *)numberValue;
- (NSString *)stringByCapitalizeFirstLetter;
- (NSString *)imgUrlByAppendingSmallSuffix;
- (NSString *)imgUrlByAppendingMediumSuffix;

- (NSString *)imgUrlByAppendingSuffixLimitHeight:(NSInteger)height;

- (NSString *)imgUrlByAppendingSuffixLimitWidth:(NSInteger)width;

+ (NSString *)uuid;

- (CGSize)lg_sizeWithFont:(UIFont *)font;
- (CGSize)lg_sizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode;

- (NSString *)urlDecode;

- (NSString *)urlEncode;
- (NSURL *)urlValue;

- (CGSize)lg_sizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size;
- (void)lg_drawInRect:(CGRect)rect withFont:(UIFont *)font;
- (void)lg_drawAtPoint:(CGPoint)point withFont:(UIFont *)font;

- (NSString *)stringValue;

- (NSComparisonResult)contactCompare:(NSString *)anotherString;

- (BOOL)isValidPhone;

- (NSAttributedString *)rmbAttributedStringWithSmallFontSize:(CGFloat)smallFontSize bigFontSize:(CGFloat)bigFontSize;

- (NSString *)toBase64String;

- (NSString *)base64StringToOriginString;
- (BOOL)isWhiteString;

+ (NSString *)stringFromDate:(NSDate *)date;
+ (NSDate *)dateFromString:(NSString *)string;
- (NSDictionary *)paramsFromString;
- (NSString *)md5Encrypt;

+ (NSString *)replaceEmojiFor:(NSString *)orgString;

@end

@interface NSNumber (Util)
- (NSString *)decimalStyleStr;
@end
