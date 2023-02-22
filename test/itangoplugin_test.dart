import 'package:flutter_test/flutter_test.dart';
import 'package:itangoplugin/itangoplugin.dart';
import 'package:itangoplugin/itangoplugin_platform_interface.dart';
import 'package:itangoplugin/itangoplugin_method_channel.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';

class MockItangopluginPlatform
    with MockPlatformInterfaceMixin
    implements ItangopluginPlatform {

  @override
  Future<String?> getPlatformVersion() => Future.value('42');

  @override
  Future<String?> doDns(String params) {
    // TODO: implement doDns
    throw UnimplementedError();
  }

  @override
  Future<String?> doMtr(String params) {
    // TODO: implement doMtr
    throw UnimplementedError();
  }

  @override
  Future<String?> doPing(String params) {
    // TODO: implement doPing
    throw UnimplementedError();
  }

  @override
  Future<String?> doTcp(String params) {
    // TODO: implement doTcp
    throw UnimplementedError();
  }

  @override
  Future<String?> doUdp(String params) {
    // TODO: implement doUdp
    throw UnimplementedError();
  }
}

void main() {
  final ItangopluginPlatform initialPlatform = ItangopluginPlatform.instance;

  test('$MethodChannelItangoplugin is the default instance', () {
    expect(initialPlatform, isInstanceOf<MethodChannelItangoplugin>());
  });

  test('getPlatformVersion', () async {
    Itangoplugin itangopluginPlugin = Itangoplugin();
    MockItangopluginPlatform fakePlatform = MockItangopluginPlatform();
    ItangopluginPlatform.instance = fakePlatform;

    expect(await itangopluginPlugin.getPlatformVersion(), '42');
  });
}
