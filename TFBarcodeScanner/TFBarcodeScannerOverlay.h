//
//  TFBarcodeScannerOverlay
//
//  Originally created by R0CKSTAR on 12/19/13.
//  Copyright (c) 2013 P.D.Q. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TFBarcodeScannerOverlay : UIView

@property(nonatomic, strong) NSArray *cornersArray;

@property(nonatomic, strong) NSArray *borderRectArray;

@property(nonatomic, copy) UIColor *strokeColor; // Default is green

@property(nonatomic) float strokeWidth; // Default is 2.f

@end
