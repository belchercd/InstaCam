//
//  LoginViewController.h
//  InstaCam
//
//  Created by belchercd on 7/8/19.
//  Copyright © 2019 belchercd. All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface LoginViewController : UIViewController
- (IBAction)loginButton:(id)sender;
- (IBAction)signupButton:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;



@end

NS_ASSUME_NONNULL_END
