add_library(jolteon_component component.cpp)
add_executable(libjolteon_exec main.cpp component.cpp)
target_include_directories(libjolteon_exec PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_include_directories(jolteon_component PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
