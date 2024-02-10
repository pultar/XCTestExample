//
//  main.m
//  XCTestExample
//
//  Created by Felix Pultar on 10.02.2024.
//

#import "MyRect.h"

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        MyRect *rect = [[MyRect alloc] initWidthHeight:20 Width:30];
        NSLog(@"%@", rect);
    }
    return 0;
}
