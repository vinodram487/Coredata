//
//  FBCDMasterViewController.h
//  CDWithSSB
//
//  Created by VinodRam on 12/31/12.
//  Copyright (c) 2012 Prokarma. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface FBCDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
