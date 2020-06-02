//
//  TwilioVoice.h
//  TwilioVoice
//

#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

@interface RNTwilioVoice : RCTEventEmitter <RCTBridgeModule>
- (void)initCallKit:(NSDictionary *)params;
- (void)initPushRegistry;
@end
