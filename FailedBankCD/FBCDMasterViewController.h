//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by ManuQiao on 14-7-4.
//  Copyright (c) 2014年 ManuQiao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDMasterViewController : UITableViewController

@property (nonatomic, strong)NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) NSArray *failedBankInfos;

@end
