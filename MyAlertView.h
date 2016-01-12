//
//  MyAlertView.h
//  Saojie
//
//  Created by William on 16/1/11.
//  Copyright © 2016年 William. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyAlertView : UIAlertView <UIAlertViewDelegate>

typedef void (^MyAlertBlock)(UIAlertView *alertView, NSInteger buttonIndex);

@property (nonatomic, copy) MyAlertBlock alertBlock;

+ (void)MyAlertWithTitle:(NSString *)title message:(NSString *)message delegate:(id)delegate style:(UIAlertViewStyle)style withMyAlertBlock:(MyAlertBlock)alertBlock cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSString *)otherButtonTitles, ...;

@end
