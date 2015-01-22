//
//  MasterViewController.h
//  hello_world
//
//  Created by I'm dumb on 1/22/15.
//  Copyright (c) 2015 I'm dumb. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
