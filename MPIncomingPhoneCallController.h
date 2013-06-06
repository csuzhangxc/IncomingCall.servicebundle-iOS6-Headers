/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "IncomingCall-Structs.h"
#import "MPIncomingCallController.h"
#import "TPBottomLockBarDelegate.h"

@class NSNumber, NSString, UIView, TPBottomLockBar;

@interface MPIncomingPhoneCallController : MPIncomingCallController <TPBottomLockBarDelegate> {
	BOOL _causedSuspension;
	BOOL _answered;
	BOOL _pendingRing;
	BOOL _isVCCallWaitingRinging;
	BOOL _wasToldToStopRinging;
	BOOL _observingRingerChanged;
	BOOL _callAddressIsKnown;
	CTCallRef _incomingCall;
	NSNumber* _incomingCallerABUID;
	NSString* _callerName;
	NSString* _incomingCallNumber;
	NSString* _incomingCallerLabel;
	NSNumber* _callerNameBreakPoint;
	UIView* _backgroundView;
}
@property(retain, nonatomic) NSNumber* callerNameBreakPoint;
@property(retain, nonatomic) NSString* incomingCallerLabel;
@property(retain, nonatomic) NSString* incomingCallNumber;
@property(retain, nonatomic) NSString* callerName;
@property(retain, nonatomic) NSNumber* incomingCallerABUID;
@property(readonly, assign, nonatomic) TPBottomLockBar* bottomLockBar;
-(id)urlForIncomingCallNumber:(id)incomingCallNumber;
-(id)reminderTextFormat;
-(void)handleOptionsSheetIgnoreWithDismiss:(BOOL)dismiss;
-(void)handleOptionsSheetAnswer;
-(id)incomingCallABUID;
-(id)incomingCallName;
-(id)incomingCallNumberQualifiedForMessages;
-(id)newBottomBar;
-(id)newTopBar;
-(void)ringerChanged;
-(void)dismiss:(BOOL)dismiss;
-(void)dismiss;
-(void)lockBarUnlocked:(id)unlocked;
-(void)stopRingingOrVibrating;
-(void)ringOrVibrate;
-(void)_ringIfNecessary;
-(void)finishedAnimatingIn;
-(void)ignore;
-(void)ignoreWithDismiss:(BOOL)dismiss;
-(void)answer:(id)answer;
-(id)copyWithZone:(NSZone*)zone;
-(void)answerCall:(CTCallRef)call;
-(void)_handleCallerIDEvent:(CTCallRef)event;
-(BOOL)isShowingWallpaper;
-(void)_handleCallEvent:(CTCallRef)event;
-(BOOL)deactivateAnimated;
-(int)deactivationStyle;
-(id)additionalURLParameter;
-(void)handleAutoLock;
-(BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleLockButtonPressed;
-(void)dealloc;
-(void)updateImageFromPerson:(void*)person;
-(void)answerAndRelease:(id)release;
-(id)backgroundView;
-(id)defaultBackgroundView;
-(void)updateLCDWithName:(id)name label:(id)label breakPoint:(id)point;
-(void)viewDidLoad;
-(id)initWithCall:(CTCallRef)call;
@end
