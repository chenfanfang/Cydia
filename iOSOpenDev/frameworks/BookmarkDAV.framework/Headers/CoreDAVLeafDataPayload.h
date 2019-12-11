/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */



@class NSData, NSString, NSArray, NSURL;

#ifndef __CoreDAVLeafDataPayload__
#define __CoreDAVLeafDataPayload__ 1
@protocol CoreDAVLeafDataPayload <NSObject>
@optional
@property(readonly, assign) NSArray *childrenOrder;
@required
@property(readonly, assign) NSString *syncKey;
@property(readonly, assign) NSData *dataPayload;
@property(retain) NSURL *serverID;
// declared property getter: - (id)syncKey;
// declared property getter: - (id)dataPayload;
// declared property setter: - (void)setServerID:(id)anId;
// declared property getter: - (id)serverID;
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;
@optional
// declared property getter: - (id)childrenOrder;
@end
#endif