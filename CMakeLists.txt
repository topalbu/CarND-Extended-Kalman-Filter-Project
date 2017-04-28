project(ExtendedKF)

cmake_minimum_required (VERSION 3.5)

add_definitions(-std=c++0x)


enable_testing()

add_subdirectory(test)

set(ekf_SRCS
    src/FusionEKF.cpp
    src/kalman_filter.cpp
    src/main.cpp
    src/tools.cpp)

# Declare the library
add_library(ekf STATIC
        ${ekf_SRCS}
        )

# Specify here the include directories exported
# by this library
target_include_directories(ekf PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        )



add_executable(ExtendedKF ${ekf_SRCS})
