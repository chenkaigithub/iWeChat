//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol LocalAreaPeerServerDelegate <NSObject>

@optional
- (void)onPeerDisconnect;
- (void)onPeerConnected;
- (void)onPeerConnecting;
- (void)onPeerReciveData:(NSData *)arg1;
@end
