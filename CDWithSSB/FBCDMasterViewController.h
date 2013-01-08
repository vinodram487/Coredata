//
//  FBCDMasterViewController.h
//  CDWithSSB
//
//  Created by VinodRam on 12/31/12.
//  Copyright (c) 2012 Prokarma. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDMasterViewController : UITableViewController

@property (nonatomic,strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) NSArray *failedBankInfos;
@end
