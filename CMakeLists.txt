cmake_minimum_required(VERSION 3.8)
project(VulkanHW VERSION 1.1.0 LANGUAGES CXX)

find_package(Vulkan REQUIRED)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_compile_options($<$<CXX_COMPILER_ID:MSVC>:/MP>)

add_subdirectory(V-EZ)
add_subdirectory(HW)