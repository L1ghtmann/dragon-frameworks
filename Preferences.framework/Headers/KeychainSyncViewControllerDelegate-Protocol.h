//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, UIViewController;
@protocol PSController;

@protocol KeychainSyncViewControllerDelegate <NSObject>
- (void)keychainSyncController:(UIViewController<PSController> *)arg1 didFinishWithResult:(id)arg2 error:(NSError *)arg3;

@optional
- (void)keychainSyncControllerCancel:(UIViewController<PSController> *)arg1;
@end
