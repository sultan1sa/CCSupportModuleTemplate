/*
 * This header is generated by classdump-dyld 1.0
 * on Thursday, January 25, 2018 at 11:29:33 PM Eastern European Standard Time
 * Operating System: Version 11.1.2 (Build 15B202)
 * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
 */

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUICASpringAnimationParameters.h>

@interface CCUIMutableCASpringAnimationParameters : CCUICASpringAnimationParameters

@property (assign,nonatomic) CGFloat mass;
@property (assign,nonatomic) CGFloat stiffness;
@property (assign,nonatomic) CGFloat damping;
@property (nonatomic,copy) id<CCUIAnimationTimingFunctionDescription> timingFunction;
- (void)setStiffness:(CGFloat)arg1;
- (void)setDamping:(CGFloat)arg1;
- (void)setMass:(CGFloat)arg1;
- (id)copyWithZone:(NSZone*)arg1;
- (void)setTimingFunction:(id<CCUIAnimationTimingFunctionDescription>)arg1;
@end
