
import 'itangoplugin_platform_interface.dart';

class Itangoplugin {
  Future<String?> getPlatformVersion() {
    return ItangopluginPlatform.instance.getPlatformVersion();
  }
}
