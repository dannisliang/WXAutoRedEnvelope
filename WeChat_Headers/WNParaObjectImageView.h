//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNParaObjectBaseView.h"

#import "FavFullScreenImageViewControllerDelegate-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "WNParaImageViewDelegate-Protocol.h"

@class FavFullScreenImageViewController, MMWebImageView, NSString, WNParaImageView;

@interface WNParaObjectImageView : WNParaObjectBaseView <MMWebImageViewDelegate, FavFullScreenImageViewControllerDelegate, WNParaImageViewDelegate>
{
    WNParaImageView *m_imageView;
    MMWebImageView *m_gifView;
    NSString *_localImagePath;
    FavFullScreenImageViewController *_favImageVC;
}

+ (double)getHightOfParaInfo:(id)arg1;
- (void).cxx_destruct;
- (void)onFavFullScreenEditImageAt:(unsigned int)arg1 withImage:(id)arg2;
- (void)onLoadComplete:(id)arg1 SourcePath:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)onLongPressObject;
- (void)onEdit:(id)arg1;
- (void)openImageWithEdit:(_Bool)arg1;
- (void)onClickObject;
- (void)layoutView;
- (void)clearImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
