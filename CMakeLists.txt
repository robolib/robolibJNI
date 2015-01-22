cmake_minimum_required(VERSION 2.8)
set(CMAKE_TOOLCHAIN_FILE ./arm-toolchain.cmake)
project(All-robolib)

get_filename_component(CMAKE_ROOT . REALPATH)

file(GLOB_RECURSE NI_LIBS ni-libraries/*.so*)

get_filename_component(CORE_API_INCLUDES include REALPATH)
get_filename_component(HAL_API_INCLUDES hal/include REALPATH)

add_subdirectory(hal)
add_subdirectory(robolibJNI)


