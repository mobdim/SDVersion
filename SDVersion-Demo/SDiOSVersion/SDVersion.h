//
//  SDVersion.h
//  SDVersion
//
//  Created by Dmitriy Zadoroghnyy on 16/06/2019.
//  Copyright © 2019 Sebastian Dobrincu. All rights reserved.
//

#ifndef SDVersion_h
#define SDVersion_h

#import <UIKit/UIKit.h>

//! Project version number for SDVersion.
FOUNDATION_EXPORT double SDVersionVersionNumber;

//! Project version string for SDVersion.
FOUNDATION_EXPORT const unsigned char SDVersionVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <SDVersion/PublicHeader.h>

#import "SDiOSVersion.h"
#define SDVersion SDiOSVersion

#endif /* SDVersion_h */
