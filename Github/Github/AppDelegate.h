//
//  AppDelegate.h
//  Github
//
//  Created by Booviga Thekshnamoorthy on 02/05/17.
//  Copyright © 2017 booviga. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

