//
//  GlobalUIHelper.h
//  MacrosDemo
//
//  Created by 万启鹏 on 2018/7/12.
//  Copyright © 2018年 iCorki. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GlobalUIHelper : NSObject

@end

@interface GlobalUIHelper (Device)

+ (BOOL)isIPad;
+ (BOOL)isIPadPro;
+ (BOOL)isIPod;
+ (BOOL)isIPhone;
+ (BOOL)isSimulator;
+ (BOOL)isOLEDScreen;


+ (BOOL)is58InchScreen;
+ (BOOL)is55InchScreen;
+ (BOOL)is47InchScreen;
+ (BOOL)is40InchScreen;
+ (BOOL)is35InchScreen;

+ (CGSize)screenSizeFor58Inch;
+ (CGSize)screenSizeFor55Inch;
+ (CGSize)screenSizeFor47Inch;
+ (CGSize)screenSizeFor40Inch;
+ (CGSize)screenSizeFor35Inch;

// 用于获取 iPhoneX 安全区域的 insets
+ (UIEdgeInsets)safeAreaInsetsForIPhoneX;

/// 判断当前设备是否高性能设备，只会判断一次，以后都直接读取结果，所以没有性能问题
+ (BOOL)isHighPerformanceDevice;

@end
