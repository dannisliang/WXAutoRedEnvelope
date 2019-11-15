//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class GameCenterGameBriefInfo, NSString;

@interface GameLibraryAdItem : MMObject <PBCoding>
{
    NSString *adUrl;
    NSString *webUrl;
    GameCenterGameBriefInfo *appItem;
}

+ (void)initialize;
@property(retain, nonatomic) GameCenterGameBriefInfo *appItem; // @synthesize appItem;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl;
@property(retain, nonatomic) NSString *adUrl; // @synthesize adUrl;
- (void).cxx_destruct;
- (void)parseFromResp:(id)arg1;
- (void)dealloc;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
