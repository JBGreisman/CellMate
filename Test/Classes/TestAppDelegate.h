//
//  TestAppDelegate.h
//  Test
//
//  Created by Hana Snow on 4/17/14.
//  Copyright 2014 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TestViewController;

@interface TestAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    TestViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet TestViewController *viewController;

@end

