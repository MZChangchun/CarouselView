//
//  ViewController.m
//  CarouselView
//
//  Created by abner on 2016/11/16.
//  Copyright © 2016年 abner. All rights reserved.
//

#import "ViewController.h"

#import "RCCarouselView.h"

#define Width [UIScreen mainScreen].bounds.size.width
#define Height [UIScreen mainScreen].bounds.size.height

@interface ViewController ()<CollectionViewDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    
    RCCarouselView * carouselView = [[RCCarouselView alloc]initWithFrame:CGRectMake(0, 100, Width, 200)];
    carouselView.itemsDataArray = @[@"findCar_topBanner01",
                                    @"findCar_topBanner02",
                                    @"findCar_topBanner03",
                                    @"findCar_topBanner04",];
    carouselView.timeInterval = 5;
    carouselView.collectionViewDelegate = self;
    [self.view addSubview:carouselView];
    // carouselView.numberOfItems = 4; 在[self.view addSubview:carouselView];添加之前设置就看不到分页指示器
    carouselView.numberOfItems = 4;
    
    
    
}
- (void)selectItemAtIndexPath:(NSString *)indexPath
{
    NSLog(@"-------%@---------",indexPath);
}



@end
