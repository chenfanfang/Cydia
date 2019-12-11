/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Search/SPContentIndexer.h>

@class NSString, NSArray, CPSearchMatcher;

@interface SPTopHitIndexer : SPContentIndexer {
	CPSearchMatcher *_matcher;	// 40 = 0x28
	NSString *_queryString;	// 44 = 0x2c
	NSArray *_searchDomains;	// 48 = 0x30
}
+ (void)preheat;	// 0xb115
+ (id)indexerForTopHits;	// 0xb06d
- (void)dealloc;	// 0xb0b5
- (id)init;	// 0xb029
- (BOOL)nextSearchResults:(id *)results;	// 0xaf7d
- (void)beginSearch:(id)search domains:(id)domains;	// 0xae9d
- (id)_fetchAndCleanQueryResults:(id)results;	// 0xaa6d
- (void)setTopHit:(id)hit domain:(unsigned)domain queryString:(id)string;	// 0xa929
- (void)_setTopHitWithApplication:(id)application queryString:(id)string;	// 0xa88d
- (void)_setTopHitWithLocalRecord:(void *)localRecord content:(id)content stringIdentifier:(id)identifier domain:(unsigned)domain query:(id)query;	// 0xa4f5
- (float)_calculateMovingAverageWithLastTime:(double)lastTime andLastAverage:(float)average;	// 0xa485
- (void)removeIdentifier:(id)identifier;	// 0xa409
- (void)setIdentifier:(id)identifier forRecordDictionary:(id)recordDictionary;	// 0xa38d
- (void *)_copyRecordForApplication:(id)application;	// 0xa209
- (void *)_copyRecordForExternalID:(id)externalID displayIdentifier:(id)identifier category:(id)category;	// 0x9fe5
- (BOOL)_openOrCreateStore;	// 0x9eed
- (id)_getDisplayIdentifierForDomain:(unsigned)domain;	// 0x9ea1
- (void *)_copyExternalRecordForIdentifier:(id)identifier domain:(unsigned)domain;	// 0x9e29
@end