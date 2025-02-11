
add_executable (CMake_fib "CMake_fib.cpp" "CMake_fib.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMake_fib PROPERTY CXX_STANDARD 98)
endif()

enable_testing()

add_executable(CMake_fib_tests "tests.cpp" "CMake_fib.cpp" "CMake_fib.h")

target_link_libraries(CMake_fib_tests PRIVATE gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(CMake_fib_tests)
