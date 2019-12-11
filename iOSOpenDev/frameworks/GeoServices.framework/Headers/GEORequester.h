/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/XXUnknownSuperclass.h>

@class NSThread;

@interface GEORequester : XXUnknownSuperclass {
	BOOL _disableReplay;	// 87 = 0x57
	NSThread *_thread;	// 88 = 0x58
}
@property(assign) BOOL disableReplay;	// G=0x321d5; S=0x321e5; @synthesize=_disableReplay
+ (void)replayRequests;	// 0x31e8d
+ (void)stopAllRequests;	// 0x31e4d
// declared property setter: - (void)setDisableReplay:(BOOL)replay;	// 0x321e5
// declared property getter: - (BOOL)disableReplay;	// 0x321d5
- (void)start;	// 0x3210d
- (void)_handleResumeOnThread;	// 0x320fd
- (void)_applicationWantsToReplayRequests:(id)replayRequests;	// 0x32089
- (void)_handleSuspendOnThread;	// 0x32049
- (void)_applicationDidStopAllRequests:(id)_application;	// 0x3200d
- (void)dealloc;	// 0x31fb1
- (id)initWithURL:(id)url andDelegate:(id)delegate;	// 0x31ecd
@end