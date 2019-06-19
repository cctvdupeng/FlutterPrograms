//
//  FPConfig.h
//  FlutterPrograms
//
//  Created by GuHaijun on 2019/2/23.
//  Copyright © 2019 GuHaijun. All rights reserved.
//

#ifndef FPConfig_h
#define FPConfig_h

#import <Foundation/Foundation.h>
#import <NNMacros/NNMacros.h>

#define FP_NSLog(format, ...)      {NSLog((@"[%s] %s [Line %d] " format), __FILE__, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);}

#define FP_SPEC_FILE_NAME  @"spec.json"
#define FP_ASSERT_FILE_NAME @"flutter_assets.zip"
#define FP_ASSERT_PATH_NAME @"flutter_assets"

static inline NSString *FPSpecName() {
    return @"spec.json";
}

static inline NSString *FPApplicationUpdateSpecFileRemoteUrl() {
    return @"https://raw.githubusercontent.com/FlutterPrograms/UpdateSpec/master/spec/spec.json";
}

static inline NSString *FPApplicationUpdateSpecLocalPath() {
    return [NN_pathDocuments stringByAppendingPathComponent:@"ApplicationUpdateSpec"];
}

static inline NSString *FPApplicationUpdateSpecFileLocalPath() {
    return [FPApplicationUpdateSpecLocalPath() stringByAppendingString:FPSpecName()];
}

static inline NSString *FPApplicationPath() {
    return [NN_pathDocuments stringByAppendingPathComponent:@"Application"];
}

static inline NSString *FPApplicationSpecFilePath() {
    return [FPApplicationPath() stringByAppendingPathComponent:FPSpecName()];
}

static inline NSString *FPApplicationAssertPath() {
    return [FPApplicationPath() stringByAppendingPathComponent:@"flutter_assets"];
}

static inline NSString *FPApplicationAssertFilePath() {
    return [FPApplicationPath() stringByAppendingPathComponent:@"flutter_assets.zip"];
}

static inline NSString *FPMainBundleApplicationAssertPath() {
    return [[NSBundle mainBundle] pathForResource:@"flutter_assets" ofType:nil];
}

static inline NSString *FPMainBundleApplicationSpecFilePath() {
    return [[[NSBundle mainBundle] pathForResource:@"flutter_spec" ofType:nil] stringByAppendingPathComponent:FPSpecName()];
}

static inline NSString *FPApplicationAssertTempPath() {
    return [NN_pathCaches stringByAppendingPathComponent:@"ApplicationAssetsTemp"];
}

static inline NSString *FPApplicationAssertFileTempPath() {
    return [FPApplicationAssertTempPath() stringByAppendingPathComponent:@"flutter_assets.zip"];
}

#endif /* FPConfig_h */
