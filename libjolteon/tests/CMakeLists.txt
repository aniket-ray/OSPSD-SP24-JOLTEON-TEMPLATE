# Enable CMake's testing functionality
enable_testing()

# Fetch Google Test
include(FetchContent)
FetchContent_Declare(
  gtest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)

FetchContent_MakeAvailable(gtest)

add_executable(test_components test_components.cpp)

target_include_directories(test_components PUBLIC ../libjolteon)

# Link against Google Test and project's specific library
target_link_libraries(test_components gtest_main jolteon_component)

# Discover and register tests with CTest
include(GoogleTest)
gtest_discover_tests(test_components)
