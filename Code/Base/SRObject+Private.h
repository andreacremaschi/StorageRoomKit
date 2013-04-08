//
//  SRObject+Private.h
//  StorageRoomKit
//
//  Created by Sascha Konietzke on 8/9/11.
//  Copyright 2011 Thriventures. All rights reserved.
//

@class RKDynamicMapping;
@interface SRObject (SRPrivate)

+ (BOOL)isCustomMapping;
+ (RKObjectMapping *)concreteMapping;
+ (RKDynamicMapping *)dynamicMapping;
+ (RKObjectMapping *)customMapping;
+ (BOOL)hasInverseObjectMapping;

+ (void)addAttributeWithName:(NSString *)aName toObjectMapping:(RKObjectMapping *)anObjectMapping;
+ (void)addMetaDataWithName:(NSString *)aName toObjectMapping:(RKObjectMapping *)anObjectMapping;
+ (void)addRelationshipWithName:(NSString *)aName relationshipMapping:(RKMapping *)aRelationshipMapping toObjectMapping:(RKObjectMapping *)anObjectMapping;

+ (void)addAttributes:(NSArray *)anArray toObjectMapping:(RKObjectMapping *)anObjectMapping;
+ (void)addMetaData:(NSArray *)anArray toObjectMapping:(RKObjectMapping *)anObjectMapping;
+ (void)addRelationships:(NSDictionary *)aDictionary toObjectMapping:(RKObjectMapping *)anObjectMapping;

@end
