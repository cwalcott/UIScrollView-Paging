//
//  UIScrollView_PagingAppDelegate.h
//  UIScrollView-Paging
//
//  Created by Costa Walcott on 3/2/11.
//  Copyright 2011 Draconis Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UIScrollView_PagingViewController;

@interface UIScrollView_PagingAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    UIScrollView_PagingViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIScrollView_PagingViewController *viewController;

@end

