//
// Created by Andrea Bizzotto on 25/03/2014.
// Copyright (c) 2014 musevisions. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/*
 Class to automatically handle the scrolling of content on a UIScrollView so that any selected
 input fields are always visible on screen
 */

@interface MVTextInputsScroller : NSObject

- (id)initWithScrollView:(UIScrollView *)scrollView;
- (void)unregister;

- (UIView*)monitoringScrollView;

@end