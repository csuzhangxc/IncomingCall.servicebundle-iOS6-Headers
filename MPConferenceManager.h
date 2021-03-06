/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "CNFSoundPlayerDelegateProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CNFConferenceController, CNFAudioPlayer;
@protocol SBUIUserAgent;

@interface MPConferenceManager : XXUnknownSuperclass <CNFSoundPlayerDelegateProtocol> {
	CNFConferenceController* _conferenceController;
	unsigned _chatState;
	id<SBUIUserAgent> _sbUserAgent;
	CNFAudioPlayer* _player;
}
@property(readonly, assign) unsigned chatState;
@property(readonly, assign) CNFConferenceController* conferenceController;
+(id)sharedInstance;
-(void)stopAudioPlayer;
-(void)audioPlayerDidStopPlaying:(id)audioPlayer;
-(void)playSound:(int)sound numOfLoops:(int)loops pauseDuration:(float)duration;
-(void)_faceTimeStateChanged:(id)changed;
-(void)_faceTimeCapabilityChanged:(id)changed;
-(void)_handleInvitation:(id)invitation;
-(void)endFaceTime;
-(BOOL)inFaceTime;
-(BOOL)faceTimeInvitationExists;
-(void)dealloc;
-(id)init;
@end

