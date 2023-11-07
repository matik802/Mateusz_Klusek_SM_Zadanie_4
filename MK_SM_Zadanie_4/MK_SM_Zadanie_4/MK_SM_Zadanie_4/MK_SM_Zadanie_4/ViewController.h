//
//  ViewController.h
//  MK_SM_Zadanie_4
//
//  Created by student on 31/10/2023.
//  Copyright © 2023 pl.wi.pb. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"

@interface ViewController : UIViewController<SecondViewControllerDelegate>
@property (nonatomic, weak) IBOutlet UILabel *messageLabel;
@property (nonatomic, weak) IBOutlet UITextField *inputField;
@property (strong, nonatomic) IBOutlet UITextField *surenameTextField;
//-(void) prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender(IBAction)enter;
@end

