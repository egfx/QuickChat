//
//  FriendsViewController.h
//  Ribbit
//
//  Created by Taylor on 11/23/13.
//  Copyright (c) 2013 Taylor Beck. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import "EditFriendsViewController.h"

@interface FriendsViewController : UITableViewController

@property (nonatomic, strong) PFRelation *friendsRelation;
@property (nonatomic, strong) NSArray *friends;

@end
