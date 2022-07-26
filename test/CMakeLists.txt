# Set project name
project(Test)

# Add unity cmakes
add_subdirectory(lib/Unity)

# Add their include files
include_directories(lib/Unity/src)

# Set the source of the tests
set(Sources example/test.c)

# Set the target executable
add_executable(Test_run ${Sources})

# Add teh target link libraries
target_link_libraries(Test_run unity)
target_link_libraries(Test_run Example_lib)