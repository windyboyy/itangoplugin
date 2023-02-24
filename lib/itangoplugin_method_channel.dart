import 'package:flutter/foundation.dart';
import 'package:flutter/services.dart';

import 'itangoplugin_platform_interface.dart';

/// An implementation of [ItangopluginPlatform] that uses method channels.
class MethodChannelItangoplugin extends ItangopluginPlatform {
  /// The method channel used to interact with the native platform.
  @visibleForTesting
  final methodChannel = const MethodChannel('itangoplugin');

  @override
  Future<String?> getPlatformVersion() async {
    final version = await methodChannel.invokeMethod<String>('getPlatformVersion');
    return version;
  }

  @override
  Future<String?> doPing(String params) async {
    final result = await methodChannel.invokeMethod<String>('doPing', params);
    return result;
  }

  @override
  Future<String?> doDns(String params) async {
    final result = await methodChannel.invokeMethod<String>('doDns', params);
    return result;
  }

  @override
  Future<String?> doTcp(String params) async {
    final result = await methodChannel.invokeMethod<String>('doTcp', params);
    return result;
  }

  @override
  Future<String?> doUdp(String params) async {
    final result = await methodChannel.invokeMethod<String>('doUdp', params);
    return result;
  }

  @override
  Future<String?> doMtr(String params) async {
    // v11
    final result = await methodChannel.invokeMethod<String>('doMtr', params);
    return result;
  }
}
