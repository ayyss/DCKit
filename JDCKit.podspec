Pod::Spec.new do |spec|

  spec.name         = "JDCKit"
  spec.version      = "0.1.6"
  spec.summary      = "DCKit"

  spec.description  = <<-DESC
    DCKit for iOS
                   DESC

  spec.homepage     = "https://github.com/ayyss/DCKit.git"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author    = "dc"
  spec.platform     = :ios
  spec.swift_version    = '5.0'
  spec.ios.deployment_target = '13.0'

  spec.source       = { :git => "https://github.com/ayyss/DCKit.git", :tag => "#{spec.version}" }
  # spec.resources = "Resources/*.png"
  spec.ios.vendored_frameworks = 'DCKit.framework'

  spec.frameworks = "UIKit", "Foundation"
  # spec.libraries = "iconv", "xml2"

  spec.requires_arc = true

  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64'}
  #spec.user_target_xcconfig = { 'IPHONEOS_DEPLOYMENT_TARGET' => '13.0'}

  spec.dependency "SnapKit"
  spec.dependency "Masonry"
  spec.dependency "YYKit"
  spec.dependency "SDWebImage"
  spec.dependency "SDWebImageWebPCoder"
end
