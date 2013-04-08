//
//  SRMappable.h
//  StorageRoomRestKit
//
//  Created by Sascha Konietzke on 7/13/11.
//  Copyright 2011 Thriventures. All rights reserved.
//

@class RKMapping;
@class RKObjectMapping;

/**
 * Protocol implemented by all internal defined Resources
 */
@protocol SRMappableObject <NSObject>

/**
 * The object mapping for the class.
 */
+ (RKObjectMapping *)objectMapping;

/**
 * The root key path (was in objectMapping in RestKit 0.10.3).
 */
+ (NSString *)rootKeyPath;

/**
 * The inverse object mapping used for serialization.
 */
+ (RKObjectMapping *)inverseObjectMapping;

/**
 * The "@type" attribute used for dynamic mapping.
 */
+ (NSString *)objectType;

/**
 * The optional key path where the Resource can be found.
 */
+ (NSString *)objectKeyPath;

@end

