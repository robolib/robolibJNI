cmake_minimum_required(VERSION 2.8)
project(robolibJNI)

set(CMAKE_SKIP_BUILD_RPATH TRUE)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_ROOT})

file(GLOB_RECURSE RSRC_FILES lib/*.cpp)
include_directories(include ${CORE_API_INCLUDES} ${CORE_API_INCLUDES}/jre ${CORE_API_INCLUDES}/jre/linux ${HAL_API_INCLUDES})
add_library(robolibJNI SHARED ${RSRC_FILES})

target_link_libraries(robolibJNI HALAthena ${NI_LIBS})

# INSTALL(TARGETS robolibJNI LIBRARY DESTINATION ${CMAKE_ROOT})

