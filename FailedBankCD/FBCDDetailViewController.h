//
//  FBCDDetailViewController.h
//  FailedBankCD
//
//  Created by ManuQiao on 14-7-4.
//  Copyright (c) 2014年 ManuQiao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
