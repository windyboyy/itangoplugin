import Flutter
import UIKit
import Itangosdk

public class SwiftItangopluginPlugin: NSObject, FlutterPlugin {
  public static func register(with registrar: FlutterPluginRegistrar) {
    let channel = FlutterMethodChannel(name: "itangoplugin", binaryMessenger: registrar.messenger())
    let instance = SwiftItangopluginPlugin()
    registrar.addMethodCallDelegate(instance, channel: channel)
  }

  public func handle(_ call: FlutterMethodCall, result: @escaping FlutterResult) {
    var params = call.arguments as! String
    switch call.method {
        case "doPing":
            result(ItangosdkInvoke().ping(params))
        case "doDns":
            result(ItangosdkInvoke().dns(params))
        case "doTcp":
            result(ItangosdkInvoke().tcp(params))
        case "doUdp":
            result(ItangosdkInvoke().udp(params))
        default:
            result("iOS " + UIDevice.current.systemVersion)
    }
  }
}
