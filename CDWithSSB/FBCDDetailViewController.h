//
//  FBCDDetailViewController.h
//  CDWithSSB
//
//  Created by VinodRam on 12/31/12.
//  Copyright (c) 2012 Prokarma. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
