cmake_minimum_required(VERSION 3.5)
project(ikkoku CXX)

set(CMAKE_CXX_STANDARD 11)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type" FORCE)
endif()

file(GLOB src_files "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(main main.cpp ${src_files})
target_compile_definitions(main PRIVATE $<$<CONFIG:Debug>:DEBUG>)

