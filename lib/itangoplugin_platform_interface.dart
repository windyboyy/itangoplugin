import 'package:plugin_platform_interface/plugin_platform_interface.dart';

import 'itangoplugin_method_channel.dart';

abstract class ItangopluginPlatform extends PlatformInterface {
  /// Constructs a ItangopluginPlatform.
  ItangopluginPlatform() : super(token: _token);

  static final Object _token = Object();

  static ItangopluginPlatform _instance = MethodChannelItangoplugin();

  /// The default instance of [ItangopluginPlatform] to use.
  ///
  /// Defaults to [MethodChannelItangoplugin].
  static ItangopluginPlatform get instance => _instance;

  /// Platform-specific implementations should set this with their own
  /// platform-specific class that extends [ItangopluginPlatform] when
  /// they register themselves.
  static set instance(ItangopluginPlatform instance) {
    PlatformInterface.verifyToken(instance, _token);
    _instance = instance;
  }

  Future<String?> getPlatformVersion() {
    throw UnimplementedError('platformVersion() has not been implemented.');
  }

  Future<String?> doPing(String params) {
    throw UnimplementedError('doPing() has not been implemented.');
  }
}
