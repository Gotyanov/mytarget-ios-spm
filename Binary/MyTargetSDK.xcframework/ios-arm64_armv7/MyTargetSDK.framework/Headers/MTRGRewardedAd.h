//
//  MTRGRewardedAd.h
//  myTargetSDK 5.14.1
//
//  Created by Andrey Seredkin on 05.08.2020.
//  Copyright © 2020 Mail.ru Group. All rights reserved.
//

#import <MyTargetSDK/MTRGBaseInterstitialAd.h>

@class MTRGRewardedAd;
@class MTRGReward;

NS_ASSUME_NONNULL_BEGIN

/**
 @discussion Delegate for rewarded ad.
 */
@protocol MTRGRewardedAdDelegate <NSObject>

/**
 @discussion Calls when rewarded ad is loaded. (Required)
 
 @param rewardedAd Current ad.
 */
- (void)onLoadWithRewardedAd:(MTRGRewardedAd *)rewardedAd;

/**
 @discussion Call when there is no an ad. (Required)
 
 @param reason The reason why there is no an ad.
 @param rewardedAd Current ad.
 */
- (void)onNoAdWithReason:(NSString *)reason rewardedAd:(MTRGRewardedAd *)rewardedAd;

/**
 @discussion Calls when user gets the reward.
 
 @param reward Received reward.
 @param rewardedAd Current ad.
 */
- (void)onReward:(MTRGReward *)reward rewardedAd:(MTRGRewardedAd *)rewardedAd;

@optional

/**
 @discussion Calls on click by the ad.
 
 @param rewardedAd Current ad.
 */
- (void)onClickWithRewardedAd:(MTRGRewardedAd *)rewardedAd;

/**
 @discussion Calls on close the ad.
 
 @param rewardedAd Current ad.
 */
- (void)onCloseWithRewardedAd:(MTRGRewardedAd *)rewardedAd;

/**
 @discussion Calls when video ad was displayed.
 
 @param rewardedAd Current ad.
 */
- (void)onDisplayWithRewardedAd:(MTRGRewardedAd *)rewardedAd;

/**
 @discussion Calls on leave application while ad is showing.
 
 @param rewardedAd Current ad.
 */
- (void)onLeaveApplicationWithRewardedAd:(MTRGRewardedAd *)rewardedAd;

@end

/**
 @discussion Class for rewarded ad.
 */
@interface MTRGRewardedAd : MTRGBaseInterstitialAd

/**
 @discussion Delegate for the ad. Must conforms MTRGRewardedAdDelegate protocol.
 */
@property(nonatomic, weak, nullable) id <MTRGRewardedAdDelegate> delegate;

/**
 @discussion Static constructor. Creates instance with slot identifier.
 
 @param slotId Slot identifier.
 */
+ (instancetype)rewardedAdWithSlotId:(NSUInteger)slotId;

/**
 @discussion Creates instance with slot identifier.
 
 @param slotId Slot identifier.
 */
- (instancetype)initWithSlotId:(NSUInteger)slotId;

@end

NS_ASSUME_NONNULL_END
