//
//  CTMediator+ModuleA.h
//  ModuleA_Category
//
//  Created by hechao on 17/3/21.
//  Copyright © 2017年 hc. All rights reserved.
//


#import <CTMediator/CTMediator.h>
#import <UIKit/UIKit.h>

//TODO:这个中间者需要剥离出去，解除业务件的依赖，是独立的部分。之前考虑业务的版本和中间者的版本保持一致才能保证业务的调用正确，但是这样就没有解除业务模块之前的依赖
@interface CTMediator (ModuleA)

- (UIViewController *)moduleA_aViewController;

@end
