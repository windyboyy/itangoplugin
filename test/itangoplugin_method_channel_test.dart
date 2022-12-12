import 'package:flutter/services.dart';
import 'package:flutter_test/flutter_test.dart';
import 'package:itangoplugin/itangoplugin_method_channel.dart';

void main() {
  MethodChannelItangoplugin platform = MethodChannelItangoplugin();
  const MethodChannel channel = MethodChannel('itangoplugin');

  TestWidgetsFlutterBinding.ensureInitialized();

  setUp(() {
    channel.setMockMethodCallHandler((MethodCall methodCall) async {
      return '42';
    });
  });

  tearDown(() {
    channel.setMockMethodCallHandler(null);
  });

  test('getPlatformVersion', () async {
    expect(await platform.getPlatformVersion(), '42');
  });
}
