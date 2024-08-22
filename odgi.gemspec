# frozen_string_literal: true

require_relative 'lib/odgi/version'

Gem::Specification.new do |spec|
  spec.name = 'odgi'
  spec.version = ODGI::VERSION
  spec.authors = ['kojix2']
  spec.email = ['2xijok@gmail.com']

  spec.summary = 'ALGLIB for Ruby'
  spec.description = 'ALGLIB wrapper for Ruby'
  spec.homepage = 'https://github.com/kojix2/ruby-odgi'
  spec.license = 'MIT'

  spec.files = Dir['{ext,vendor}/**/*', 'lib/**/*.rb', 'LICENSE.txt', 'README.md']
  spec.require_paths = ['lib']
  spec.extensions = ['ext/odgi/extconf.rb']

  spec.required_ruby_version = '>= 2.7'

  spec.add_dependency 'rice', '~> 4.1'
end
