//
//  MyRect.h
//  MathKit
//
//  Created by Felix Pultar on 10.02.2024.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MyRect : NSObject

@property (nonatomic) int height, width;

- (nonnull id)initWidthHeight:(int)height Width:(int)width;
- (int)area;

@end

NS_ASSUME_NONNULL_END
