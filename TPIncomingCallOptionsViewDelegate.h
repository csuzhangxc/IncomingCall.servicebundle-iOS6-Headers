/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */



@protocol TPIncomingCallOptionsViewDelegate
-(void)incomingOptionsViewDeclinedCall:(id)call;
-(void)incomingOptionsViewAcceptedCall:(id)call;
-(void)incomingOptionsView:(id)view selectedItem:(int)item;
-(id)iconOfItemForView:(id)view atIndex:(int)index forPressedState:(BOOL)pressedState;
-(id)nameOfItemForView:(id)view atIndex:(int)index;
-(int)numberOfItemsForView:(id)view;
@optional
-(void)incomingOptionsViewCallWaitingButtonClicked:(id)clicked;
-(void)incomingOptionsView:(id)view revealedPixels:(int)pixels percentage:(float)percentage;
@end
