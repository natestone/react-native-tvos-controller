//
//  ReactNativeTvosController.h
//  ReactNativeTvosController
//
//  Created by yangchen on 2017/1/29.
//  Copyright © 2017年 yangchen. All rights reserved.
//

//#import <React/RCTBridgeModule.h>
//#import <React/RCTEventEmitter.h>

// Causes redefinition error for RCTInfoMethod
// #import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"

@interface ReactNativeTvosController : RCTEventEmitter <RCTBridgeModule, UIGestureRecognizerDelegate>

@end
