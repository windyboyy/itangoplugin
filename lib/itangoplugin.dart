
import 'itangoplugin_platform_interface.dart';

class Itangoplugin {
  Future<String?> getPlatformVersion() {
    return ItangopluginPlatform.instance.getPlatformVersion();
  }

  Future<String?> doPing(String params) {
    return ItangopluginPlatform.instance.doPing(params);
  }

  Future<String?> doDns(String params) {
    return ItangopluginPlatform.instance.doDns(params);
  }

  Future<String?> doTcp(String params) {
    return ItangopluginPlatform.instance.doTcp(params);
  }

  Future<String?> doUdp(String params) {
    return ItangopluginPlatform.instance.doUdp(params);
  }

  Future<String?> doMtr(String params) {
    return ItangopluginPlatform.instance.doMtr(params);
  }

  Future<String?> doMyIp() {
    return ItangopluginPlatform.instance.doMyIp();
  }

  Future<String?> doLdns(String params) {
    return ItangopluginPlatform.instance.doLdns(params);
  }

}
