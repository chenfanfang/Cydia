/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PBMasterLayoutMap : XXUnknownSuperclass {
@private
	NSMutableDictionary *mMasterIdToMasterInfoMap;	// 4 = 0x4
	NSMutableDictionary *mTitleIdToMasterIdInfoMap;	// 8 = 0x8
}
+ (id)masterLayoutMap;	// 0xbede9
- (id)init;	// 0xbee2d
- (void)dealloc;	// 0x8ea45
- (void)setMasterInfo:(id)info forMasterId:(long)masterId;	// 0xbf825
- (id)masterInfoForMasterId:(long)masterId;	// 0x90f1
- (id)allMasterIds;	// 0xc46d5
- (void)setMasterId:(long)anId forTitleId:(long)titleId;	// 0xc3291
- (long)masterIdForTitleId:(long)titleId;	// 0xc33dd
- (id)masterInfoForSlideHolder:(id)slideHolder;	// 0x8fcd
- (id)slideLayoutForSlideHolder:(id)slideHolder;	// 0x8fa1
@end