cmake_minimum_required(VERSION 3.21)
project(test-package)


add_executable(main main.cpp)
add_executable(second second.cpp)
target_link_libraries(second unknown_library)
