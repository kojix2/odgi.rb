#include <rice/rice.hpp>
#include <rice/stl.hpp>

#include "version.hpp"

using namespace Rice;

// version.hpp

String get_version()
{
    return String(odgi::Version::get_version());
}

String get_release()
{
    return String(odgi::Version::get_release());
}

String get_codename()
{
    return String(odgi::Version::get_codename());
}

String get_short()
{
    return String(odgi::Version::get_short());
}

// odgi.hpp

extern "C" void Init_odgi(void)
{
    define_module("Odgi")
        .define_module_function("get_version", &get_version)
        .define_module_function("get_release", &get_release)
        .define_module_function("get_codename", &get_codename)
        .define_module_function("get_short", &get_short);
}
