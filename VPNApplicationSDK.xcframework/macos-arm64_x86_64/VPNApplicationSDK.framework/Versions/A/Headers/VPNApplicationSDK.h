//
//  VPNApplicationSDK.h
//  VPNApplicationSDK
//
//  Created by Dan Vasilev on 12.01.2021.
//  Copyright © 2021 Anchorfree Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for VPNApplicationSDK.
FOUNDATION_EXPORT double VPNApplicationSDKVersionNumber;

//! Project version string for VPNApplicationSDK.
FOUNDATION_EXPORT const unsigned char VPNApplicationSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <VPNApplicationSDK/PublicHeader.h>

static NSString *const AFAPIErrorDomain = @"VPNSDK.APIError";
static NSString *const VPNStateDidChange = @"vpnsdk.vpnStateDidChange";
