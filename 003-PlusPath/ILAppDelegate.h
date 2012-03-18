//
//  ILAppDelegate.h
//  003-PlusPath
//
//  Created by jeremy Templier on 13/03/12.
//  Copyright (c) 2012 particulier. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MainViewController;

@interface ILAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) MainViewController* viewController;
@end
