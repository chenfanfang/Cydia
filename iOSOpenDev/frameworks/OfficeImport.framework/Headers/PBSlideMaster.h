/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PBSlideMaster.h>
#import <OfficeImport/PBSlideBase.h>


__attribute__((visibility("hidden")))
@interface PBSlideMaster : PBSlideBase {
}
+ (void)readMasterDrawables:(id)drawables slideHolder:(id)holder state:(id)state;	// 0xc164d
+ (void)readSlideLayout:(id)layout slideHolder:(id)holder layoutType:(int)type state:(id)state;	// 0x21e0b5
+ (void)flattenBaseMasterStyleType:(int)type masterStyleMap:(id)map;	// 0x21dcd5
+ (void)flattenMasterStyleType:(int)type baseType:(int)type2 masterStyleMap:(id)map;	// 0x21dde5
+ (id)createMasterStyleMap:(id)map state:(id)state;	// 0xbfc39
+ (void)padMissingLevels:(id)levels;	// 0xbffbd
+ (void)setCannedOtherTextListStyle:(id)style;	// 0x21dee5
+ (void)setFont:(id)font fromCharacterProperties:(id)characterProperties;	// 0xc0e75
+ (void)readSlideMasterStyles:(id)styles slideHolder:(id)holder state:(id)state;	// 0xbf879
+ (void)flattenPlaceholderTextStylesIntoLayout:(id)layout layoutType:(int)type masterStyleMap:(id)map;	// 0xc4781
@end

@interface PBSlideMaster (Private)
+ (int)textTypeFor:(int)aFor placeholderType:(int)type;	// 0xc48fd
+ (id)textBodyForPlaceholderType:(int)placeholderType slideLayout:(id)layout;	// 0xc4899
+ (void)flattenTextStyle:(id)style intoTextBox:(id)box;	// 0xc4925
@end