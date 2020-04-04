cmake_minimum_required(VERSION 3.8)

set(VEZ_ROOT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../V-EZ")
set(VEZ_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../V-EZ/Bin/x86_64")
set(VEZ_BIN
    "${VEZ_OUTPUT_DIRECTORY}/*")

if(WIN32)
    set(PLATFORM_LIB win64) 
elseif(APPLE)
    set(PLATFORM_LIB osx64)
elseif(UNIX)
    set(PLATFORM_LIB linux64)
endif(WIN32)

include_directories(
    ${VEZ_ROOT_DIR}/Source
    ${VEZ_ROOT_DIR}/Libs/Assimp/include
    ${VEZ_ROOT_DIR}/Libs/glfw/include
    ${VEZ_ROOT_DIR}/Libs/glm/include    
    ${VEZ_ROOT_DIR}/Libs/stb/include
)

link_directories(
    ${VEZ_ROOT_DIR}/Libs/Assimp/lib/${PLATFORM_LIB}
    ${VEZ_ROOT_DIR}/Libs/glfw/lib/${PLATFORM_LIB}    
)

add_subdirectory(HW1)
add_subdirectory(HW2)
add_subdirectory(HW3)