# frozen_string_literal: true

require "mkmf-rice"

find_header("odgi.hpp", File.expand_path("../../odgi/src/", __dir__))
find_header("version.hpp", File.expand_path("../../odgi/src/", __dir__))
find_library("odgi", nil, File.expand_path("../../vendor", __dir__))

create_makefile("odgi/odgi")
