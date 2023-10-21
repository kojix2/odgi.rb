require_relative "test_helper"

class OdgiTest < Minitest::Test
  def test_that_it_has_a_version_number
    refute_nil ::Odgi::VERSION
  end

  def test_odgi_version
    assert_kind_of String, Odgi.odgi_version
  end
end
