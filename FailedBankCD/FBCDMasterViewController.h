//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by ManuQiao on 14-7-4.
//  Copyright (c) 2014年 ManuQiao. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface FBCDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
