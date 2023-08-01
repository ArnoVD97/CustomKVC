//
//  NSObject+MyKVC.h
//  CustomKVC
//
//  Created by zzy on 2023/7/31.
//

#import <Foundation/Foundation.h>
#import "useMethod.h"
NS_ASSUME_NONNULL_BEGIN

@interface NSObject (MyKVC)
- (void)fx_setValue:(nullable id)value forKey:(NSString *)key;
- (nullable id)fx_valueForKey:(NSString *)key;


- (BOOL)fx_performSelectorWithMethodName:(NSString *)methodName value:(id)value key:(id)key;
- (BOOL)fx_performSelectorWithMethodName:(NSString *)methodName value:(id)value;
- (NSMutableArray *)getIvarListName;


@end

NS_ASSUME_NONNULL_END
