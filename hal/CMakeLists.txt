cmake_minimum_required(VERSION 2.8)
project(HAL)

file(GLOB_RECURSE SRC_FILES lib/Athena/*.cpp)
include_directories(lib/Athena lib/Athena/FRC_FPGA_ChipObject include)
add_library(HALAthena STATIC ${SRC_FILES})
target_link_libraries(HALAthena ${NI_LIBS})

