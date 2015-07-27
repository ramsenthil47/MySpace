//
//  ViewController.h
//  My_Space
//
//  Created by Senthilram Appadurai on 7/24/15.
//  Copyright (c) 2015 Senthilram Appadurai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)signUpButtonPress:(id)sender;
- (IBAction)signInButtonPress:(id)sender;
- (IBAction)forgotPasswordButtonPress:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *usernameTextField;
@property (weak, nonatomic) IBOutlet UITextField *passwordTextField;

@end

