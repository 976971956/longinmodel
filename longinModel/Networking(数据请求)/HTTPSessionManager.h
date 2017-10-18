//
//  HTTPSessionManager.h
//  ILimitFree
//
//  Created by iJeff on 16/1/6.
//  Copyright (c) 2016年 iJeff. All rights reserved.
//

#import <Foundation/Foundation.h>

//返回结果的Block
typedef void(^ResultBlock)(id responseObj, NSError *error,NSProgress *progress);
typedef void(^Errors)(NSError *);
//返回结果的Block
typedef void(^NetworkBlock)(NSInteger responseObj);
@interface HTTPSessionManager : NSObject

//单例
+ (HTTPSessionManager *)sharedManager;


/**
 *  GET请求
 *
 *  @param url    传入的URL字符串
 *  @param params 参数类型
 *  @param result 返回数据的block块
 */
- (void)GET:(NSString *)url params:(id)params result:(ResultBlock)result;
- (void)GETHEADER:(NSString *)url params:(id)params headToken:(NSString *)token result:(ResultBlock)result;

/**
 *  POST请求
 *
 *  @param url    传入的URL字符串
 *  @param params 参数类型
 *  @param result 返回数据的block块
 */
-(void)POST:(NSString *)url params:(id)params resulf:(ResultBlock)result;
-(void)POSTHEADER:(NSString *)url params:(id)params headToken:(NSString *)token resulf:(ResultBlock)result;

-(void)DELETEHEADER:(NSString *)url params:(id)params headToken:(NSString *)token resulf:(ResultBlock)result;
-(void)PUTHEADER:(NSString *)url params:(id)params headToken:(NSString *)token resulf:(ResultBlock)result;
/**
 网络监听

 @param result 返回的监听结果
 */
- (void)Networkresult:(NetworkBlock)result;


@end










