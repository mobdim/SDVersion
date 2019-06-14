//
//  SDVersion.h
//  SDVersion
//
//  Copyright (c) 2016 Sebastian Dobrincu. All rights reserved.
//

#ifndef SDVersion_h
#define SDVersion_h


#import <UIKit/UIKit.h>

//! Project version number for SDVersion.
FOUNDATION_EXPORT double SDVersionVersionNumber;

//! Project version string for SDVersion.
FOUNDATION_EXPORT const unsigned char SDVersionVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <SDVersion/PublicHeader.h>


#if TARGET_OS_IOS
	#import "SDiOSVersion.h"
	#define SDVersion SDiOSVersion
#elif TARGET_OS_WATCH
    #import "SDwatchOSVersion.h"
    #define SDVersion SDwatchOSVersion
#elif TARGET_OS_TV
    #import "SDtvOSVersion.h"
    #define SDVersion SDtvOSVersion
#elif TARGET_OS_MAC
    #import "SDMacVersion.h"
    #define SDVersion SDMacVersion
#endif

#endif
