/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>
#import <iTunesStoreUI/SUDeferredUIView.h>

@class NSMutableDictionary;

@interface SUDeferredUIButton : XXUnknownSuperclass <SUDeferredUIView> {
	BOOL _deferredEnabled;	// 139 = 0x8b
	CGRect _deferredFrame;	// 140 = 0x8c
	NSMutableDictionary *_deferredImages;	// 156 = 0x9c
	NSMutableDictionary *_deferredTitles;	// 160 = 0xa0
	BOOL _isDeferringInterfaceUpdates;	// 164 = 0xa4
}
@property(assign, nonatomic, getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;	// G=0x919f5; S=0x91a05; 
@property(assign) CGRect frame;	// G=0x91a59; S=0x91c2d; converted property
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x91ac5; S=0x91bd1; converted property
- (void)_saveTitlesAsDeferred;	// 0x923e9
- (void)_saveImagesAsDeferred;	// 0x9224d
- (void)_saveCurrentStateAsDeferred;	// 0x921cd
- (void)_commitDeferredInterfaceUpdates;	// 0x91f41
- (id)titleForState:(unsigned)state;	// 0x91e8d
- (void)setTitle:(id)title forState:(unsigned)state;	// 0x91d95
- (void)setImage:(id)image forState:(unsigned)state;	// 0x91c9d
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x91c2d
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x91bd1
- (id)imageForState:(unsigned)state;	// 0x91b1d
// converted property getter: - (BOOL)isEnabled;	// 0x91ac5
// converted property getter: - (CGRect)frame;	// 0x91a59
// declared property setter: - (void)setDeferringInterfaceUpdates:(BOOL)updates;	// 0x91a05
// declared property getter: - (BOOL)isDeferringInterfaceUpdates;	// 0x919f5
- (void)dealloc;	// 0x91995
@end