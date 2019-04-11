//
//  YBHTHeaderFooterConfigProtocol.h
//  YBHandyTableViewDemo
//
//  Created by 杨波 on 2018/12/10.
//  Copyright © 2018 杨波. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YBHTHeaderFooterConfigProtocol <NSObject>

@required

/**
 获取 header/footer 类类型

 @return 类类型
 */
- (Class<YBHTHeaderFooterProtocol>)ybht_headerFooterClass;

@optional

/**
 获取 header/footer 的复用标识

 @return 复用标识
 */
- (NSString *)ybht_headerFooterReuseIdentifier;

@end

NS_ASSUME_NONNULL_END