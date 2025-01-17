//
//  MTRGNativeBannerAdLoader.h
//  myTargetSDK 5.14.1
//
//  Created by Andrey Seredkin on 03/03/2020.
//  Copyright © 2020 Mail.ru Group. All rights reserved.
//

#import <MyTargetSDK/MTRGNativeBannerAd.h>

NS_ASSUME_NONNULL_BEGIN

/**
 @discussion Class-loader for native banner ad.
 */
@interface MTRGNativeBannerAdLoader : MTRGBaseAd

/**
 @discussion Cache policy for the native ad.
 */
@property(nonatomic) MTRGCachePolicy cachePolicy;

/**
 @discussion Placement for ad choices.
 */
@property(nonatomic) MTRGAdChoicesPlacement adChoicesPlacement;

/**
 @discussion Static constructor. Creates instance of the class with count and slot identifier.
 
 @param count Count to load
 @param slotId Slot identifier.
 
 @return Instance of the class
 */
+ (instancetype)loaderForCount:(NSUInteger)count slotId:(NSUInteger)slotId;

- (instancetype)init NS_UNAVAILABLE;

/**
 @discussion Method loads ad.
 
 @param completionBlock Block which will be called on load.
 */
- (void)loadWithCompletionBlock:(void (^)(NSArray<MTRGNativeBannerAd *> *nativeBannerAds))completionBlock;

@end

NS_ASSUME_NONNULL_END
