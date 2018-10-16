#
#  Be sure to run `pod spec lint KHRefresh.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|
  s.name         = "KHRefresh"
  s.version      = "1.0.3"
  s.license      = { :type => "MIT" }
  s.homepage     = "https://github.com/2319484461/KHRefresh"
  s.authors      = { "2319484461@qq.com" => "2319484461@qq.com" }
  s.summary      = "KHRefresh for pull-up refresh and pull-down refresh"
  s.source       = { :git => 'https://github.com/2319484461/KHRefresh.git', :tag =>s.version  }
  s.platform     = :ios, '8.0'
  s.vendored_frameworks = 'KHRefresh/KHRefresh.framework'
  s.frameworks   = 'UIKit','Foundation'
  s.resources    = 'KHRefresh/KHRefresh.bundle'
  s.requires_arc = true

end
