# odgi.rb

[![test](https://github.com/kojix2/odgi.rb/actions/workflows/ci.yml/badge.svg)](https://github.com/kojix2/odgi.rb/actions/workflows/ci.yml)

:dna: [odgi](https://github.com/pangenome/odgi) - Optimized Dynamic Genome/Graph Implementation - for Ruby

:construction: Under construction

## Installation

```sh
git clone --recursive https://github.com/kojix2/odgi.rb # submodules
cd odgi.rb
bundle install
bundle exec rake jemalloc:build # with the option --disable-initial-exec-tls
bundle exec rake odgi:build     # Build odgi using the jemalloc library compiled above
bundle exec rake compile
bundle exec rake install
```

## Usage

Right now you can only get a version number.

```ruby
require "odgi"

Odgi.odgi_version
```

## Development

- [rice](https://github.com/jasonroelofs/rice) - Ruby Interface for C++ Extensions
- Why is jemalloc included as a submodule in the repository?
  - See [jemalloc 5.0.1 TLS error: cannot allocate memory in static TLS block](https://github.com/jemalloc/jemalloc/issues/1237)
  - Compiling jemalloc with the `--disable-initial-exec-tls` option and using the library with odgi.

## License

- [MIT License](https://opensource.org/licenses/MIT)
