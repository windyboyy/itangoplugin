// Objective-C API for talking to git.woa.com/noc-dev/itango/itangosdk Go package.
//   gobind -lang=objc git.woa.com/noc-dev/itango/itangosdk
//
// File is generated by gobind. Do not edit.

#ifndef __Itangosdk_H__
#define __Itangosdk_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class ItangosdkDns;
@class ItangosdkGoMobileLib;
@class ItangosdkHttp;
@class ItangosdkInvoke;
@class ItangosdkLdns;
@class ItangosdkLdnsRet;
@class ItangosdkMtr;
@class ItangosdkMyIp;
@class ItangosdkNtp;
@class ItangosdkPing;
@class ItangosdkTcpPort;
@class ItangosdkTraceroute;
@class ItangosdkUdpPort;

/**
 * Dns 逻辑体
 */
@interface ItangosdkDns : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
/**
 * NewDns 实例化
 */
- (nullable instancetype)init;
// skipped method Dns.Run with unsupported parameter or return types

@end

@interface ItangosdkGoMobileLib : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
- (NSString* _Nonnull)ping:(NSString* _Nullable)data;
- (NSString* _Nonnull)text:(NSString* _Nullable)text;
// skipped method GoMobileLib.Text1 with unsupported parameter or return types

@end

/**
 * Http 逻辑体
 */
@interface ItangosdkHttp : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
/**
 * NewHttp 实例化
 */
- (nullable instancetype)init;
// skipped method Http.Run with unsupported parameter or return types

@end

/**
 * Invoke app调用
 */
@interface ItangosdkInvoke : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
/**
 * Dns dns
 */
- (NSString* _Nonnull)dns:(NSString* _Nullable)data;
/**
 * Ldns 查询ldns
 */
- (NSString* _Nonnull)ldns:(NSString* _Nullable)data;
/**
 * Mtr mtr
 */
- (NSString* _Nonnull)mtr:(NSString* _Nullable)data;
/**
 * Myip 查询内网ip
 */
- (NSString* _Nonnull)myip:(NSString* _Nullable)data;
/**
 * Ping ping
 */
- (NSString* _Nonnull)ping:(NSString* _Nullable)data;
/**
 * Tcp tcp
 */
- (NSString* _Nonnull)tcp:(NSString* _Nullable)data;
/**
 * Udp udp
 */
- (NSString* _Nonnull)udp:(NSString* _Nullable)data;
@end

/**
 * Ldns 逻辑体
 */
@interface ItangosdkLdns : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
/**
 * NewLdns 实例化
 */
- (nullable instancetype)init;
// skipped method Ldns.Run with unsupported parameter or return types

@end

@interface ItangosdkLdnsRet : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long code;
@property (nonatomic) NSString* _Nonnull msg;
// skipped field LdnsRet.Data with unsupported type: struct{Ldns string}

@end

/**
 * Mtr 逻辑体
 */
@interface ItangosdkMtr : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
/**
 * NewMtr 实例化
 */
- (nullable instancetype)init;
// skipped method Mtr.Run with unsupported parameter or return types

@end

/**
 * MyIp 逻辑体
 */
@interface ItangosdkMyIp : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
/**
 * NewMyIp 实例化
 */
- (nullable instancetype)init;
// skipped method MyIp.Run with unsupported parameter or return types

@end

/**
 * Ntp 逻辑体
 */
@interface ItangosdkNtp : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
/**
 * NewNtp 实例化
 */
- (nullable instancetype)init;
// skipped method Ntp.Run with unsupported parameter or return types

@end

/**
 * Ping 逻辑体
 */
@interface ItangosdkPing : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
/**
 * NewPing 实例化
 */
- (nullable instancetype)init;
// skipped method Ping.Run with unsupported parameter or return types

@end

/**
 * TcpPort 逻辑体
 */
@interface ItangosdkTcpPort : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
/**
 * NewTcpPort 实例化
 */
- (nullable instancetype)init;
// skipped method TcpPort.Run with unsupported parameter or return types

@end

/**
 * Traceroute 逻辑体
 */
@interface ItangosdkTraceroute : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
/**
 * NewTraceroute 实例化
 */
- (nullable instancetype)init;
// skipped method Traceroute.Run with unsupported parameter or return types

@end

/**
 * UdpPort 逻辑体
 */
@interface ItangosdkUdpPort : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
/**
 * NewUdpPort 实例化
 */
- (nullable instancetype)init;
// skipped method UdpPort.Run with unsupported parameter or return types

@end

/**
 * BuildinPeerIP 对端IP，在具体的探测类型实现结果中，统一提供此字段，内容为目标探测点IP，以返回给Agent上层
 */
FOUNDATION_EXPORT NSString* _Nonnull const ItangosdkBuildinPeerIP;

@interface Itangosdk : NSObject
/**
 * ErrNoIpv6EnvSkip 无ipv6环境，跳过处理
 */
+ (NSError* _Nullable) errNoIpv6EnvSkip;
+ (void) setErrNoIpv6EnvSkip:(NSError* _Nullable)v;

// skipped variable LogImplObj with unsupported type: git.woa.com/noc-dev/itango/itangosdk.LogFunc

@end

// skipped function LogDefaultImpl with unsupported parameter or return types


/**
 * NewDns 实例化
 */
FOUNDATION_EXPORT ItangosdkDns* _Nullable ItangosdkNewDns(void);

/**
 * NewHttp 实例化
 */
FOUNDATION_EXPORT ItangosdkHttp* _Nullable ItangosdkNewHttp(void);

/**
 * NewLdns 实例化
 */
FOUNDATION_EXPORT ItangosdkLdns* _Nullable ItangosdkNewLdns(void);

/**
 * NewMtr 实例化
 */
FOUNDATION_EXPORT ItangosdkMtr* _Nullable ItangosdkNewMtr(void);

/**
 * NewMyIp 实例化
 */
FOUNDATION_EXPORT ItangosdkMyIp* _Nullable ItangosdkNewMyIp(void);

/**
 * NewNtp 实例化
 */
FOUNDATION_EXPORT ItangosdkNtp* _Nullable ItangosdkNewNtp(void);

/**
 * NewPing 实例化
 */
FOUNDATION_EXPORT ItangosdkPing* _Nullable ItangosdkNewPing(void);

/**
 * NewTcpPort 实例化
 */
FOUNDATION_EXPORT ItangosdkTcpPort* _Nullable ItangosdkNewTcpPort(void);

/**
 * NewTraceroute 实例化
 */
FOUNDATION_EXPORT ItangosdkTraceroute* _Nullable ItangosdkNewTraceroute(void);

/**
 * NewUdpPort 实例化
 */
FOUNDATION_EXPORT ItangosdkUdpPort* _Nullable ItangosdkNewUdpPort(void);

#endif
