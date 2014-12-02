//
//  MyAccountViewController.h
//  tenhoDesconto
//
//  Created by Joao Paulo Galvao Alves on 4/15/14.
//  Copyright (c) 2014 tenhoDesconto. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyAccountViewController : UIViewController<UITextFieldDelegate, UIGestureRecognizerDelegate>

@property (weak, nonatomic) IBOutlet UITextField *accountNameTextField;

@property (weak, nonatomic) IBOutlet UITextField *accountEmailTextField;

@property (weak, nonatomic) IBOutlet UITextField *accountPsswdTextField;

@property (weak, nonatomic) IBOutlet UITextField *accountBdayTextField;

@property (weak, nonatomic) IBOutlet UITextField *accountGenderTextField;

@property (weak, nonatomic) IBOutlet UITextField *accountCityTextField;

@property (weak, nonatomic) IBOutlet UITextField *accountStateTextField;

@property (weak, nonatomic) IBOutlet UITextField *accountCountryTextField;

@property (weak, nonatomic) IBOutlet UIScrollView *accountScroll;


@property (nonatomic, strong) UITapGestureRecognizer *accountGestureRecognizer;

- (IBAction)performLogout:(id)sender;
- (IBAction)performEditing:(id)sender;

@end
