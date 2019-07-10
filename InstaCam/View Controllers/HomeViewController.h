//
//  HomeViewController.h
//  InstaCam
//
//  Created by belchercd on 7/9/19.
//  Copyright © 2019 belchercd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HomeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIImagePickerControllerDelegate, UINavigationControllerDelegate>

- (IBAction)logoutButton:(id)sender;
- (IBAction)cameraButton:(id)sender;

@end

NS_ASSUME_NONNULL_END
