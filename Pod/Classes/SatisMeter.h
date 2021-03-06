//
//  SatisMeter.h
//  SatisMeter
//
//  Created by Esat Pllana on 2/24/16.
//  Copyright © 2016 SatisMeter (satismeter.com). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@protocol SatisMeterCoreDelegate <NSObject>
@optional
/// delegate method when the view is shown
-(void)SatisMeterViewDidShow;

/// delegate method when the view is dismissed
-(void)SatisMeterViewDidDismiss;
@end

@interface SatisMeter : NSObject

+(instancetype) sharedInstance;
@property (nonatomic,weak) id delegate;

@property BOOL shouldShowSatisMeterOnActive;
@property BOOL isShown;



/// identify user with user_id, writeKey and traits dictionary if applicable
-(void)identifyUserWithUserId:(NSString*)Id writeKey:(NSString*)writeKey andTraitsDictionary:(NSDictionary*)traits;
/// identify user with user_id, writeKey, traits dictionary if applicable and custom server url
-(void)identifyUserWithUserId:(NSString*)Id writeKey:(NSString*)writeKey andTraitsDictionary:(NSDictionary*)traits andServerUrl:(NSString*)serverUrl;


/// show satismeter view
-(void) showSatisMeterView;

@end