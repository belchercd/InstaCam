//
//  RegisterViewController.h
//  InstaCam
//
//  Created by belchercd on 7/9/19.
//  Copyright © 2019 belchercd. All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@protocol PFUserAuthenticationDelegate;


@interface RegisterViewController : UIViewController
//    @property (nullable, nonatomic, strong) NSString *username;
//    @property (nullable, nonatomic, strong) NSString *email;
//    @property (nullable, nonatomic, strong) NSString *password;
    @property (weak, nonatomic) IBOutlet UITextField *usernameField;
    @property (weak, nonatomic) IBOutlet UITextField *emailField;
    @property (weak, nonatomic) IBOutlet UITextField *passwordField;
- (IBAction)registerButtom:(id)sender;





@end

NS_ASSUME_NONNULL_END
