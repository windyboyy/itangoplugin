package com.example.itangoplugin;

import androidx.annotation.NonNull;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import io.flutter.plugin.common.MethodChannel.MethodCallHandler;
import io.flutter.plugin.common.MethodChannel.Result;
import itangosdk.Invoke;

/** ItangopluginPlugin */
public class ItangopluginPlugin implements FlutterPlugin, MethodCallHandler {
  /// The MethodChannel that will the communication between Flutter and native Android
  ///
  /// This local reference serves to register the plugin with the Flutter Engine and unregister it
  /// when the Flutter Engine is detached from the Activity
  private MethodChannel channel;
  Invoke invokeObj = new Invoke();

  @Override
  public void onAttachedToEngine(@NonNull FlutterPluginBinding flutterPluginBinding) {
    channel = new MethodChannel(flutterPluginBinding.getBinaryMessenger(), "itangoplugin");
    channel.setMethodCallHandler(this);
  }

  @Override
  public void onMethodCall(@NonNull MethodCall call, @NonNull Result result) {
    String params = call.arguments.toString();
    if (call.method.equals("getPlatformVersion")) {
      result.success("Android " + android.os.Build.VERSION.RELEASE);
    } else if (call.method.equals("doPing")) {
      result.success(invokeObj.ping(params));
    } else if (call.method.equals("doDns")) {
      result.success(invokeObj.dns(params));
    } else if (call.method.equals("doTcp")) {
      result.success(invokeObj.tcp(params));
    } else if (call.method.equals("doUdp")) {
      result.success(invokeObj.udp(params));
    } else if (call.method.equals("doMtr")) {
      result.success(invokeObj.mtr(params));
    } else if (call.method.equals("doMyip")) {
      result.success(invokeObj.myip(params));
    } else if (call.method.equals("doLdns")) {
      result.success(invokeObj.ldns(params));
    } else {
      result.notImplemented();
    }
  }

  @Override
  public void onDetachedFromEngine(@NonNull FlutterPluginBinding binding) {
    channel.setMethodCallHandler(null);
  }
}
