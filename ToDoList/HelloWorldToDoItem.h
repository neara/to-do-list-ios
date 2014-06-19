//
//  HelloWorldToDoItem.h
//  ToDoList
//
//  Created by Ana Tr on 6/19/14.
//  Copyright (c) 2014 Ana Tr. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HelloWorldToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
