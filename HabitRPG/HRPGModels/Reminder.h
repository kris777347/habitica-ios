//
//  Reminder.h
//  Habitica
//
//  Created by Phillip Thelen on 23/12/15.
//  Copyright © 2017 HabitRPG Inc. All rights reserved.
//

#import <CoreData/CoreData.h>
#import <Foundation/Foundation.h>

@class Task;

NS_ASSUME_NONNULL_BEGIN

@interface Reminder : NSManagedObject

- (void)scheduleReminders;
- (void)scheduleForDay:(NSDate *)day;
- (void)removeTodaysNotifications;
- (void)removeAllNotifications;

@end

NS_ASSUME_NONNULL_END

#import "Reminder+CoreDataProperties.h"
