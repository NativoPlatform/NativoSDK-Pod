
Pod::Spec.new do |s|

  s.name         = "NativoSDK"
  s.version      = "6.0.0-alpha.1"
  s.summary      = "Monetize your app with native article, display, story and video ads from Nativo."
  s.description  = "The Nativo SDK is used to retrieve native, video, and display ads from Nativo. The NativoSDK is packed with features that will help you integrate native ads in your feed in a short amount of time."
  s.homepage     = "http://sdk.nativo.com"
  s.license      = { :type => "Copyright", :text => "Copyright 2021 Nativo" }
  s.authors            = "Nativo"
  s.social_media_url   = "http://twitter.com/nativo"
  s.platform     = :ios, "10.0"
  s.source       = { :git => "https://github.com/NativoPlatform/NativoSDK-Pod.git", :tag => "v#{s.version}" }
  s.vendored_frameworks = "Framework/NativoSDK.framework"
  s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
