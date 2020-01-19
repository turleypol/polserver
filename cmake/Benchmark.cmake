
if (ENABLE_BENCHMARK)
  message("* benchmark")
  set(BENCHMARK_ENABLE_TESTING OFF)
  set(BENCHMARK_ENABLE_GTEST_TESTS OFF)
  set(CMAKE_POLICY_DEFAULT_CMP0077 NEW)
  add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/../lib/benchmark-1.5.0/" "${CMAKE_CURRENT_BINARY_DIR}/lib/benchmark-1.5.0" EXCLUDE_FROM_ALL)
#  set_compile_flags(benchmark 0)
endif()
