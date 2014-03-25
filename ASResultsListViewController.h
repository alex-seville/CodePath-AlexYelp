//
//  ASResultsListViewController.h
//  YelpSearch
//
//  Created by Alexander Seville on 3/20/14.
//  Copyright (c) 2014 Alexander Seville. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ASFiltersViewController.h"

@interface ASResultsListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, ASFiltersViewControllerDelegate>

@end
