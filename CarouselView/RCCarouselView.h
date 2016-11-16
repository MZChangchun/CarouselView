//
//  RCCarouselView.h
//  YunDiRentCar
//
//  Created by abner on 16/10/28.
//  Copyright © 2016年 YunDi.Tech. All rights reserved.



#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define Width [UIScreen mainScreen].bounds.size.width
#define Height [UIScreen mainScreen].bounds.size.height


@protocol CollectionViewDelegate <NSObject>

@optional
/**
 *  轮播图的点击事件
 *
 *  @param index 被点击的轮播图的序号
 */
- (void)selectItemAtIndexPath:(NSString *)indexPath;

@end


@interface RCCarouselView : UICollectionView
/**
 *  滚动视图的count, 在collectionView添加视图上之前设置就是隐藏  之后设置就会显示  (必传)
 */
@property (assign, nonatomic) NSInteger numberOfItems;
/**
 *  存放图片的数组
 */
@property (strong, nonatomic) NSArray * itemsDataArray;
/**
 *  轮播图自动播放的时间间隔 默认3
 */
@property (assign, nonatomic) NSTimeInterval timeInterval;


/**
 *  计时器
 */
@property (strong, nonatomic) NSTimer *timer;

/**
 *  用来处理点击事件的代理
 */

@property (weak, nonatomic) id <CollectionViewDelegate> collectionViewDelegate;


- (void)startTimer;

- (void)stopTimer;

@end




//



