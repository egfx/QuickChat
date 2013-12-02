//
//  LoginViewController.h
//  Ribbit
//
//  Created by Taylor on 11/21/13.
//  Copyright (c) 2013 Taylor Beck. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;

- (IBAction)login:(id)sender;



@end
