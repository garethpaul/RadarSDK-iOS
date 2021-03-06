//
//  RadarUser.h
//  RadarSDK
//
//  Copyright © 2016 Radar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RadarGeofence.h"

@interface RadarUser : NSObject

/**
 * @abstract The unique ID for the user, provided by Radar.
 */
@property (nonnull, copy, nonatomic, readonly) NSString *_id;

/**
 * @abstract The unique ID for the user, provided when you identified the user.
 */
@property (nonnull, copy, nonatomic, readonly) NSString *userId;

/**
 * @abstract An optional description for the user. Not to be confused with the NSObject description property.
 */
@property (nullable, copy, nonatomic, readonly) NSString *_description;

/**
 * @abstract An array of the user's last known geofences.
 */
@property (nullable, copy, nonatomic, readonly) NSArray<RadarGeofence *> *geofences;

@end
