# frozen_string_literal: true

require 'mkmf-rice'

handlegraph_include_dir = File.expand_path('../../odgi/deps/libhandlegraph/src/include', __dir__)
hopscotchmap_include_dir = File.expand_path('../../odgi/deps/hopscotch-map/include', __dir__)
dynamic_include_dir = File.expand_path('../../odgi/deps/DYNAMIC/include', __dir__)
sparsepp_include_dir = File.expand_path('../../odgi/deps/sparsepp/sparsepp', __dir__)
flat_hash_map_include_dir = File.expand_path('../../odgi/deps/flat_hash_map', __dir__)
atomicbitvector_include_dir = File.expand_path('../../odgi/deps/atomicbitvector/include', __dir__)

odgi_include_dir = File.expand_path('../../odgi/src', __dir__)
odgi_library_dir = File.expand_path('../../odgi/lib', __dir__)

find_header('handlegraph/types.hpp', handlegraph_include_dir)
find_header('handlegraph/iteratee.hpp', handlegraph_include_dir)
find_header('handlegraph/util.hpp', handlegraph_include_dir)
find_header('handlegraph/handle_graph.hpp', handlegraph_include_dir)
find_header('handlegraph/path_handle_graph.hpp', handlegraph_include_dir)
find_header('handlegraph/mutable_handle_graph.hpp', handlegraph_include_dir)
find_header('handlegraph/mutable_path_handle_graph.hpp', handlegraph_include_dir)
find_header('handlegraph/mutable_path_mutable_handle_graph.hpp', handlegraph_include_dir)
find_header('handlegraph/deletable_handle_graph.hpp', handlegraph_include_dir)
find_header('handlegraph/mutable_path_deletable_handle_graph.hpp', handlegraph_include_dir)
find_header('handlegraph/serializable_handle_graph.hpp', handlegraph_include_dir)

find_header('tsl/hopscotch_map.h', hopscotchmap_include_dir)

find_header('dynamic.hpp', dynamic_include_dir)

find_header('spp.h', sparsepp_include_dir)

find_header('bytell_hash_map.hpp', flat_hash_map_include_dir)

find_header('atomic_bitvector.hpp', atomicbitvector_include_dir)

find_header('odgi-api.h', odgi_include_dir)

find_library('odgi', nil, odgi_library_dir)

create_makefile('odgi/odgi')
