/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>
#import <GMM/GMM-Structs.h>
#import <GMM/GMMGeometry.h>

@class GMMMapPoint, GMMPixelPoint, GMMPolygon, GMMPolyLine, GMMEfficientMapPoint;

__attribute__((visibility("hidden")))
@interface GMMGeometry : XXUnknownSuperclass {
	int _type;	// 4 = 0x4
	GMMMapPoint *_mapPoint;	// 8 = 0x8
	GMMPolyLine *_polyLine;	// 12 = 0xc
	GMMPolygon *_polygon;	// 16 = 0x10
	GMMPixelPoint *_pixelPoint;	// 20 = 0x14
	GMMEfficientMapPoint *_efficientMapPoint;	// 24 = 0x18
}
@property(retain, nonatomic) GMMEfficientMapPoint *efficientMapPoint;	// G=0x13d39; S=0x13d49; @synthesize=_efficientMapPoint
@property(readonly, assign, nonatomic) BOOL hasEfficientMapPoint;	// G=0x13491; 
@property(retain, nonatomic) GMMPixelPoint *pixelPoint;	// G=0x13d05; S=0x13d15; @synthesize=_pixelPoint
@property(readonly, assign, nonatomic) BOOL hasPixelPoint;	// G=0x13479; 
@property(retain, nonatomic) GMMPolygon *polygon;	// G=0x13cd1; S=0x13ce1; @synthesize=_polygon
@property(readonly, assign, nonatomic) BOOL hasPolygon;	// G=0x13461; 
@property(retain, nonatomic) GMMPolyLine *polyLine;	// G=0x13c9d; S=0x13cad; @synthesize=_polyLine
@property(readonly, assign, nonatomic) BOOL hasPolyLine;	// G=0x13449; 
@property(retain, nonatomic) GMMMapPoint *mapPoint;	// G=0x13c69; S=0x13c79; @synthesize=_mapPoint
@property(readonly, assign, nonatomic) BOOL hasMapPoint;	// G=0x13431; 
@property(assign, nonatomic) int type;	// G=0x13c49; S=0x13c59; @synthesize=_type
// declared property setter: - (void)setEfficientMapPoint:(id)point;	// 0x13d49
// declared property getter: - (id)efficientMapPoint;	// 0x13d39
// declared property setter: - (void)setPixelPoint:(id)point;	// 0x13d15
// declared property getter: - (id)pixelPoint;	// 0x13d05
// declared property setter: - (void)setPolygon:(id)polygon;	// 0x13ce1
// declared property getter: - (id)polygon;	// 0x13cd1
// declared property setter: - (void)setPolyLine:(id)line;	// 0x13cad
// declared property getter: - (id)polyLine;	// 0x13c9d
// declared property setter: - (void)setMapPoint:(id)point;	// 0x13c79
// declared property getter: - (id)mapPoint;	// 0x13c69
// declared property setter: - (void)setType:(int)type;	// 0x13c59
// declared property getter: - (int)type;	// 0x13c49
- (void)writeTo:(id)to;	// 0x139c1
- (BOOL)readFrom:(id)from;	// 0x13635
- (id)dictionaryRepresentation;	// 0x13519
- (id)description;	// 0x134a9
// declared property getter: - (BOOL)hasEfficientMapPoint;	// 0x13491
// declared property getter: - (BOOL)hasPixelPoint;	// 0x13479
// declared property getter: - (BOOL)hasPolygon;	// 0x13461
// declared property getter: - (BOOL)hasPolyLine;	// 0x13449
// declared property getter: - (BOOL)hasMapPoint;	// 0x13431
- (void)dealloc;	// 0x1339d
@end

@interface GMMGeometry (GMMProtoExtras)
- (id)pixelPointGeometry;	// 0xb335
- (id)description;	// 0xb1a5
@end

@interface GMMGeometry (GMMGEODirectionsProvider)
- (id)initWithCoordinate:(XXStruct_UNJ7RC)coordinate;	// 0x3da01
@end