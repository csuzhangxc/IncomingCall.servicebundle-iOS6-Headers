/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "CLLocationManagerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CLLocationManager, PCPersistentTimer;

@interface MPLocationFinder : XXUnknownSuperclass <CLLocationManagerDelegate> {
	CLLocationManager* _locationManager;
	id _completionHandler;
	PCPersistentTimer* _timer;
}
+(void)findLocationWithBundleID:(id)bundleID completion:(id)completion;
-(void)_timerFired;
-(void)stop;
-(void)start;
-(void)setCompletionHandler:(id)handler;
-(void)dealloc;
-(id)initWithBundleID:(id)bundleID;
@end

