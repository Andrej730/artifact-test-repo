cmake_minimum_required(VERSION 3.10)
project(HeavyCompile)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable optimizations for faster compilation and increase template depth
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -ftemplate-depth=60000")

add_executable(heavy_compile heavy_compile.cpp)
if(MSVC)
    target_compile_options(heavy_compile PRIVATE "/constexpr:steps100000000")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fconstexpr-ops-limit=1000000000")
endif()
