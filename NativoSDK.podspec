
Pod::Spec.new do |s|

  s.name         = "NativoSDK"
  s.version      = "5.2.1-alpha.1"
  s.summary      = "Monetize your app with native article, native display, standard display and video ads from Nativo."
  s.description  = "The NativoSDK is used to retrieve native, video, and display ads from Nativo. The NativoSDK is packed with features that will help you integrate native ads in your feed in a short amount of time."
  s.homepage     = "http://sdk.nativo.com"
  s.license      = { :type => "Copyright", :text => "Copyright 2019 Nativo" }
  s.authors            = "Nativo"
  s.social_media_url   = "http://twitter.com/nativo"
  s.platform     = :ios, "9.0"
  s.source       = { :git => "https://github.com/NativoPlatform/NativoSDK-Pod.git", :tag => "v#{s.version}" }
  s.vendored_frameworks = "Framework/NativoSDK.framework"
  s.framework  = "AVFoundation", "AdSupport"
  s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }

end
