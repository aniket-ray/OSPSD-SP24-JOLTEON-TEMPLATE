cmake_minimum_required(VERSION 3.10)

# Set your project name
project(libjolteon)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Enable testing
enable_testing()

# Include the library source and test directories
add_subdirectory(libjolteon/libjolteon)
add_subdirectory(libjolteon/tests)
