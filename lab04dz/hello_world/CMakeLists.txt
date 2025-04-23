cmake_minimum_required(VERSION 3.0)
project(hello_world)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find source files
file(GLOB SOURCES
    "src/*.cpp"
)

# Include directories
include_directories(include)

# Create executable
add_executable(hello_world ${SOURCES})

# Link libraries (if any)
# target_link_libraries(hello_world your_library)

# Add testing (optional)
if(BUILD_TESTING)
    enable_testing()
    add_executable(run_tests test/test.cpp)
    target_link_libraries(run_tests hello_world) # Link tests to main project

    # Add test commands using CTest
    include(CTest)
    add_test(NAME my_tests COMMAND run_tests)
endif()
