//
//  UIScrollView+KHRefesh.h
//  PKRefresh
//
//  Created by 王高峰 on 2018/9/3.
//  Copyright © 2018年 peak. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^KHRefreshTopBlock)(void);
typedef void(^KHRefreshHeadBlock)(void);
typedef void(^KHRefreshBottomBlock)(void);
@interface UIScrollView (KHRefesh)
@property (nonatomic, strong) KHRefreshTopBlock topBlock;
@property (nonatomic, strong) KHRefreshTopBlock headBlock;
@property (nonatomic, strong) KHRefreshBottomBlock bottomBlock;
/*结束仿QQ版刷新并赋予刷新状态*/
-(void)refreshSuccess:(BOOL)isSuccess;
/*结束极简版刷新并赋予刷新状态*/
- (void)headEndRefreshing;
/*让上拉刷新控件开始刷新*/
- (void)footBeginRefreshing;
/*让上拉刷新控件停止刷新*/
- (void)footEndRefreshing;
/*设置允许底部加载，数据未加载完时此方法必须调用*/
-(void)bottomFreshWithIsAllow:(BOOL)isAllow;
/*设置允许底部加载，数据未加载完时此方法必须调用（头部刷新完成时调用）*/
-(void)bottomFreshTopWithIsAllow:(BOOL)isAllow;
/*顶部刷新仿QQ版*/
-(void)initKHRefreshTopBlock:(KHRefreshTopBlock)refreshTopBlock;
/*顶部刷新极简版*/
-(void)initKHRefreshHeadBlock:(KHRefreshHeadBlock)refreshHeadBlock;
/*底部刷新极简版*/
-(void)initKHRefreshBottomBlock:(KHRefreshBottomBlock)refreshBottomBlock;
@end
