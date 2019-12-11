/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <MobileBackup/XXUnknownSuperclass.h>

@class NSMutableDictionary, MBSettingsContext;

@interface MBAppManager : XXUnknownSuperclass {
	MBSettingsContext *_settingsContext;	// 4 = 0x4
	NSMutableDictionary *_appsByBundleID;	// 8 = 0x8
}
+ (id)appManager;	// 0x30f5
- (id)initWithSettingsContext:(id)settingsContext;	// 0x309d
- (void)dealloc;	// 0x463d
- (id)allDisabledDomainNames;	// 0x45cd
- (void)removeAllDisabledDomainNames;	// 0x45a1
- (BOOL)isDomainNameEnabled:(id)enabled;	// 0x4569
- (void)setEnabled:(BOOL)enabled forDomainName:(id)domainName;	// 0x44b5
- (id)allRestrictedDomainNames;	// 0x4361
- (BOOL)loadAppsWithSafeHarbors:(BOOL)safeHarbors error:(id *)error;	// 0x41a9
- (id)_userAppsWithError:(id *)error;	// 0x4109
- (id)_safeHarborsWithError:(id *)error;	// 0x4069
- (id)_appsWithPlists:(id)plists error:(id *)error;	// 0x3f15
- (id)allApps;	// 0x3ef5
- (id)appWithBundleID:(id)bundleID;	// 0x3ed1
- (void)removeOldSafeHarbors;	// 0x3bcd
- (id)createSafeHarborForApp:(id)app _register:(BOOL)aRegister error:(id *)error;	// 0x3339
- (BOOL)processRestoredAppsWithBundleIDs:(id)bundleIDs error:(id *)error;	// 0x313d
@end