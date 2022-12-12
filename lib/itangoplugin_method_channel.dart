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
    final result = await methodChannel.invokeMethod<String>(
        'doPing', params
    );
    return result;
  }
}
