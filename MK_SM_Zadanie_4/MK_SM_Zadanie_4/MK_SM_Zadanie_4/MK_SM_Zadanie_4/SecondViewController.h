//
//  SecondViewController.h
//  MK_SM_Zadanie_4
//
//  Created by student on 31/10/2023.
//  Copyright © 2023 pl.wi.pb. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class SecondViewController;

@protocol SecondViewControllerDelegate <NSObject>
- (void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString *) item;
@end
@interface SecondViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *modifiedSurenameInputField;
@property (nonatomic, weak) id <SecondViewControllerDelegate> delegate;
@property (nonatomic, strong) NSString * surename;
@end

NS_ASSUME_NONNULL_END
