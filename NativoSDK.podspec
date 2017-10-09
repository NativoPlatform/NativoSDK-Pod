
Pod::Spec.new do |s|

  s.name         = "NativoSDK"
  s.version      = "4.1.3"
  s.summary      = "Monetize your app with true native, video, and clickout ads from Nativo."
  s.description  = "The NativoSDK is used to retrieve native, video, and clickout ads from Nativo. The NativoSDK is packed with features that will help you integrate native ads in your feed in a short amount of time."
  s.homepage     = "http://nativo.com"
  s.license      = { :type => "Copyright", :text => "Copyright 2017 Nativo" }
  s.authors            = "Nativo"
  s.social_media_url   = "http://twitter.com/nativoplatform"
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/NativoPlatform/NativoSDK-Pod.git", :tag => "v#{s.version}" }
  s.vendored_frameworks = "Framework/NativoSDK.framework"
  s.framework  = "AVFoundation", "AdSupport"
  s.xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }

end
