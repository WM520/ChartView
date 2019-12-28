//
//  ZHPickView.h
//  ZHpickView
//
//  Created by liudianling on 14-11-18.
//  Copyright (c) 2014年 赵恒志. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ZHPickView;

@protocol ZHPickViewDelegate <NSObject>

@optional
-(void)toobarDonBtnHaveClick:(ZHPickView *)pickView resultString:(NSString *)resultString;
-(void)cancelPickView:(ZHPickView *)pickView;

@end

@interface ZHPickView : UIView

@property(nonatomic,strong)UIDatePicker *datePicker;

@property(nonatomic,weak) id<ZHPickViewDelegate> delegate;


-(instancetype)initPickviewWithPlistName:(NSString *)plistName isHaveNavControler:(BOOL)isHaveNavControler;

-(instancetype)initPickviewWithArray:(NSArray *)array isHaveNavControler:(BOOL)isHaveNavControler;


-(instancetype)initDatePickWithDate:(NSDate *)defaulDate datePickerMode:(UIDatePickerMode)datePickerMode isHaveNavControler:(BOOL)isHaveNavControler;

-(void)remove;

-(void)show;

-(void)setPickViewColer:(UIColor *)color;

-(void)setTintColor:(UIColor *)color;

-(void)setToolbarTintColor:(UIColor *)color;

@end





