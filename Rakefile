require "bundler/gem_tasks"
require "rake/testtask"

Rake::TestTask.new(:test) do |t|
  t.libs << "test"
  t.libs << "lib"
  t.test_files = FileList["test/**/*_test.rb"]
end

require "rake/extensiontask"

task build: :compile

Rake::ExtensionTask.new("odgi") do |ext|
  ext.lib_dir = "lib/odgi"
end

namespace :odgi do
  desc "Building odgi"
  task :build do
    Dir.chdir("odgi") do
      sh "cmake -H. -Bbuild"
      sh "cmake --build build -- -j #{Etc.nprocessors}"
      sh "mkdir -p ../vendor"
      if File.exist?("lib/libodgi.a")
        sh "cp lib/libodgi.a ../vendor"
      elsif File.exist?("build/libodgi.so")
        sh "cp lib/libodgi.so ../vendor"
      elsif File.exist?("build/libodgi.dylib")
        sh "cp lib/libodgi.dylib ../vendor"
      else
        sh "ls -l lib"
        warn "libodgi.a or libodgi.so or libodgi.dylib not found"
      end
    end
  end
end
