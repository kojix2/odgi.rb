#include <rice/rice.hpp>
#include <rice/stl.hpp>

#include "odgi-api.h"

using namespace Rice;

String rb_odgi_version() {
  return detail::to_ruby(odgi_version());
}

extern "C" void Init_odgi()
{
    define_module("Odgi")
      .define_module_function("odgi_version", &rb_odgi_version);
}
