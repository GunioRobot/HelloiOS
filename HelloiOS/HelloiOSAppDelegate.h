//
//  HelloiOSAppDelegate.h
//  HelloiOS
//
//  Created by Simone Kalb on 14/06/11.
//  Copyright 2011 CRS4. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloiOSViewController;

@interface HelloiOSAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet HelloiOSViewController *viewController;

@end
