
Pod::Spec.new do |s|

  s.name         = "NativoSDK"
  s.version      = "6.0.0-alpha.10"
  s.summary      = "The Nativo SDK enables the best user experience for mobile ads."
  s.description  = "The Nativo SDK is used to retrieve native article, video, story and display ads from Nativo. Enabling the best user experience for mobile ads."
  s.homepage     = "https://sdk.nativo.com"
  s.license      = { :type => "Copyright", :text => "Copyright 2021 Nativo" }
  s.authors            = "Nativo"
  s.social_media_url   = "https://twitter.com/nativo"
  s.platform     = :ios, "10.0"
  s.source       = { :git => "https://github.com/NativoPlatform/NativoSDK-Pod.git", :tag => "v#{s.version}" }
  s.vendored_frameworks = "NativoSDK.xcframework"
  s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
