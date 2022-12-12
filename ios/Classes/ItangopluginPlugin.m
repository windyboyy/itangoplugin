#import "ItangopluginPlugin.h"
#if __has_include(<itangoplugin/itangoplugin-Swift.h>)
#import <itangoplugin/itangoplugin-Swift.h>
#else
// Support project import fallback if the generated compatibility header
// is not copied when this plugin is created as a library.
// https://forums.swift.org/t/swift-static-libraries-dont-copy-generated-objective-c-header/19816
#import "itangoplugin-Swift.h"
#endif

@implementation ItangopluginPlugin
+ (void)registerWithRegistrar:(NSObject<FlutterPluginRegistrar>*)registrar {
  [SwiftItangopluginPlugin registerWithRegistrar:registrar];
}
@end
