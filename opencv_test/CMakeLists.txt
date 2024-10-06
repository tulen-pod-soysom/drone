cmake_minimum_required(VERSION 3.5.0)
project(opencv_test VERSION 0.1.0 LANGUAGES C CXX)

find_package(OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )
link_libraries( ${OpenCV_LIBS} )

add_executable(opencv_test main.cpp)


