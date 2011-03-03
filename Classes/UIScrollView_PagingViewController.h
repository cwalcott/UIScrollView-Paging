//
//  UIScrollView_PagingViewController.h
//  UIScrollView-Paging
//
//  Created by Costa Walcott on 3/2/11.
//  Copyright 2011 Draconis Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView_PagingViewController : UIViewController <UIScrollViewDelegate> {
	UIScrollView* scrollView;
	UIPageControl* pageControl;
	
	BOOL pageControlBeingUsed;
}

@property (nonatomic, retain) IBOutlet UIScrollView* scrollView;
@property (nonatomic, retain) IBOutlet UIPageControl* pageControl;

- (IBAction)changePage;

@end
