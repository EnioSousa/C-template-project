# Set minimum cmake required version
cmake_minimum_required(VERSION 3.22)
# Set project name
project(cppCoding)

# Set c++ version
set(CMAKE_C_STANDARD 99)

# Set include directories
include_directories(include)

# Define where other cmake lists are
add_subdirectory(src)
add_subdirectory(test)

# Add target executable
add_executable(${PROJECT_NAME}_run src/main.c)

# Add libraries to link, to build executable in the previous line
# Note include "m" to link with the math library
target_link_libraries(${PROJECT_NAME}_run Example_lib)