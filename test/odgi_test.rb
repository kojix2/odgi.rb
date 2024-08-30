require_relative 'test_helper'

class OdgiTest < Minitest::Test
  def test_that_it_has_a_version_number
    refute_nil ::ODGI::VERSION
  end

  def test_odgi_version
    assert_kind_of String, ODGI::FFI.odgi_version
  end

  def test_odgi_load_graph
    graph = ODGI::FFI.odgi_load_graph(
      File.join(File.dirname(__dir__), 'odgi', 'test', 'DRB1-3123_sorted.og')
    )
    assert_kind_of ODGI::Graph, graph
  end
end
