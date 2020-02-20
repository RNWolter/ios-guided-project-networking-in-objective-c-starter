//
//  LSIQuakeFetcher.h
//  Quakes-Objc
//
//  Created by Rick Wolter on 2/20/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


// Declare outside NONNull area because the array or error can be null
typedef void(^LSIQuakeFetcherCompletion) (NSArray * _Nullable quakes, NSError * _Nonnull error);




NS_ASSUME_NONNULL_BEGIN

@interface LSIQuakeFetcher : NSObject


- (void)fetchQuakesInTimeInterval:(NSTimeInterval)interval completion:(LSIQuakeFetcherCompletion)completion;








@end

NS_ASSUME_NONNULL_END
