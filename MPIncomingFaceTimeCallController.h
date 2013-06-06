/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "IncomingCall-Structs.h"
#import "ABPredicateDelegate.h"
#import "MPIncomingCallController.h"

@class CNFDisplayController, IMHandle, NSDictionary, NSString, UIView, TPBottomLockBar, NSURL;

@interface MPIncomingFaceTimeCallController : MPIncomingCallController <ABPredicateDelegate> {
	NSURL* _inviter;
	CNFDisplayController* _displayController;
	NSString* _conferenceID;
	IMHandle* _handle;
	NSString* _contactDisplayName;
	NSString* _ringtonePath;
	NSDictionary* _vibrationPattern;
	UIView* _backgroundView;
	BOOL _answered;
	unsigned _isAccepting;
	BOOL _isStandardRinging;
	BOOL _isCallWaitingRinging;
	BOOL _pendingRing;
	BOOL _wasToldToStopRinging;
	BOOL _animatingOutWithZoom;
}
@property(readonly, assign, nonatomic) TPBottomLockBar* bottomLockBar;
@property(retain, nonatomic) UIView* backgroundView;
@property(retain, nonatomic) NSURL* inviter;
@property(retain, nonatomic) NSString* contactDisplayName;
@property(readonly, assign, nonatomic) CNFDisplayController* displayController;
+(id)optionsDeclineIconPressed;
+(id)optionsDeclineIcon;
-(void)didShowReminderOptions;
-(id)urlForIncomingCallNumber:(id)incomingCallNumber;
-(id)reminderTextFormat;
-(void)handleOptionsSheetIgnoreWithDismiss:(BOOL)dismiss;
-(void)handleOptionsSheetAnswer;
-(id)incomingCallABUID;
-(id)incomingCallName;
-(id)incomingCallNumberQualifiedForMessages;
-(id)incomingCallNumber;
-(BOOL)predicateShouldContinue:(id)predicate afterFindingRecord:(void*)record;
-(BOOL)predicateShouldContinue:(id)predicate;
-(id)newBottomBar;
-(BOOL)_deviceSupportsIncomingFacetimeOptions;
-(id)_newStandardBottomBar;
-(id)_newIPadBottomBar;
-(id)newTopBar;
-(id)copyWithZone:(NSZone*)zone;
-(void)_updateDisplayControllerForOrientation:(int)orientation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)stopRingingOrVibrating;
-(void)ringOrVibrate;
-(void)updateRingtone;
-(BOOL)shouldRingOrVibrate;
-(void)ringerChanged;
-(void)_ringIfNecessary;
-(BOOL)invitationIsFaceTimeUpgrade;
-(void)inviterCanceledFaceTime;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(BOOL)_shouldAutoAnswerFaceTime;
-(BOOL)shouldZoomOutBackgroundView;
-(void)updateImageFromPerson:(void*)person;
-(void)updateTopBarWithName:(id)name image:(id)image;
-(void)animateViewOut;
-(float)_customZoomOutDuration;
-(float)_customZoomOutDelay;
-(float)_animationDelayForOthersActivation;
-(void)_viewAnimatedOut;
-(void)_faceTimeStateChanged:(id)changed;
-(BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(void)handleAutoLock;
-(BOOL)handleLockButtonPressed;
-(void)lockBarUnlocked:(id)unlocked;
-(void)decline;
-(void)accept;
-(void)autoAccept;
-(void)showBackgroundViewAnimated:(BOOL)animated;
-(id)additionalURLQueryParameters;
-(id)defaultBackgroundView;
-(void)requestDeactivation;
-(int)deactivationStyle;
-(void)dealloc;
-(id)initWithHandle:(id)handle conferenceID:(id)anId;
@end

