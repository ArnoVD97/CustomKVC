//
//  ViewController.m
//  CustomKVC
//
//  Created by zzy on 2023/7/31.
//

#import "ViewController.h"
#import "NSObject+MyKVC.h"
#import "Person.h"
@interface ViewController ()
@property(nonatomic, strong) NSDictionary *myDic;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self myKVC];
    [self KVCTips];
}
- (void)myKVC {
    Person *son = [[Person alloc] init];
    [son fx_setValue:@"arno" forKey:@"name"];
    NSLog(@"%@", [son fx_valueForKey:@"name"]);
}
- (void)KVCTips {
    Person *son = [[Person alloc] init];
    [son setValue:@18 forKey:@"age"];
//    [son setValue:@"20" forKey:@"age"];
    NSLog(@"%@-%@", [son valueForKey:@"age"], [[son valueForKey:@"age"] class]);

}


@end
