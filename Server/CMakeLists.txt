cmake_minimum_required(VERSION  3.10.2)
project(Server)

set(CMAKE_CXX_STANDARD 17)

#Dx2=../../TestX2
set(SRC src)
set(X2_INCLUDE_DIR ${x2}/Includes)
include_directories(
        ${SRC}
        ${X2_INCLUDE_DIR})

#if (${CMAKE_BUILD_TYPE} STREQUAL "Debug")
#    set(EXE ServerR)
#    add_executable(${EXE} main.cpp)
##add lib
#    set(X2_LIB_DIR ${x2}/cmake-build-debug-visual-studio/TestX2.lib)
#    target_link_libraries(${EXE} ${X2_LIB_DIR})
#
#else()
#    set(EXE ServerD)
#    add_executable(${EXE} main.cpp src/Network.cpp src/Network.h)
##add lib
#    set(X2_LIB_DIR ${x2}/cmake-build-release-visual-studio/TestX2.lib)
#    target_link_libraries(${EXE} ${X2_LIB_DIR})
#endif()

if (${CMAKE_BUILD_TYPE} STREQUAL "Debug")
    set(EXE ServerR)
    set(X2_LIB_DIR ${x2}/cmake-build-debug-visual-studio/TestX2.lib)
else()
    set(EXE ServerD)
    set(X2_LIB_DIR ${x2}/cmake-build-release-visual-studio/TestX2.lib)
endif()

add_executable(${EXE}
        main.cpp
        ${SRC}/Network.cpp
        )

target_link_libraries(${EXE} ${X2_LIB_DIR})
