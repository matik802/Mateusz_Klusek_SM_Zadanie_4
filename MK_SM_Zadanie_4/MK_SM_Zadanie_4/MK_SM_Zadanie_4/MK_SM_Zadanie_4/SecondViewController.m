//
//  SecondViewController.m
//  MK_SM_Zadanie_4
//
//  Created by student on 31/10/2023.
//  Copyright © 2023 pl.wi.pb. All rights reserved.
//

#import "SecondViewController.h"

@interface SecondViewController ()

@end

@implementation SecondViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}
- (IBAction)buttonControl:(id)sender {
    NSString *itemToPassBack = self.modifiedSurenameInputField.text; //ctrl + drag text field
    [self.delegate addItemViewController:self didFinishEnteringItem:itemToPassBack];
    [self dismissViewControllerAnimated:YES completion:nil];}


/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
