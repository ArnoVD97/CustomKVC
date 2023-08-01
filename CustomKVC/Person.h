//
//  Person.h
//  CustomKVC
//
//  Created by zzy on 2023/8/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) NSInteger age;
@property (nonatomic, copy) NSArray  *family;
@end

NS_ASSUME_NONNULL_END
