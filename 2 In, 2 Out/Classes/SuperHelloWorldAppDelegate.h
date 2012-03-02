//
//  SuperHelloWorldAppDelegate.h
//  SuperHelloWorld
//
//  Created by Ryan Matyjasik on 2/6/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SuperHelloWorldViewController;

@interface SuperHelloWorldAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    SuperHelloWorldViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet SuperHelloWorldViewController *viewController;

@end

