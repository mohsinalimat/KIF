//  Licensed to Square, Inc. under one or more contributor license agreements.
//  See the LICENSE file distributed with this work for the terms under
//  which Square, Inc. licenses this file to you.

#import <KIF/KIF.h>


@interface KIFUITestActor (BasicCalculator)

- (void)enterValue1:(NSString *)value;
- (void)enterValue2:(NSString *)value;
- (void)setOperation:(NSString *)operation;
- (void)enterValue1:(NSString *)value1 value2:(NSString *)value2 operation:(NSString *)operation;
- (void)waitForResult:(NSString *)result;

@end
