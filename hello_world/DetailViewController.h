//
//  DetailViewController.h
//  hello_world
//
//  Created by I'm dumb on 1/22/15.
//  Copyright (c) 2015 I'm dumb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
