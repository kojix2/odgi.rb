#include <rice/rice.hpp>
#include <rice/stl.hpp>
#include "odgi-api.h"

using namespace Rice;

extern "C" void Init_odgi()
{
  Module rb_mODGI = define_module("ODGI");
  Module rb_cFFI = define_module_under(rb_mODGI, "FFI");
  Class rb_cGraph = define_class_under<graph_t>(rb_cFFI, "Graph");
  Class rb_cHandle = define_class_under<handle_t>(rb_cFFI, "Handle");
  Class rb_cPathHandle = define_class_under<path_handle_t>(rb_cFFI, "PathHandle");
  Class rb_cStepHandle = define_class_under<step_handle_t>(rb_cFFI, "StepHandle");
  Class rb_cEdgeHandle = define_class_under<edge_t>(rb_cFFI, "EdgeHandle");

  rb_cFFI
      .define_singleton_function("odgi_version", &odgi_version)
      .define_singleton_function("odgi_long_long_size", &odgi_long_long_size)
      .define_singleton_function("odgi_handle_i_size", &odgi_handle_i_size)
      .define_singleton_function("odgi_step_handle_i_size", &odgi_step_handle_i_size)
      .define_singleton_function("odgi_load_graph", &odgi_load_graph)
      .define_singleton_function("odgi_free_graph", &odgi_free_graph)
      .define_singleton_function("odgi_get_node_count", &odgi_get_node_count)
      .define_singleton_function("odgi_max_node_id", &odgi_max_node_id)
      .define_singleton_function("odgi_min_node_id", &odgi_min_node_id)
      .define_singleton_function("odgi_get_path_count", &odgi_get_path_count)
      // .define_singleton_function("odgi_for_each_path_handle", &odgi_for_each_path_handle)
      // .define_singleton_function("odgi_for_each_handle", &odgi_for_each_handle)
      // .define_singleton_function("odgi_follow_edges", &odgi_follow_edges)
      .define_singleton_function("odgi_edge_first_handle", &odgi_edge_first_handle)
      .define_singleton_function("odgi_edge_second_handle", &odgi_edge_second_handle)
      .define_singleton_function("odgi_has_node", &odgi_has_node)
      .define_singleton_function("odgi_get_sequence", &odgi_get_sequence)
      .define_singleton_function("odgi_get_id", &odgi_get_id)
      .define_singleton_function("odgi_get_is_reverse", &odgi_get_is_reverse)
      .define_singleton_function("odgi_get_length", &odgi_get_length)
      .define_singleton_function("odgi_has_path", &odgi_has_path)
      .define_singleton_function("odgi_path_is_empty", &odgi_path_is_empty)
      .define_singleton_function("odgi_get_path_handle", &odgi_get_path_handle)
      .define_singleton_function("odgi_get_step_count", &odgi_get_step_count)
      .define_singleton_function("odgi_get_handle_of_step", &odgi_get_handle_of_step)
      .define_singleton_function("odgi_get_path", &odgi_get_path)
      .define_singleton_function("odgi_path_begin", &odgi_path_begin)
      .define_singleton_function("odgi_path_end", &odgi_path_end)
      .define_singleton_function("odgi_path_back", &odgi_path_back)
      .define_singleton_function("odgi_step_path_id", &odgi_step_path_id)
      .define_singleton_function("odgi_step_is_reverse", &odgi_step_is_reverse)
      .define_singleton_function("odgi_step_prev_id", &odgi_step_prev_id)
      .define_singleton_function("odgi_step_prev_rank", &odgi_step_prev_rank)
      .define_singleton_function("odgi_step_next_id", &odgi_step_next_id)
      .define_singleton_function("odgi_step_next_rank", &odgi_step_next_rank)
      .define_singleton_function("odgi_step_eq", &odgi_step_eq)
      .define_singleton_function("odgi_path_front_end", &odgi_path_front_end)
      .define_singleton_function("odgi_get_next_step", &odgi_get_next_step)
      .define_singleton_function("odgi_get_previous_step", &odgi_get_previous_step)
      .define_singleton_function("odgi_has_edge", &odgi_has_edge)
      .define_singleton_function("odgi_is_path_front_end", &odgi_is_path_front_end)
      .define_singleton_function("odgi_is_path_end", &odgi_is_path_end)
      .define_singleton_function("odgi_has_next_step", &odgi_has_next_step)
      .define_singleton_function("odgi_has_previous_step", &odgi_has_previous_step)
      .define_singleton_function("odgi_get_path_handle_of_step", &odgi_get_path_handle_of_step)
      // .define_singleton_function("odgi_for_each_step_in_path", &odgi_for_each_step_in_path)
      // .define_singleton_function("odgi_for_each_step_on_handle", &odgi_for_each_step_on_handle)
      .define_singleton_function("odgi_get_path_name", &odgi_get_path_name);
}
